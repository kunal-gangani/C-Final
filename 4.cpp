/*
4. Write a Program which illustrates Method Overriding by using three classes.
*/
#include<iostream>
using namespace std;
class Calc{
	public:
		int num1;
		int num2;
		void Input(){
			cout<<" Enter Num 1 : ";
			cin>>num1;
			cout<<" Enter Num 2 : ";
			cin>>num2;
		}
		void Sum(){
			cout<<"The Sum of Number 1 and Number 2 is : "<<num1+num2<<endl;
		}
};
class Sum2 : public Calc{
	public:
		int num3;
		void Input2(){
			cout<<" Enter Num 3 : ";
			cin>>num3;
		}
		void Sum(){
				cout<<"The Sum of Number 1 , Number 2 and Number 3 is : "<<num1+num2+num3<<endl;
		}
};
class Sum3 : public Calc , public Sum2{
	public:
		int num4;
		void Input3(){
			cout<<" Enter Num 4 : ";
			cin>>num4;
		}
		void Sum(){
				cout<<"The Sum of Number 1 , Number 2 , Number 3 And Number 4 is : "<<num1+num2+num3+num4<<endl;
		}
};
int main(){
	Sum3 s;
	s.Input();
	s.Calc::Input();
	s.Input2();
	s.Sum2::Sum();
	s.Input3();
	s.Sum3::Sum();
	return 0;
	
}
