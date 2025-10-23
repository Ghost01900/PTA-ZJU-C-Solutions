/*
  @pintia psid=1298273728383766528 pid=1298273797619142713 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 输出闰年
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142713
*/
// @pintia code=start
#include <stdio.h>

int main(void)
{
    int year,i = 2001,leap = 0;
    scanf("%d",&year);
    
    if (year < 2000 || year >2100)
    {
        printf("Invalid year!");
        return 0;
    }
    else
    {
        while(i <= year)
        {
            if ( (i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            {
                printf("%d\n",i);
                i ++;
                leap ++;
            }
            else
            {
                i ++;
            }
        }
        if (leap == 0)
        {
            printf("None");
        }

    }
}
// @pintia code=end