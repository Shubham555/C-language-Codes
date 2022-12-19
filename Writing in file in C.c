// Writing in file
#include <stdio.h>

int main(){
      FILE *ptr;
     
      ptr=fopen("generated.txt","w");
      int num = 457;
      fprintf(ptr,"the number is %d\n",num);
      fprintf(ptr,"thanks for using fprintf 123456789");
      fclose(ptr);
    return 0;
}
