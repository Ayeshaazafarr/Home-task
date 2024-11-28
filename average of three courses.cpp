#include<iostream>

using namespace std;
int main(){
	
	string name;
	int marks1 , marks2 , marks3 ;
	
	cout<<"Enter your name"<<endl;
	cin>>name;
	
	cout<<"Enter marks of 3 courses (out of 100)"<<endl;
	cin>>marks1>>marks2>>marks3;
	
	int average=(marks1+marks2+marks3)/3;
	
	cout<<"The average yours is "<<average<<endl;
	
	
	
	
	
	
	
	return 0;
}
