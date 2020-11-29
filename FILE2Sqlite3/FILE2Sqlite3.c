#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum
{
    Success, MallocErr, NameErr, SexErr, StrNumErr, ScoreErr
};//一堆容错码
typedef struct _Stu
{
    char* name;
    char* sex;
    char* strNum;
    float* score;
} Stu;
int stuInit(Stu** pps)
{
    *pps = (Stu*)malloc(1 * sizeof(Stu));
    if (*pps == NULL)
    {
        printf("*pps malloc error!\n");
        return MallocErr;
    }
    (*pps)->name = (char*)malloc(100 * sizeof(char));
    if ((*pps)->name == NULL)
    {
        printf("(*pps)->name malloc error!\n");
        return NameErr;
    }
    strcpy((*pps)->name, "zhouhong");
    (*pps)->sex = (char*)malloc(1 * sizeof(char));
    if ((*pps)->sex == NULL)
    {
        printf("(*pps)->sex malloc error!\n");
        return SexErr;
    }
    *((*pps)->sex) = 'f';
    (*pps)->strNum = (char*)malloc(10 * sizeof(char));
    if ((*pps)->strNum == NULL)
    {
        printf("(*pps)->strNum malloc error!\n");
        return StrNumErr;
    }
    strcpy((*pps)->strNum, "20182995");
    (*pps)->score = (float*)malloc(1 * sizeof(float));
    if ((*pps)->score == NULL)
    {
        printf("(*pps)->score malloc error!\n");
        return ScoreErr;
    }
    *((*pps)->score) = 99;
    return Success;
}
int main()
{
//    printf("sizeof(Stu) = %d\n", sizeof(Stu));
//    printf("sizeof(FILE) = %d\n", sizeof(FILE));

    Stu* ps = NULL;//sqlite3* db;int rc = sqlite3_open("mydb", &db);
    int rc = stuInit(&ps);
    if (rc != Success)
    {
        printf("Err num:%d\n", rc);
        exit(-1);
    }
    printf("初始化成功!\n");
    printf("name  :%s  \n", ps->name);
    printf("sex   :%c  \n", *(ps->sex));
    printf("strNum:%s  \n", ps->strNum);
    printf("score :%.2f\n", *(ps->score));
    return 0;
}

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum
{
    Success, MallocErr, NameErr, SexErr, NumErr, ScoreErr
};
typedef struct _Stu
{
    char* name;
    char* sex;
    char* strNum;
    float* score;
} Stu;
int initStu(Stu** pps)
{
    *pps = (Stu*)malloc(1 * sizeof(Stu));
    if (*pps == NULL)
    {
        printf("*pps malloc error!\n");
        return MallocErr;
    }
    (*pps)->name = (char*)malloc(100 * sizeof(char));
    if ((*pps)->name == NULL)
    {
        printf("(*pps)->name malloc error!\n");
        return NameErr;
    }
    printf("please input your name:\n");
    scanf("%s", (*pps)->name);

    (*pps)->sex = (char*)malloc(1 * sizeof(char));
    if ((*pps)->sex == NULL)
    {
        printf("(*pps)->sex malloc error!\n");
        return SexErr;
    }
    printf("please input your sex:\n");
    scanf(" %c", (*pps)->sex);

    (*pps)->strNum = (char*)malloc(10 * sizeof(char));
    if ((*pps)->strNum == NULL)
    {
        printf("(*pps)->strNum malloc error!\n");
        return NumErr;
    }
    printf("please input your strNum:\n");
    scanf("%s", (*pps)->strNum);

    (*pps)->score = (float*)malloc(1 * sizeof(float));
    if ((*pps)->score == NULL)
    {
        printf("(*pps)->score malloc error!\n");
        return ScoreErr;
    }
    printf("please input your score:\n");
    scanf("%f", (*pps)->score);

    return Success;
}
int main()
{
    printf("Start:\n");
    Stu* ps = NULL;
    int rc = initStu(&ps);

    if (rc != Success)
    {
        printf("Err num: %d\n", rc);
        exit(-1);
    }
    printf("初始化成功!\n");
    printf("name   : %s  \n", ps->name);
    printf("sex    : %c  \n", *(ps->sex));
    printf("strNum : %s  \n", ps->strNum);
    printf("score  : %.2f\n", *(ps->score));

    free(ps->name);
    ps->name = NULL;
    free(ps->sex);
    ps->sex = NULL;
    free(ps->strNum);
    ps->strNum = NULL;
    free(ps->score);
    ps->score = NULL;
    free(ps);
    ps = NULL;
    printf("End!\n");
    return 0;
}
#endif
