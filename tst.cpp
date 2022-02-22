#include <iostream>
using namespace std;
class point
{
    const int *px, *py;

public:
    point(int x, int y) : px(&x), py(&y) {}
    ~point() {}
    int getx() { return *px; }
    int gety() { return *py; }
};
int main()
{
    point p(10, 5);
    cout << p.getx() << " " << p.gety();
}