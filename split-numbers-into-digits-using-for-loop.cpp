#include <iostream>
using namespace std;

int main(){
	int num, mod;
	
	cin >> num;
	
	for(num; num>0; num=num/10){
		mod = num%10;
		cout << mod << endl;
	}
	
	return 0;
}
