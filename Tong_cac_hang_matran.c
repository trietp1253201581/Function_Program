/*Tính và in ra các tổng hàng ma trận*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void sumh(float x[][50], int m, int n, float *th);
void scamatrix(float x[][50], int m, int n);
int main()
{
    float a[50][50];
    float h[50];/*Mảng chứa các tổng hàng*/
    float s;
    int i,j,m,n;
    printf("Nhap kich thuoc (mxn): "); scanf("%d%d",&m,&n);
    printf("Nhap ma tran: \n"); scamatrix(a,m,n);
    sumh(a,m,n,h);
    for (i=0;i<m;++i)
    printf("\n Tong cac so tren hang thu %d bang %0.2f",i,h[i]);/*h[i] chính là tổng các số trên hàng i*/
    getch();
}
/*Hàm nhập ma trận*/
void scamatrix(float x[][50], int m, int n)
{
    int i,j; 
    float y;
    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            scanf("%f",&y); x[i][j]=y;
        }
    }
}
/*Hàm tính tổng hàng của ma trận*/
void sumh(float x[][50], int m, int n, float *th)
{
    int i,j;
    for (i=0;i<m;++i)
    {
        th[i]=0;
        for (j=0;j<n;++j)
        th[i]+=x[i][j];
    }
}
