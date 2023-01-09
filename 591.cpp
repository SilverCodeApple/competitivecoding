#include <iostream>


using namespace std;


int main(){
	int t,
	 x, y, z;
	
	cin >> t;
	while(t--){
		cin>>x>>y>>z;
		
		if((z%x == 0) and (z%y != 0)){
			cout<<"chicken"<<endl;
		}if(z%x == 0 and z%y == 0){
			cout<<"any"<<endl;
		}
		if((z%y == 0) and (z%x != 0)){
			cout<<"duck"<<endl;
		}if((z%y != 0) and (z%x != 0)){
			cout<<"none"<<endl;
		}
	}


return 0;	
}
