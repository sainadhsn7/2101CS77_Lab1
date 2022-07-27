#include <stdio.h>

int main(void)
{ 
    char ch;
    printf("enter your operator + / - / * / '/' :");
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
        case '*':printf("X * Y = %d" ,x*y);
        break;
        case '/':printf("X/Y = %f",(float)x/(float)y);
        break;
        
    }
    return 0;
}
