#include <stdio.h>

int main()
{
    int a, b;
    printf("請輸入2個數字: ");
    scanf("%d%d", &a, &b);

    printf(" %d + %d 是 %d\n",a ,b ,a+b);
    printf(" %d - %d 是 %d\n",a ,b ,a-b);
    printf(" %d * %d 是 %d\n",a ,b ,a*b);
    printf(" %d / %d 是 %d\n",a ,b ,a/b);
    printf(" %d 除 %d 餘數是 %d\n",a ,b ,a%b);
}
