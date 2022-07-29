#include<iostream>

#include"Perimeter.h"//User-Defined Header File
#include"Area.h"   //User-Defined Header File 
#include"Volume.h" //User-Defined Header File

using namespace std;

//////////////////////////////////////////////////////////////////////////
//@Author:Kishan Jawale
//Date: 08/04/2022
//Description:
//In this application i have  used 2 user defined header files
//                   1.Perimeter.h(This file contain logic to find perimeter of shapes)
//                   2.Area.h(This file contain logic to find Area of shapes)   
/*
     This Application Takes the input from user and perform Various 
     Operations like:  
            Perform operation on Rectangle shape
            Perform operation on Square shape
            Perform operation on Circle shape
            Perform operation on Triangle shape
            Perform operation on Cuboid  shape
            Perform operation on Sphere shape
            Perform operation on Cylinder shape
*/
///////////////////////////////////////////////////////////////////////////

int main()
{
    int No1=0;
    cout<<"Enter 1  To Perform operation on Rectangle shape"<<"\n";
    cout<<"Enter 2  To Perform operation on Square shape"<<"\n";
    cout<<"Enter 3  To Perform operation on Circle shape"<<"\n";
    cout<<"Enter 4  To Perform operation on Triangle shape"<<"\n";
    cout<<"Enter 5  To Perform operation on Cuboid  shape"<<"\n";
    cout<<"Enter 6  To Perform operation on Sphere shape"<<"\n";
    cout<<"Enter 7  To Perform operation on Cylinder shape"<<"\n";
    
    cin>>No1;  //Accepting the Number of Operation User wants to perform
    
    
    switch (No1)
    {   
        
        case 1: //Rectangle
                int ino1;
                cout<<"Enter 1 To find Area of Rectangle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Rectangle"<<"\n";
                
                cin>>ino1;

                switch (ino1)
                {
                    case 1:
                            RectArea();  //Calling Function RecteArea()
                            abort();
                    break;

                    
                    case 2:
                        RectPerimeter();//Calling Function RectPerimeter()
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";                
                        abort();
                    break;
                
                }


        case 2://Sqaure
                int ino2;            
                cout<<"Enter 1 To find Area of Square"<<"\n";
                cout<<"Enter 2 To find Perimeter of Square"<<"\n";

                cin>>ino2;

                switch (ino2)
                {
                    case 1:
                            SquareArea();  //Calling Function SquareArea()
                            abort();
                    break;


                    case 2:
                        SquarePerimeter();  //Calling Function SquarePerimeter()
                        abort(); 
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                    break;
                    abort();
                }


        case 3://Circle 
                int ino3;  
                cout<<"Enter 1 To find Area of Circle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Circle"<<"\n";
            
                cin>>ino3;

                switch (ino3)
                {
                    case 1 :
                            CircleArea();//Calling Function CircleArea()  
                            abort();
                    break;
                    
                    
                    case 2 :
                        CirclePerimeter();//Calling Function CirclePerimeter() 
                        abort();  
                    break;


                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }

        case 4://Triangle 
                int ino4;
                cout<<"Enter 1 To find Area of Triangle"<<"\n";
                cout<<"Enter 2 To find Perimeter of Triangle"<<"\n";
                
                cin>>ino4;

                switch (ino4)
                {
                    case 1:
                        TriArea(); //Calling Function TriArea(); 
                        abort();
                    break;

                    case 2:
                         TrianglePerimeter();//Calling Function TrianglePerimeter();
                        abort();
                    break;
                    
                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }
        case 5: //Cuboid
                int ino5;
                cout<<"Enter 1 To find Area of Cuboid"<<"\n";
                cout<<"Enter 2 To find Volume of Cuboid"<<"\n";
                
                cin>>ino5;

                switch (ino5)
                {
                    case 1:
                          CuboidArea();//Calling Function CuboidArea();
                          abort();  
                    break;

                    
                    case 2:
                       CuboidVolume();//Calling Function CuboidVolume();
                       abort();
                    break;

                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }

        case 6:    //Sphere
                int ino6;
                cout<<"Enter 1 To find Total Surface Area of Sphere"<<"\n";
                cout<<"Enter 2 To find Volume of Sphere"<<"\n";
                
                cin>>ino6;

                switch (ino6)
                {
                    case 1:
                    SphereArea();//Calling Function SphereArea();
                    abort();        
                    break;

                
                    case 2:
                        SphereVolume();//Calling Function SpehereVolume  
                        abort();

                    break;
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    default:

                    break;

                }

        case 7: //Cylinder
                int ino7;
                cout<<"Enter 1 To find Area of Cylinder"<<"\n";
                cout<<"Enter 2 To find Volume  of Cylinder"<<"\n";
                
                cin>>ino7;

                switch (ino7)
                {
                    case 1:
                            CylinderArea();//Calling Function CylinderArea()
                            abort();
                    break;

                    
                    case 2:
                        CylinderVolume();//Calling Function CylinderVolume()
                        abort();
                    break;
                    
                    default:
                        cout<<"!!!!!!!!! Invalid Input !!!!!!!!!"<<"\n";
                        abort();
                    break;
                }
        default: //Default Statement
            cout<<"!!!!!! invalid choice  !!!!!!"<<"\n";
            abort();
        break;
    }
    
   return 0;
}