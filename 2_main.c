//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int i;
 int huashu[4];
 int shuzi = 99;
 char shuzu[4];
 int sum;
 int j = 0;
 for ( i = 0; i < 900; i++)
 {
    shuzi++;
    sprintf(shuzu,"%d",shuzi);
    sum = (shuzu[0] - '0')*(shuzu[0] - '0')*(shuzu[0] - '0');
    sum = sum+(shuzu[1] - '0')*(shuzu[1] - '0')*(shuzu[1] - '0');
    sum = sum+(shuzu[2] - '0')*(shuzu[2] - '0')*(shuzu[2] - '0');
    if(sum == shuzi)
    {
      huashu[j] = shuzi;
      j++;
    }
}
for ( i = 0; i < 3; i++)
{
    printf("%d ",huashu[i]);
}
printf("%d",huashu[3]);
 return 0;
}
