#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test=0;
	cin>>test;
	while(test--){
	    int n = 0, x = 0, units = 0;
	    cin>>n>>x;
	    int arr[n-1];
	    for(int i = 0; i < n-1 ; i++){
	        cin>>arr[i];
	        units += arr[i];
	    }
	    int lifetime_lastbulb = (x*n)-(units);
	    if(lifetime_lastbulb<0){
	        cout<<"0"<<endl;
	    }
	    else if(lifetime_lastbulb>0)
	    {
	        cout<<lifetime_lastbulb<<endl;
	    }
	}
	return 0;
}
