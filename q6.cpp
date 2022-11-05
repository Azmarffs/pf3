#include<iostream>  /*NAME: Azmar Kashif SECTION: B ROLL NO: i222716*/
using namespace std;
int num1, num2, num3;
double strict(){
    cout<<"Enter 3 number"<<endl;
    cin>>num1>>num2>>num3; //entering 3 numbers
    if(num1<num2<num3){ //checking if the numbers are in increasing order
        cout<<"The numbers are in increasing order"<<endl;
    }else if(!(num1>num2>num3)){ //checking if the numbers are in decreasing order
        cout<<"The numbers are in decreasing order"<<endl;
    }else{
        cout<<"INVALID"<<endl;
    }
}   


double lenient(){       
    cout<<"Enter 3 number"<<endl;
    cin>>num1>>num2>>num3;
    if(num1<=num3<=num3){  
        cout<<"The numbers are in decreasing order"<<endl;
    }     
    else if(num1<=num2<=num3){
        cout<<"The numbers are in decreasing order"<<endl;
    }
}
int main(){
    int choice; 
    cout<<"Whether Increasing or Decreasing should be \n1.STRICT: \n2.LINIENT: "<<endl; //asking choice
    cin>>choice;
    if(choice==1){
        strict(); //calling function 
    }
    else if(choice==2){

        lenient(); //calling function
    }
}