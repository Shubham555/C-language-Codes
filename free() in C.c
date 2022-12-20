// free()
#include <stdio.h>
#include <stdlib.h>

int main(){
        // Sizeof operator in C
    // printf("The size of int on my pc is %d\n", sizeof(int));
    // printf("The size of float on my pc is %d\n", sizeof(float));
    // printf("The size of char on my pc is %d\n", sizeof(char));
        int *ptr;
        int *ptr2;
        ptr= (int*)malloc(600* sizeof(int));
        for(int i=0;i<600;i++){
            ptr2 =(int*)malloc(600000*sizeof(int));    //--> ithe memory dynamicaaly allocate zali./contineos allocate hot jaeiil
            printf("enter the value of %d element: \n",i);
            scanf("%d", &ptr[i]);
            
            free(ptr2);          //--> legech ithe memory "free" dymicly deallocate zali./legech contineos deallocate hot jaeiil
        }
       for(int i=0;i<6;i++){
           printf("the value of %d element is %d\n",i,ptr[i]);
       }
    return 0;
}




