#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

enum Direction
{
    UP = 119, DOWN = 115, LEFT = 97, RIGHT = 100
};
void initDirection(enum Direction* dir)
{
    switch (rand() % 4)
    {
        case 0:
            *dir = UP;
            break;
        case 1:
            *dir = DOWN;
            break;
        case 2:
            *dir = LEFT;
            break;
        case 3:
            *dir = RIGHT;
            break;
    }
}

enum FoodType
{
  LEVELONE, LEVELTWO
};
typedef struct _pos
{
    int x_;
    int y_;
} Pos;
typedef struct _food
{
    Pos pos_;
    enum FoodType ft_;
} Food;
void initFood(Food* pfd)
{
    pfd->pos_.x_ = rand() % 14 + 1; // 1 - 14
    pfd->pos_.y_ = rand() % 14 + 1;
    pfd->ft_ = LEVELONE;
}
enum SnakeBodyType
{
    HEAD, BODY, TAIL
};
typedef struct _snake
{
    Pos pos_;
    enum SnakeBodyType sbt_;
    struct _snake* next;
} Snake;
void initSnake(Snake** head, Food* pfd)
{
    (*head) = (Snake*)malloc(1 * sizeof(Snake));
    if ((*head) == NULL)
    {
        printf("(*head) malloc error!\n");
        exit(-1);
    }
    do
    {
        (*head)->pos_.x_ = rand() % 10 + 3; // 3 - 12
        (*head)->pos_.y_ = rand() % 10 + 3;
        (*head)->sbt_ = HEAD;
    } while (((*head)->pos_.x_ == pfd->pos_.x_) && ((*head)->pos_.y_ == pfd->pos_.y_));
    (*head)->next = NULL;
}
int isSnakePart(Snake* sh, int i, int j, enum SnakeBodyType* ptype)
{
    while (sh)
    {
        if (sh->pos_.x_ == i && sh->pos_.y_ == j)
        {
            *ptype = sh->sbt_;
            return 1;
        }
        sh = sh->next;
    }
    return 0;
}
int isMeetWall(Snake* sh)
{
    if (sh->pos_.x_ == 0 || sh->pos_.x_ == 15 || sh->pos_.y_ == 0 || sh->pos_.y_ == 15)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isBitSelf(Snake* sh)
{
    Pos ps = sh->pos_;
    sh = sh->next;
    while (sh)
    {
        if (sh->pos_.x_ == ps.x_ && sh->pos_.y_ == ps.y_)
            return 1;
        sh = sh->next;
    }
    return 0;
}

int isFood(Snake* sh, Food* fd)
{
    if (sh->pos_.x_ == fd->pos_.x_ && sh->pos_.y_ == fd->pos_.y_)
    {
        return 1;
    }
    else
        return 0;
}
int isFoodOnSnakeBody(Snake* sh, Food* fd)
{
    while (sh)
    {
        if (sh->pos_.x_ == fd->pos_.x_ && sh->pos_.y_ == fd->pos_.y_)
        {
            return 1;
        }
        sh = sh->next;
    }
    return 0;
}

void generateFood(Snake* sh, Food* fd)
{
    do
    {
        fd->pos_.x_ = rand() % 14 + 1;
        fd->pos_.y_ = rand() % 14 + 1;
        fd->ft_ = LEVELONE;
    } while (isFoodOnSnakeBody(sh, fd));
}

void eatFood(Snake* sh, Food* fd)
{
    while (sh->next != NULL)
    {
        sh = sh->next;
    }
    Snake* node = (Snake*)malloc(1 * sizeof(Snake));
    sh->next = node;
    node->next = NULL;
    if (sh->sbt_ == HEAD)
    {
        node->sbt_ = TAIL;
    }
    else
    {
        sh->sbt_ = BODY;
        node->sbt_ = TAIL;
    }
    generateFood(sh, fd);
}

//业务分析:蛇移动(移动/吃食物/撞到墙/吃到自己)
int snakeMove(Snake* sh, Food* fd, enum Direction* dir)
{
    //移动
    Pos prePos = sh->pos_;
    switch (*dir)
    {
        case UP:
            sh->pos_.x_--;
        break;
        case DOWN:
            sh->pos_.x_++;
            break;
        case LEFT:
            sh->pos_.y_--;
            break;
        case RIGHT:
            sh->pos_.y_++;
            break;
    }

    //撞墙
    if (isMeetWall(sh))
    {
        return -1;
    }
    if (isBitSelf(sh))
    {
        return -1;
    }
    if (isFood(sh, fd))
    {
        eatFood(sh, fd);
    }
    //吃到自己
    //吃到食物
    Pos curPos;
    while (sh->next)
    {
        curPos = sh->next->pos_;
        sh->next->pos_ = prePos;
        prePos = curPos;
        sh = sh->next;
    }
    return 0;
}
void getDirection(enum Direction* dir)
{
    enum Direction newDir;
    while (kbhit())
    {
        newDir = getch();
        if (newDir == UP || newDir == DOWN || newDir == LEFT || newDir == RIGHT)
        {
            *dir == newDir;
        }
    }
}
#if 0
################  # # # # # # # # # # # # # # # #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
#              #  #                             #
################  # # # # # # # # # # # # # # # #
#endif
void fflushScreen(Snake * sh, Food* pfd)
{//扫描

    enum SnakeBodyType type;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (i == 0 || j == 0 || i == 15 || j == 15)
            {
                printf(" #");
            }
            else if(isSnakePart(sh, i, j, &type))
            {
                switch (type)
                {
                    case HEAD:
                        printf(" @");
                        break;
                    case BODY:
                        printf(" *");
                        break;
                    case TAIL:
                        printf(" ^");
                        break;
                }
            }
            else if (pfd->pos_.x_ == i && pfd->pos_.y_ == j)
            {
                printf(" &");
            }
            else
            {
                printf("  ");
            }
        }
        putchar(10);
    }

}
void gameOver()
{

}

int main()
{
    srand(time(NULL));
    Food fd;
    initFood(&fd);
    Snake* snake;
    initSnake(&snake, &fd);
    enum Direction dir;
    initDirection(&dir);
    while (1)
    {
        system("cls");
        getDirection(&dir);                           //非阻塞地获取方向           Control
        if (snakeMove(snake, &fd, &dir ) == -1)       //本质是:链表的数据在发生变化 Model
            break;
        fflushScreen(snake, &fd);                     //刷新屏幕 呈现链表的变化状态 View
        usleep(1000 * 500);
    }
    gameOver();
    return 0;
}
