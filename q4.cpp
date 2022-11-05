#include<iostream>  /*NAME:AzmarKashif SECTION: B ROLL NO: i222716*/
#include<string>
using namespace std;
int positive_to_roman(void)
{
	string o1,o2,o3,o4;
	int num,num1,num2,num3,num4;
	char I=1,II=2,III=3,IV=4,V=5,VI=6,VII=7,VIII=8,IX=9,X=10;
	cout<<"\nEnter your positive integer: ";
	cin>>num;
	num1=(num/1000);             //if thousands
	num2=(num/100)%10;           //if hundreds
	num3=((num/10)%100)%10;      //if tens
	num4=((num%1000)%100)%10;    //if unit
	
	if(num>0&&num<=3999)
	{
		if(num1==0)  
		o1=" ";
		if(num1==1) //checking if num is 1000
			o1="M";
		if(num1==2) //checking if num is 2000
			o1="MM";  
		if(num1==3)
			o1="MMM"; //checking if num is 3000
				
				if(num2==0)
		o2=" ";
		if(num2==1)  //checking if number is 100
			o2="C";
		if(num2==2)  //checking if number is 200
			o2="CC";  
		if(num2==3) //checking if number is 300
			o2="CCC";
		if(num2==4) //checking if number is 400
			o2="CD";
		if(num2==5) //checking if number is 500
			o2="D";
		if(num2==6)  //checking if number is 600
			o2="DC";
		if(num2==7) //checking if number is 700
			o2="DCC";
		if(num2==8) //checking if number is 800
			o2="DCCC";
		if(num2==9) //checking if number is 900
			o2="CM";
		
				if(num3==0)
		o3=" ";
		if(num3==1) //checking if number is 10
			o3="X";
		if(num3==2) //checking if number is 20
			o3="XX";
		if(num3==3) //checking if number is 30
			o3="XXX";
		if(num3==4) //checking if number is 40
			o3="XL";
		if(num3==5) //checking if number is 50
			o3="L";
		if(num3==6) //checking if number is 60
			o3="LX";
		if(num3==7) //checking if number is 70
			o3="LXX";
		if(num3==8) //checking if number is 80
			o3="LXXX";
		if(num3==9) //checking if number is 90
			o3="XC";
		
			if(num4==0)
		o4=" ";
		if(num4==1)  //checking if number is 1
			o4="I";
		if(num4==2) //checking if number is 2
			o4="II";
		if(num4==3) //checking if number is 3
			o4="III";
		if(num4==4) //checking if number is 4
			o4="IV";
		if(num4==5) //checking if number is 5
			o4="V";
		if(num4==6) //checking if number is 6
			o4="VI";
		if(num4==7) //checking if number is 7
			o4="VII";
		if(num4==8) //checking if number is 8
			o4="VIII";
		if(num4==9) //checking if number is 9
			o4="IX";
		if(num4==10) //checking if number is 10
			o4="X";
			
	}
	else
		cout<<"invalid"; //if number is not according to information
	
	cout<<o1<<o2<<o3<<o4<<endl;
	
}
int main(){
    positive_to_roman(); //calling function in main
}