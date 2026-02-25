#include<iostream>
using namespace std;
class Box {
    int length,width,height;
    public :
    Box(int l,int w,int h){
        length=l;
        width=w;
        height=h;
    }
    int volume()
    {
        return length*width*height;
    }
    void display()
    {
        cout<<"volume of the box: "<<volume();
    }
};

int main()
{
    int l,w,h;
    cout<<"enter length , width , height : ";
    cin>>l>>w>>h;
    Box b(l,w,h);
    b.display();
    return 0;
}
