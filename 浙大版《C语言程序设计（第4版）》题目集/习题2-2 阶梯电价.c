/*
  @pintia psid=1298273728383766528 pid=1298273797619142705 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 阶梯电价
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142705
*/
// @pintia code=start
#include <stdio.h>

int main(void)
{
    int value = 0;
    double cost = 0;
    scanf("%d",&value);

    if (value <0)
    {
        printf("Invalid Value!\n");
        return 0;
    }
    else if (value <= 50 && value > 0)
    {
        cost = (double) value * 0.53;
    }
    else if (value > 50)
    {
        cost = (double) (value - 50) * 0.58 + 50 * 0.53;
    }
    
    printf("cost = %.2f",cost);
}

// @pintia code=end