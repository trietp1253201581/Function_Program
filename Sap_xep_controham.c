/*Sắp xếp tổng quát n đối tượng
chiều dài đối tượng là size
địa chỉ đầu là buf
theo tiêu chuẩn ss là một hàm*/
#include<stdio.h>
#include<math.h>
#include<mem.h>
#include<string.h>
#include<stdlib.h>
int tang(void *u, void *v)
{
    return (*((float*)u)<=*((float*)v));
}
void sort(void *buf,int size, int n,int (*ss)(void*,void*))
{
    void *tg; char *p; int i,j;
    p=(char*)buf;
    tg=(char*)malloc(size);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
            if(!ss(p+i*size,p+j*size))
            {
                memcpy(tg,p+i*size,size);
                memcpy(p+i*size,p+j*size,size);
                memcpy(p+j*size,tg,size);
            }        
}
float x[]={20,25,10,5,15};
int main()
{
    int j;
    sort(x,4,5,tang);
    for (j=0;j<5;++j)
    printf("%10.2f",x[j]);
    getch();
}
