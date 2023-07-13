#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a*2+b>c*2+d){
	    cout<<"Messi"<<endl;
	}
	else if(c*2+d>a*2+b){
	    cout<<"Ronaldo"<<endl;
	}
	else{
	    cout<<"Equal"<<endl;
	}
	return 0;
}