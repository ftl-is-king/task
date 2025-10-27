//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int shuzu[5];
 printf("请输入四个数，用空格分隔哦\n");
 scanf("%d %d %d %d",&shuzu[0],&shuzu[1],&shuzu[2],&shuzu[3]);
 shuzu[4] = shuzu[0]+shuzu[1]+shuzu[2]+shuzu[3];
 printf("%d ,%d ,%d ,%d ,%d",shuzu[0],shuzu[1],shuzu[2],shuzu[3],shuzu[4]);
 return 0;
}
