//The solution of the problem POSPROD is given below. The solution correct although it faces TLE for the subtask #4 and #5.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test=0;
	cin>>test;
	while(test--){
	    int length=0, count=0;
	    cin>>length;
	    int arr[length];
	    for(int i = 0; i < length; i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i = 0; i < length; i++)
	    {
	        for(int j = 1; j < length; j++){
	            
	            if(arr[j]*arr[i]>0 && i<j){
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
