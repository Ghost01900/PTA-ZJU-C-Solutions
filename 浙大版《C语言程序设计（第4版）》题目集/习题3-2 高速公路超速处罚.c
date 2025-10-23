/*
  @pintia psid=1298273728383766528 pid=1298273797619142717 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 高速公路超速处罚
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142717
*/
// @pintia code=start
#include <stdio.h>
int main() {
    int v, l;
    double p;
    scanf("%d %d",&v,&l);
    p = (v-l)*1.0 / l;

    if (p >= 0.1)
    {
        if (p <0.5)
        {
            printf("Exceed %.0f%%. Ticket 200\n",p*100);
        }
        else
        {
            printf("Exceed %.0f%%. License Revoked\n",p*100);
        }
    }
    else{
        printf("OK\n");
    }
}
// @pintia code=end