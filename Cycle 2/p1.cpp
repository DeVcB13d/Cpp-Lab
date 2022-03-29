//1. Write a C++ program to overload ==, !=, <, <=, > and >= operators as
//member operator functions for a vector object.
#include<iostream>
using namespace std;
class Vector
{
    int size;
    int* Varr;
    public:
        Vector(){}
        Vector(int z,int* k);
        void create_Vobj();
        friend bool operator==(Vector,Vector);
        friend bool operator!=(Vector,Vector);
        friend bool operator<=(Vector,Vector);
        friend bool operator>=(Vector,Vector);
        friend bool operator>(Vector,Vector);
        friend bool operator<(Vector,Vector);
        void display();
        
};

void Vector::display()
{
    cout << "{";
    for(int i = 0 ; i<size ; i++){
        cout << Varr[i] << ",";
    }
    cout << "}\n";
}

Vector::Vector(int z,int* k)
{
    size = z ;
    Varr = new int[size+1];
    for(int i = 0 ; i<z ; i++){
        Varr[i] = k[i];
    }
}

bool operator==(Vector x,Vector y)
{
    bool ret;
    if (x.size == y.size){
        ret = true;
        for(int j = 0 ; j < x.size ; j++){
            if(x.Varr[j] != y.Varr[j]){
                ret = false;
                break;
            }
        }
    }
    else ret = false;
    return ret;
}

bool operator!=(Vector x,Vector y)
{
    bool ret = (x == y);
    return !(ret);
}

bool operator<=(Vector x,Vector y)
{
    bool ret;
    if (x<y || x==y){
        return true;
    }
    else return false;
        
}

bool operator>=(Vector x,Vector y)
{
    bool ret;
    if (x>y || x==y){
        return true;
    }
    else return false;
}

bool operator<(Vector x,Vector y)
{
    bool ret;
    int ctrl = 0;
    if(x==y) {
        return false;
        ctrl++;
    }
    else {
        for(int j = 0 ; (j < x.size && ctrl == 0); j++){
            if(x.Varr[j] < y.Varr[j])
            {
                ret = false;
                ctrl += 1;
            }
            else if (x.Varr[j] > y.Varr[j])
            {
                ret = true;
                ctrl+=1;
            }
        }
        return ret;
    }

}

bool operator>(Vector x,Vector y)
{
    bool ret;
    int ctrl = 0;
    if(x==y) {
        return false;
        ctrl++;
    }
    else {
        for(int j = 0 ; (j < x.size && ctrl == 0); j++){
            if(x.Varr[j] < y.Varr[j])
            {
                ret = true;
                ctrl += 1;
            }
            else if (x.Varr[j] > y.Varr[j])
            {
                ret = false;
                ctrl+=1;
            }
        }
        return ret;
    }
}

void Vector::create_Vobj()
{
    int sz;
    cout << "Enter the size of array : ";cin>>sz;
    cout << "Enter "<<sz<<" elements : \n";
    int *arr1 = new int [sz];
    int el = 0;
    for(int i=0;i<sz;i++){
        cin >> el;
        arr1[i] = el;
    }
    Vector(sz,arr1);
}

//Function to give output based on T/F values
void compare_out(bool x)
{
    if (x==true)
    {
        cout << "The comparison is True\n";
    }
    else if(x==false)
    {
        cout << "The comparison is False\n";
    }
    else 
    {
        cout << "No Output\n";
    }
}

int main()
{
    //To get 2 array inputs
    Vector V1,V2;
    V1.create_Vobj();
    V2.create_Vobj();
    cout << "MENU\n";
    cout << "1 - To Create new vector\n";
    cout << "Or Enter Comparison operations\n";
    cout << "2 - To Exit\n";
    char choice[2] = "0";
    while (choice != "2")
    {
        cout << "Choose an option \n";
        cin >> choice ;
        if (choice == "1")
        {
            V1.create_Vobj();
            V2.create_Vobj();
        }
        else if(choice == "<"){
            compare_out(V1 < V2);
        }
        else if(choice == ">")
        {
            compare_out(V1 > V2);
        }
        else if(choice == "==" || choice == "="){
            compare_out(V1 == V2);
        }
        else if(choice == "!="){
            compare_out(V1 != V2);
        }
        else if(choice == "<="){
            compare_out(V1 <= V2);
        }
        else if(choice == ">="){
            compare_out(V1 >= V2);break;
        }
        else if(choice == "2"){
            cout << "Thanks for using\n";break;
        }
        else{
            cout << "Invalid option\n";break;
        }
    }
    return 0 ;
}