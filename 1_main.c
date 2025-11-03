//202510111315
//715786526@qq.com
//张福君
#include<stdio.h>
int main()
{
 int shuzu[3][3];
 int a = -1;
 int b = 0;
 int j;
 for(j = 0;j < 9;j++)
 {
  if(a < 2)
  {
    a++;
  }
  scanf("%d",&shuzu[a][b]);
  if(a == 2)
  {
    a = -1;
    b++;
  }
 }
 a = -1;
 b = 0;
 for(j = 0;j < 9;j++)
 {
  if(a < 2)
  {
    a++;
  }
  if(b == 3)
  {
   printf("%d",shuzu[a][b]);
  }
  else
  {
   printf("%d ",shuzu[a][b]);
  }
  if(a == 2)
  {
    printf("\n");
    a = -1;
    b++;
  }
 }
 return 0;
}
