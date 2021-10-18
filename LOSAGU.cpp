#include <iostream>
using namespace std;

int GCD(int x, int y){
		int c;
		if(y>x){
				c=x;
				x=y;
				y=c;
			}
		while(x!=y){
				if(y==0){
						break;
					}
				else if(x>y){
						x=x-y;
					}
				else if(y>x){
						y=y-x;
					}
			}
			return x;
	}

int main(){
		int a,b, locaGU, gosaGU;
		cin >>a>>b;
		gosaGU = GCD(a,b);
		locaGU = (a*b)/gosaGU;
		cout<< locaGU;
		return 0;
	}
