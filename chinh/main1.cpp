#include"ahhi.h"
#include<windows.h>
void namefile(){FILE *f=NULL;int dem,them;char b[8]={0};
printf("\nban muon them bao nhiu hoc phan");scanf("%d",&them);
while(1){
printf("\nban co muon tao file moi: 1 co: 2khong");scanf("%d",&dem);
if(dem==1){
f=fopen("tenfile.txt","w+");
for(int i=0;i<them;i++)
{printf("nhap hoc phan thu %d",i+1);scanf("%s",b);fprintf(f,"\n%s",b);}break;}
else if(dem==2){
f=fopen("tenfile.txt","a+");
for(int i=0;i<them;i++)
{printf("nhap hoc phan thu %d",i+1);scanf("%s",b);fprintf(f,"\n%s",b);}	break;}
else;
}fclose(f);int n=0;
f=fopen("tenfile.txt","r+");while(!feof(f))
{if(!feof(f)){
fscanf(f,"%s",b);n++;}
}
printf("\nhien tai ban co %d hoc phan\n",n);}




int a=0;
int main()
{int l;
while(1){system("cls");
printf("1.nhap ");
printf("\n2.sapxep");
printf("\n3.tim kiem thu");
printf("\n4.thoi khoa bieu");
printf("\n5.thoat");
printf("\nnhap lua chon cua ban: ");fflush(stdin);scanf("%d",&l);
switch(l){
case 1:
	nhap();
  	sapxep(); 
	break;
case 2:
	namefile();sapxep();break;
case 3:
	if(a==0){
printf("ban dk bao nhiu hoc phan: ");
scanf("%d",&a);}
	hoandoi();
    timthu();
    dohoa();
	break;
case 4:
	dohoa();break;
case 5:
	printf("\nhen gap lai=))");
printf("\nbam phim bat ky de thoat");
getchar();
	return 0;
}
}}
