#include<iostream>
#include<string.h>
using namespace std;
class department;

class student {
public:
    int x;

    student() {
        cout << "enter the registration no";
        cin >> x;
        cout << "enter the grade ";
        cin >> y;
        cout << "\n student having registration no\t" << x << "\thas got grade\t" << y;
    }

private:
        char y;
        friend void university(student, department);
};
class department {
public:
    char a[10];

    department()
    {
        cout << "\n enter the school of student \n";
        cin >> a;
        cout << "enter the name ";
        cin >> b;
        cout << "\nstudents name\t" << b << "\thas school\t" << a;
    }

private:
    char b[10];
    friend void university(student, department);
};

void university(student f,department h)
{
    cout<<"\n private members "<<f.y;
    cout<<"\n private members "<<h.b;
}
int main()
{
    student obj1;
    department obj2;
    university (obj1,obj2);
    return 0;
}
