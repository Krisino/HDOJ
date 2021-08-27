#include<iostream>
using namespace std;
int main(){
	int n,y;
	char x;
	cin >> n;
	while(n--){
		cin >> x >> y;
		if(x>='a'&&x<='z') y -= x-'a'+1;
		if(x>='A'&&x<='Z') y += x-'A'+1;
		cout << y << endl;
	} 
	return 0;
}

