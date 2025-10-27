//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int shuru;
 int i = 0;
 int j = 0;
 printf("请输入50以内的正整数\n");
 scanf("%d",&shuru);
 while(i <= 49)
 {  
   i = i+1;
   if(shuru % i == 0)
    {
      j++;
    }

 }
 if (j == 2 && shuru < 50)
 {
   printf("密钥安全，密码设置成功\n");
 }
 else if (shuru < 1 || shuru > 50)
 {
   printf("你输入的，真的是50以内的正整数吗\n");
 }
 else
 {
   printf("密钥不安全，请重新输入\n");
 }
 return 0;
}
