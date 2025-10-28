//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int shuzu[5];
 int j = 0;
 int i = 0;
 int shuzi = 0;
 for ( i = 0; j < 5; i++)
 {
   printf("请输入\n");
   scanf("%d",&shuzi);
   if (shuzi % 2 == 0)
   {
    shuzu[j] = shuzi;
    j ++;
   }
}
 printf("%d %d %d %d %d\n",shuzu[0],shuzu[1],shuzu[2],shuzu[3],shuzu[4]);
 return 0;
}
