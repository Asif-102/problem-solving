#include <iostream>
using namespace std;

int main(){
	int num,mod,reverse=0;
	
	cin >> num;
	
	while(num > 0){
		
		mod = num % 10;
		reverse = reverse*10 + mod;
		num = num / 10;
	}
	
	//cout << reverse  <<endl;
	
	for(reverse; reverse > 0; reverse=reverse/10){
		
		mod = reverse % 10;
		cout << mod << endl;	
	}
	
	return 0;
	
}
