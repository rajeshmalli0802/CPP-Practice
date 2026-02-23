#include<iostream>
#include<string>
using namespace std;

class student {
    private:
    string name;
    int age;
    int rollnumber;
    
    public:
    void readstudentInfo(){
        cout<<"enter the student's name: ";
        cin>>name;
        cout<<"enter the student's age: ";
        cin>>age;
        cout<<"enter the student's roll number: ";
        cin>>rollnumber;
    }
    
    void printstudentInfo(){
        cout<<"student's Name: "<<name<<endl;
        cout<<"student's Age: "<<age<<endl;
        cout<<"student's Roll number: "<<rollnumber<<endl;
    }
};

int main(){
    student s1;
    s1.readstudentInfo();
    s1.printstudentInfo();
    return 0;
}
