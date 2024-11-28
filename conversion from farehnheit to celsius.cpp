#include<iostream>
using namespace std;
int main(){
	float tempF;
	
	cout<<"Enter the temperature";
	cin>>tempF;
	
	float tempC=(tempF-32)*5/9;
	
	cout<<"The temperature in celsius is "<<tempC;
	
return 0;	
}
