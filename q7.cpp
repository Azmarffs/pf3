#include<iostream>
using namespace std;
double gb;
char choice;
int newPrice;
double totalAmountDue;
int originalPrice;
double additionalGbUsed;
int savings;
void packageA(char choice, double totalAmountDue){
    int oldPrice=100;
    switch(choice){
        case 'A':
        cout<<"You have selected PACKAGE A\n";
        if(gb<=2){
            cout<<oldPrice<<endl;
            savings=20-10; //as per additional charges
            cout<<"You would have saved RS " << savings << " as per 100 additional charges if you chose PACKAGE B"<<endl;
            cout<<"You would have got unlimited access without any additional charges if you chose PACKAGE C"<<endl;

        }
        else if(gb>2){
            
            newPrice=oldPrice+30;
            cout<<"Your total amount is "<<"RS " <<newPrice <<" which is as per additional 100 MB"<<endl;
            cout<<"You would have saved RS " << savings << " as per 100 additional charges if you chose PACKAGE B"<<endl;
            cout<<"You would have got unlimited access without any additional charges if you chose PACKAGE C"<<endl;
        }
        else{
            cout<<"ERROR! Please rerun the program\n";
        }
}
}
void packageB(char choice, double totalAmountDue){
    int oldPrice=250;
    switch(choice){
        case 'B':
        cout<<"You have selected PACKAGE B\n";
        if(gb<=5.5){
            cout<<oldPrice<<endl;
             //as per additional charge
            cout<<"You would have saved Rs " << 250-100 << "if u chose PACKAGE A"<<endl; 
            cout<<"You would have got unlimited access without any additional charges if you chose PACKAGE C"<<endl;

        }
        else if(gb>2){
            
            newPrice=250+20;
            cout<<"Your total amount is " << "RS " <<newPrice <<" which is as per additional 100 MB";
            cout<<"You would have saved Rs " << 250-100 << "if u chose PACKAGE A"<<endl; 
            cout<<"You would have got unlimited access without any additional charges if you chose PACKAGE C"<<endl;
        }
        else{
            cout<<"ERROR! Please rerun the program\n";
        }
    }
}
void packageC(char choice, double totalAmountDue){
    int oldPrice=1000;
    switch(choice){
        case 'C':
        cout<<"You have selected PACKAGE C\n"<<endl;
        cout<<"You have unlimited access on this package\n"<<endl;
        cout<<"Your total amount is RS "<<oldPrice<<endl;
     //as per additional charges
        cout<<"You would have saved RS " << 1000-100 << " as per 100 additional charges if you chose PACKAGE A"<<endl;
        cout<<"You would have saved RS " << 1000-250 << " as per 100 additional charges if you chose PACKAGE B"<<endl;

    }
}
int main(){
    cout<<"PACKAGE A: RS100 per month, 2 GB is provided, Additional data for RS30 per 100MB\n";
    cout<<"PACKAGE B: RS250 per month, 5.5 GB is provided, Additional data for RS20 per 100MB\n";
    cout<<"PACKAGE C: RS1000 per month, unlimited access is provided\n";
    cout<<"Which package from the following you've subscribed for?"<<endl;
    cin>>choice;
    cout<<"Enter how much gb u have used during the month?\n";
    cin>>gb;
    // cout<<"Enter how much additional gb you have used\n";
    // cin>>additionalGbUsed;
    packageA(choice, gb);
    packageB(choice, gb);
    packageC(choice, gb);
}

