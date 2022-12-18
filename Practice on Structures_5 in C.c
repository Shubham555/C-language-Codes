
#include <stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;

void display(date d){
    printf("the date is %d/%d/%d\n",d.date,d.month,d.year);
}

int datecmp(date d1, date d2){
    
    //make decision on the basis of year coparision
    
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    
    //make decision on the basis of month coparision
    
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month<d2.month){
        return -1;
    }
    
    //make decision on the basis of date coparision
    
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    return 0;   // neither 1 nor -1 automatically reaturn 0 for third condition like dates are equal.
}

int main(){
    date d1={5,11,23};
    date d2={5,11,23};
    display(d1);
    display(d2);
    int a = datecmp(d1,d2);
    printf("date comparison function returns: %d",a);
    return 0;
}


