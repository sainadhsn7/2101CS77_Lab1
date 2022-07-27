#include <stdio.h>

int main(void)
{ 
    char ch;
    printf("enter your operator + or -");
    scanf("%c",&ch);

    int x,y;
    printf("Enter your two numbers X and Y\n");
    
    printf("X:");
    scanf("%d",&x);

    printf("Y:");
    scanf("%d",&y);

   
    switch(ch)
    {
        case '+':printf("X + Y = %d",x+y);
        break;
        case '-':printf("X + Y = %d",x+y);
        break;
        default: printf("enter valid input");
    }
    return 0;
}
