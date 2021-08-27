#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,n,even,odd;
	while(cin>>m>>n){
		if(m>n)
			swap(m,n);
		even = 0;
		odd = 0;
		for(int i = m;i<=n;i++){
			if(i%2 == 0){
				odd+=i*i;
			}
			else
				even+=i*i*i;
		}
		cout << odd << " " << even << endl;
	}
	return 0;
}

