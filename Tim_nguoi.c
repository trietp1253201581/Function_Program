/*Chương trình tìm người khi biết mã*/
#include<stdio.h>
#include<ctype.h>
void tim_ng(int ma);
int main()
{
    int i,k;
    tt: printf("\n Can tim nguoi thu: ");
    scanf("%d",&i);
    tim_ng(i);
    printf("\n Nhan Enter de tiep tuc");
    k=getch();
    if (k==13) goto tt;
}
void tim_ng(int ma)
{
    static char *ds[]={
        "Ma sai",
        "Le Minh Triet",
        "Nguyen Xuan Thang",
        "Hoang Thi Thai Ha",
        "Nguyen Xuan Hung",
        "Ngo Duc Anh",
        "Dinh Thu Hien",
        "Tran Ngoc Khanh"
    };
    printf("\n \n Ma: %d",ma);
    printf(": %s",(ma<1||ma>7)?ds[0]:ds[ma]);
}
