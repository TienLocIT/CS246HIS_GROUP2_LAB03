#include"menustaff.h"
#include"xemay.h"
#include<conio.h>
#include"menu.h"
void menustaff(){
	xemay x;
	while(1){
	system("cls");
	int chon;
	cout<<"1:Nhap thong tin xe vao:"<<endl;
	cout<<"2:Xuat thong tin xe o trong nha xe"<<endl;
	cout<<"3:Kiem tra cho trong"<<endl;
	cout<<"4:Tim kiem thong tin trong nha xe"<<endl;
	cout<<"5:Xoa xe trong nha xe"<<endl;
	cout<<"6:Quay lai"<<endl;
	cin>>chon;
	system("cls");
	if(chon==1) x.nhapxemay2();
	if(chon==2) x.outputlist();
	if(chon==3) x.kiemtrachotrong();
	if(chon==4) x.timkiem();
	if(chon==5) x.xoa();
	if(chon==6) menu();
}
}
