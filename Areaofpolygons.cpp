#include<iostream.h>
#include<conio.h>
#include<stdio.h>
//Area of rectangle
void area(int l,int b)
{
    int area=l*b;
    cout<<area;
}
//Area of triangle
void area(int base,float h)
{
    int area;
    area=(0.5*base*h);
    cout<<area;
}
//Area of circle
void area(float r)
{
    int area;
    area=(3.14*r*r);
    cout<<area;
}
//Area of square
void area(int s)
{
    int area;
    area=s*s;
    cout<<area;
}
void main()
{
    clrscr;
    int choice;
    cout<<"Enter 1 for displaying area of rectangle, 2 for area of triangle, 3 for area of circle and 4 for area of square";
    cin>>choice;
    switch(choice)
    {
        case 1: int l,b;
               cout<<"enter the length and breadth of rectangle";
               cin>>l>>b;
               area(l,b);
               break;
        case 2: int b,float h;
               cout<<"enter the base and height of triangle";
               cin>>b>>h;
               area(b,h);
               break;
        case 3: float r;
               cout<<"enter the radius of the circle";
               cin>>r;
               area(r);
               break;
        case 4: int s;
                cout<<"enter the side of the square";
                cin>>s;
                area(s);
                break;
        default: cout<< "Option entered is wrong.";
    getch();
    }
