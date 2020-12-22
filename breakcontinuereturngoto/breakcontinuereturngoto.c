#include <stdio.h>
#include <windows.h>
//break switch for break只能跳出当前循环即一重循环
//return跳出当前函数 / main函数中的return 0有点特别:结束程序
//continue提前结束当前循环(即一重循环)进入下一次循环
//goto用于1.处理跳出多层循环(效率很高) 2.用于集中式的错误处理
//goto是短跳转(只能在本函数内跳转,不能跨函数使用)
//void func()
//{
//Target:
//    printf("xxxxxxxxoooooooooooo\n");
//}
//int main1()
//{

//    printf("xxxxxxxxxxooooooooooo\n");
//    Sleep(1000);
//    goto Target;
//    return 0;
//}

int main()
{
#if 0
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (k == 2)
                {
                    goto End;
                }
                printf("k = %d for (int k = 0; k < 5; k++)\n", k);
            }
            printf("for (int j = 0; j < 1; j++)\n");
        }
        printf("for (int i = 0; i < 1; i++)\n");
    }
End:
    printf("abcdefg\n");
#endif

    int flag1 = 0;
    int flag2 = 0;
    for (int i = 0; i < 100; i++)
    {
        if (flag2 == 1)
        {
            break;
        }
        for (int j = 0; j < 200; j++)
        {
            if (flag1 == 1)
            {
                flag2 = 1;
                break;
            }
            for (int k = 0; k < 5; k++)
            {
                if (k == 2)
                {
                    flag1 = 1;
                    break;
                }
                printf("k = %d for (int k = 0; k < 5; k++)\n", k);
            }
            printf("for (int j = 0; j < 200; j++)\n");
        }
        printf("for (int i = 0; i < 100; i++)\n");
    }
    printf("abcdefg\n");
    return 0;
}
