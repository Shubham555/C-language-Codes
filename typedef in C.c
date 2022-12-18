// typedef in C
#include <stdio.h>
#include <string.h>

typedef struct employee{
  int code;
  float salary;
  char name[10];
}emp;

void show(emp e){
    printf("the code is of employee: %d\n",e.code);
    printf("the salary is of employee: %f\n",e.salary);
    printf("the name of employee is: %s\n",e.name);
    //e.code=34;
}


int main(){
    // declearing e1 and ptr
    emp e1;
    emp* ptr; // pointing: ptr to e1
    ptr = &e1;
    
    // set the member values to e1
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name,"harry");
    
    show(e1);
    return 0;
}


