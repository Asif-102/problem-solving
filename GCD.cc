#include <iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(a<b){
			int c=a;
			a=b;
			b=c;
		}
	while(a!=b){
			if(b==0){
					break;
				}
			else if(a>b){
					a=a-b;
				}
			else if(b>a){
					b=b-a;
				}
		}
		cout<<"GCD is: "<<a;
		
	return 0;
}
