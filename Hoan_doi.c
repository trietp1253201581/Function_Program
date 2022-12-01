/*Hoán đổi 2 số x và y*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void hoan_doi(float *px,float *py);
int main()
{
    float x,y;
    printf("Nhap hai so x, y:"); 
    printf("\n x = "); scanf("%f",&x);
    printf("\n y = "); scanf("%f",&y);
    hoan_doi(&x,&y);
    printf("\n x = %0.2f, y = %0.2f",x,y);
    getch();
}
/*Vào hàm hoan_doi*/
void hoan_doi(float *px,float *py)
{
    float z;
    z=*px;
    *px=*py;
    *py=z;
}

