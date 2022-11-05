#include<iostream>      /*NAME:AzmarKashif SECTION: B ROLL NO: i222716*/
using namespace std;
void isConnected(){

}
void availableBandwidth(){

}
void startApplication(){

}
void stopApplication(){

}
void stopApplication(){

}
string error(string errrrr){ //checking if there's any error
    cout<<errrrr<<endl;
    return errrrr;

}
void getFileType(char type){ //function to check the file type and save according to its type
    if(type=='txt'){
        cout<<"The file is saved as .txt"<<endl;
    }
    else if(type=='mp4'){
        cout<<"The file is saved as .mp4"<<endl;
    }
    else if(type=='mp3'){
        cout<<"The file is saved as .mp3"<<endl;
    }
    else if(type=='I'){
        cout<<"The file is INVALID"<<endl;
    }
}
void fileSavor(string location, string fileName){ //function to check the file name and specify it location accordingly
    int bandWidth;
    if(bandWidth>5){ //checking if bandwidth above 5
        if(fileName=="txt"){
            fileSavor(".txt", "Text files" );
        }
        else if(fileName=="mp3"){
            fileSavor(".mp3", "Sound files");
        }
        else if(fileName=="mp4"){
            fileSavor(".mp4", "Video files");
        }
        else if(fileName=="I"){
            fileSavor(".invalid", error("errrr"));
        }
    }
}
void isFileSaved(bool IsSaved){ //checking if the file is saved or not
    if(IsSaved){
        isFileSaved(true);
    }
    else{
        isFileSaved(false);
    }
}
bool networkSend(string returnMessage, string fileName){ //checking if the file is connected to the internet and bandwidth is above 10
    string savedInApplications;
    int bandWidth;
    bool connection;
    if(bandWidth>10){
        if(fileName==savedInApplications){
            if(connection==true){
                return true;
            }
            else{
                return false;
            }
        }
   }
}
bool networkStartApplication(bool IsConnection, int bandwidth){
    if(IsConnection==true){ 
        if(bandwidth>20){ //chking if bandwidth above 20
            cout<<"The File is connected to the internet"<<endl;
        }
    else{
        error("errrr");
    }
    }
}
    
    
    
    
    
    
    
