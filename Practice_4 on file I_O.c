
#include <stdio.h>

int main(){
    char name1[10],name2[10];
    int salary1,salary2;
    //FILE *ptr;
    //ptr = fopen("data.txt","w");
    
    printf("enter the name1 of employee:");
    scanf("%s",&name1);
    printf("enter the salary1 of employee:");
    scanf("%d",&salary1);
    
    printf("enter the name2 of employee:");
    scanf("%s",&name2);
    printf("enter the salary2 of employee:");
    scanf("%d",&salary2);
    
    
    FILE *ptr;
    ptr = fopen("data.txt","w");
    
    fprintf(ptr,"%s,%d\n",name1,salary1);
    fprintf(ptr,"%s,%d",name2,salary2);
    
    fclose(ptr);
    return 0;
}
