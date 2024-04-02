#include<stdio.h>

int main(void)
{   
    int x, y;
    char a, b;
    printf("문자 2개를 입력하세요: ");
    scanf("%c %c",&a, &b);
    
    printf("입력한 첫번째 문자 %c의 아스키 10진수는 %d 입니다.\n",a,a);
    printf("입력한 두번째 문자 %c의 다음 문자는 %c 입니다\n", a, a+1);
    printf("(%c < %c)는 %d 입니다\n",a,a+1, (a<a+1));

    printf("정수 두개를 입력하세요 : ");
    scanf("%d %d",&x,&y);
    printf("(%d >= %d)는 %d 입니다\n",x,y,(x>=y));
    printf("(%d == %d)는 %d 입니다\n",x,y,(x==y));
    printf("(%d != %d)는 %d 입니다\n",x,y,(x!=y));


    return 0;
   /*char a;
   printf("문자 두개를 입력해 주세요 : ");
   scanf("%c",&a);
   printf("%c",a);
   return 0;*/
}

