/*
  @pintia psid=1298273728383766528 pid=1298273797619142708 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求平方根序列前N项和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142708
*/
// @pintia code=start
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    double sum = 0;
    scanf("%d",&n);

    for (int i =1 ; i<=n ; i++ )
    {
        sum += (double)sqrt(i);
    }

    printf("sum = %.2f",sum);
}
// @pintia code=end