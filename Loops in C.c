#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    while(a<10){ 
        //a=11;
        //while(a>10) these two lines leads to an Infinite loop
        printf("%d\n",a);
        a++;
    }

    return 0;
}




