
#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    printf("enter the number you need table of:\n");
    scanf("%d",&num);
    ptr= fopen("multable.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr,"%d*%d= %d\n", num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("successfully generated table of %d to file multable.txt",num);
    return 0;
}
