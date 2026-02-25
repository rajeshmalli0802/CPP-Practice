#include<iostream>
using namespace std;
class complex {
    private:
    float real,imag;
    public:
    complex() : real(0),imag(0){}
    
    void input(){
        cin>>real>>imag;
    }
    
    void output(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    
    friend complex addcomplex(complex ,complex);
};
complex addcomplex(complex  c1,complex c2){
    complex temp;
    temp.real = c1.real+c2.real;
    temp.imag = c1.imag+c2.imag;
    return temp;
}

int main(){
    complex c1,c2,result;
    cout<<"enter first complex number(real and imaginary parts): ";
    c1.input();
    cout<<"enter second complex number(real and imaginary parts): ";
    c2.input();
    result = addcomplex(c1,c2);
    cout<< "sum : ";
    result.output();
    return 0;
}
