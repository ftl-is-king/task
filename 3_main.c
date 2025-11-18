//202510111315
//715786526@qq.com
//张福君
//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
void swap(int *a,int *b);
int main()
{
    // int a;
    // scanf("%d",&a);
    // int* b = &a;
    // *b = *b + 10;
    // printf("%d,%d",a,*b);
    // return 0;----------------------------作业1
    // int arr[5];
    // int i;
    // for (i = 0; i < 5; i++)
    // {
    //         scanf("%d", &arr[i]);
    // }
    // int(*p)[5] = &arr;
    // for ( i = 0; i < 5; i++)
    // {
    //    arr[i] = (*p)[i]*2;
    // }
    // for ( i = 0; i < 5; i++)
    // {
    //   printf("%d ", arr[i]);
    // }
    // return 0;--------------------------作业2
  int x = 3;
  int y = 5;
  swap(&x,&y);
  return 0;
}
void swap(int *a,int *b)
{
 int c = *a;
 *a = *b;
 *b = c;
 printf("%d %d",*a,*b);
}
