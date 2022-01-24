#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
	};

struct Node *head, *tail = NULL;

void add(int data){

	struct Node *newNode =  (struct Node *)malloc(sizeof(struct Node));
	
	newNode->data=data;
	newNode->next=NULL;
	
	if(head==NULL)
	{
		head=newNode;
		tail=newNode;
	}
	
	else
	{
		tail->next=newNode;
		tail=newNode;
	}
}
void display(){

	struct Node *current=head;
	
	if (head==NULL)
	{
		cout<<"list is empty";
	
	return;
	}
	else
	cout<<"the linked list is :\n";
	
	while (current != NULL)
	{
		cout<<current->data;
		current=current->next;
	}
}

int main(){

	add(8);
	add(9);
	add(8);
	add(3);
	add(8);
	add(9);
	add(9);
	add(8);
	add(3);
	add(0);
	//add(8);
	display();
	
	return 0;
}

