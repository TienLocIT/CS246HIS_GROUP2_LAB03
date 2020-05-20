#include"person.h"
#include <iostream>
using namespace std;
class staff:public person{
	public:
		int staffID;
		string diachi;
		string phone;
		staff();
		void nhapthongtinnhanvien();
		void thongtinnhanvien();
		void nhap();
		void xuat();
		void chinhsuathongtinnhanvien();
		void function();
};
