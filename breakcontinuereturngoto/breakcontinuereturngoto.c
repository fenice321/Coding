#include <stdio.h>
#include <windows.h>
//break switch for breakֻ��������ǰѭ����һ��ѭ��
//return������ǰ���� / main�����е�return 0�е��ر�:��������
//continue��ǰ������ǰѭ��(��һ��ѭ��)������һ��ѭ��
//goto����1.�����������ѭ��(Ч�ʺܸ�) 2.���ڼ���ʽ�Ĵ�����
//goto�Ƕ���ת(ֻ���ڱ���������ת,���ܿ纯��ʹ��)
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
