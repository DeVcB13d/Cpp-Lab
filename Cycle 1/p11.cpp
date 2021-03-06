/*Write a Program to swap private data members of classes named as class_1,
class_2 using friend function*/
#include<iostream>
using namespace std;

class class_2;

class class_1{
    int a1 ;
    public:
        void add(void){
            cout << "Enter member a1 : ";
            cin >> a1 ;
        }
        void show(void){
            cout << a1 << "  " ;
        }
        friend void swap(class_1 &x , class_2 &y) ;
};

class class_2{
    int a2 ;
    public:
        void add(void){
            cout << "Enter member a2 : ";
            cin >> a2 ;
        }
        void show(void){
            cout << a2 << "  ";
        }
        friend void swap(class_1 &x , class_2 &y) ;
};

void swap(class_1 &x , class_2 &y){
    int t = x.a1 ;
    x.a1 = y.a2 ;
    y.a2 = t ;
}

int main()
{
    class_1 A ;
    class_2 B ;
    A.add();
    B.add();
    cout << "Before swapping :\n";
    cout <<"class_1 A = ";
    A.show();
    cout << "class 2 B = ";
    B.show();
    swap(A,B);
    cout << "\nAfter swapping :\n";
    cout <<"class_1 A = ";
    A.show();
    cout << "class 2 B = ";
    B.show();
    cout << "\n";
    return 0 ;

}