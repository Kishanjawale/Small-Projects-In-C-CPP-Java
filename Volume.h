#include<iostream>
using namespace std;

float VolumeSphere(float Radius)
{
    float VolumeSphere=0;
    float PI=3.14; 
    VolumeSphere=((4/3)*PI*(Radius*Radius*Radius));
    return VolumeSphere;
}


float VolumeCylinder(float radius,float height)
{

 float VolumeCylinder=0;
    float PI=3.14; 
    VolumeCylinder=(PI*(radius*radius)*height);
    return VolumeCylinder;



}

float VolumeCuboid(float length,float width,float height)
{

    float VolumeCuboid=0;
    VolumeCuboid=(length*width*height);
    return VolumeCuboid;

}
float CuboidVolume()
{
    float fLength=0;
    float fHeight=0;
    float fWidth=0;
    float fVolume=0;
    cout<<"Enter Lenght of Cuboid"<<"\n";
    cin>>fLength;
    cout<<"Enter width of Cuboid"<<"\n";
    cin>>fWidth;
    cout<<"Enter Height of Cuboid"<<"\n";
    cin>>fHeight;
    fVolume=VolumeCuboid(fLength,fWidth,fHeight);   
    cout<<"Volume of Cuboid="<<fVolume<<"\n";

}





float CylinderVolume()
{
    float fHeight=0;
    float fRadius=0;
    float fVolume=0;
    cout<<"Enter Height of Cylinder"<<"\n";
    cin>>fHeight;
    cout<<"Enter Radius of Cylinder"<<"\n";
    cin>>fRadius;
    fVolume=VolumeCylinder(fRadius,fHeight);   
    cout<<"Volume of Cylinder="<<fVolume<<"\n";

}



float SphereVolume()
{
    float fRadius=0;
    float fVolume=0;
    cout<<"Enter Radius of Sphere"<<"\n";
    cin>>fRadius;
    fVolume=VolumeSphere(fRadius);   
    cout<<"Volume of Sphere="<<fVolume<<"\n";

}