/*
  @pintia psid=1298273728383766528 pid=1298273797619142722 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 猜数字游戏
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142722
*/
// @pintia code=start
#include <stdio.h>

int main(void)
{
    int answer,num;
    scanf("%d %d",&answer,&num);

    int guess, isTrue = 0, count = 0;
    while ( isTrue == 0 )
    {
        scanf("%d",&guess);
        if (guess < 0) {
            printf("Game Over\n");
            return 0;
        }
        count++;
        if ( guess < answer )
            printf("Too small\n");
        else if ( guess > answer )
            printf("Too big\n");
        else
        {
            isTrue = 1;
        }

        if ( count >= num && isTrue == 0 )
            {
                printf("Game Over\n");
                return 0;
            }
    }
    
    if (count == 1)
    {
        printf("Bingo!\n");
    }
    else if (count <= 3)
    {
        printf("Lucky You!\n");
    }
    else
    {
        printf("Good Guess!\n");
    }
}
// @pintia code=end