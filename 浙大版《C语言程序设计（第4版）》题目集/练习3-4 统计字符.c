/*
  @pintia psid=1298273728383766528 pid=1298273797619142712 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 统计字符
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142712
*/
// @pintia code=start
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int letter = 0, blank = 0, digit = 0, other = 0;
    char input;
    for (int i = 0 ; i < 10 ; i++)
    {
        scanf("%c",&input);
        
        if (isalpha(input))
        {
            letter ++;
        }
        else if (isdigit(input))
        {
            digit ++;
        }
        else if (isspace(input) || input == "\n")
        {
            blank ++;
        }
        else
        {
            other ++;
        }
    }
        printf("letter = %d, blank = %d, digit = %d, other = %d",letter, blank, digit, other);
}
// @pintia code=end