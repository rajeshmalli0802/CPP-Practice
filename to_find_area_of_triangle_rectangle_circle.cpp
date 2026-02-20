#include <iostream>
#include<cmath>
#define PI 3.14
using namespace std;

float areaCircle(float radius){
    return PI*radius*radius;
}

float areaTriangle(float base, float height){
    return 0.5*base*height;
}

float areaRectangle(float length, float width){
    return length*width;
}

int main(){
    float radius,base,height,length,width;
    cout<<"enter the radius of Circle: ";
    cin>>radius;
    cout<<"the area of the Circle is " <<areaCircle(radius) <<endl;
    
    cout<<"enter the base and height of the triangle: " ;
    cin>>base>>height;
    cout<<"the area of the Traiangle is: " <<areaTriangle(base,height)<<endl;
    
    cout<<"enter the length and width of Rectaangle: ";
    cin>>length>>width;
    cout<<"the area of the rectangle: "<<areaRectangle(length,width)<<endl;
    return 0;
}
