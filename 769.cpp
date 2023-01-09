#include <iostream>
#include <math.h>

using namespace std;


int main(){
   double r, o, c, pts = 0;
   cin>>r>>o>>c;
   
   pts = ((20 - o) * 36) + c;
   if(pts > r){
   	cout<<"yes"<<endl;
   }else{
   	cout<<"no"<<endl;
   }
return 0;	
}
