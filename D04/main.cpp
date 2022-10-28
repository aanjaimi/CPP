#include <iostream>

using namespace std;

struct a{
    char* p;
    a& operator=(a& o){
        this->p = new char[100];
        return *this;
    }
    ~a()
    {
        delete p;
    }
};

int main()
{
    a  B;

{
    a A;
    A.p = new char[10000];
    B = A;
}
    cout << "Hello\n";
}