#include<iostream>
#include<string>
using namespace std;
double value;
string funit, tunit;
void unitConversion(string funit, string tunit);
int main(){

    unitConversion(funit, tunit);
}
void unitConversion(string funit, string tunit){
    cout<<"*******WELCOME TO UNIT CONVERTER********\n";
    cout<<"|PLEASE Enter one unit from the list you want to convert|\n";
    cout<<"1.fl.oz\n";
    cout<<"2.gal\n";
    cout<<"3.oz\n";
    cout<<"4.lb\n";
    cout<<"5.in\n";
    cout<<"6.ft\n";
    cout<<"7.mi\n";
    cin>>funit;
    if(funit=="floz" || funit=="gal" || funit!="oz" || funit=="lb" || funit=="in" || funit=="ft" || funit=="mi"){
        cout<<"You chose " << funit << " to convert" <<endl;
        cout<<"|PLEASE enter one unit from the list you want to convert into|\n";
        cout<<"1.ml\n";
        cout<<"2.l\n";
        cout<<"3.g\n";
        cout<<"4.kg\n";
        cout<<"5.km\n";
        cout<<"6.m\n";
        cout<<"7.cm\n";
        cin>>tunit;
    }
    else{
        cout<<"THANKYOU for using this unit converter\n";
    }
    if(tunit=="ml" || tunit=="l" || tunit=="g" || tunit=="kg" || tunit=="km" || tunit=="m" || tunit=="cm")
        {
            cout<<"You chose " << tunit << " to convert" <<endl;
        if(funit=="gal" && tunit=="ml"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*3785.41;
        }
        if(funit=="gal" && tunit=="l"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*4.54609;
        }
        if(funit=="gal" && tunit=="g"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*3785.41;
        }
        if(funit=="gal" && tunit=="kg"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*3.79;
        }
        if(funit=="gal" && tunit=="km"){
            cout<<"ERROR! You cant convert gal to km Please try again\n";
        }
        if(funit=="gal" && tunit=="m"){
            cout<<"ERROR! You cant convert gal to m Please try again\n";
        }
        if(funit=="gal" && tunit=="mm"){
            cout<<"ERROR! You cant convert gal to mm Please try again\n";
        }
        if(funit=="gal" && tunit=="cm"){
            cout<<"ERROR! You cant convert gal to cm Please try again\n";
        }
        if(funit=="floz" && tunit=="ml"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*29.5735;
        }
        if(funit=="floz" && tunit=="l"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.0295735;
        }
        if(funit=="floz" && tunit=="g"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*29.57;
        }
        if(funit=="floz" && tunit=="kg"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.03;
        }
        if(funit=="floz" && tunit=="km"){
            cout<<"ERROR! You cant convert fl.oz to km Please try again\n";
        }
        if(funit=="floz" && tunit=="m"){
            cout<<"ERROR! You cant convert fl.oz to m Please try again\n";
        }
        if(funit=="floz" && tunit=="mm"){
            cout<<"ERROR! You cant convert floz to mm Please try again\n";
        }
        if(funit=="floz" && tunit=="cm"){
            cout<<"ERROR! You cant convert fl.oz to cm Please try again\n";
        }
        if(funit=="oz" && tunit=="ml"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*29.5735;
        }
        if(funit=="oz" && tunit=="l"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.0295735;
        }
        if(funit=="oz" && tunit=="g"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*28.3495;
        }
        if(funit=="oz" && tunit=="kg"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.0283495;
        }
        if(funit=="oz" && tunit=="mm"){
            cout<<"ERROR! You cant convert oz to mm Please try again\n";
        }
        if(funit=="oz" && tunit=="km"){
            cout<<"ERROR! You cant convert fl.oz to km Please try again\n";
        }
        if(funit=="oz" && tunit=="m"){
            cout<<"ERROR! You cant convert fl.oz to m Please try again\n";
        }
        if(funit=="oz" && tunit=="cm"){
            cout<<"ERROR! You cant convert fl.oz to cm Please try again\n";
        }
    }
        if(funit=="lb" && tunit=="ml"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*473.18;
        }
        if(funit=="lb" && tunit=="l"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.453592;
        }
        if(funit=="lb" && tunit=="g"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*453.592;
        }
        if(funit=="lb" && tunit=="kg"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.453592;
        }
        if(funit=="lb" && tunit=="km"){
            cout<<"ERROR! You cant convert lb to km Please try again\n";
        }
        if(funit=="lb" && tunit=="m"){
            cout<<"ERROR! You cant convert lb to m Please try again\n";
        }
        if(funit=="lb" && tunit=="cm"){
            cout<<"ERROR! You cant convert lb to cm Please try again\n";
        }
        if(funit=="in" && tunit=="mm"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*25.4;
        }
        if(funit=="in" && tunit=="cm"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*2.54;
        }
        if(funit=="in" && tunit=="m"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.0254;
        }
        if(funit=="in" && tunit=="km"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.0000254;
        }
        if(funit=="in" && tunit=="ml"){
            cout<<"ERROR! You cant convert in to ml Please try again\n";
        }
        if(funit=="in" && tunit=="l"){
            cout<<"ERROR! You cant convert in to l Please try again\n";
        }
        if(funit=="in" && tunit=="g"){
            cout<<"ERROR! You cant convert in to g Please try again\n";
        }
        if(funit=="in" && tunit=="kg"){
            cout<<"ERROR! You cant convert in to kg Please try again\n";
        }
        if(funit=="ft" && tunit=="mm"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*304.8;
        }
        if(funit=="ft" && tunit=="cm"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*30.48;
        }
        if(funit=="ft" && tunit=="m"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.3048;
        }
        if(funit=="ft" && tunit=="km"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*0.0003048;
        }
        if(funit=="ft" && tunit=="ml"){
            cout<<"ERROR! You cant convert in to ml Please try again\n";
        }
        if(funit=="ft" && tunit=="l"){
            cout<<"ERROR! You cant convert in to l Please try again\n";
        }
        if(funit=="ft" && tunit=="g"){
            cout<<"ERROR! You cant convert in to g Please try again\n";
        }
        if(funit=="ft" && tunit=="kg"){
            cout<<"ERROR! You cant convert in to kg Please try again\n";
        }
        if(funit=="mi" && tunit=="mm"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*1609000;
        }
        if(funit=="mi" && tunit=="cm"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*160934;
        }
        if(funit=="mi" && tunit=="m"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*1609.34;
        }
        if(funit=="mi" && tunit=="km"){
            cout<<"Enter the value you want to convert\n";
            cin>>value;
            cout<<"The value after conversion is " <<value*1.609348;
        }
        if(funit=="mi" && tunit=="ml"){
            cout<<"ERROR! You cant convert in to ml Please try again\n";
        }
        if(funit=="mi" && tunit=="l"){
            cout<<"ERROR! You cant convert in to l Please try again\n";
        }
        if(funit=="mi" && tunit=="g"){
            cout<<"ERROR! You cant convert in to g Please try again\n";
        }
        if(funit=="mi" && tunit=="kg"){
            cout<<"ERROR! You cant convert in to kg Please try again\n";
        }
    }


    
    