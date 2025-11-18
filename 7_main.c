//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int i;
 int arr[10];
 for ( i = 0; i < 10; i++)
 {
  scanf("%d", &arr[i]);
 }
 int j =10;
 int *x = &arr[0];
 for ( i = 0; i < j-1 && j > 1; i++)
 {
  if (*(x+i) > *(x+i+1))
  {
    int temp = *(x+i);
    *(x+i) = *(x+i+1);
    *(x+i+1) = temp;
  }
  if (i == j-2)
   {
    i = -1;
    j = j-1;
   }
 }
 for ( i = 0; i < 10; i++)
 {
  printf("%d ", arr[i]);
 }
 return 0;
}

