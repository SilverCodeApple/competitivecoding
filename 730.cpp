#include <iostream>
#include <math.h>

using namespace std;


int main(){
    int t , x1 , y1 , x2 , y2, dif1 = 0, dif2 = 0;
    cin >> t;
    while(t--){
    	cin>>x1>>y1>>x2>>y2;
    	dif1 = round(abs(x1-x2));
    	dif2 = round(abs(y1-y2));
    	
    	if(dif1 > dif2){
    		cout<<dif1<<endl;
		}else{
			cout<<dif2<<endl;
		}
    	
		
	
	}
return 0;	
}
