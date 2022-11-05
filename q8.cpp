#include<iostream>  /*NAME: Azmar Kashif SECTION: B ROLL NO: i222716*/
#include<string>
using namespace std;
char city;
void name(string name){ //making name function
    cout<<"CONGRATULATIONS "<<name<<endl;    
}
void DOB(int year){ //making year function
    if(year<22){ //checking if user is younger than 22
        cout<<"You are eligible for the discount of 50%"<<endl;
    }
}
void inCome(float income){ //making income function

    if(income<10000){ //checking if income is less than 10000
        cout<<"You got a discount of 90%" <<endl;
    }
}
void postalCode(string postalcode){ //making postalcode function to check for city
    if(postalcode== "4532"){
        cout<<"You belong to City A"<<endl;
        cout<<"You are eligible for the discount of 20%"<<endl;
        if(postalcode== "53344" || postalcode=="54533"){
            cout<<"You belong to City B"<<endl;
            cout<<"You are eligible for the discount of 20%"<<endl;
        }
    }
}




int main(){
    string nam, postalcode;
    int year, month, day;
    float income;
    char city;
    cout<<"********DISCOUNTED TICKETS OFFER**********"<<endl;
    cout<<"What is you name?" <<endl;
    cin>>nam;
    cout<<"How old are you in terms of year? DD/MM/YY "<<endl;
    cin>>day>>month>>year; //asking for age 
    cout<<"Enter Your income in a month" <<endl;
    cin>>income;
    cout<<"If you belong to city:\n "<<endl
        <<"A: Enter postal code 4532\n"
        <<"B: Enter postal code in 53344 or 54533\n";
    cin>>postalcode;
    name(nam);
    DOB(year);          //calling functions
    inCome(income);
    postalCode(postalcode);
}