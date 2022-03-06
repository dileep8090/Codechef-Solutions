#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int X,A,B;
        cin>>X>>A>>B;
        int D=(A + 2*B);
        if(D>=X){
            cout<<"Qualify";
        }
        else{
            cout<<"NotQualify";
        }
        cout<<endl;
    }
    
	// your code goes here
	return 0;
}
