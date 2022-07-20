#include<iostream>
using namespace std;
class Employee {
    int sall;
    int year;
    public :
    Employee(int n, int y) {
        year = n;
        sall = y;
    }
    friend class Increment;
    
    void showdata() {
        cout<<year<<"\n"<<sall<<"\n";
    }
};

class Increment {
    public:
    void inc(Employee *E) {
        if(E->year<=2016) {
            E->sall = E->sall+E->sall*0.15;
        } else if(E->year <= 2018 && E->year>2016) {
            E->sall = E->sall + E->sall*0.10;
        } else if(E->year>=2019) {
            E->sall = E->sall + E->sall*0.05;
        }
    }
};

int main()  // The partial stub is provided for your reference
{
    int sal, y;
    cin>>sal>>y;
    
    if(y<=0) {
        cout<<"Invalid Salary";
        return 0;
    }
    
    Employee E(sal, y);
    Increment I;
    E.showdata();
    I.inc(&E);
    E.showdata();
    return 0;    
}