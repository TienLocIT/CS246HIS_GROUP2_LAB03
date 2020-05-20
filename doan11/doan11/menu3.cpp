#include"menu3.h"
#include"menutongmanager.h"
#include"manager.h"
#include"main.h"
void menu3(){
	manager m;
	while(1){
	system("cls");
	int chon;
	cout<<"1:Nhap thong tin quan ly"<<endl;
	cout<<"2:Xuat thong tin quan ly"<<endl;
	cout<<"3:Chuc nang cua quan ly"<<endl;
	cout<<"4:Thoat chuong trinh"<<endl;
	cout<<"5:Quay lai man hinh dang nhap"<<endl;
	cin>>chon;
	cin.ignore();
	system("cls");
	if(chon==1) m.nhap();
	if(chon==2) m.xuat();
	if(chon==3) m.function();
	if(chon==4) exit(0); 
	if(chon==5) main();
	
}
}

