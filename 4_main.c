//202510111315
//715786526@qq.com
//张福君
#include<stdio.h>
int x(int a,int b,int c,int d,int e);
int main()
{
 int i;
 int y[5] = {1,2,3,4,5}
 printf("%d",x(y[0],y[1],y[2],y[3],y[4]));
 return 0;
}
int x(int a,int b,int c,int d,int e)
{
 int m = 0;
 m = a*a+b*b+c*c+d*d+e*e;
 return m;
}
