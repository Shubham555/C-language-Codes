// Recursion
#include <stdio.h>
int factorial(int x);

int main(){
    int a=5;
    printf("Then After calling one by one in itselfs,the value of Factorial %d is %d ",a,factorial(a));
    return 0;
}

int factorial(int x){
    printf("calling factorial(%d)\n",x);
    if (x==1 || x==0){
        return 1;
    }
    else{ 
        /*
        here we can Also return in different  
        form as ,
        int result;
        result = x*factorial(x-1);
        return result; 
        
        or aslo in form 
        int result = x*factorial(x-1);
        return result;  
        
        and one more way/form which is used below.
        */
        
        return x*factorial(x-1);
    }
}   



