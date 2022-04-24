#include<stdio.h>
int main()
  int score;
char grade;
printf("enter score:");
scanf("%d",&score);
if(score>=90)
  printf("GRADE A");
else if(score>=80)
  printf("GRADE B");
else if(score>=70)
  printf("GRADE C");
else if(score>=60)
  printf("GRADE D");
return 0;
}
