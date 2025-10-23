/*
  @pintia psid=1298273728383766528 pid=1298273797619142707 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求交错序列前N项和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142707
*/
// @pintia code=start
#include <stdio.h>

int main(void)
{
    int n;
    double sum = 0;
    scanf("%d",&n);


    sum = 0.0;
    for (int i = 1 ;i<=n ; i++)
    {
        double term = (double)i / (2 * i - 1);
        if (i % 2 == 1)
        {
            sum += term;
        }
        else
        {
            sum -= term;
        }
    }
    printf("%.3f",sum);
    }
// @pintia code=end