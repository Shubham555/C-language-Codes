//Strings initialization in C
#include<stdio.h>

int main(){ 
    char *ptr = "Harry Bhai"; //---> from this *ptr declaration type we can reinitialize (material change) string
    // char ptr[] = "Harry Bhai";  //---> from this ptr[] declaration type we "can not" reinitialize (material change) string
    ptr = "Shubham bhai";
    printf("%s", ptr);
 //   Same type:
 
 /*   char* s = "Harry Bhai"; //---> from this *ptr declaration type we can reinitialize (material change) string
    // char ptr[] = "Harry Bhai";  //---> from this ptr[] declaration type we "can not" reinitialize (material change) string
    s = "Shubham bhai";
    printf("%s",s);   */
    
    return 0;
}


