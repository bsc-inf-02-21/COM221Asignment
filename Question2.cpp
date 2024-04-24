#include<iostream>
#include<cstdlib>
#include<ctime>
int main (){
    srand(time(0));
    int days_of_Expiration=rand() % 12;
    switch(days_of_Expiration){
        case 0:
        std::cout<<"Your subscription has expired.\n";
        break;
        case 1:
        std::cout<<"Your subscription epires within a day \n";
        std::cout<<"Renew now and get 20%!  \n";
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        std::cout<<"Your subscription epires in "<<days_of_Expiration<<" days \n";
        std::cout<<"Renew now and get 10%! \n";
        break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        std::cout<<"Your subscription epires within soon. Renew now! \n";
        break;
        default:
         std::cout<<"You have an active subscription \n";
         break;
    }
    return 0;
    }