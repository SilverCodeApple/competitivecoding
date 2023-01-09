#include <iostream>


using namespace std;


int main(){
	int n = 0, amigos = 0, precio = 0;
	
	cin >> n;
	while(n--){
	    cin >>amigos>>precio;
	    if(amigos % 6 == 0){
		cout<<(amigos/6)*precio<<endl;
		}
	    else{
	    	cout<<(amigos/6) + 1) * precio<<endl;
		}
	}

return 0;	
}
