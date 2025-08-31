#include <iostream>
using namespace std;

//-----------------Procedural Programming(POP)-----------------
//Function to calculate area
int calculate_Area(int length, int width) 
{
    cout<<"\n-> Using POP:"<<endl;  
    return length * width;
}
//----------------Object-Oriented Programming(OOP)----------------
class Rectangle 
{
  private:
    int length, width;   // Data members(encapsulation)

  public:
    void set_Values(int l, int w) 
	{
        length = l;
        width = w;
    }
    // Function to calculate area
    int calculate_area() 
	{
        cout<<"\n->Using OOP:"<<endl;  
        return length * width;
    }
    
};

int main() 
{
    int length, width;
	cout<<"----Using POP----\n"<<endl;
    cout<<"Enter length of rectangle:"<<endl;
    cin>>length;

    cout<<"Enter width of Rectangle:"<<endl;
    cin>>width;

    int area_Rectangle = calculate_Area(length, width);
    cout<<"Area of Rectangle:"<<area_Rectangle<<endl;
    cout<<"\n----------------\n"<<endl;
	cout<<"----Using OOP----\n"<<endl;
    Rectangle rect;  // Object creation
  
    cout<<"Enter length of rectangle (OOP):"<<endl;
    cin>>length;
    
    cout<<"Enter width of rectangle (OOP):"<<endl;
    cin>>width;
	
    rect.set_Values(length, width);
    int area_rectangle = rect.calculate_area();
    cout<<"Area of Rectangle (OOP):"<<area_rectangle<<endl;
    
    cout<<"\n-------------------------X-------------------\n"<<endl;
    
    return 0;
}
