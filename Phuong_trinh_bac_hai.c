/*Giải phương trình bậc 2 sử dụng hàm*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float ptb2(float a,float b, float c, float *x1,float *x2);
int main() /*Vào hàm main*/
{
    float a,b,c,x1,x2,s;
    int k;
    lai: system("cls");
    printf("Giai phuong trinh ax^2+bx+c = 0:");
    printf("\n Nhap cac he so"); /*Bắt đầu nhập hệ số*/
    printf("\n a = "); scanf("%f",&a);
    printf("\n b = "); scanf("%f",&b);
    printf("\n c = "); scanf("%f",&c);
    s=ptb2(a,b,c,&x1,&x2);
    if (s==0) 
    {
        printf("a = 0, nhan enter de nhap lai");
        k=getch();
        if (k==13) goto lai;
    }
    else if (s==-1)
    printf("Phuong trinh vo nghiem");
    else printf("Phuong trinh co hai nghiem x1 = %0.2f, x_2 = %0.2f",x1,x2);
    getch();
}
/*Bắt đầu hàm ptb2*/
float ptb2(float a,float b, float c, float *x1,float *x2)
{
    float D;
    if (a==0) return 0;
    D=b*b-4*a*c;
    if (D<0) return -1;
    else 
    {
        *x1=(-b+sqrt(D))/(2*a);
        *x2=(-b-sqrt(D))/(2*a);
        return 1;
    }
}