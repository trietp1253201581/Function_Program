/*Tính tích 2 ma trận*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void scamatrix(float x[][50],int m,int n);
void primatrix(float x[][50],int m,int n);
void productmat(float a[][50],int m,int n,float b[][50],int p,int q,float *d);
int main()
{
    int m,n,p,q;
    int i,j,k;
    float a[50][50], b[50][50], c[50][50];
    float d[50];
    float s;
    printf("Tinh tich A.B = C \n");
    /*Nhập hai ma trận*/
    printf("Nhap kich thuoc cua ma tran A (mxn): "); scanf("%d%d",&m,&n);
    printf("Nhap kich thuoc cua ma tran B (pxq): "); scanf("%d%d",&p,&q);
    scamatrix(a,m,n); scamatrix(b,p,q);
    /*Tính tích hai ma trận*/
    if (n!=p) 
    {
        printf("Khong nhan duoc");
        goto dung;
    }
    for(i=0;i<m;++i)
        {
        for(j=0;j<q;++j)
            {
            c[i][j]=0;
            for (k=0;k<n;++k)
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    /*In các ma trận*/
    printf("Ma tran A: \n"); primatrix(a,m,n);
    printf("Ma tran B: \n"); primatrix(b,p,q);
    printf("Ma tran C=A.B: \n"); primatrix(c,m,q);
    productmat(a,m,n,b,p,q,d);
    printf("Ma tran C tinh theo ham: \n");
    for(i=0;i<m;++i)
    {
        for (j=0;j<q;++j)
        printf("%0.2f%c",d[i*q+j],j==(n-1)?'\n':' ');
    }
    dung: getch();
}
/*Hàm nhập ma trận*/
void scamatrix(float x[][50],int m, int n)
{
    int i,j; 
    float y;
    for (i=0; i<m; ++i)
        for (j=0; j<n; ++j)
        {
            scanf("%f",&y); x[i][j]=y;
        }
}
/*Hàm in ma trận*/
void primatrix(float x[][50],int m,int n)
{
    int i,j;
    for (i=0;i<m;++i)
        for (j=0;j<n;++j)
        printf("%0.2f%c",x[i][j],j==(n-1)?'\n':' ');
}
/*Hàm tính tích ma trận*/
void productmat(float a[][50],int m,int n,float b[][50],int p,int q,float *d)
{
    int i,j,k;
    for (i=0;i<m;++i)
    {
        for (j=0;j<q;++j)
        {
            d[i*q+j]=0;
            for (k=0;k<n;++k)
            d[i*q+j]+=a[i][k]*b[k][j]; 
        }
    }
}
