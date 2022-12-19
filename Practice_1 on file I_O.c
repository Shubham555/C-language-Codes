
#include <stdio.h>

int main(){                     //created & stored pr01.txt file in online form  on gdp complier itself
     int a,b,c;
     FILE *ptr;
     ptr = fopen("pr01.txt","r");
     fscanf(ptr,"%d %d %d",&a,&b,&c); 
     printf("the 3 integers are %d %d %d",a,b,c); 
    return 0;
}
