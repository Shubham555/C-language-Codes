// another way to initialize structure
#include <stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee harry ={100,100.45,"harry"};    //--> ={0}; then all elements are set to 0.
    
    printf("code is :%d\n",harry.code);
    printf("salary is :%.2f\n",harry.salary);
    printf("name is :%s\n",harry.name);

    return 0;
}



