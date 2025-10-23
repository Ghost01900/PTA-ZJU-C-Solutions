/*
  @pintia psid=1298273728383766528 pid=1298273797619142694 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 计算摄氏温度
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142694
*/
// @pintia code=start
#include <stdio.h>
int main(void){
    int f;
    int c;
    scanf("%d",&f);
    c = 5*(f - 32)/9;
    printf("Celsius = %d",c);
    
    return 0;
}
// @pintia code=end