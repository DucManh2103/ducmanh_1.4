#include <stdio.h>
#include<conio.h>

struct ngaymoso
{
	int ngay;
	int thang;
	int nam;
	
};
typedef struct ngaymoso NGAYMS;
struct sotietkiem
{
	char maso[5];
	char loaitietkiem[10];
	char hoten[30];
	int chungminhnhandan;
	float sotiengui ;
	NGAYMS ngaymoso;
};
typedef struct sotietkiem SOTK;

void Nhapngaymoso(NGAYMS &n)
{
 printf("nhap ngay");
 scanf("%d",&n.ngay);
 printf("nhap thang");
 scanf("%d",&n.thang);
 printf("nhap nam");
 scanf("%d",&n.nam);
  
  
}
void Nhapsotietkiem(SOTK &s)
{
	
 fflush(stdin);
 printf("nhap ma so \n");
 gets(s.maso);

  printf("nhap loai tiet kiem \n ");
 scanf("%c",&s.loaitietkiem);
  fflush(stdin);

 printf("nhap ho ten \n");
 scanf("%c",&s.hoten);
  fflush(stdin);

 printf("nhap chung minh nhan dan \n");
 scanf("%d",&s.chungminhnhandan);
 printf("nhap so tien gui \n");
 scanf("%f",&s.sotiengui);
  printf("nhap ngay mo so \n");
  scanf("%d/%d/%d",&s.ngaymoso);
}
 void Xuatsotietkiem(SOTK s)
{
 printf("nhap ma so %s\n",s.maso);
 printf("nhap loai tiet kiem %s\n",s.loaitietkiem);
 printf("nhap ho ten %s\n",s.hoten);
 printf("nhap chung minh nhan dan %s\n",s.chungminhnhandan);
  printf("nhap so tien gui %d\n",s.sotiengui);
  printf("nhap ngay mo so %ngaymoso\s",s.ngaymoso);
}
int main()
{
	NGAYMS T1;
	SOTK T2;
	Nhapngaymoso(T1);	
	Nhapsotietkiem(T2);
	Xuatsotietkiem(T2);
	

	return 0;
}
