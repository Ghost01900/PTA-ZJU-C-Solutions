/*
  @pintia psid=1298273728383766528 pid=1298273797619142702 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 生成3的乘方表
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142702
*/
// @pintia code=start
#include <stdio.h>
#include<math.h>

int main() {
    int n;
    int ppow;
    scanf("%d",&n);
    //n =3;
    for (int i =0;i<=n;i++){
        ppow = pow(3,i);
        printf("pow(3,%d) = %d\n",i,ppow);
    }

    return 0;
}
// @pintia code=end