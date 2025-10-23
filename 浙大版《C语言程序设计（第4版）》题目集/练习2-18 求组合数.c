/*
  @pintia psid=1298273728383766528 pid=1298273797619142703 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求组合数
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142703
*/
// @pintia code=start
#include <stdio.h>


int main() {
    int n;
    int m;
//    int nx = 1;//n阶乘
    int mx = 1;//m阶乘
    double result;
    scanf("%d %d",&m,&n);
    int n_m;
    n_m = n - m;
    int n_mx = 1;//n-m阶乘
    

        double nx = 1.0;
//        double mx = 1.0;
//        double n_mx = 1.0;
    
    
        for (int ni = n;ni>0;ni --){
            nx *= ni;
        }
    
        for (int mi = m;mi>0;mi --){
            mx *= mi;
        }
    
        for (int n_mi = n_m;n_mi>1;n_mi --){
            n_mx *= n_mi;
        }   
    
    result =nx /(mx * n_mx);
    printf("result = %.0f\n",result);
    return 0;
}
// @pintia code=end