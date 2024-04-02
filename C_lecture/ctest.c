#include<stdio.h>

int main(void)
{   
    int x,y,add,sub,mul,div,mod;
    printf("정수1을 입력학세요 : ");
    scanf("%d", &x);
/*scanf 함수

& (address operator, 주소 연산자, 앤퍼센트)
a라고 하는 변수의 방의 주소를 찾아가서 지금 입력된 값을 이 a방에 넣어줘.

★★★★

int형 일 때는 %d 로 받아주기
float형 일 때는 %f 로 받아주기
double형 일 때는 %lf 로 받아주기*/
    printf("정수2를 입력하세요 : ");
    scanf("%d", &y);

    add = x+y;
    sub = x-y;
    mul = x*y;
    div = x/y;
    mod = x%y;

    printf("%d, %d, %d, %d, %d", add,sub,mul,div,mod);
    return 0;
}


/* swap 함수 포인터 변수를 이용하여 변수값 바꾸기
void swap(int *a, int *b);

int main()
{
    int a = 3, b=5;
    swap(&a, &b);
    printf("%d, %d",a,b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}*/