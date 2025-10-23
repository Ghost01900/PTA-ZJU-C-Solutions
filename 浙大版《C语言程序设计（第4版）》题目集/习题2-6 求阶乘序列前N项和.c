/*
  @pintia psid=1298273728383766528 pid=1298273797619142709 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求阶乘序列前N项和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142709
*/
// @pintia code=start
#include <stdio.h>
int fact(int n);

int main(void)
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1 ;i<=n ; i++)
    {
        sum += fact(i);
    }
    printf("%d",sum);
}

int fact(int n)
{
    int result = 1;
    for (int i=1 ;i<=n ;i++)
    {
        result *= i;
    }
    return result;
}
// @pintia code=end