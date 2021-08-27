 #include<iostream>
 #include<cstring>
using namespace std;
int main(){
	char s[100];
	int len;
	while(gets(s)!=NULL){
		len = strlen(s);
		for(int i = 0;i<len;i++){
			if(i == 0||s[i-1] == ' ')
				s[i] = s[i]-32;
				cout << s[i];
		}
		cout << endl;
	}
	return 0;
}

