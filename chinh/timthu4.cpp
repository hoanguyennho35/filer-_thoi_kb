#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
extern int a;

char *n3=NULL;
void timthu()
{int x,x1,d1=0,d2=0;printf("\n%d",a);
n3=(char *)calloc(a*15,sizeof(char));
FILE *f=NULL;
	f=fopen("newkq.txt","r+");
	fseek(f,28,SEEK_SET);
	FILE *p=NULL;
	p=fopen("locthu.txt","w+");
	fprintf(p,"\n%6s%3s%5s%7s%5s","hocphan","ma","thu","stiet","tbd");
	fclose(p);p=fopen("locthu.txt","a+");
	printf("ban muon loc tu thu x den thu y: ");
	printf("\nx= ");scanf("%d",&x);printf("\ny= ");scanf("%d",&x1);
	while(!feof(f))
	{d1=0;d2=0;
	for(int i=0;i<a;i++){
	fscanf(f,"%s%d%s%d%d",&n3[15*i+0],&n3[15*i+6],&n3[15*i+7],&n3[15*i+12],&n3[15*i+13]);
	    if(strstr(&n3[15*i+7],"hai")!=NULL)
	{strcpy(&n3[15*i+7],"hai");n3[15*i+14]=2;}
     	if(strstr(&n3[15*i+7],"ba")!=NULL)
	{	if(strstr(&n3[15*i+7],"bay")!=NULL)
	{strcpy(&n3[15*i+7],"bay");n3[15*i+14]=7;}
	else
	{strcpy(&n3[15*i+7],"ba");n3[15*i+14]=3;}}
		if(strstr(&n3[15*i+7],"tu")!=NULL)
	{strcpy(&n3[15*i+7],"tu");n3[15*i+14]=4;}
		if(strstr(&n3[15*i+7],"nam")!=NULL)
	{strcpy(&n3[15*i+7],"nam");n3[15*i+14]=5;}
		if(strstr(&n3[15*i+7],"sau")!=NULL)
	{strcpy(&n3[15*i+7],"sau");n3[15*i+14]=6;}
	
	}
	if(x<=n3[15*(0)+14]&&n3[15*0+14]<=x1)d1=1;
	if(x<=n3[15*(a-1)+14]&&n3[15*(a-1)+14]<=x1)d2=1;
	if(d1==1&&d2==1){
	for(int z=0;z<a;z++)
	{if(!feof(f))fprintf(p,"\n%7s%3d%5s%3d%3d",&n3[15*z+0],n3[15*z+6],&n3[15*z+7],n3[15*z+12],n3[15*z+13]);}
	fprintf(p,"\n%8s","***********");}

}fclose(p);}
