#include<iostream>
using namespace std;
class DList{

	struct DNode{
		int data;
		DNode *next,*prev;
	};
	DNode *head,*tail;
		public:
		Dlist(){
			head=NULL;tail=NULL;
		}
		void add(int x){
			DNode *t=new DNode;
			t->data=x;
			t->next=head;
			t->prev=NULL;
			if(head!=NULL)
			head->prev=t;
			head=t;
		}
		
		void print(){
			cout<<"\nNoi dung danh sach:\n====>";
			DNode *p=head;
			while(p!=NULL){
				cout<<p->data;
				if(p->next!=NULL)
				cout<<"<-->";else cout<<"-->";
				p=p->next;
			}
			cout<<"NULL\n";
		}
		
};
int main()
{
	DList L;
	L.add(6);
	L.add(3);
	L.add(5);
	L.print();
	return 0;
}
