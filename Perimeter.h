#include<iostream>
using namespace std;

float PeriRectangle(float Length,float Width)
{
    float PeriRect=0;
    PeriRect= 2*(Length+Width);
    
    return PeriRect; 
}

float PeriSquare(float Side)
{
    float PeriSqa=0;
    PeriSqa=(4*Side);

    return PeriSqa; 
}

float PeriCircle(float Radius)
{
    float PeriCircle=0;
    float PI=3.14;
    PeriCircle = (2*PI*Radius);
    return PeriCircle; 
}

float PeriTriangle(float side1,float side2,float side3)
{
        float PeriTriangle=0;
     PeriTriangle=side1+side2+side3;
     return PeriTriangle;
}



float SquarePerimeter()
{
    float fSide=0;
    float fArea=0;
    cout<<"Enter Side of Square"<<"\n";
    cin>>fSide;
    fArea=PeriSquare(fSide);    //Calling Function PeriSquare()
    cout<<"Perimeter of Square="<<fArea<<"\n";
}


float RectPerimeter()
{
    float fLenghth=0;
    float fWidth=0;
    float fArea=0;
    cout<<"Enter Length of Rectangle"<<"\n";
    cin>>fLenghth;
    cout<<"Enter Width of Rectangle"<<"\n";
    cin>>fWidth;
    fArea=PeriRectangle(fLenghth,fWidth);   //Calling Function PeriRectangle()
    cout<<"Perimeter of Rectangele="<<fArea<<"\n";
}
    

float CirclePerimeter()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Circle"<<"\n";
    cin>>fRadius;
    fArea=PeriCircle(fRadius);  //Calling Function PeriCircle()
    cout<<"Perimeter of Circle="<<fArea<<"\n";
}


 float TrianglePerimeter()
 {
     float fSide1=0;
    float fSide2=0;
    float fSide3=0;
    float fPeri=0;
    cout<<"Enter Side2 of Triangle"<<"\n";
    cin>>fSide1;
    cout<<"Enter Side3 of Triangle"<<"\n";
    cin>>fSide2;
    cout<<"Enter Side1 of Triangle"<<"\n";
    cin>>fSide3;
    fPeri=PeriTriangle(fSide1,fSide2,fSide3);   //Calling Function AreaRectangle()
    cout<<"Perimeter of Triangle="<<fPeri<<"\n";
 }



