#include<iostream>
using namespace std;

class calculator
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }
};

int main()
{
    calculator calc;
    cout<<" addition: "<<calc.add(15,5) <<endl;
    return 0;
}
