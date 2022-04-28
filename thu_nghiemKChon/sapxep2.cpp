#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern int a;
int k=-1;//phan tu dem chay
//int a=0;  so tap tin do nguoi dung nhap
int k1=0;//phan tu tru ra
char *n=NULL;//chua ten tap tin.txt
char *n1=NULL;//chua ten file
char *m=NULL;//ghi noi dung tap tin
void lap()
{k=k+1;
FILE *f=NULL;
f=fopen(&n[10*(k)],"r+");	//mo tung file de doc gan
	fseek(f,29,SEEK_SET);	//dua con tro vao noi dung
	if((k)==a-1){
FILE *p=NULL;p=fopen("ketqua.txt","a+");//ghi vao file moi
while(!feof(f))
{fscanf(f,"%d%d%s%d%d",&m[10*k],&m[10*k+1],&m[10*k+2],&m[10*k+8],&m[10*k+9]);
for(int i=0;i<a;i++)fprintf(p,"\n%5s%4d%5s%3d%3d",&n1[10*i],m[10*i],&m[10*i+1],m[10*i+8],m[10*i+9]);
fprintf(p,"\n%8s","*****");}
fseek(p,0,SEEK_CUR);fprintf(p,"\n","");fclose(p);k--;
}else
{while(!feof(f))
{
fscanf(f,"%d%d%s%d%d",&m[10*k],&m[10*k+1],&m[10*k+2],&m[10*k+8],&m[10*k+9]);
if(strcmp(&m[2],"het")==0)break;
if(k<a-1)
lap();
}k--;}}
void sapxep()
{
printf("ban muon nhap bao nhiu tap tin: ");
scanf("%d",&a);
m=(char*)calloc(10*a,sizeof(char));//ghi noi dung
n=(char*)calloc(10*a,sizeof(char));//chua tap tin .txt
n1=(char*)calloc(10*a,sizeof(char));//chua ten file
FILE *t=NULL;
t=fopen("tenfile.txt","r+");
for(int b=0;b<a;b++){
fscanf(t,"%s",&n[10*b]);
//{printf("nhap ten thu %d ",b);scanf("%s",&n[10*b]);
//for(int j=0;j<9;j++)n1[10*b+j]=n[10*b+j];
strcpy(&n1[10*b],&n[10*b]);
printf("\nn1=%s\t  n=%s",&n1[10*b],&n[10*b]);
}fclose(t);
FILE *f=NULL;
for(int i=0;i<a;i++)       	//gan duoi.txt
strcat(&n[10*i],".txt");
f=fopen(&n[0],"r+");k=0;    //mo file dau tien doc
fseek(f,-28,SEEK_END);		//dua con tro ve cho co chu
fscanf(f,"%d%d%s%d%d",&m[10*k],&m[10*k+1],&m[10*k+2],&m[10*k+8],&m[10*k+9]);//doc cuoi file dau tien
fclose(f);
if(strcmp(&m[2],"het")!=0)//kiem tra o co danh dau het
{f=fopen(&n[0],"a+");int q=0;
fprintf(f,"\n%3d%5d%5s%7d%7d",q,q,"het",q,q);//khac tien hanh dau dau ket thuc
fclose(f);}
f=fopen("ketqua.txt","w+");		//tao file ketqua.txt
fprintf(f,"%5s%4s%5s%7s%7s\n","HP","lop","thu","sotiet","tietbd");	//gan tieu de
fclose(f);
k=-1;
lap();
}
