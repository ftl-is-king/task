//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i;
 int *arr = malloc(5 * sizeof(int));
 for ( i = 0; i < 5; i++)
 {
  scanf("%d", &arr[i]);
 }
 for ( i = 0; i < 5; i++)
 {
  printf("%d ", arr[i]);
 }
 free(arr);
 return 0;
}

    
