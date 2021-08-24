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
	
	cout << reverse  <<endl;
	
	return 0;
	
}
