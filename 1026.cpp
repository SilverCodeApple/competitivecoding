#include <iostream>
#include <string>
using namespace std;
int main() {
    int t, n , x;
    cin >> t;
    while(t--){
    	cin >> n >> x;
    	if((x%2 != 0 and ((n-x)/2)%2 != 0){
    		cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
			
		}
    	
	}
    return 0;
}
