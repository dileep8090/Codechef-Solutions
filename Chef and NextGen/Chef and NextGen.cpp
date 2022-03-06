#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int powneed=a*b;
        int powmoon=x*y;
        if(powmoon>=powneed){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
