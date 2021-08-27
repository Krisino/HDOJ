#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n){
		if(n<0||n>100){
			cout << "Score is error!" << endl;
		}
		else{
			n = n/10;
			switch(n){
				case 10:cout<<"A"<<endl;break;
				case 9:cout<<"A"<<endl;break;
				case 8:cout<<"B"<<endl;break;
				case 7:cout<<"C"<<endl;break;
				case 6:cout<<"D"<<endl;break;
				default:cout<<"E"<<endl;break;
			}
		}
	}
	return 0;
}

