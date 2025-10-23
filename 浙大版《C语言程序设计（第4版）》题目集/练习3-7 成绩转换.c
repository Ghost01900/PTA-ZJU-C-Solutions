/*
  @pintia psid=1298273728383766528 pid=1298273797619142714 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 成绩转换
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142714
*/
// @pintia code=start
#include <stdio.h>
int main(void)
{
    int score;
    scanf("%d",&score);
    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("E");
}

// @pintia code=end