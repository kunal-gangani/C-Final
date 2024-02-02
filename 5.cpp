#include<iostream>
using namespace std;
class Car{
	public:
		char carname[25];
		char brandname[25];
		int release_date;
};
class Porsche : public Car{
	public:
		void CarInfo(){
			cout<<" Enter Car Name : ";
			cin>>carname;
			cout<<" Enter Brand Name : ";
			cin>>brandname;
			cout<<" Enter Releasing Date of the Car : ";
			cin>>release_date;
		}
		void CarDetails(){
			cout<<" Car Name : "<<carname<<endl;
			cout<<" Car Brand : "<<brandname<<endl;
			cout<<" Car Releasing Date : "<<release_date<<endl;
		}
};
class BMW : public Car{
	public: 
		void CarInfo(){
			cout<<" Enter Car Name : ";
			cin>>carname;
			cout<<" Enter Brand Name : ";
			cin>>brandname;
			cout<<" Enter Releasing Date of the Car : ";
			cin>>release_date;
		}
		void CarDetails(){
			cout<<" Car Name : "<<carname<<endl;
			cout<<" Car Brand : "<<brandname<<endl;
			cout<<" Car Releasing Date : "<<release_date<<endl;
		}
};
class Comparison : public Porsche , public BMW{
	public:
		void Compare(){
			cout<<" The Details of Both Cars : "<<endl;
		}
};
int main(){
	Comparison c;
	c.Compare();
	c.Porsche::CarInfo();
	c.BMW::CarInfo();
	c.Porsche::CarDetails();
	c.BMW::CarDetails();
	return 0;
}
