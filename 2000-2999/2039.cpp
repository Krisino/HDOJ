#include<iostream>
using namespace std;
int main(){
	int n;
	double a,b,c;
	cin >> n;
	while(n--){
		cin>>a>>b>>c;
		if((a+b-c>0)&&(a+c-b>0)&&(b+c-a>0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

