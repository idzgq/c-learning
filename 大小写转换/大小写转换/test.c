#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char ch;
    char cz;
    int a, b;
    scanf("%c", &ch);
    getchar();//��ȡ�س�
    scanf("%c", &cz);
    a = (int)ch + 32;//ת����ASCLL��
    b = (int)cz + 32;
    printf("%c\n", a);
    printf("%c\n", b);
    return 0;
}





int main()
{
    char ch;//����һֱ�����ַ�
    while ((ch = getchar()) != EOF)//��ȡ�ո�
    {
        //putchar(ch+32);//���һ���ַ��������·���printf��putchar( )�����Ϊint
       // getchar();��ȡ����һ���ַ�
        printf("%c\n", ch + 32);
        getchar();
    }
    return 0;
}