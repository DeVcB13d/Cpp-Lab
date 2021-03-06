// Write a C++ program illustrating how the constructors are implemented and the
//order in which they are called when the classes are inherited. Use three classes
//named alpha, beta and gamma such that alpha and beta are base classes and
//gamma is a derived class inheriting alpha & beta.

#include <iostream>
using namespace std;

class alpha
{
    protected:
        int a ;
    public:
        alpha(int A)
        {
            cout << "Alpha Constructor called\n\n";
            a = A ;
        }
        void showA()
        {
            cout << "A = " << a << endl;
        }

};

class beta
{
    int b;
    public:
        beta(int B)
        {
            cout << "Beta Constructor called \n\n";
            b = B;
        }
        void showB()
        {
            cout << "B = " << b << endl;
        }
};

class gamma : public beta,public alpha
{
    int g;
    public:
        gamma(int i,int j,int k):alpha(i),beta(j)
        {
            cout << "Gamma constructor called\n\n";
            g = k;
        }
        void showall()
        {
            cout << "G = " << g << endl;
            showA();
            showB();
        }
};

int main()
{
    int a,b,c;
    cout << "Enter 3 values : ";
    cin >> a >> b >> c ;
    gamma G(a,b,c);
    G.showall();
    return 0;
}

























