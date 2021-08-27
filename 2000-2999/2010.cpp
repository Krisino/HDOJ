#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,n,i,count;
	while(cin>>m>>n){
		if(m>n)
			swap(m,n);
		count = 0;
		for(i = m;i<=n;i++){
			if(pow(i/100,3)+pow(i/10%10,3)+pow(i%10,3) == i){
				if(count){
					cout << " ";
				}
				count++;
				cout << i;	
			}
		}
			if(!count){
				cout << "no";
			}
			cout << endl;
			
		}
	return 0;
}

