#include<iostream>

using namespace std;

int main(){
	char ch;
	cin>>ch;
	if (ch == '%' || ch == '/' || ch == '*' || ch == '+' || ch == '-') {
		cout<<"Given input is operator\n";
	}
	else{
		cout<<"Given input is not operator\n";
	}
}