#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int userinput;
    bool validinput = false;
    while(!validinput){
        cout << " please enter an integer value between 5 and 10 "<<"\n";
        string inputstr;
        getline(cin,inputstr);
        stringstream ss(inputstr);
        if(ss>>userinput) {
            if (userinput>= 5 && userinput<=10){
               validinput= true;
            }else{
                cout<<"You have entered "<<userinput<< ". Please enter an integer value between 5 and 10"<<endl;
            }
        }else{
            cout<<"Soory, you entered Invalid number, Please try again"<<endl;
        }

    }
    cout<<"Your input value "<<"("<<userinput<<")"<<" has been accepted"<<endl;
    return 0;
}