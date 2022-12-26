/*Dùng con trỏ hàm tính max*/
#include<stdio.h>
double fmax(double x,double y) /*Hàm tính max*/
{
    return (x>y?x:y);
}
double (*pfmax)(double,double) /*Khai báo con trỏ hàm*/;
int main()
{
    pfmax=fmax; /*Gán tên hàm cho con trỏ hàm*/
    printf("\n max=%0.1f",pfmax(4.5,78.9));
    getch();
}