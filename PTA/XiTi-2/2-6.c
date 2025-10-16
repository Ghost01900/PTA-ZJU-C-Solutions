/*

习题2-6 求阶乘序列前N项和
分数 15
作者 C课程组
单位 浙江大学
本题要求编写程序，计算序列 1!+2!+3!+⋯ 的前N项之和。

输入格式:
输入在一行中给出一个不超过12的正整数N。

输出格式:
在一行中输出整数结果。

输入样例:
5
输出样例:
153

*/

#include <stdio.h>
int fact(int n);

int main(void)
{
    int n,sum=0;
    scanf("%d",&n);
    for (int i=1 ;i<=n ; i++)
    {
        sum += fact(i);
    }
    printf("%d",sum);
}

int fact(int n)
{
    int result = 1;
    for (int i=1 ;i<=n ;i++)
    {
        result *= i;
    }
    return result;
}