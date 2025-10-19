#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <windows.h> 

using namespace std;
//Color code for console outputs
enum color{
         RED=12,GREEN=10,BLUE=9,YELLOW=14,
         WHITE=15,CYAN=11,MAGENTA=13,GRAY=7
};


void setColor(int colorCode) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorCode);
}

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
void forgot();
void vehicalMenu();
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
    int choice = 0;
    do
   {
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"                    WELCOME TO TOUR MATE CAB SERVICES                       "<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"Main Menu"<<endl;
        cout<<"----------------------------------------------------------------------------"<<endl;
        cout<<"1. Login"<<endl;
        cout<<"2. Register"<<endl;
        cout<<"3. Forgot password or username"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
        login();
        break;
        case 2:
        registerUser();
        break;
        case 3:
        forgot();
        break;
        case 4:
        cout<<"Thank you for using Tour Mate Cab Services. Goodbye!\n";
        break;
        default:
        system("cls");
        setColor(RED);
        cout<<"Invaild choice. Please enter a number from 1 to 4."<<endl;
        break;
        }
    }while (choice != 4);
    return 0;
}

void login(){
    string username, password, u, p;
    setColor(YELLOW);
    cout<<"------------------------------Login---------------------------------"<<endl;
    setColor(WHITE);
    cout<<"Enter your username:";
    cin>>username;
    cout<<"Enter your password:";
    cin>>password;
}

void registerUser(){
    string regUsername, regPassword,ru, rp;
    setColor(YELLOW);
    cout<<"------------------------------Register---------------------------------"<<endl;
    setColor(WHITE);
    cout<<"Enter username:";
    cin>>regUsername;
    cout<<"Enter password:";
    cin>>regPassword;
}


void forgot(){
    int ch;
    setColor(YELLOW);
    cout<<"------------------------------Forgot Password or Username----------------"<<endl;
    cout<<"1. Search by username"<<endl;
    cout<<"2. Search by password"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
}



void vehicalMenu(){
    int menuChoice;
    do{
        setColor(YELLOW);
    cout<<"------------------------------Vehicle Management Menu---------------------"<<endl;
    cout<<"1. Add Vehicle"<<endl;
    cout<<"2. View Vehicles"<<endl;
    cout<<"3. Update Vehicle"<<endl;
    cout<<"4. Delete Vehicle"<<endl;
    cout<<"5. Back to Main Menu"<<endl;
    cout<<"Enter your choice:";
    cin>>menuChoice;

    switch (menuChoice)
    {
    case 1:
        addVehicle();
        break;
        case 2:
        viewVehicles();
        break;
        case 3:
        updateVehicle();
        break;
        case 4:
        deleteVehicle();
        break;
        case 5:
        cout<<"Returning to Main Menu..."<<endl;
        break;
    default:
        cout<<"Invalid choice. Please try again."<<endl;
        break;
    }
} while (menuChoice != 5);
}

void addVehicle(){
    vehicle v;
    setColor(YELLOW);
    cout<<"------------------------------Add Vehicle-----------------------------"<<endl;
    cout<<"Enter Number Plate:";
    cin>>v.numberPlate;
    cout<<"Enter Model:";
    cin>>v.model;
    cout<<"Enter Brand:";
    cin>>v.brand;
    cout<<"Enter Type:";
    cin>>v.type;
    cout<<"Enter Charge per Day:";
    cin>>v.charge;
}

void viewVehicles(){
    setColor(YELLOW);
    cout<<"------------------------------View Vehicles----------------------------"<<endl;
}

void updateVehicle(){
    setColor(YELLOW);
   cout<<"------------------------------Update Vehicle---------------------------"<<endl;
}

void deleteVehicle(){
    setColor(YELLOW);
    cout<<"------------------------------Delete Vehicle---------------------------"<<endl;
}

void manageSales(){
    int salesChoice;
    do{
        setColor(YELLOW);
        cout<<"----------------------------Manage Sales------------------------------"<<endl;
        setColor(WHITE);
        cout<<"1. Record Sales"<<endl;
        cout<<"2. View Sales"<<endl;
        cout<<"3. View Total Income"<<endl;
        cout<<"4. Back to Main Menu"<<endl;
        cout<<"Enter your choice:";
        cin>>salesChoice;
    }
    while (salesChoice != 4);
}

void recordSale(){
    sales s;
    setColor(CYAN);
    cout<<"------------------------------Record Sale-----------------------------"<<endl;
    cout<<"Enter Number Plate:";
    cin>>s.numberPlate;
    cout<<"Enter Customer Name:";
    cin>>s.customerName;
    cout<<"Enter Number of Days:";
    cin>>s.days;
    cout<<"Enter Total Amount:";
    cin>>s.totalAmount;
    cout<<"Enter Date (DD/MM/YYYY):";
    cin>>s.date;



    cout<<"Sale recorded successfully!"<<endl;
}
void viewSales(){

    cout<<"------------------------------View Sales------------------------------"<<endl;
}
void viewTotalIncome(){
    cout<<"------------------------------Total Income----------------------------"<<endl;
}

void viewCompany(){
    setColor(YELLOW);
    cout<<"------------------------------Company Information-----------------------------"<<endl;
    setColor(WHITE);
    cout<<"Tour Mate Cab Services"<<endl;
    cout<<"Contact: 011-2 896 6789"<<endl;
    cout<<"Email:tourmate@gmail.com"<<endl;
    cout<<"Address: 123 Main Street, Colombo"<<endl;
    cout<<"We provide safe and reliable transport services across Sri Lanka."<<endl;
    cout<<"Thank you for choosing Tour Mate Cab Services!"<<endl;
}

