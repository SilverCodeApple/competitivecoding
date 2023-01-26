#include <iostream>

using namespace std;


int main(){
	char array[100];
	int t , n;
	cin >>t;
	while(t--){
		cin>>n;
		cin.ignore(1000 , '\n');
		cin.getline(array , 100, '\n');
		
		cout<<array;
	}
	return 0;
}
