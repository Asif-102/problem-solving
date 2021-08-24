#include <iostream>
using namespace std;

int main(){
	int N,X;
	cin >> N >> X;
	
	if(N % X == 0){
		cout << "Yes\n";
	}
	else{
		cout << "No\n";
	}
	
	return 0;
}
