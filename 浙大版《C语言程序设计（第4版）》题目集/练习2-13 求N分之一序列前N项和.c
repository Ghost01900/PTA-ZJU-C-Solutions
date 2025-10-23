/*
  @pintia psid=1298273728383766528 pid=1298273797619142699 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求N分之一序列前N项和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142699
*/
// @pintia code=start
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("sum = %.6f\n", sum);

    return 0;
}
// @pintia code=end