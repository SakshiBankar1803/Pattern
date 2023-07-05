#include<stdio.h>
int main()
{
  int i,j;
  for(i=5;i>=1;i--)
  {
    for(j=1;j<i;j++)
    printf(" ");
    
    for(j=1;j<=5;j++)
    printf("%d",j);
    
    printf("\n");
  }
}


 //output::
    12345
   12345
  12345
 12345
12345

