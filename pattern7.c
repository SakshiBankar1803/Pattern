#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=5;j>=i;j--)
      printf(" ");
    for(j=1;j<=i;j++)
    printf("%d",i);
    
    printf("\n");
    
  }
}


//output::
     1
    22
   333
  4444
 55555

