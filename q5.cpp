#include<iostream> /*NAME: AzmarKashif SECTION: B ROLL NO: i222716*/
#include<string>
using namespace std;
void carSpecs();
int main()
{
	carSpecs(); //calling function in main
	return 0;
}
void carSpecs()
{
	int price;
	int budget; 
	int ft;
	int ftnum;
	string tax;
	string addfeat;
	string ans;
	string fts;
	string ctype;
	cout<<"Enter your budget: "; //asking user to enter his/her budget
	cin>>budget;
	cout<<"Do u want filer or non filer: "; //asking if he wants filer || non filer
	cin>>tax;
	tax=="filer"?price=price+25000:price=price+75000;     
	cout<<price;
	cout<<"\nDo u prefer Automatic or Manual: "; //asking if he wants auto or manual
	cin>>ctype;
	ctype=="Automatic"?price=price+3899000:price=price+3769000;
	cout<<"\nDo you want additional features: "; //now Asking for more additional features
	cin>>addfeat;
	addfeat=="yes"?cout<<"1.Infotainment System            With navigation system        59,500\n                               Without navigation system     8,000\n2.Fog Lights                     Halogen                       2,000\n                               LED                           5,000\n3.High grade Interior            Leather Seats                 45,000\n                               Sofa Seats                    25,000\n4.Floor Mats                                                   6,0000\n5.Door visors                                                  6,0000\n6.Trunk Tray                                                   8,500":cout<<"no";
	if(addfeat=="yes"){
	cout<<"\nEnter the feature you want: ";
	cin>>ft;
	if(ft>=1&&ft<=6) //asking for features user want 
	{
	if(ft==1){
		cout<<"with or without navigation: ";
		cin>>ans;
		ans=="with"?price=price+59500:price=price+8000;
	}
    cout<<"\nDo you want more features: "; //asking if user wants more features
    cin>>fts;
	if(ft==2){
		cout<<"halogen or LED";
		cin>>ans;
		ans=="halogen"?price=price+2000:price=price+5000;
	}
    cout<<"\nDo you want more features: ";	//asking if user wants more features
    cin>>fts;
	if(ft==3){
		cout<<"leather seats or sofa seats: ";
		cin>>ans;
		ans=="leather seats"?price=price+45000:price=price+25000;
	}
    cout<<"\nDo you want more features: ";	//asking if user wants more features
    cin>>fts;
	if(ft==4){
		price=price+60000;
    }
    cout<<"\nDo you want more features: ";	//asking if user wants more features
    cin>>fts;
	if(ft==5){
		price=price+60000;
    }
    cout<<"\nDo you want more features: ";	//asking if user wants more features
    cin>>fts;
	if(ft==6){
		price=price+8500;
	}
	
	cout<<"Do you want more features: ";   //asking if user wants more features
	cin>>fts;
	if(fts=="yes"){
		cout<<"Enter feature number: "; 
		cin>>ftnum;
		if(ftnum==ft)
			cout<<"previously added in price";
		}
	if(fts=="yes"){
		if(ftnum!=ft)
		{
			if(ftnum==1){
		cout<<"with or without navigation: ";
		cin>>ans;
		ans=="with"?price=price+59500:price=price+8000;
		}
		
		if(ftnum==2){
			cout<<"halogen or LED";
			cin>>ans;
			ans=="halogen"?price=price+2000:price=price+5000;
		}
		if(ftnum==3){
			cout<<"leather seats or sofa seats: ";
			cin>>ans;
			ans=="leather seats"?price=price+45000:price=price+25000;
		}
		if(ftnum==4)
			price=price+60000;
		if(ftnum==5)
			price=price+60000;
		if(ftnum==6)
			price=price+8500;
		}
	}
	}
	if(budget>price)
	{
		cout<<"You have a good taste, go for it!\n";
		cout<<"price is: "<<price;
	}
	if(price>budget)
	{
		cout<<"Sorry! You don't afford it.";
		cout<<"\nprice is: "<<price;
	}
	
	}
}
