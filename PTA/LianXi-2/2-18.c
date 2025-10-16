/*

练习2-18 求组合数
分数 15
作者 颜晖
单位 浙大城市学院
本题要求编写程序，根据公式算出从n个不同元素中取出m个元素（m≤n）的组合数。

建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。

输入格式:
输入在一行中给出两个正整数m和n（m≤n），以空格分隔。

输出格式:
按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。

输入样例:
2 7
输出样例:
result = 21

*/
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