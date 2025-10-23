/*
  @pintia psid=1298273728383766528 pid=1298273797619142711 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 统计学生平均成绩与及格人数
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142711
*/
// @pintia code=start
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int grade[n];
    int sum = 0, count = 0;

    if (n == 0)
    {
        printf("average = 0.0\ncount = 0");
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &grade[i]);
        sum += grade[i];
        if (grade[i] >= 60) {
            count++;
        }
    }
    double average = (double)sum / n;
    printf("average = %.1f\ncount = %d\n", average, count);
    return 0;
}
// @pintia code=end