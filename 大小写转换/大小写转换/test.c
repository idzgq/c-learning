#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char ch;
    char cz;
    int a, b;
    scanf("%c", &ch);
    getchar();//读取回车
    scanf("%c", &cz);
    a = (int)ch + 32;//转化成ASCLL码
    b = (int)cz + 32;
    printf("%c\n", a);
    printf("%c\n", b);
    return 0;
}





int main()
{
    char ch;//用作一直输入字符
    while ((ch = getchar()) != EOF)//读取空格
    {
        //putchar(ch+32);//输出一个字符类似于下方的printf，putchar( )输出的为int
       // getchar();读取下面一个字符
        printf("%c\n", ch + 32);
        getchar();
    }
    return 0;
}