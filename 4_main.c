//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
void plus(int *a);
int main()
{
 int i;
 int arr[5];
 for ( i = 0; i < 5; i++)
 {
  scanf("%d", &arr[i]);
 }
 plus(&arr[0]);
 for ( i = 0; i < 5; i++)
 {
  printf("%d ", arr[i]);
 }
 return 0;
}

void plus(int *a)
{   
    int i;
    for ( i = 0; i < 5; i++)
    {
    *(a+i) = *(a+i) + 1;
    }  
}
    
