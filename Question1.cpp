#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
    srand(time(0));
    int days_of_Expiration=rand() % 12;
    if(days_of_Expiration<=0){
        cout<<"Your subscription has expired."<<endl;

    }else if(days_of_Expiration<=1){
        cout<<"Your subscription expires within a day"<<endl;
        cout<<"Renew now and get 20%!"<<endl;
    }else if(days_of_Expiration<=5){
        cout<<"Your subscription expires in "<<days_of_Expiration<<"days"<<endl;
        cout<<"Renew now and get 10%!"<<endl;
    }else if(days_of_Expiration<=10){
        cout<<"Your subscription expires within soon. Renew now!"<<endl;
        
    }else{
        cout<<"You have an active subscription"<<endl;
    }
    return 0;
}