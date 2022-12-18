// Show Function for Structures
#include <stdio.h>
#include <string.h>

struct employee{
  int code;
  float salary;
  char name[10];
};

void show(struct employee e){
    printf("the code is of employee: %d\n",e.code);
    printf("the salary is of employee: %f\n",e.salary);
    printf("the name of employee is: %s\n",e.name);
    e.code=34;
}


int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    
 // (*ptr).code=101; //or you can also write ptr->code=101;
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name,"harry");
    
    show(e1);
    printf("the code of employee is: %d\n",e1.code);
    return 0;
}



