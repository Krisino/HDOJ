#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		int len = s.length(),a = 0,b = 0,c = 0,d = 0;
		for(int i = 0;i<len;i++){
			if(s[i]>='A'&&s[i]<='Z') a = 1;
			else if(s[i]>='a'&&s[i]<='z') b = 1;
			else if(s[i]>='0'&&s[i]<='9') c = 1;
			else if(s[i]=='~'||
			s[i]=='!'||s[i]=='@'||
			s[i]=='#'||s[i]=='$'||
			s[i]=='%'||s[i]=='^') d = 1;
		}
		if(len>=8&&len<=16)
		{
		if((a+b+c+d)>=3) cout << "YES" << endl;	
		else cout << "NO" << endl;		
		}
		else cout << "NO" << endl;
	} 
	return 0;
}

