
#include <stdio.h>
 //ek he if Condition me do Conditions check kar skte hai by logical operators
int main()
{
    int age;
    
    printf("Enter your age\n");
    scanf("%d",&age);
    
    if(age<=70 && age>=18)
    {
        printf("you are above 18 & Under 70,you can drive\n");
    }
    else {
        printf("you can not drive\n");
    }

    return 0;
}





