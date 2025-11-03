//202510111315
//715786526@qq.com
//张福君
#include<stdio.h>
void UD(int x[],int a);

int main()
{
 int i;
 int shuru[5];
 for ( i = 0; i < 5; i++)
 {
  scanf("%d",&shuru[i]);
 }
 UD(shuru,i);
 return 0;
}
void UD(int x[],int a)
{
int i;
for ( i = 0; i < a; i++)
{
 if(i < a-1)
 {
  printf("%d ",x[a-1-i]);
 }
 else
 {
  printf("%d",x[a-1-i]);
 }
}
