#include<iostream>
using namespace std;
class add{
    private:
    int num1, num2;
    public:
    void setnumbers(int a, int b){
        num1=a;
        num2=b;
    }
    int getsum(){
        return num1 +num2;
    }
};

int main(){
    add addition;
    int a,b;
    cout<<"enter two integers: ";
    cin>> a >> b;
    addition.setnumbers(a,b);
    cout<<"the sum of the two integers is: " << addition.getsum() <<endl;
    
    return 0;
}
