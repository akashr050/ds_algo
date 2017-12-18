#include<stdio.h>
#include<iostream>
#include <string>

using namespace std;
int Raise(int base, int exp){
	if(exp==0)
		return 1;
	else
		return base * Raise(base, exp -1);
}
int main() {
	cout<<Raise(2, 2)<<endl;
}
