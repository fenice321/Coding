#if 0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    int max;
    int subMax;
    ((arr[0] > arr[1]) ? (max = arr[0], subMax = arr[1]) : (max = arr[1], subMax = arr[0]));

    for (int i = 2; i < 10; i++)
    {
        if (arr[i] > max)
        {
            subMax = max;
            max = arr[i];
        }
        else if (arr[i] > subMax && arr[i] != max)
        {
            subMax = arr[i];
        }
    }
    printf("max = %2d, subMax = %d\n", max, subMax);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����:�������еĴ���ֵ����(˳����԰���ֵ���)
int main()
{
//    srand(time(NULL));
    int arr[10] = { 94, 94, 77,94, 65, 54, 94, 58, 71, 94};
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = rand() % 100;
//    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    putchar(10);
    int max;
    int subMax;
    ((arr[0] > arr[1]) ? (max = arr[0], subMax = arr[1]) : (max = arr[1], subMax = arr[0]));
    for (int i = 2; i < 10; i++)
    {
        if (arr[i] > max)
        {
            subMax = max;
            max = arr[i];
        }
        else if ((arr[i] > subMax) && (arr[i] != max))
        {
            subMax = arr[i];
        }
    }
    printf("max = %2d, subMax = %2d\n", max, subMax);
    return 0;
}
#endif
#include <stdio.h>
//����:�������еĴ���ֵ����(˳����԰���ֵ���)
//�����Ĵ�:����
int main()
{
    int arr[10] = { 94, 94, 77,94, 65, 54, 94, 58, 71, 94};
    int max = arr[0];
    int subMax = 1 << 31;
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            subMax = max;
            max = arr[i];
        }
        else if ((arr[i] > subMax) && (arr[i] != max))
        {
            subMax = arr[i];
        }
    }
    if (subMax == (1 << 31))//��������3������(���ַ���ֻ�ܽ��ǰ��������)
    {                       //1.ȫ1
        subMax = max;       //2.ȫ1<<31
    }                       //3.��һ��1,ʣ�µ�ȫΪ1<<31
    printf("max = %2d, subMax = %2d\n", max, subMax);
    return 0;
}
