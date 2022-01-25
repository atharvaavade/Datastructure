#include<iostream>
using namespace std;
class stack{

	private: 
		int stk [10];
		int top;
	public:
	
		stack()
		{
			int top= -1;
		}
		void push(int a)
		{
			
			if(top==9)
			{
				cout<<"stack full";
				return;
			}
			else
			{
			 	top=top+1;
			 	stk[top]=a;
			}	
			
		
		}
		void pop()
		{	int val;
			if(top==-1)
			{
				cout<<"the stack is empty";
				return;
			}
			else
			{
				val=stk[top];
				stk[top]=NULL;
				top=top-1;
				cout<<"the value popped is"<<val<<endl;
			}
		

		}

		void display()
		{
			if(top==-1)
			{
				cout<<"stack empty";
				return;
			}
			else
				for(int i=top;i>=0;i--)
				{
					cout<<stk[i]<<endl;
				}
		}
};		
int main()
{
	stack s;
	int num,choice;
	char b;
	do{
	cout<<"1-enter the number to push";
	
	cout<<"2-pop stack number";
	
	cout<<"3-display stack";
	
	cout<<"4-exit";
	
	cin>>choice;

switch(choice){

case 1:
	cout<<"enter the number to enter in the stack";
	cin>>num;
	s.push(num);
	break;

case 2:
	s.pop();
	break;

case 3:
	cout<<"the stack is";
	s.display();
	break;

case 4:

	break;
}
	cout<<"do you want to continue";
	cin>>b;
	}while(b=='y'||b=='Y');
	
}
