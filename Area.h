#include<iostream>
using namespace std;
float AreaRectangle(float Length,float Width)
{
    float AreaRect=0;
    AreaRect=Length*Width;
    
    return AreaRect; 

}

float AreaSquare(float Side)
{
    float AreaSqa=0;
    AreaSqa=Side*Side;

    return AreaSqa; 
}

float AreaCircle(float Radius)
{
    float AreaCircle=0;
    float PI=3.14;
    AreaCircle=PI*(Radius*Radius);

    return AreaCircle; 
}


float AreaTriangle(float base,float height)
{
    float AreaTriangle=0;
    AreaTriangle=(1.5*(base*height));

    return AreaTriangle; 
}



float AreaCuboid(float length,float breadth,float height)
{

    float AreaCuboid=0;

    AreaCuboid=(2*(( length*breadth)+(breadth*height)+(height*length)));
    return AreaCuboid;

}






AreaCylinder(float Radius,float Height)
{
     float AreaCylinder=0;
    float PI=3.14;
    AreaCylinder=((2*PI*Radius*Height)+(2*PI*(Radius*Radius)));

    return AreaCylinder; 

}


float AreaSphere(float Radius)
{
    float AreaSphere=0;
    float PI=3.14; 
    AreaSphere=(4*PI*(Radius*Radius));
    return AreaSphere;

}





float SquareArea()
{
    float fSide=0;
    float fArea=0;
    cout<<"Enter Side of Square"<<"\n";
    cin>>fSide;
    fArea=AreaSquare(fSide);    //Calling Function AreaSquare()
    cout<<"Area of Square="<<fArea<<"\n";
}


float RectArea()
{
    float fLenghth=0;
    float fWidth=0;
    float fArea=0;
    cout<<"Enter Length of Rectangle"<<"\n";
    cin>>fLenghth;
    cout<<"Enter Width of Rectangle"<<"\n";
    cin>>fWidth;
    fArea=AreaRectangle(fLenghth,fWidth);   //Calling Function AreaRectangle()
    cout<<"Area of Rectangele="<<fArea<<"\n";
}
    

float CircleArea()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Circle"<<"\n";
    cin>>fRadius;
    fArea=AreaCircle(fRadius);  //Calling Function AreaCircle()
    cout<<"Area of Circle="<<fArea<<"\n";
}


float TriArea()
{
    float fBase=0;
    float fHeight=0;
    float fArea=0;
    cout<<"Enter Base of Triangle"<<"\n";
    cin>>fBase;
    cout<<"Enter Height of Triangle"<<"\n";
    cin>>fHeight;
    fArea=AreaTriangle(fBase,fHeight);   //Calling Function AreaTriangle()
    cout<<"Area of Triangle="<<fArea<<"\n";
}


float CuboidArea()
{
    float fLength=0;
    float fHeight=0;
    float fBreadth=0;
    float fSurfaceArea=0;
    cout<<"Enter Lenght of Cuboid"<<"\n";
    cin>>fLength;
    cout<<"Enter Breadth of Cuboid"<<"\n";
    cin>>fBreadth;
    cout<<"Enter Height of Cuboid"<<"\n";
    cin>>fHeight;
    fSurfaceArea=AreaCuboid(fLength,fBreadth,fHeight);   //Calling Function AreaTriangle()
    cout<<"Surface Area of Cuboid="<<fSurfaceArea<<"\n";
}

float CylinderArea()
{
    float fRadius=0;
    float fHeight=0;
    float fSurfaceArea=0;
    cout<<"Enter Radius of Cylinder"<<"\n";
    cin>>fRadius;
    cout<<"Enter Height of Cylinder"<<"\n";
    cin>>fHeight;
    fSurfaceArea=AreaCylinder(fRadius,fHeight);   
    cout<<"Surface Area of Cylinder="<<fSurfaceArea<<"\n";
}


float SphereArea()
{
    float fRadius=0;
    float fArea=0;
    cout<<"Enter Radius of Sphere"<<"\n";
    cin>>fRadius;
    fArea=AreaSphere(fRadius);   
    cout<<"Area of Sphere="<<fArea<<"\n";

}