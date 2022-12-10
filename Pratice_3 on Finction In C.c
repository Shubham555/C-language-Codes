
// Calculating nth element of fibonacii series using recursion functioning:
#include <stdio.h>

/*hint :
these will formula/logic for fibonacci series as like in factorial: 
fib(n)= fib(n-1)+fib(n-2);

and base Condition to stop the Program/loop from running infinite times:
fib(1)=0;
fib(2)=1;
*/

int fib(int n);

int main(){   
        int a=5;
        printf("The value of fibonacci series for element %d is %d ", a ,fib(a));
    return 0;
}

int fib(int n){
    if(fib(1)==1 || fib(2)==0){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}





