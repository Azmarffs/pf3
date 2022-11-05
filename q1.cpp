#include<iostream>
using namespace std;
int T1, T2, E1, E2, d1, d2;
void validate(){
    if((T1<0 || E1>24) && (T2<0 || E2>24) && (d1 > 30 || d2 >30) ){
        cout<<"ERROR! PLEASE RERUN THE PROGRAM\n"
            <<"INVALID TIME AND DATE\n";
    }
}
void getTime(int T1, int T2, int E1, int E2){
    if(T1==T2){
        if(E1==E2){
            cout<<"The appointments are overlaping w.r.t time"<<endl;
        }else{
            cout<<"Starting time for Appointment 1: "<<T1<<endl
                <<"Starting time for Appointment 2: "<<T2<<endl
                <<"Ending time for Appointment 1: "<<E1<<endl
                <<"Ending time for Appointment 2: "<<E2<<endl;
        }
    }
}
void getDate(int d1, int d2){
    if(d1==d2){
        cout<<"The appointments are overlaping w.r.t to date"<<endl;
    }else{
        cout<<"Date of Appointment 1: "<<d1<<endl
            <<"Date of Appointment 2: "<<d2<<endl;
    }
}
int main(){
    int t1, t2, e1, e2, d1, d2;
    cout<<"Enter starting and ending time of appointment 1:"<<endl;
    cin>>t1>>e1;
    cout<<"Enter starting and ending time of appointment 2:"<<endl;
    cin>>t2>>e2;
    cout<<"Enter date of appointment 1:"<<endl;
    cin>>d1;
    cout<<"Enter date of appointment 2:"<<endl;
    cin>>d2;
    validate();
    getTime(t1, t2, e1, e2);
    getDate(d1, d2);
}