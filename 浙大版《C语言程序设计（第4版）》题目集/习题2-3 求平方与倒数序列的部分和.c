/*
  @pintia psid=1298273728383766528 pid=1298273797619142706 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求平方与倒数序列的部分和
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142706
*/
// @pintia code=start
#include <stdio.h>

int main(void)
{
    int m, n;
    double sum = 0;
    
    // 输入并验证
    do {
        scanf("%d %d", &m, &n);
    } while (m <= 0 || n <= 0 || m > n);
    
    // 计算序列和
    for (int i = m; i <= n; i++) {
        sum += i * i + 1.0 / i;
    }
    
    printf("sum = %.6f", sum);
    return 0;
}
// @pintia code=end