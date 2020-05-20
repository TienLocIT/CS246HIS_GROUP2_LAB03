#include"menu.h"
#include<iostream>
#include<conio.h>
#include"menustaff.h"
#include"menustaff1.h"
#include"menu1.h"
using namespace std;
void menu(){
	while(1){
	system("cls");
	int chon;
	cout<<"1:xe may"<<endl;
	cout<<"2:xe o to"<<endl;
	cout<<"3:Quay lai"<<endl;
	cin>>chon;
	if(chon==1) menustaff();
	if(chon==2) menuxeoto();
	if(chon==3) menu1();
}
}
