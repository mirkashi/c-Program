#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	if (num < 1000 && num < 0)
	{
		cout<<"the num is negitive";
	}
	else if(num < 1000 && num%2==0){
		cout << "number is Even";
		
	}
	else if(!(num>1000)){
		cout << "Enter number less then 1000";
	}
	else{
		cout<< "Enter number again";
	}
}