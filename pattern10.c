#include<stdio.h>
int main()
{
  int i,j;
  for(i=5;i>=1;i--)
  {
    for(j=1;j<i;j++)
    printf(" ");
    
    for(j=i;j<=5;j++)
    printf("%d",i);
    
    printf("\n");
  }
}



//output::
    5
   44
  333
 2222
11111

