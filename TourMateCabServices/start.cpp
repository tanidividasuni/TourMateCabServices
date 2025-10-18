#include <iostream>
#include <string>

using namespace std;

struct vehicle{
    string numberPlate;
    string model;
    string brand;
    string type;
    float charge;
};

struct sales{
     string numberPlate;
     string customerName;
     int days;
     float totalAmount;
     string date;
};

void login();
void registerUser();
void mainMenu();
void addVehicle();
void viewVehicles();
void updateVehicle();
void deleteVehicle();
void manageSales();
void recordSale();
void viewSales();
void viewTotalIncome();
void viewCompany();

int main()
{
    int choice;
    bool running = true;

   {
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"                    WELCOME TO TOUR MATE CAB SERVICES                       "<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"Main Menu"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"1. Login"<<endl;
        cout<<"2. Register"<<endl;
        cout<<"3. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
       

        switch (choice){
            case 1:
                login();
                break;
            case 2:
                registerUser();
                break;
            case 3:
                cout<<"Exiting the program. Goodbye!"<<endl;
                running = false;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    return 0;

}

void login(){
    string username, password;
    cout<<"Enter your username:";
   
}
void registerUser(){
   
}
