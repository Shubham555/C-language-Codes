
#include <stdio.h>
#include <string.h>

struct bankaccount{
    int acc_no;
    float money;
    char name[10];   //--> imp to give [ ] this storing jaga.
};

int main(){
    struct bankaccount cus1;
    
    cus1.acc_no=12345;
    cus1.money=55.55;
    strcpy(cus1.name,"shubham");
    
    printf("acc_no is %d\n",cus1.acc_no);
    printf("money is %f\n",cus1.money);
    printf("name is %s\n",cus1.name);

    return 0;
}

