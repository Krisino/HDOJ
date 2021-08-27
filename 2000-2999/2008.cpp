#include<iostream>
using namespace std;
int main(){
	int n,neg,zero,pos;
	double tmp;
	while(cin>>n){
		if(n == 0)
			break;
		neg = 0;
		zero = 0;
		pos = 0;
		while(n--){
			cin >> tmp;
			if(tmp<0)
				neg++;
			else if(tmp == 0)
				zero++;
			else
				pos++;
		}
		cout << neg << " " << zero << " " << pos << endl;
	}
	return 0;
}

