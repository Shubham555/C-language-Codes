
#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter your 4 values\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if(a>b && b>c&& c>d){
        printf("Max is %d",a);
    }
    else if (b>c && c>d){
        printf("Max is %d",b);
    } 
    else if (c>d)  {
        printf("Max is %d",c);
    }
    else {
        printf("Max is %d",d);
    }
    return 0;
}

// 1,2 doubts.
