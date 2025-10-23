/*
  @pintia psid=1298273728383766528 pid=1298273797619142710 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 计算符号函数的值
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142710
*/
// @pintia code=start
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if (n<0)
    {
        printf("sign(%d) = -1",n);
    }
    else if(n>0)
    {
        printf("sign(%d) = 1",n);
    }
    else 
    {
        printf("sign(0) = 0");
    }
}
// @pintia code=end