
#include <stdio.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2){  // --> here in function imagine "struct vector" 
                                                                                // like our int's,floats's
    struct vector result;
    result.x= v1.x+v2.x;
    result.y= v1.y+v2.y;
    return result;
}

int main(){
    struct vector v1,v2,sum;
    v1.x=4;
    v1.y=9;
    printf("the dim x is %d and dim y is %d\n",v1.x,v1.y);
    
    v2.x=5;
    v2.y=4;
    printf("the dim x is %d and dim y is %d\n",v2.x,v2.y);
    sum=sumvector(v1,v2);
    printf("x dim of result is %d and y dim of result is %d\n",sum.x,sum.y);
    return 0;
}


