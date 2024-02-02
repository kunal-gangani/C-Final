#include<iostream>
using namespace std;
class Fact{
	public:
		int n;
		void TakeInput(){
			cout<<" Enter N : ";
			cin>>n;
		}
		void Recursion(){
			int mul=1;
			while(n>=1){
				mul=n;
				n=n-1;
				mul*=n;
				cout<<mul<<endl;
				Recursion();
			}
		}
};
int main(){
	Fact f;
	f.TakeInput();
	cout<<endl<<"The Factorial of Number is : "<<endl;
	f.Recursion();
	return 0;
}
