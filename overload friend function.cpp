#include<iostream>
#include<conio.h>
using namespace std;
class complex {
      float x;
      float y;
      public:
             complex() {}
             complex(float r, float i) { x=r; y=i; }
             friend complex operator+(complex, complex);
             void display() { cout<<x<<" + i" <<y; }
};
complex operator+(complex c1, complex c2) {
        complex temp;
        temp.x = c1.x + c2.x;
        temp.y = c1.y + c2.y;
        return(temp);
}
int main() {
    complex c1, c2, c3;
    c1 = complex(1.1, 2.2);
    c2 = complex(2.2, 3.3);
    c3 = c1 + c2;
    cout<<"\nc1 = "; c1.display();
    cout<<"\nC2 = "; c2.display();
    cout<<"\nC3 = "; c3.display();
    getch();
    return 0;
}
