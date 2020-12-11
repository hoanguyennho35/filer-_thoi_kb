#include<graphics.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
typedef struct doc{
	string hocphan;
	char ma[2];
	string thu;
	int sotiet;
	int tietbd;
}doc;

void xoa(){setcolor(0);
	for(int y=0;y<9;y++)
	for(int x=0;x<6;x++)
	outtextxy(130*(x+1),50*(y+3),"anhyeue");
	setcolor(14);
}
int coutline(){int i=0;
fstream a;a.open("locthu.txt",ios_base::in);
string name;
while(!a.eof()){getline(a,name);name.clear();i++;}
a.close();return i;
}
int main()
{	doc sv;
	int hocphan;cout<<"nhap so hoc phan ";cin>>hocphan;
	ifstream a;
	ifstream b;
	int ik=0;ik=coutline();ik=(ik-2)/(hocphan+1);
	int ik1=0;
	char *d;
	b.open("thu.txt",ios_base::in);
	string thu;
	int gd=DETECT,gm;
	initwindow(900,900);
	a.open("locthu.txt",ios_base::in);int i1=0,t;
	string nhap;
//	getline(a,nhap);
	settextstyle(0,0,2);
	setcolor(14);
	for(int i=0;i<7;i++){b>>thu;
	d=(char*)calloc(thu.size()+1,sizeof(char));
	const char *q=thu.c_str();
	for(int k=0;k<thu.size();k++)
	d[k]=q[k];
//	cout<<"noi dung cua chuoi d "<<d;
	outtextxy(130*i,50,d);free(d);}
	for(int i=0;i<10;i++){
	b>>thu;
	d=(char *)calloc(thu.size()+1,sizeof(char));
	const char *q1=thu.c_str();
	for(int k=0;k<thu.size()+1;k++)
	d[k]=q1[k];
	outtextxy(10,50*(i+2),d);free(d);
	}									//giao dien
	
	
	ifstream c;							//xong b: thu		a:loc thu
	c.open("sosanh.txt",ios_base::in);string nhap1;int a1;getline(a,nhap); char k2;	//doc dau xuong hang
	getline(a,nhap);			//loc bo phan dau locthu
	while(1){xoa();
	for(int i=0;i<hocphan;i++)
	{a.seekg(0,ios_base::cur);sv.hocphan.clear();sv.thu.clear();
	a>>sv.hocphan;a>>sv.ma;a>>sv.thu;a>>sv.sotiet;a>>sv.tietbd; 
	c.seekg(0,ios_base::beg);
	for(int t1=0;t1<6;t1++){		//chuyen thu chu thanh so de so sanh
	c>>nhap1;c>>a1;				//nhap doc chu, a1 doc so
	if(sv.thu.compare(nhap1)==0)
	t1=6;
	} d=(char *)calloc(sv.hocphan.size()+5,sizeof(char));
	const char *q2=sv.hocphan.c_str();
	for(int i=0;i<sv.hocphan.size();i++)
	d[i]=q2[i];
	strcat(d,"-");strcat(d,sv.ma);cout<<endl<<d;
	for(int z=0;z<sv.sotiet;z++){
	
		outtextxy(130*(a1-1),50*(sv.tietbd+2+z),d);
		};
	free(d);i1++;}delay(2);ik1++;
	if(ik1!=ik)
	{a>>nhap;cout<<"nhan phim bat ky de tip ";k2=getche();}
	else	{setcolor(13);outtextxy(600,700,"het");cout<<"end";k2=getche();break;}
	}
//	while(!a.eof())
//	{	if(!a.eof())   {
//		a>>sv.stt;if(a.stt==0)break;a>>sv.ma;
//		a>>sv.thu;a>>sv.sotiet;
//		a>>sv.tietbd;  }
//	}bad()
closegraph();
c.close();
	b.close();
	a.close();
}
//sv.ma doi sang hocphan va ma sau so thiet lap cho no doc den het file tu chuyen sang tkb sau 5 s
//cho nguoi nhap lua chon bam dung xem tkb lun
