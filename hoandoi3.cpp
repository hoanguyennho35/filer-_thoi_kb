#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//static int a;
extern int a;
char *b=NULL;//ghi noi dung
char k2[10]={0};
char *n2=NULL;//vung dem
void gan(int i, int j){
	for(int z=0;z<15;z++)
	{n2[z]=b[15*i+z];
	b[15*i+z]=b[15*j+z];
	b[15*j+z]=n2[z];
	}
	
	}
void loc(int a){
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(b[15*i+14]<b[15*j+14])
			{
			gan(i,j);
			}
			if(b[15*i+14]==b[15*j+14])
			if(b[15*i+13]<b[15*j+13]){
			
			gan(i,j);
			}
			}
	}}
	void loai(int *d,int a){for(int y=0;y<a-1;y++)
		{if(b[15*y+14]==b[15*(y+1)+14])
		if(b[15*y+13]+b[15*y+12]>b[15*(y+1)+13])
	
    	*d=1;
		
		}
	}
void hoandoi()
{int d=0;
FILE *p=NULL;
p=fopen("newkq.txt","w+");
fprintf(p,"%7s%3s%5s%7s%4s","hocphan","mã","thu","stiet","tbd");
b=(char *)calloc(15*a,sizeof(char));//ghi noi dung

n2=(char *)calloc(15,sizeof(char));//vung dem
FILE *f=NULL;//con tro file
f=fopen("ketqua.txt","r+");
fseek(f,29,SEEK_SET);
while(!feof(f)){
for(int i=0;i<a;i++)
{fscanf(f,"%s%d%s%d%d",&b[0+15*i],&b[6+15*i],&b[15*i+7],&b[15*i+12],&b[15*i+13]);
if(strstr(&b[15*i+7],"hai")!=NULL)
{b[15*i+14]=2;strcpy(&b[15*i+7],"hai");}
if(strstr(&b[15*i+7],"ba")!=NULL)
{b[15*i+14]=3;strcpy(&b[15*i+7],"ba");}
if(strstr(&b[15*i+7],"tu")!=NULL)
{b[15*i+14]=4;strcpy(&b[15*i+7],"tu");}
if(strstr(&b[15*i+7],"nam")!=NULL)
{b[15*i+14]=5;strcpy(&b[15*i+7],"nam");}
if(strstr(&b[15*i+7],"sau")!=NULL)
{b[15*i+14]=6;strcpy(&b[15*i+7],"sau");}
if(strstr(&b[15*i+7],"bay")!=NULL)
{b[15*i+14]=7;strcpy(&b[15*i+7],"bay");}
d=0;
}
fscanf(f,"%s",k2);loc(a);loai(&d,a);if(d==1)continue;
if(!feof(f))
for(int i=0;i<a;i++)
fprintf(p,"\n%7s%3d%7s%3d%3d",&b[15*i+0],b[15*i+6],&b[15*i+7],b[15*i+12],b[15*i+13]);
fprintf(p,"\n","");
}fclose(f);fclose(p);}

