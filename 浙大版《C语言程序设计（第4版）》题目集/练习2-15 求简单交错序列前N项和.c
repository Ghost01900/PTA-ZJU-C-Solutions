/*
  @pintia psid=1298273728383766528 pid=1298273797619142701 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求简单交错序列前N项和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142701
*/
// @pintia code=start
#include <stdio.h>

int main() {
    int n;
    int a = 1;
    int b = 1;
    double sum = 0.0;
    scanf("%d", &n);
    //n = 10;
    for (int i = 1; i <=n; i++) {
        sum += b*1.0 / a;
        a += 3 ;
        b *= -1;
    }

    printf("sum = %.3f\n", sum);

    return 0;
}
// @pintia code=end