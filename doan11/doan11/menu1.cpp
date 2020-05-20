#include"staff.h"
#include"menu1.h"
#include<conio.h>
#include<stdlib.h>
#include"main.h"
void menu1(){
	staff s;
	while(1){
	system("cls");
	int chon;
	cout<<"1:Nhap thong tin nhan vien"<<endl;
	cout<<"2:Xuat thong tin nhan vien"<<endl;
	cout<<"3:Chuc nang cua nhan vien"<<endl;
	cout<<"4:Thoat chuong trinh"<<endl;
	cout<<"5:Quay lai man hinh dang nhap"<<endl;
	cin>>chon;
	cin.ignore();
	system("cls");
	if(chon==1) s.nhap();
	if(chon==2) s.xuat();
	if(chon==3) s.function();
	if(chon==5) main();
	if(chon==4) exit(0);
	
}
}
