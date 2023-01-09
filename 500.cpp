#include <iostream>


using namespace std;


int main(){
	double n = 0,
	x , 
	y ,
	z ;
	cin >> n;
	while(n--){
		cin>>x>>y>>z;
		
		if((x+y)/2 > z){
			cout<<"YES"<<endl; 
		}else{
			cout<<"NO"<<endl;
		}
	}

return 0;	
}
