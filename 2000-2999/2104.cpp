#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a<b) swap(a,b);
	return b == 0? a:gcd(b,a%b);
}
int main(){
 int m, n, r;
    while(cin>>m>>n){
    	if(m == -1&&n==-1)
    		break;
    	r = gcd(m,n);
    	if(r == 1)
    		cout << "YES" << endl;
		else
			cout << "POOR Haha" << endl;
	}
	return 0;
}

