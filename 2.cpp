#include<iostream>
using namespace std;
class Banking{
		public:
			int accountnum;
			char accountname[25];
			char accounttype[25];	
			char accountbranch[25];
			int accountbal;
			int *bank[];
			void SetValues(){
				cout<<"Enter Account Number : ";
				cin>>accountnum;
				bank=accountnum;
				cout<<"Enter Account Holder Name : ";
				cin>>accountname;
				cout<<"Enter Account Type : ";
				cin>>accounttype;
				cout<<"Enter Branch of the Account : ";
				cin>>accountbranch;
				cout<<"Enter Account Balance : ";
				cin>>accountbal;
			}
			void GetValues(){
				cout<<" The Account Number is : "<<accountnum<<endl;
				cout<<" The Account Holder is : "<<accountname<<endl;
				cout<<" The Account Type is : "<<accounttype<<endl;
				cout<<" The Account Branch is : "<<accountbranch<<endl;
				cout<<" Total Account Balance is : "<<accountbal<<endl;
			}
};

int main(){
	cout<<"|-----------------------------------------------------------|"<<endl;
	cout<<"\t\t~Banking Management System~"<<endl;
	cout<<"|-----------------------------------------------------------|"<<endl;
	int n,i;
	cout<<"Enter Number of Details You want to Enter : ";
	cin>>n;
	Banking b[n];
	int usernum[n];
	for(i=1;i<=n;i++){
		cout<<"Enter Values for User "<<i<<endl;
		b[i].SetValues();
	}
	for(i=1;i<=n;i++){
		cout<<"User Details : "<<endl;
		b[i].GetValues();
	}
	void FindValue(){
			cout<<"Enter the User Account Number you want to Search : ";
			cin>>usernum;
			if(usernum[i]==bank[i]){
				cout<<"  Account Number : "<<b[i].accountnum<<endl;
				cout<<"  Account Holder is : "<<b[i].accountname<<endl;
				cout<<"  Account Type is : "<<b[i].accounttype<<endl;
				cout<<"  Account Branch is : "<<b[i].accountbal<<endl;
				cout<<"  Account Balance is : "<<b[i].accountbal<<endl;
			}else{
				cout<<" No Such Account Number in System .."<<endl;
			}
		}
	return 0;
}
