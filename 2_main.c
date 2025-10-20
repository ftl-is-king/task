//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
   //成绩等级判断
  int chengji;
  printf("请输入成绩0-100\n");
  scanf("%d",&chengji);
  if (chengji <= 100 && chengji >= 90){
    printf("A\n");
  }
  else if(chengji<=89 && chengji>=80){
    printf("B\n");
  }
  else if(chengji <= 79 && chengji >= 70){
    printf("C\n");
  }
  else if(chengji <= 69 && chengji>= 60){
    printf("D\n");
  }else if(chengji <= 59){
    printf("E\n");
  }
   else{
    printf("成绩范围错误！\n");
   }
  //成绩等级判断
}
