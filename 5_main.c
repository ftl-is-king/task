//202510111315
//715786526@qq.com
//张福君
#include<stdio.h>
int x(int a,int b,int c);
int main()
{
 printf("%d",x(1,100,1));
 return 0;
}
int x(int a,int b,int c)
{
 int m = 0;
 m = (a+b)*((b+1-a)/c)/2;
 return m;
}
