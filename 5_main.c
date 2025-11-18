//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
void plus(int *a,int b);
int main()
{
 int i;
 int arr[5];
 for ( i = 0; i < 5; i++)
 {
  scanf("%d", &arr[i]);
 }
 int x = sizeof(arr)/sizeof(arr[0]);
 plus(&arr[0],x);
 for ( i = 0; i < 5; i++)
 {
  printf("%d ", arr[i]);
 }
 return 0;
}

void plus(int *a,int b)
{   
    int i;
    for ( i = 0; i < b-1; i++)
    {
    *(a+(b-i)) = *(a+(b-i-1));
    }  
    *a = 0;
}
    
