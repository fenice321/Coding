#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�������:����һ��10x10�����,Ҫ���ʼ��Ϊ0,�������10������,���Ӵ���Ϊ1,����ӡ,�����3����������һ���ӡ����,�����ӡ����
int main()
{
    srand(time(NULL));
    int chess[10][10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", chess[i][j]);
        }
        putchar(10);
    }
    int x;
    int y;
    int count = 0;
    while (count < 10)
    {
        x = rand() % 10;
        y = rand() % 10;
        if (chess[x][y] == 0)
        {
            chess[x][y] = 1;
            count++;
        }
    }
#if 0
    int count = 0;
    int x;
    int y;
    while (1)
    {
        x = rand() % 10;
        y = rand() % 10;
        if (chess[x][y] == 0)
        {
            chess[x][y] = 1;
            count++;
            if (count == 10)
            {
                break;
            }
        }
    }

    int count = 0;
    int x;
    int y;
    while (count < 10)
    {
        x = rand() % 10;
        y = rand() % 10;
        if (chess[x][y] == 1)
        {
            continue;
        }
        chess[x][y] = 1;
        count++;
    }
#endif
    printf("================================================\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", chess[i][j]);
        }
        putchar(10);
    }
    int goodChessFlag = 0;
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < 10; j++)//��ɨ��
        {
            if (chess[i][j] == 1)
            {
                count++;
                if (count == 3)
                {
                    goodChessFlag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (goodChessFlag == 1)
        {
            break;
        }

        count = 0;
        for (int j = 0; j < 10; j++)
        {
            if (chess[j][i] == 1)
            {
                count++;
                if (count == 3)
                {
                    goodChessFlag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (goodChessFlag == 1)
        {
            break;
        }
    }

    if (goodChessFlag == 1)
    {
        printf("GoodChess!!!\n");
    }
    else
    {
        printf("BadChess!!!\n");
    }
    return 0;
}

int main1()
{
    srand(time(NULL));
    int chess[10][10]= { 0 };
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", chess[i][j]);
        }
        putchar(10);
    }
    int count = 0;
    int x;
    int y;
    while (count < 10)
    {
        x = rand() % 10;
        y = rand() % 10;
        if (chess[x][y] == 0)
        {
            chess[x][y] = 1;
            count++;
        }
    }
    printf("===================================================\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d", chess[i][j]);
        }
        putchar(10);
    }
    int GoodChessFlag = 0;
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < 10; j++)//��ɨ��
        {
            if (chess[i][j] == 1)
            {
                count++;
                if (count == 3)
                {
                    GoodChessFlag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (GoodChessFlag == 1)
        {
            break;
        }

        count = 0;
        for (int j = 0; j < 10; j++)//��ɨ��
        {
            if (chess[j][i] == 1)
            {
                count++;
                if (count == 3)
                {
                    GoodChessFlag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (GoodChessFlag == 1)
        {
            break;
        }
    }

    if (GoodChessFlag == 1)
    {
        printf("GoodChess!!!\n");
    }
    else
    {
        printf("BadChess!\n");
    }
    return 0;
}
