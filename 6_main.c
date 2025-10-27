//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
 int shuzu[5];
 int num = 114514;
 int i;
 int j = 5;
 int xuhao[5] = {0,1,2,3,4};
 while(num != 0)
 {
    num = 0;
    for ( i = 0; i < j; i++)
    {
        printf("请输入第%d位数\n",i+1);
        scanf("%d",&shuzu[xuhao[i]]);
    }
    j = 0;
    for ( i = 0; i < 5; i++)
    {
     if(shuzu[i] % 2 != 0)
     {
        num++;
        xuhao[j] = i;
        j++;
     }
    }
 } 
 printf("%d %d %d %d %d\n",shuzu[0],shuzu[1],shuzu[2],shuzu[3],shuzu[4]);
}
