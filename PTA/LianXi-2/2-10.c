/*

练习2-10 计算分段函数[1]
分数 10
作者 颜晖
单位 浙大城市学院
本题目要求计算下列分段函数f(x)的值：
https://images.ptausercontent.com/1

y =f(x)= 1/x,x!=0 
         0,x=0

输入格式:
输入在一行中给出实数x。

输出格式:
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。

输入样例1:
10
输出样例1:
f(10.0) = 0.1
输入样例2:
0
输出样例2:
f(0.0) = 0.0

*/
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