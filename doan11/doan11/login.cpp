#include"login.h"
#include"menu1.h"
#include"menu3.h"
#include"login.h"
void login1(login &l){
	do{
	cout<<"Username:";
	getline(std::cin,l.username);
	cout<<"Passwor:";
	getline(std::cin,l.password);
	if(l.username!="staff" && l.password !="staff"){
		cout<<"Tai khoan va mat khau sai !!"<<endl;
		cout<<"Xin moi nhap lai tai khoan va mat khau!!"<<endl;
		cout<<"Username:";
	    getline(std::cin,l.username);
	    cout<<"Passwor:";
	    getline(std::cin,l.password);
	}
	if(l.username=="staff" && l.password!="staff"){
		cout<<"Mat khau sai!!"<<endl;
		cout<<"Xin moi nhap lai mat khau!!"<<endl;
		cout<<"Passwor:";
	    getline(std::cin,l.password);
	}
	if(l.username!="manager" && l.password!="manager"){
		cout<<"Tai khoan va mat khau sai !!"<<endl;
		cout<<"Xin moi nhap lai tai khoan va mat khau!!"<<endl;
		cout<<"Username:";
	    getline(std::cin,l.username);
	    cout<<"Passwor:";
	    getline(std::cin,l.password);
	}
	if(l.username=="manager" && l.password!="manager"){
		cout<<"Mat khau sai!!"<<endl;
		cout<<"Xin moi nhap lai mat khau!!"<<endl;
		cout<<"Passwor:";
	    getline(std::cin,l.password);
	}
	}while(1);
	if(l.username=="staff" && l.password=="staff"){
		menu1();
	}
	if(l.username=="manager" && l.password=="manager"){
		menu3();
	}
}
