//202510111315
//715786526@qq.com
//张福君
//202510111315
//715786526@qq.com
//张福君
#include<stdio.h>
int main()
{
 int a;
 int b[10];
 int i;
 int j = 10;
 for ( i = 0; i < 10; i++)
 {
  scanf("%d",&b[i]);
 }
 for ( i = 0; i < j-1; i++)
 {
  if(b[i] > b[i+1])
  {
   a = b[i];
   b[i] = b[i+1];
   b[i+1] = a;
  }
  if (i == j-2)
  {
   i = -1;
   j--;
  }
 }
 for ( i = 0; i < 10; i++)
 {
  printf("%d ",b[i]);
 }
 return 0;
}
