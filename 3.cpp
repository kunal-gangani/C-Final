/*
3. Give an example which shows Exception handling of division by zero exception.
*/
#include<iostream>
using namespace std;
class Zero{
		double num1;
		double num2;
		public:
		void TakeValues(){
			cout<<"Enter Value for Number 1 : ";
			cin>>num1;
			cout<<"Enter Value for Number 2 : ";
			cin>>num2;
		}
		void Validify(){
			try{
				if(num2!=0){
					cout<<num1<<" / "<<num2;
					cout<<" is : "<<num1/num2<<endl;
				}else{
					throw 1;
				}
			}
			catch(int x){
				cout<<" No Digit can be Divided by Number Zero !!! "<<endl;
			}
		}
};
int main(){
	Zero z;
	z.TakeValues();
	z.Validify();
	return 0;
}
