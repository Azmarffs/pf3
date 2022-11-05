#include<iostream>
#include<string>
using namespace std;
int leftDoorsForSliding, rightDoorsForSliding, insideHandlesOnLeftDoors, insideHandlesOnRightDoors, outsideHandlesOnRightDoors, outsideHandlesOnLeftDoors, leftDoors, rightDoors, childLock, masterUnlock, insideHandles, outsideHandles;
char gear;
void getSwitchStatus(int left, int right);
void getHandles(int insideHandle, int outsideHandle);
void gearShift(char gear);
int main(){
    int left, right, inside, outside;
    cout<<"tell the status for Dashboard switches for leftdoors as 1/0\n";
    cin>>leftDoors;
    cout<<"tell the status for Dashboard switches for rightdoors as 1/0\n";
    cin>>rightDoors;
    cout<<"tell the status for childlock as 1/0\n";
    cin>>childLock;
    cout<<"tell the status for master unlock as 1/0\n";    
    cin>>masterUnlock;
    cout<<"tell the status for inside handles for rightdoors as 1/0\n";
    cin>>rightDoors;
    cout<<"tell the status for inside handles for leftdoors as 1/0\n";
    cin>>leftDoors;
    cout<<"tell the status for outside handles for rightdoors as 1/0\n";
    cin>>rightDoors;
    cout<<"tell the status for outside handles for leftdoors as 1/0\n";
    cin>>leftDoors;
    cout<<"tell the status for gear shift P N D 1 2 3 R \n";
    cin>>gear;
    getSwitchStatus(left, right);
    getHandles(inside, outside);
    gearShift(gear);
    
}
void getSwitchStatus(int left, int right){
    switch(leftDoorsForSliding){
        case 1:
        cout<< "The Dashboard switches left sliding doors are opened \n";
        break;
        case 0:
        cout<< "The Dashboard switches left sliding doors are closed \n";
        break;
    }
    switch(rightDoorsForSliding){
        case 1:
        cout<< "The right sliding doors are opened \n";
        case 0:
        cout<< "The right sliding doors are closed \n";
    }
    switch(childLock){
        case 1:
        cout<< "The child lock is opened \n";
        break;
        case 0:
        cout<< "The child lock is closed \n";
        break;
    }
    switch(masterUnlock){
        case 1:
        cout<<"The master unlock switch is activated \n";
        break;
        case 0:
        cout<<"The master unlock switch is not activated \n";
        break;
    }
}
void getHandles(int insideHandle, int outsideHandle){
    switch(insideHandlesOnLeftDoors){
        case 1:
        cout<<"The insideHandles on the leftdoors are opened \n";
        break;
        case 0:
        cout<<"The insideHandles on the leftdoors are closed \n";
        break;
    }
    switch(insideHandlesOnRightDoors){
        case 1:
        cout<<"The insideHandles on the rightdoors are opened \n";
        break;
        case 0:
        cout<<"The insideHandles on the rightdoors are closed \n";
        break;
    }
    switch(outsideHandlesOnLeftDoors){
        case 1:
        cout<<"its outsideHandles on the leftdoors are opened \n";
        break;
        case 0:
        cout<<"its outsideHandles on the leftdoors are closed \n";
        break;
    }
    switch(outsideHandlesOnRightDoors){
        case 1:
        cout<<"its outsideHandles on the rightdoors are opened \n";
        break;
        case 0:
        cout<<"its outsideHandles on the rightdoors are closed \n";
        break;
    }
}
void gearShift(char gear){
    switch(gear){
        case 'P':
        cout<< "The van is in parking mode \n";
        break;
        case 'N':
        cout<< "The van is not in parking mode \n";
        break;
        case 'D':
        cout<< "The van is not in parking mode \n";
        break;
        case '1':
        cout<< "The van is not in parking mode \n";
        break;
        case '2':
        cout<< "The van is not in parking mode \n";
        break;
        case '3':
        cout<< "The van is not in parking mode \n";
        break;
        case 'R':
        cout<< "The van is not in parking mode \n";
        break;
    }
}