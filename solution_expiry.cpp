#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test=0;
	cin>>test;
	while(test--){
	    int n=0, m=0, k=0;
	    cin>>n>>m>>k;
	    if(k*m>=n){
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
