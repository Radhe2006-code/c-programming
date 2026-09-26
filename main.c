#include<stdio.h>
int main()
{
    char operators;
    double num1,num2,result;
    printf("Enter the operator (+,-,*,/):");
    scanf("%c",&operators);

    printf("Enter first number:");
    scanf("%lf",&num1);
    
    printf("Enter second number:");
    scanf("%lf",&num2);

    switch(operators)
    {
       case'+':
            result=num1+num2;
            printf("%.1f\n",result);
            break;
       
       case'-':
            result=num1-num2;
            printf("%.1f\n",result);
            break;
        case'*':
            result=num1*num2;
            printf("%.1f\n",result);
            break;
        case'/':
            result=num1/num2;
            printf("%.1f\n",result);
            break;

        default:
           printf("Error! operator is not correct");
          }
     return 0;
    
}
