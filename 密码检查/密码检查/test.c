#define _CRT_SECURE_NO_WARNINGS
//https ://www.nowcoder.com/practice/f2fbd8f61c564ca0b5feaa63ab42dae5?tpId=182&&tqId=34867&rp=1&ru=/ta/exam-all&qru=/ta/exam-all/question-ranking
#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        int i = 0;
        char arr[100] = { 0 };
        scanf("%s", arr);
        int len = strlen(arr);
        int flag[4] = { 0 };
        if (arr[0] >= 48 && arr[0] <= 57)
        {
            printf("NO\n");
        }
        if (len >= 8 && len <= 100)
        {
            for (i = 0; i < len; i++)
            {
                if (arr[i] >= 48 && arr[i] <= 57)
                {
                    flag[0] = 1;
                }
                else if (arr[i] >= 65 && arr[i] <= 90)
                {
                    flag[1] = 1;
                }
                else if (arr[i] >= 97 && arr[i] <= 122)
                {
                    flag[2] = 1;
                }
                else
                {
                    flag[3]++;
                }
            }
            if ((flag[0] + flag[1] + flag[2]) >= 2)
                printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
