#include<stdio.h>
int main()
{
  int i.j,n;
  scanf("%d",&n);
    for(i=0;i<n;i++)
      
  {
    for(j=0;j<(2*n);j++)
    {
      if(i+j<=n-1)
        printf("01");
      else
        printf("");
      if((i+n)<=j)
         printf("01");
      else
        printf("");
    }
      printf("\n");
    }
  for(i=0;i<n;i++)
  {
    for(j=0;j<(2*n);j++)
    {
       
      if(i>=j)
        printf("01");
      else
        printf("");
      if(i>=(2*n-1)-j)
    printf("01");
      else
        printf("");
    }
   
    printf("\n");
  }
  return 0;
}

      
         
      
