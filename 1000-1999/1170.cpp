#include<iostream>
using namespace std;
int main(){
	char op;
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> op >> a >> b;
		switch(op){
			case '+':cout << a + b << endl;break;
			case '-':cout << a - b << endl;break;
			case '*':cout << a * b << endl;break;
			case '/':
				if(a%b == 0)
				cout << a / b << endl;
				else
				printf("%.2lf\n",(double)a/b*100/100);
				break;
		}
	} 
	return 0;
}

