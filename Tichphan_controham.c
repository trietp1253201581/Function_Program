/*Tính tích phân các hàm sin(x),cos(x),e^x,(e^x-2sin(x^2))/(1+x^4)*/
#include<stdio.h>
#include<math.h>
double tp(double (*f)(double),double a,double b)/*Tính tích phân bằng công thức hình thang*/
{
    int i,n;
    double s,h;
    n=1000;
    h=(b-a)/n;
    s=(f(a)+f(b))/2;
    for (i=1;i<n;++i)    
    s+=f(a+i*h);
    return h*s;
}
double g(double x)/*Hàm (e^x-2sin(x^2))/(1+x^4)*/
{
    double s;
    s=(exp(x)-2*sin(x*x))/(1+pow(x,4));
    return s;
}
int main()
{
    printf("\n S1=%0.4f",tp(sin,0,M_PI/2));
    printf("\n S2=%0.4f",tp(cos,0,M_PI/2));
    printf("\n S3=%0.4f",tp(exp,0,1.0));
    printf("\n S4=%0.4f",tp(g,0,3)); 
    getch();   
}