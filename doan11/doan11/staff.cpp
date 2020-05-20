#include"staff.h"
#include"menu.h"
#include<conio.h>
#include<vector>
vector<staff>r;
staff::staff(){
	this->staffID=0;
	this->diachi=" ";
	this->phone=" ";
}
void staff::nhapthongtinnhanvien(){
	    system("cls");
		person::input();
		cout<<"StaffID"<<endl;
		cin>>staffID;
		cin.ignore();
		cout<<"Dia chi:"<<endl;
		getline(std::cin,diachi);
		cout<<"Phone:";
		cin>>phone;	
}
void staff::thongtinnhanvien(){
	system("cls");
	person::output();
	cout<<"StaffID:"<<staffID<<endl;
	cout<<"Dia chi:"<<diachi<<endl;
	cout<<"Phone:"<<phone<<endl;
	cout<<"NHan nut bat ky de tiep tuc!!";
	getch();
}
void staff::nhap(){
	staff s1;
	s1.nhapthongtinnhanvien();
	r.push_back(s1);
}
void staff::xuat(){
	staff s2=r[0];
	r[0].thongtinnhanvien();
}
void staff::function(){
	menu();
}

