#include <stdio.h>
#include <stdlib.h>

int main()
{
  int counter,marks,avg,total=0;
  for (counter=1;counter<=10;counter++)
   {

    printf("Enter %d marks",counter);
  scanf("%d",&marks);
    total+=marks;
  }
  avg= total/10;
   printf("%d\n %d",avg,total);
  if (avg<=50)
  printf("You are Pass");
  else
    printf("You are Fail");
    return 0;
}
