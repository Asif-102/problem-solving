#include <iostream>
using namespace std;
int main(){
		int num, sum=0,add;
		cin >> num;
		while(num > 0){
				add = num % 10;
				sum = sum+add;
				num = num / 10;
			}
		cout << sum;
		return 0;
	}
