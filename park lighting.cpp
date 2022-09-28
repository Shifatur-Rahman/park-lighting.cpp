#include <iostream>
#include <cmath>
using namespace std;
int main(){

int t,m,n, res;
cin>>t;

while(t--){
	cin>>m>>n;
	res = (m*n);
	if(res%2==0){
		cout<<res/2<<endl;
	} else{
	    cout<<(res/2)+1<<endl;
	}
}


}
