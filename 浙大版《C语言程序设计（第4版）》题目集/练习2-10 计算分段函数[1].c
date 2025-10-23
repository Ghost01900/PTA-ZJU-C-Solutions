/*
  @pintia psid=1298273728383766528 pid=1298273797619142696 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 计算分段函数[1]
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142696
*/
// @pintia code=start
#include <stdio.h>
int main(){
    double x;
    double y;
    scanf("%lf",&x);

    if (x == 0.0){
        y = 0.0;
    }else{ y = 1.0 / x;
    };
    
    printf("f(%.1f) = %.1f",x,y);
    return 0;
}
// @pintia code=end