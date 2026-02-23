#include<iostream>
using namespace std;

class primechecker{
    private:
    int number;
    
    public:
    void setnumber(int num){
        number = num;
    }
    bool isprime(){
        if (number <= 1){
            return false;
        }
        for(int i=2;i*i <= number; i++){
            if(number % i == 0){
                return false;
            }
        }
        return true;
    }
};

int main(){
    primechecker checker;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checker.setnumber(num);
    if(checker.isprime()){
        cout << num << " is a Prime number."<<endl;
    }else{
        cout << num << " is NOT a Prime number."<<endl;
    }
    return 0;
}
