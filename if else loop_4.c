
//program for Grading of marks 90-100 ,80-90,...into A,B...
#include <stdio.h>

int main()

{ 
  int marks;
  printf("enter your marks\n");
  scanf("%d",&marks);
  
  if(marks >=90 && marks <=100){
      printf("your grade  is A\n");
  }
  else if(marks >=80&& marks <90){
      printf("your grade is B\n");
  }
  else if(marks >=70&& marks <80){
      printf("your grade  is C\n");
  }
  else if(marks >=60&& marks <70){
      printf("Your grade is  D \n");
  }
  else if (marks >=0 && marks <60 ) {
     printf("Your grade is  F\n");
   }
  else {
      printf("Invalid marks entered\n");
  }
    return 0;
}







