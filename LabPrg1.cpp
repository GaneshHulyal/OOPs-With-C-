#include<iostream>

using namespace std;

class rectangle
{
    double length;
    double breadth;
public:
    double getarea(double l,double b)
    {
        double area;
        area = l * b;
        cout << "Area = " << area << "\n";
    }
   
double getCircumference(double l,double b)
    {
        double Cir;
        Cir = 2 * (l + b);
        cout << "Circumference = " << Cir << "\n";
    }
};
int main()
{
    double l,b;
    rectangle r;
    cout << "Enter length of rectangle ";
    cin >> l ;
    cout << "Enter breadth of rectangle ";
    cin >> b ;
    r.getarea(l,b);
    r.getCircumference(l,b);

return 0;
}
