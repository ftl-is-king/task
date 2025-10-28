//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int shuzu[5];
 int i = 0;
 int shuzi = 0;
 for ( i = 1; i < 5; i++)
 {
   printf("请输入\n");
   scanf("%d",&shuzi);
   shuzu[i] = shuzi;
 }
 shuzu[0] = 0;
 printf("%d %d %d %d %d\n",shuzu[0],shuzu[1],shuzu[2],shuzu[3],shuzu[4]);
 return 0;
}
