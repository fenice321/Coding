#include <stdio.h>
#include <stdlib.h>
//Node* head = createList();

//FILE�ṹ���FILE*ָ��

//ͨ��fopen��һ���ļ�,����һ��FILE*ָ��
//�Ժ�,�������ж��ļ��Ĳ���������FILE*ָ��fp
//���

#if 0
r ��ֻ���ķ�ʽ��,����ļ��������򱨴�,�ļ�����д
w ����ļ��������򴴽�,����ļ�����,���,�ļ����ɶ�
a ����ļ��������򴴽�,����ļ�����׷��д,�ļ����ɶ�

r+
w+
a+
#endif
int main()
{
    FILE* fp = fopen("data.txt", "w");
    if (NULL == fp)
    {
        printf("fp open error!\n");
        exit(-1);
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        fputc(ch, fp);
    }
    fclose(fp);//fclose��������ˢ����Ĺ���
    return 0;
}
