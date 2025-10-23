/*
  @pintia psid=1298273728383766528 pid=1298273797619142716 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 比较大小
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142716
*/
// @pintia code=start
#include <stdio.h>
int cmp(int a,int b);
int main(void)
{
    int a,b,c,tmp;
    scanf("%d %d %d",&a,&b,&c);

    if (b > a)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    if (c > a)
    {
        tmp = a;
        a = c;
        c = tmp;        
    }

    if (c > b)
    {
        tmp = b;
        b = c;
        c =tmp;
    }

    printf("%d->%d->%d",c,b,a);
}

// @pintia code=end