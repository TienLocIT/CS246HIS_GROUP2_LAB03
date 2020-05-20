#include"menutongmanager.h"
#include<conio.h>
#include<iostream>
#include"menu2.h"
#include"menu3.h"
using namespace std;
string ch;
void writereport(){
	int chon;
	cout<<"Co loi trong qua trinh sap xep:"<<endl;
    cout<<"Nhan 1 de quay lai";
    cin>>chon;
    system("cls");
    if(chon==1) {
    	menumanager();
	}
	
}
void recive(){
	cout<<"Co su co k(Y/N):";
	cin>>ch;
	if(ch=="Y"){
		system("cls");
		int chon;
		cout<<"1:Write report"<<endl;
		cout<<"2;Quay lai"<<endl;
		cin>>chon;
		system("cls");
		if(chon==1) writereport();
		if(chon==2) recive();
	}
	else cout<<"Khong co su co!!"<<endl;
	cout<<"Nhan nut bat ki de quay lai"<<endl;
	getch();
	menumanager();
	
}
void menumanager(){
	while(1){
	system("cls");
	int chon;
	cout<<"1:Tim kiemxe may"<<endl;
	cout<<"2;Tim kiem xe o to"<<endl;
	cout<<"3:Tiep nhan su co"<<endl;
	cout<<"4:Quay lai"<<endl;
	cin>>chon;
	system("cls");
	if(chon==1) timkiemxemay();
	if(chon==2) timkiemxeoto();
	if(chon==3) recive();
	if(chon==4) menu3();
}
}
