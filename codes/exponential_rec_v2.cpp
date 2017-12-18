#include <stdio.h>
#include <iostream>

using namespace std;
int Raise(int base, int exp) {
	if(exp == 0)
		return 1;
	else{
		int half = Raise(base, exp/2);
		if(exp%2 == 0)
			return half * half;
		else
			return half * half * base;
	}	
		
}

int main(){
	cout<<Raise(2, 6)<<endl;

}