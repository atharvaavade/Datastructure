#include<iostream>
#include<stack>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	int n ,query_value,query_type;
	string query_line;
	stack<int> s,maxtracker;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		getline(cin,query_line);
		istringstream ss(query_line);
		ss >> query_type >> query_value;
		switch(query_type)
		{
			case 1:
				s.push(query_value);
				if(maxtracker.empty()||maxtracker.top()<=query_value)
				{
					maxtracker.push(query_value);

				}break;
			case 2:
				if(s.top()==maxtracker.top())
				{
					
					maxtracker.pop();
				}
				s.pop();
				break;
			default:
				cout<<"the current maximum element in stack is"<<maxtracker.top() <<endl;
		}
	}
			
	return 0;
}
			
			
			
			
			
