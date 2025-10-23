/*
  @pintia psid=1298273728383766528 pid=1298273797619142693 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 计算物体自由下落的距离
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142693
*/
// @pintia code=start
#include <stdio.h>
int main(){

    int g = 10;
    int t = 3;
    double height;

    height= (g *t*t)/2.0;
    printf("height = %.2f",height);

    return 0;
}
// @pintia code=end