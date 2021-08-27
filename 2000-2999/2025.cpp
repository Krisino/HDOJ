#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[100];
	while(gets(s)!=NULL){
		int len = strlen(s);
		char max = s[0];
		for(int i = 1;i<len;i++){
			if(s[i]>max)
				max = s[i];
		}
		for(int i = 0;i<len;i++){
			cout << s[i];
			if(s[i] == max){
				cout << "(max)";
			}
		}
		cout << endl;
	}
	return 0;
}

