/*
  @pintia psid=1298273728383766528 pid=1298273797619142704 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 求整数均值
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142704
*/
// @pintia code=start
#include <stdio.h>
int main() {
    
    int num[4];
    int sum=0;
    double average;

    scanf("%d %d %d %d",&num[0],&num[1],&num[2],&num[3]);

    for (int i=0;i<4;i++){
    sum += num[i];
    }

    average = sum / 4.0;
    printf("Sum = %d; Average = %.1f",sum,average);
    
        return 0;
}
// @pintia code=end