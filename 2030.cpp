#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin >> n;
	getchar();
	while(n--){
		string s;
		getline(cin,s);
		int len = s.length(),count = 0;
		for(int i = 0;i<len;i++){
			if(s[i]<0) count ++;
		}
		cout << count/2 << endl;
	}
	return 0;
}

