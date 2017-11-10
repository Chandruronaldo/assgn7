#include <iostream>
using namespace std;

class rectangle{
	public:
	double length,breadth,area=0,perimeter=0;
	 
	void getdata(){
		cout<<"\n enter the length and breadth";
		cin>>length>>breadth;
	}
	
	void area1(){
	
		area=length*breadth;
		cout<<"\n"<<area;
	}
	
	void perimeter1(){
		perimeter=2*(length+breadth);
		cout<<"\n"<<perimeter;
	}
};


int main() {
    rectangle rect1,rect2;
    cout<<"\n enter the values for rectangle 1";
    rect1.getdata();
    cout<<"\n the area and perimeter of the rectangle are\t";
    rect1.area1();
    rect1.perimeter1();
    cout<<"\n\nenter the values for rectangle 2";
    rect2.getdata();
    cout<<"\n the area and perimeter of the rectangle are\t";
    rect2.area1();
    rect2.perimeter1();
    if(rect1.area>rect2.area)
    cout<<"\n the area of rectangle 1 is greater than rectangle 2";
    else if(rect2.area>rect1.area)
    cout<<"\n the area of rectangle 2 is greater than reactangle 1";
    else if(rect1.area==rect2.area)
    cout<<"\n the area of rectangle 1 is equal to area of rectangle 2";
    if(rect1.perimeter>rect2.perimeter)
    cout<<"\n the perimeter of rectangle 1 is greater than rectangle 2";
    else if(rect2.perimeter>rect1.perimeter)
    cout<<"\n the perimeter of rectangle 2 is greater than reactangle 1";
    else if(rect1.perimeter==rect2.perimeter)
    cout<<"\n the perimeter of rectangle 1 is equal to perimeter of rectangle 2";
    return 0;
}