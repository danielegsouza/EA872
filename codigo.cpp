#include <iostream>
using namespace std;

class Coord
{
    int x;
    int y;
    
    public:
    void coord_new(int a, int b);
};

class Cube
{
    int x;
    int y;
    int z;
    
    public:
    void cube_new(int a, int b, int c);
    void cube_print_volume();
};

void Coord::coord_new(int a, int b)
{
    x=a;
    y=b;
}

void Cube::cube_new(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

void Cube::cube_print_volume()
{
    cout << x*y*z << endl;
}

int main()
{
    Coord* c1 = new Coord();
    Cube* c2 = new Cube();
    
    c1->coord_new(50, 10);
    c2->cube_new(10,20,30);
    
    c2->cube_print_volume();
    
    delete c1;
    delete c2;
    
    return 0;
}
