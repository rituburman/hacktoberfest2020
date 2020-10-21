// Friend Class
#include <iostream>
class b;
using namespace std;
class A {
private:
    int a;
public:
    A()
    {
        a=0;
    }
   // void showA(b& t)
   // {
       // cout<<"Private value of B"<<t.b;
    //}
    friend class B; // Friend Class
};

class B {
private:
    int b;
public:
    B()
    {
        b=0;
    }
    void showB(A x) {
// Since B is friend of A, it can access
// private members of A
        std::cout << "A::a=" << x.a;
    }
    friend class A;
};

int main() {
    A c;
    B b;
    b.showB(c);
   // a.showA(b);
    return 0;
}
