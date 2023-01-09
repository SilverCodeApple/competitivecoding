#include <iostream>
#include <math.h>

using namespace std;


int main(){
   int t, n, x, p, aux = 0;
   
   cin >> t;
   while(t--){
   	cin>>n>>x>>p;
   	aux = x * 3 + (n - x) * -1 ;
   	if(aux == p){
   		cout<<"pass"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
   }
return 0;	
}
