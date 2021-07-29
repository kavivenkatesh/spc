#include<stdio.h>
int main()
{
    char player1[10],player2[10];
    int in1,in2;
    printf("stone paper scissors Game\nEnter player1 name :\n");
    scanf("%s",&player1);
    printf("Enter player2 name :\n");
    scanf("%s",&player2);

    printf("%s and %s please follow the rules for the game\npress 1 for stone\npress 2 for paper\npress 3 for scissors\n\n",player1,player2);
    printf("Now let us start the game\n");

    printf("%s is it stone 1,paper 2 or scissor 3\n",player1);
    scanf("%d",&in1);
    printf("%s is it stone 1,paper 2 or scissor 3\n",player2);
    scanf("%d",&in2);

    if((in1==1 && in2==1)|| (in1==2 && in2==2) || (in1==3 && in2==3))
        printf("Neither %s nor %s won,It is Draw",player1,player2);

    else if((in1==1 && in2==3) || (in1==2 && in2==1) || (in1==3 && in2==2))
        printf("Congrats %s,you won!!!",player1);

    else if((in1==1 && in2==2) || (in1==2 && in2==3) || (in1==3 && in2==1))
        printf("Congrats %s,you won!!!",player2);


}
