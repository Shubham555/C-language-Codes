#include <stdio.h>
void Goodmorning();
void Goodafternoon();
void Goodnight();

int main()
{
    Goodmorning();
    return 0;
}


void Goodmorning(){
    printf("Good morning Shubham\n");
    Goodafternoon();
}
void Goodafternoon(){
    printf("Good afternoon Shubham\n");
    Goodnight();
}
void Goodnight(){
    printf("Good night Shubham\n");
}

