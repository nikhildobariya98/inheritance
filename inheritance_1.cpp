#include<iostream>
using namespace std;

class X{
  public:
    int a, b, c;
};

class Y : public X{
  public:
    void setData(){
        cout << "Enter the values for A, B, and C: ";
        cin >> a >> b >> c;
    }
    
    void getData(){
        cout << "Cube of " << a << " is :" << a*a*a << endl;
        cout << "Cube of " << b << " is :" << b*b*b << endl;
        cout << "Cube of " << c << " is :" << c*c*c << endl;
    }

};

int main(){
    Y a;
    a.setData();
    a.getData();
}
