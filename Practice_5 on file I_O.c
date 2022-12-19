
#include <stdio.h>

int main(){
    int a;
    FILE *ptr1;
    ptr1 = fopen("a.txt","r");
    fscanf(ptr1,"%d",&a);
    
    FILE *ptr2;
    ptr2 = fopen("b.txt","w");
    int c=2;
    int d = a*c;
    fprintf(ptr2,/*"%d*%d=%d",a,c,(a*c)*/ "%d",d);

    return 0;
}
