/*
  @pintia psid=1298273728383766528 pid=1298273797619142721 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求给定精度的简单交错序列部分和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142721
*/
// @pintia code=start
#include <stdio.h>
#include <math.h>

int main(void)
{
    int sign = 1;
    int down=1;
    double sum = 0;

    double eps;
    scanf("%lf",&eps);
    
    
    if (eps > 1)
    {
        printf("sum = 1.000000");
        return 0;
    }
    while ( (1.0/down) >= eps)
    {
        sum += (sign*1.0) * (1.0/down);
        sign *= -1;
        down += 3;
    }

    printf("sum = %.6f",sum);
}
// @pintia code=end