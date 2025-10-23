/*
  @pintia psid=1298273728383766528 pid=1298273797619142695 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 整数四则运算
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142695
*/
// @pintia code=start
#include <stdio.h>
int main(){
    int a;
    int b;
    
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);


    return 0;
}
// @pintia code=end