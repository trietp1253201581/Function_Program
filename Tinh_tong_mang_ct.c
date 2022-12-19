/*Vào dữ liệu, tính tổng các phần tử của dãy bằng con trỏ*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float sum1(float *a,int n);
float sum2(float *a,int n);
float sum3(float a[],int n);
float sum4(float a[],int n);
int main()
{
    float b[100]; int n,i;
    printf("Nhap so phan tu cua day (<100) n = "); scanf("%d",&n);
    /*Bắt đầu nhập dãy, dùng con trỏ*/
    for (i=0; i<n; ++i)
    {
        printf("a[%d] = ",i); scanf("%f",b+i);
    }
    printf("\n sum1 = %0.3f",sum1(b,n));
    printf("\n sum2 = %0.3f",sum2(b,n));
    printf("\n sum3 = %0.3f",sum3(b,n));
    printf("\n sum4 = %0.3f",sum4(b,n));
    getch();
}
/*Bắt đầu hàm tổng 1*/
float sum1(float *a,int n)
{
    float s=0; int i;
    for (i=0; i<n; ++i)
    s+=a[i];
    return s;
}
/*Bắt đầu hàm tổng 2*/
float sum2(float *a,int n)
{
    float s=0; int i;
    for (i=0; i<n; ++i)
    s+=*(a+i);
    return s;
}
/*Bắt đầu hàm tổng 3*/
float sum3(float a[],int n)
{
    float s=0; int i;
    for (i=0; i<n; ++i)
    s+=a[i];
    return s;
}
/*Bắt đầu hàm tổng 4*/
float sum4(float a[],int n)
{
    float s=0; int i;
    for (i=0; i<n; ++i)
    s+=*(a+i);
    return s;
}