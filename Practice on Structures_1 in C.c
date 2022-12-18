// Practice on Structures 
#include <stdio.h>
struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1,v2;
    v1.x=34;
    v1.y=56;
    printf("the dim x is %d and dim y is %d in v1\n",v1.x,v1.y);
    
    v2.x=346;
    v2.y=568;
    printf("the dim x is %d and dim y is %din v2",v2.x,v2.y);
    return 0;
}



