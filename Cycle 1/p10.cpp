//Write a C++ program using class to process shopping list for a DepartmentalStore. 
//The list include details such as the Code-no and price of each item and
//perform the operations like adding & deleting items to the list and printing the
//total value of an order.

//Not complete

#include<iostream>
#include<cstring>
using namespace std ;
const int m = 20 ;

class Sitems{
    int Code_No ;
    string name ;
    float price ;
    int Nitems; 
    public:
    void additem(void);
    void deleteitem(int);
    float getprice(void);
    friend void createbill();
};

void Sitems::additem(void){
    cout << "Enter item code: " ;
    cin >> Code_No;
    cout << "Enter item name: " ;
    cin >> name ;
    cout << "Enter item price: " ;
    cin >> price ;
    cout << "How many ";
    cin >> Nitems;
}
void Sitems::deleteitem(int code){}
void createbill(){} 

int main()
{
    Sitems slist[m];
    cout << "Menu"
}
