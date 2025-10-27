//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int i = 0;
 int huashu[4];
 int shuzi = 99;
 char shuzu[4];
 int sum;
 int j = 0;
 while(i < 900)
 {
    i++;
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
i = 0;
while(i < 3 )
{
    printf("%d ",huashu[i]);
    i++;
}
printf("%d",huashu[3]);
 return 0;
}
