/*

练习2-6 计算物体自由下落的距离
分数 5
作者 C课程组
单位 浙江大学
一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒 
2
 。

输入格式:
本题目没有输入。

输出格式:
按照下列格式输出
height = 垂直距离值

*/
#include <stdio.h>
int main(){

    int g = 10;
    int t = 3;
    double height;

    height= (g *t*t)/2.0;
    printf("height = %.2f",height);

    return 0;
}