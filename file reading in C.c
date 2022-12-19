// file reading
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt","r");
    
    int num;
    int num2;
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    
    printf("the value of num is %d\n",num);
    printf("the value of num2 is %d\n",num2);
    return 0;
}


