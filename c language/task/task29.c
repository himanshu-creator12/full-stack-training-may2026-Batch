#include<stdio.h>

int main()
{

int marks;
float percentage;

printf("please enter your marks");
scanf("%d" ,&marks);

percentage = marks /100.0 *100;

if(marks >80){
  printf("percentage = %0.2f\n" , percentage);
  printf("grade'A'"); 
  printf("pass");

}else{
  printf("fail");
}


return 0;
}
