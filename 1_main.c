//202510111315
//715786526@qq.com
//张福君
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int* b = &a;
    *b = *b + 10;
    printf("%d,%d",a,*b);
    return 0;
}
