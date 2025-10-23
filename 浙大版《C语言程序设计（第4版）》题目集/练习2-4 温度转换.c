/*
  @pintia psid=1298273728383766528 pid=1298273797619142692 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 温度转换
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142692
*/
// @pintia code=start
#include <stdio.h>
int main(){
    int fahr = 150;
    int celsius;
    celsius = 5 * (fahr -32)/9;
    printf("fahr = %d, celsius = %d",fahr,celsius);

    return 0;
}
// @pintia code=end