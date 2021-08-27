#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,count;
	string s;
	cin >> n;
	while(n--){
		count = 0;
		cin >> s;
		for(char c:s){
			if(c>='0'&&c<='9')
			count++;
		}
		cout << count << endl;
	}
	return 0;
}

