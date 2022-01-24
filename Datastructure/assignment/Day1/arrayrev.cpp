#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n =4; 
	int arr[]={5 ,6, 7, 8};
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	cout<<"\n";
	for(int j=n-1;j!=-1;j--)
	{
		cout<<arr[j];

	}
 return 0;
}
