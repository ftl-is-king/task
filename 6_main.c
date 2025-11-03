//202510111315
//715786526@qq.com
//张福君
#include<stdio.h>
int sum(int x[],int a);
int product(int y[],int b);

int main()
{
 int i;
 int shuru[5];
 for ( i = 0; i < 5; i++)
 {
  scanf("%d",&shuru[i]);
 }
 printf("%d %d",sum(shuru,i),product(shuru,i));
}
int sum(int x[],int a)
{
 int i;
 int s = 0;
 for ( i = 0; i < a; i++)
 {
  s = s + x[i];
 }
 return s;
}
int product(int y[],int b)
{
 int i;
 int p = 1;
 for ( i = 0; i < b; i++)
 {
  p = p * y[i];
 }
 return p;
}


