#include<conio.h>
#include<stdio.h>
#include<string.h>
extern int a;
void nhap()
{int i=0,c=0,tiet,soluong=0,sotiet=0,d=1;
char ten[10],ten1[10],thu[5],kyhieu[5],b;
printf("Ban muon dk bao nhiu hoc phan");//so hoc phan dk
scanf("%d",&a);
fflush(stdin);
FILE *k=NULL;
k=fopen("tenfile.txt","w+");

for(int j=1;j<=a;){//vong lap nhap hoc phan
printf("\nnhap ten hoc phan thu %d: ",j);
scanf("%s",ten);fprintf(k,"\n%s",ten);
fflush(stdin);
for(int p=0;p<10;p++)//gan ten hp de mo file 
{ten1[p]=ten[p];}
	FILE *f=NULL;
f=fopen(strcat(ten1,".txt"),"w+");//gan duoi
if(f!=NULL)
{b='c';
fscanf(f,"%c",&b);fclose(f);f=fopen(ten1,"r+");
if(b=='c') //kiem tra noi dung file co rong
fprintf(f,"%3s%5s%5s%7s%7s\n","STT","ma","thu","sotiet","tietbd");
else
{fseek(f,-30,SEEK_END);fscanf(f,"%d",&d);printf("\nd=%d",d);}
fclose(f);f=fopen(ten1,"a+");
printf("nhap so tiet ");scanf("%d",&sotiet);
fflush(stdin);
printf("hoc phan %s co bao nhiu so thu tu",ten);
scanf("%d",&soluong);
for(i=1;i<=soluong;i++)
{printf("thu tu %d hoc phan %s ten kyhieu: ",i,ten);
fflush(stdin);
scanf("%s",&kyhieu);
printf("nhap thu (chu): ");
scanf("%s",thu);
fflush(stdin);
printf("nhap tiet (so): ");
scanf("%d",&tiet);
fclose(f);
fflush(stdin);
f=fopen(ten1,"a+");
fprintf(f,"\n%3d%5s%5s%7d%7d",i,kyhieu,thu,sotiet,tiet);
//ghi vao file
}

}fclose(f);if(j>=a){fclose(k);break;};j++;
}}
