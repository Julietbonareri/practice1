#include <iostream>
#include <string>
int add2Numbers(int a,int b);

using namespace std;

int main(){
add2Numbers(0,0);	
}

add2Numbers(int a,int b){
	cout <<"================================\nWelcome Julie C programs\n================================\n";
	cout << "*** Add 2 integers ***\n";
	cout << "Enter firts value:" <<endl;
	cin>>a;
	cout << "Enter second value:" <<endl;
	cin>>b;
	int sum=a+b;
	cout << "Sum of "<<a  << " and " <<b << "="<<sum;
}
