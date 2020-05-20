#include"xeoto.h"
#include<vector>
#include"menustaff1.h"
#include<conio.h>
#include"menutongmanager.h"
#include<sstream>
#include<string>
#include<ctime>
vector<xeoto>x;
void xeoto::nhap(){
	time_t baygio=time(0);
	tm *ltm = localtime(&baygio);
	int gio,phut,giay;
	int ngay,thang ,nam;
	string gio1,phut1,giay1,ngay1,thang1,nam1;
	gio=ltm->tm_hour;
	phut=ltm->tm_min;
	giay=ltm->tm_sec;
	ngay=ltm->tm_mday;
	thang=1+ltm->tm_mon;
	nam=1900+ltm->tm_year;
	ostringstream convert1;   
	ostringstream convert2;   
	ostringstream convert3;   
	ostringstream convert4;   
	ostringstream convert5;   
	ostringstream convert6;   
	convert1<<gio;
	gio1=convert1.str();
	convert2<<phut;
	phut1=convert2.str();
	convert3<<giay;
	giay1=convert3.str();
	convert4<<ngay;
	ngay1=convert4.str();
	convert5<<thang;
	thang1=convert5.str();
	convert6<<nam;
	nam1=convert6.str();
	ngayguixe="";
	ngayguixe+=ngay1;
	ngayguixe+="/";
	ngayguixe+=thang1;
	ngayguixe+="/";
	ngayguixe+=nam1;
	giovao="";
	giovao+=gio1;
	giovao+=":";
	giovao+=phut1;
	giovao+=":";
	giovao+=giay1;
	cout<<"Bien so xe:";
	cin>>biensoxe;
	cin.ignore();
	cout<<"Ten xe:";
	getline(std::cin,tenxe);
	cout<<"Nhan nut bat ki de tiep tuc!!";
	getch();
}
void xeoto::xuat(){
	cout<<"Bien so xe:"<<biensoxe<<endl;
	cout<<"Ten xe:"<<tenxe<<endl;
	cout<<"Ngay gui xe:"<<ngayguixe<<endl;
	cout<<"Gio vao:"<<giovao<<endl;
	cout<<endl;
}
void xeoto::nhapxeoto(){
	xeoto x1;
	x1.nhap();
	x.push_back(x1);
}
void xeoto::nhapxeoto2(){
	while(1){
	system("cls");
	int chon;
	cout<<"1:Nhap thong tin"<<endl;
	cout<<"2:Quay lai"<<endl;
	cin>>chon;
	system("cls");
	if(chon==1) nhapxeoto();
	if(chon==2) menuxeoto(); 
}
}
void xeoto::outputlist(){
	for(int i=0;i<x.size();i++){
		cout<<"STT:"<<i+1<<endl;
		xeoto tam=x[i];
		tam.xuat();
	}
    cout<<"Nhan nut bat ky de tiep tuc";
    getch();
}
void xeoto::nhapxeoto1(){
	while(1){
		int chon;
		cout<<"1:Nhap thong tin xe vao:"<<endl;
		cout<<"2:Quay lai"<<endl;
		cin>>chon;
		if(chon==1) nhapxeoto();
		if(chon==2) menuxeoto();
	}
	
}
void xeoto::kiemtrachotrong(){
	if(x.size()<2) cout<<"con cho!!"<<endl;
	else cout<<"Het cho!!";
	cout<<"Nhan phiim bat ky de tiep tuc";
	getch();
}
void xeoto::timkiem(){
	while(1){
	int chon;
	cout<<"1:Tim kiem thong tin xe"<<endl;
	cout<<"2:Quay lai"<<endl;
	cin>>chon;
	system("cls");
	if(chon==1){
	string j;
	cout<<"Nhap ma xe can tim:";
	cin>>j;
	if(timkiem1(j)==0){
		cout<<"Khong co xe can tim trog nha xe!!";
		cout<<"Nhan phim bat ky de tiep tuc"<<endl;
	getch();
	system("cls");
    }
    else 
    for(int i=0;i<x.size();i++){
	if(x[i].biensoxe==j){
	xeoto tam=x[i];
	tam.xuat();
	cout<<"Nhan phim bat ky de tiep tuc"<<endl;
	getch();
	system("cls");
       }
     }
   }
   if(chon==2) menuxeoto();
  }
}
int xeoto::timkiem1(string j){
	for(int i=0;i<x.size();i++){
	if(x[i].biensoxe==j){
	return 1;
	break;
}
}
return 0;
}
void xeoto::timkiem2(){
	while(1){
	int chon;
	cout<<"1:Tim kiem thong tin xe"<<endl;
	cout<<"2:Quay lai"<<endl;
	cin>>chon;
	system("cls");
	if(chon==1){
	string j;
	cout<<"Nhap ma xe can tim:";
	cin>>j;
	if(timkiem1(j)==0){
		cout<<"Khong co xe can tim trog nha xe!!";
		cout<<"Nhan phim bat ky de tiep tuc"<<endl;
	getch();
	system("cls");
    }
    else 
    for(int i=0;i<x.size();i++){
	if(x[i].biensoxe==j){
	xeoto tam=x[i];
	tam.xuat();
	cout<<"Nhan phim bat ky de tiep tuc"<<endl;
	getch();
	system("cls");
       }
     }
   }
   if(chon==2) menuxeoto();
  }
}
void xeoto::xoa(){
	while(1){
	int chon;
	system("cls");
	cout<<"1:Xoa thong tin trong nha xe"<<endl;
	cout<<"2:Quay lai"<<endl;
	cin>>chon;
	system("cls");
    if(chon==1){
    	if(x.size()==0){
    		cout<<"Khong co xe nao trong nha xe"<<endl;
    		cout<<"Nhan nut bat ki de tiep tuc";
    		getch();
		}
		else{
    	string j;
    	cout<<"Nhap ma xe can xoa:";
       cin>>j;
       system("cls");
       if(xoa1(j)==0){
       	cout<<"Khong co xe can xoa trong nha xe"<<endl;
       	cout<<"Nhan nut bat ky de tiep tuc";
       	getch();
	   }
	   else{
	   	int i=0;
       for(int i=0;i<x.size();i++){
        if(x[i].biensoxe==j){
        x.erase(x.begin()+i);
        cout<<"Xoa thanh cong"<<endl;
		cout<<"Nhan nut bat ki de tiep tuc"<<endl;
		getch();
        break;
        	
			}
			i++;
        }
	}
}
}
	if(chon==2) menuxeoto();
}
}
int xeoto::xoa1(string j){
for(int i=0;i<x.size();i++){
	if(x[i].biensoxe==j){
	return 1;
	break;
}
}
return 0;
}	


