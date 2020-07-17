
#include <iostream>
#include<math.h>
using namespace std;


class shapes
{
    public:
    int rows;
    public:
    void input()
    {
        cout<<"Enter the  rows size \n";
        cin>>rows;
        
    }
};

class rectangle_shape : public shapes
{
    int i,j;
    public:
    void print_rectangle()
    {
        for (i=0;i<rows;i++)
        {
            
        
            for(j=0;j<(5*rows);j++)
            {
        
                if (j==0||j==(5*rows-1)||i==0||i==rows-1 )
                {
                    
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<"\n";
            
        }
        
    cout<<"----------------------------------------------------------\n";
        cout<<"[  Shape         =   Rectangle    ]\n";
        cout<<"[  Sides         =   4 Sides      ]\n";
        cout<<"[  Rows          =   "<<rows<<"            ]\n";
        cout<<"[  Coloumns      =   "<<5*rows<<"           ]\n";
    cout<<"----------------------------------------------------------\n";    
        
    }
};




class triangle_shape : public shapes
{
    int i,j;
    public:
     void print_triangle()
    {
        for (i=1;i<=rows;i++)
        {
            
            for (j=rows;j>i;j--)
            {
                    cout<<" ";
            }
                
            for(j=1;j<=((2*i)-1);j++)
            {
                
                    cout<<"*";
                
            }
            cout<<"\n";
        }
        
    cout<<"----------------------------------------------------------\n";
        cout<<"[  Shape         =   Triangle     ]\n";
        cout<<"[  Sides         =   3 Sides      ]\n";
        cout<<"[  Rows          =   "<<rows<<"            ]\n";
        cout<<"[  coloumns      =   "<<((2*rows)-1)<<"           ]\n";
    cout<<"----------------------------------------------------------\n";}
};

class rombus_shape : public shapes
{
    int i,j;
    public:
    void print_rombus()
    {
        for (i=1;i<=rows;i++)
        {
            
            for (j=rows;j>i;j--)
            {
                    cout<<" ";
            }
                
            for(j=1;j<=((2*i)-1);j++)
            {
                
                    cout<<"*";
                
            }
            cout<<"\n";
        }
            
            for (i=rows;i>0;i--)
        {
            
            for (j=rows;j>i;j--)
            {
                    cout<<" ";
            }
                
            for(j=1;j<=((2*i)-1);j++)
            {
                
                    cout<<"*";
                
            }
            cout<<"\n";
        }
        
    cout<<"----------------------------------------------------------\n";
        cout<<"[  Shape         =   Rombus       ]\n";
        cout<<"[  Sides         =   3 Sides      ]\n";
        cout<<"[  Rows          =   "<<2*rows<<"           ]\n";
        cout<<"[  coloumns      =   "<<((2*rows)-1)<<"            ]\n";
    cout<<"----------------------------------------------------------\n";}
};




class square_shape : public shapes
{
    int i,j;
    public:
     void print_square()
    {
        for (i=0;i<rows;i++)
        {
            for(j=0;j<rows;j++)
            {
                if (j==0||j==rows-1||i==0||i==rows-1)
                {
                    cout<<"*";
            
                }
                else
                {
                    cout<<" ";
                }
                
            }
            cout<<"\n";
        }
        
    cout<<"----------------------------------------------------------\n";
        cout<<"[  Shape         =   Square    ]\n";
        cout<<"[  Sides         =   4 Sides   ]\n";
        cout<<"[  Rows          =   "<<rows<<"         ]\n";
        cout<<"[  coloumns      =   "<<rows<<"         ]\n";
    cout<<"----------------------------------------------------------\n";
        
    
    }
};




class circle_shape : public shapes
{
    int i,j;
    float d;
    public:
    void print_circle()
    {
        for (i=0;i<=2*rows;i++)
        {
        for(j=0;j<=2*rows;j++)
            {
                d = sqrt((i - rows) * (i - rows) +  (j - rows) * (j - rows)); 
                if (d > rows - 0.5 && d < rows + 0.5)  
                {
                   cout << "*";
                }
                else
                {
                    cout << " "; 
        
                }
            }
       cout<<"\n";
        }
        cout<<"----------------------------------------------------------\n";
        cout<<"[  Shape                  =   Circle    ]\n";
        cout<<"[  Area                   =   "<<((rows*rows)*3.14)<<"    ]\n";
        cout<<"[  Circumference          =   "<<2*3.14*rows<<"     ]\n";
        cout<<"[  Diameter               =   "<<2*rows<<"        ]\n";
        cout<<"----------------------------------------------------------\n";
         
    }
};




int main()
{
    
    int n;
    cout<<" press 1 for  SQUARE\n";
    cout<<" press 2 for  CIRCLE\n";
    cout<<" press 3 for  RECTANGLE\n";
    cout<<" press 4 for  TRIANGLE\n";
    cout<<" press 5 for  ROMBUS\n\n";
    
    cout<<"Enter your Choice\n";
    cin>>n;
    
    switch(n)
    {
        case 1:
        square_shape  square;
        square.input();
        square.print_square();
        break;
        
        case 2:
        circle_shape  circle;
        circle.input();
        circle.print_circle();
        break;
        
        case 3:
        rectangle_shape  rectangle;
        rectangle.input();
        rectangle.print_rectangle();
        break;
        
        case 4:
        triangle_shape  triangle;
        triangle.input();
        triangle.print_triangle();
        break;
        
        case 5:
        rombus_shape  rombus;
        rombus.input();
        rombus.print_rombus();
        break;
        
        default :
        cout<<" invalid input\n";
        break;
    }
    
    
        return 0;
}

