#include<iostream>
using namespace std;
int main(){
	int n,sum;
	while(cin>>n){
		//consider overflow
		if(n%2 == 0)
			sum = n/2*(n+1);
		else
			sum = (n+1)/2*n;
		cout << sum << endl << endl; 
	}
	return 0;
}
