/*
  @pintia psid=1298273728383766528 pid=1298273797619142697 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 计算分段函数[2]
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142697
*/
// @pintia code=start
#include <stdio.h>
#include<math.h>
int main(){
    double x;
    double y;
    scanf("%lf",&x);

    if (x >= 0.0){
        y = pow(x,0.5);
    }else{ y = pow(x+1,2) + 2*x + 1/x;
    };
    
    printf("f(%.2f) = %.2f",x,y);
    return 0;
}
// @pintia code=end