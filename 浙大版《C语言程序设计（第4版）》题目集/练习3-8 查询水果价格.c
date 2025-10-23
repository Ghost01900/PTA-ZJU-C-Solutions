/*
  @pintia psid=1298273728383766528 pid=1298273797619142715 compiler=GCC
  ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
  Title: 查询水果价格
  https://pintia.cn/problem-sets/1298273728383766528/exam/problems/type/7?problemSetProblemId=1298273797619142715
*/
// @pintia code=start
/* #include <stdio.h>
int main(void)
{
    printf("[1] apple\n");
    printf("[2] pear\n");
    printf("[3] orange\n");
    printf("[4] grape\n");
    printf("[0] exit\n");
    int choice,cnt = 0;
    while (scanf("%d",&choice) != 0 && cnt <= 5)
    {
        if (choice < 0 || choice > 4)
        {
            printf("price = 0.00\n");
            break;
        }
        if (choice == 0)
        {
            break;
        }
      

        // if (cnt >= 5)
        // {
        //     return 0;
        // }
        switch (choice)
        {
        case 1:
            printf("price = 3.00\n");
            cnt++;
            break;
        case 2:
            printf("price = 2.50\n");
            cnt++;
            break;
        case 3:
            printf("price = 4.10\n");
            cnt++;
            break;
        case 4:
            printf("price = 10.20\n");
            cnt++;
            break;
        }
    }
}
    */
   #include<stdio.h>
int main(void){
    int i,a;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n"); 
    for(i=1;i<=5;i++){ 
        scanf("%d",&a);
            if(a==0)break;
            switch(a){
                case 1:printf("price = 3.00\n");break;
                case 2:printf("price = 2.50\n");break;
                case 3:printf("price = 4.10\n");break;
                case 4:printf("price = 10.20\n");break;
                default:printf("price = 0.00\n");
            }
    }
    return 0;
}

// @pintia code=end