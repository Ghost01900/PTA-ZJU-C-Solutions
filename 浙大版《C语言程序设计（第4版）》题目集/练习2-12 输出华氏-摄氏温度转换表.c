/*
  @pintia psid=1298273728383766528 pid=1298273797619142698 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 输出华氏-摄氏温度转换表
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142698
*/
// @pintia code=start
#include <stdio.h>
int main(){
    
    int lower;
    int upper;
    int i;
    double c;
    int f;
    scanf("%d %d",&lower,&upper);
    
    if (lower <= upper && upper <= 100){
        printf("fahr celsius\n");
        for (i = lower; i <= upper; i += 2){
            f = i;
            c = 5 * (f - 32) / 9.0;
            printf("%d%6.1f\n", f, c);
        }
    } else {
        printf("Invalid.\n");
    }
    
    return 0;
}
// @pintia code=end