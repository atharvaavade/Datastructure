#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};

struct Linklist{
	Node *head;
	Linklist(){
		
		head==NULL;	
	}

void reverse()

{
	 Node *current=head;
	 Node *prev ,*next=NULL;
	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}

void print()
{
	struct Node *temp= head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}	
void push(int data){
	Node *temp  = new Node(data);
	temp->next=head;
	head=temp;
}
};

int main()
{

	Linklist l;
	l.push(1);
	l.push(2);
	l.push(3);
	l.push(4);
	l.push(5);
	
	cout<<"given linklist is\n";
	l.print();
	
	l.reverse();
	
	cout<<"the reversed list is :\n";
	l.print();
	return 0;
}		

