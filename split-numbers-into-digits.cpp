#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	while(num > 0){
		int mod = num % 10;
		cout << mod << endl;
		num = num / 10;
	}
	return 0;
}
