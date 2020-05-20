#include<iostream>
#include"menu1.h"
#include"menu3.h"
#include"main.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	string username;
	string password;
	cout<<"Username:";
	getline(std::cin,username);
	cout<<"Password:";
	getline(std::cin,password);
	while(1){
	if(username=="staff" && password=="staff"){
		menu1();
	}
	if(username=="manager" && password=="manager"){
		menu3();
	}
	if((username!="staff" && password !="staff")||(username!="manager" && password!="manager")){
		cout<<"Tai khoan hoac mat khau sai !!"<<endl;
		cout<<"Xin moi nhap lai tai khoan hoac mat khau!!"<<endl;
		cout<<"Username:";
	    getline(std::cin,username);
	    cin.ignore();
	    cout<<"Password:";
	    getline(std::cin,password);
	}
}
	//if(username!="manager" && password!="manager"){
	//	cout<<"Tai khoan va mat khau sai !!"<<endl;
	//	cout<<"Xin moi nhap lai tai khoan va mat khau!!"<<endl;
	//	cout<<"Username:";
	   // getline(std::cin,username);
	   // cout<<"Passwor:";
	   // getline(std::cin,password);
	//}
	//if(username=="manager"&&password!="manager"){
		//cout<<"Mat khau sai!!"<<endl;
		//cout<<"Xin moi nhap lai mat khau!!"<<endl;
		//cout<<"Passwor:";
	    //getline(std::cin,password);
	//}
	
    return 0;
}
