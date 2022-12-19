/*Tính khối lượng vận chuyển (tấn-km) cho một tổ lái xe gồm m người trong một ngày*/
/*Thông tin nhận được từ giấy đi đường của mỗi lái xe gồm quãng đường (km) và trọng tải (tấn) cho một chuyến đi*/
/*Ví dụ, nếu một lái xe thực hiện 3 chuyến đi thì số liệu là 3 cặp số (25km-4.5t), (50km-5.2t), (30km-3.6t)*/
#include<stdio.h>
#define N 1000 /*Số chuyến đi trong ngày không vượt quá 1000*/
#define L 20 /*Số lái xe không vượt quá 20*/
int k[N]; /*km*/
float t[N]; /*tấn*/
int *pk[L];
float *pt[L];
char *thongbao = "\n khong co lai xe thu %d";
void vaosl(int m)/*Hàm vào số liệu*/
{
    int i, *pkk;
    float *ptt;
    pkk=pk[0]=k;
    ptt=pt[0]=t;
    for (i=1;i<=m;++i)
    {
        printf("\n So lieu cua lai xe thu %d: ",i);
        doc:scanf("%d%f",pkk,ptt);
        if(*pkk!=0)
        {
            ptt++;
            pkk++;
            goto doc;
        }
        pk[i]=pkk;
        pt[i]=ptt;
    }
}
void rasln(int m,int i)/*Số lái xe thực tế là m, cần in số liệu của người i*/
{
    int *pkk;
    float *ptt;
    if(i<1||i>m)
    {
        printf(thongbao,i);
        return;
    }
    pkk=pk[i-1];
    ptt=pt[i-1];
    printf("So lieu lai xe thu %d\n",i);
    while(pkk<pk[i])
    printf("\n %4d km %8.2f tan",*pkk++,*ptt++);
}
float klvcn(int m,int i) /*Số lái xe là m, tính số liệu lái xe i*/
{
    int *pkk;
    float *ptt;
    float s=0.0;
    if (i<1||i>m)
    {
        printf(thongbao,i);
        return 0.0;
    }
    pkk=pk[i-1];
    ptt=pt[i-1];
    while (pkk<pk[i])
    s+=(*pkk++)*(*ptt++);
    return s;
}
int main()
{
    int m,i;
    printf("\n So lai xe: "); scanf("%d",&m);
    vaosl(m);
    for (i=1;i<=m;++i)
    {
        rasln(m,i);
        printf("\n Khoi luong van chuyen bang %8.2f km/tan",klvcn(m,i));
    }
    getch();
}
