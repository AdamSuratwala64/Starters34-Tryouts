#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test=0;
	cin>>test;
	while(test--){
	    int a=0,b=0,c=0,d=0;
	    cin>>a>>b;
	    cin>>c>>d;
	    if(c>=a&&d>=b){
	        cout<<"POSSIBLE"<<endl;
	    }
	    else if((c<a&&d>=b)||(c<a&&d<b)||(c>=a&&d<b)){
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	}
	return 0;
}
