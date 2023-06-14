#include <stdio.h>

int main()
{
int no;
printf("Enter the number between 1-10;-");
scanf("%d",&no);
switch (no)
{
    case 1:printf("%d is an odd number",no);break;
    case 2:printf("%d is an even number",no);break;
    case 3:printf("%d is an odd number",no);break;
    case 4:printf("%d is an even number",no);break;
    case 5:printf("%d is an odd number",no);break;
    case 6:printf("%d is an even number",no);break;
    case 7:printf("%d is an odd number",no);break;
    case 8:printf("%d is an even number",no);break;
    case 9:printf("%d is an odd number",no);break;
    case 10:printf("%d is an even number",no);break;
defaut:printf("%is not a valid number ",no);break;
}

}
