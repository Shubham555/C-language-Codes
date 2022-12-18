
#include <stdio.h>
typedef struct timestamp{
    
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;

}tstp;

void display(tstp t){
    printf("the time stamp is %d/%d/%d %d:%d:%d\n",t.date,t.month,t.year,t.hour,t.min,t.sec);
    
}


int main(){
    tstp t1={13,04,2002,07,10,25};
    display(t1);

    return 0;
}




