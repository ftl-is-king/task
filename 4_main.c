//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
  //三角形计算
  printf("请输入三个整数\n");
  int x,y,z;
  scanf ("%d %d %d",&x,&y,&z);
  if (x+y <= z || x+z <= y || y+z <= x ){
    printf("不能组成三角形\n");  
  }
    else{
      printf("可以组成三角形\n");
  }
   return 0;
  //三角形计算
}
