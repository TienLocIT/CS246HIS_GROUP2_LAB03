#include"manager.h"
#include<vector>
#include"menutongmanager.h"
#include<conio.h>
vector<manager>m;
void manager::input(){
	person::input();
	cout<<"ManageID:";
	cin>>manageID;
	cin.ignore();
	cout<<"Dia chi:";
	getline(std::cin,diachi);
	cout<<"Phone:";
	cin>>phone;
}
void manager::output(){
	person::output();
	cout<<"ManageID:"<<manageID<<endl;
	cout<<"Dia chi"<<diachi<<endl;
	cout<<"Phone"<<phone<<endl;
	cout<<"NHan nut bat ky de tiep tuc!!";
	getch();
}
void manager::nhap(){
	manager m1;
	m1.input();
	m.push_back(m1);
}
void manager::xuat(){
	manager m2=m[0];
	m[0].output();
}
void manager::function(){
menumanager();
}
