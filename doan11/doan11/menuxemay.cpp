#include"menuxemay.h"
#include<stdio.h>
#include<conio.h>
#include"xemay.h"
void menuxemay(){
		while(1){
		system("cls");
		int j;
		cout<<"1:Kiem tra cho trong"<<endl;
		cout<<"2:Nhap xe 1"<<endl;
		cout<<"3:Tim kiem"<<endl;
		cout<<"4:Quay lai"<<endl;
		cin>>j;
		system("cls");
		if(j==1){
        kiemtrachotrongxemay();
		getch();
	}
		if(j==2) nhapxemay();
		if(j==3) timkiem();
		if(j==4) menu();
	}
	system("cls");
}

