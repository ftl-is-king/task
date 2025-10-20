//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
  //简单计算器
  printf("请输入两个数字，及运算符\n");
  char yunsuanfu;
  int a,b;
  float c,d;
  scanf("%d %d %c",&a,&b,&yunsuanfu);
  if (yunsuanfu == '+'){
    printf("%d+%d=%d\n",a,b,a+b);
  }
  else if (yunsuanfu == '-'){
    printf("%d-%d=%d\n",a,b,a-b);
  }
  else if (yunsuanfu == '*'){
    printf("%d*%d=%d\n",a,b,a*b);
  }
  else if (yunsuanfu == '/'){
    c = a;
    d = b;
    if (d == 0)
    {
      printf("请输入非零除数\n");
    }
    else{
      printf("%.0f/%.0f=%f\n",c,d,c/d);
    }
  }
  else{
    printf("请输入正确的运算符\n");
  }
  //简单计算器
}
