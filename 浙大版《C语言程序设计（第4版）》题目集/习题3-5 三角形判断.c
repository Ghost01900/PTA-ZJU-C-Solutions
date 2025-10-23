/*
  @pintia psid=1298273728383766528 pid=1298273797619142720 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 三角形判断
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142720
*/
// @pintia code=start
#include<stdio.h>
#include<math.h>
int main(){
    double x1,y1,x2,y2,x3,y3,p,s;
    double j,k,l;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    j=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    k=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    l=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    if(j+k>l&&k+l>j&&j+l>k){
        p=(j+k+l)/2;
        s=sqrt(p*(p-j)*(p-k)*(p-l));//海伦公式
        printf("L = %.2lf, A = %.2lf",p*2,s);
    }
    else printf("Impossible");
    return 0;
}

// @pintia code=end