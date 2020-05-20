#include"person.h"
person::person(){
	this->ID=0;
	this->name=" ";
}
void person:: input(){
	cout<<"Nhap ID:"<<endl;
	cin>>ID;
	cin.ignore();
	cout<<"Nhap ten:"<<endl;
	getline(std::cin,name);
}
void person::output(){
	cout<<" ID:"<<ID<<endl;
	cout<<" ten:"<<name<<endl;
}

