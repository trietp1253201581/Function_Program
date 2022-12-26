/*Lập bảng giá trị cho các hàm x^2,sin(x),cos(x),e^x,sqrt(x) với x chạy từ 1.0 tới 10.0 theo bước 0.5*/
#include<stdio.h>
#include<math.h>
double bp(double x) /*hàm tính x^x*/
{
    return x*x;
}
int main()
{
    int j; double x=1.0;
    /*Khai báo mảng con trỏ hàm*/
    double (*f[6])(double);
    /*Gán tên hàm cho các phần tử của mảng con trỏ*/
    f[1]=bp;
    f[2]=sin;
    f[3]=cos;
    f[4]=exp;
    f[5]=sqrt;
    /*Lập bảng giá trị*/
    printf("%10s%10s%10s%10s%10s","bp","sin","cos","exp","sqrt");
    while(x<=10.0)
    {
        printf("\n");
        for (j=1;j<=5;++j)
        printf("%10.2f",f[j](x));
        x+=0.5;
    }
    getch();
}