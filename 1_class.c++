#include <iostream>
using namespace std;
class shape
{
private:
    string name;
    int width, height;

public:
    void setName(string n)
    {
        name = n;
    }
    void setWidth(float w)
    {
        width = w;
    }
    void setHeight(float h)
    {
        height = h;
    }
    void print()
    {
        cout << "Shape name: " << name << endl
             << "Shape width: " << width << endl
             << "Shape height: " << height << endl;
    }
    string getName()
    {
        return name;
    }
    int getWidth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }

    shape(string n = 0, float a = 0, float b = 0)
    {
        cout << "created\n";
        name = n;
        width = a;
        height = b;
    }
    void swap_W_H();
    ~shape()
    {
        cout << "deleted\n";
    }
};
void shape ::swap_W_H()
{
    cout << "Swapped\n";
    float x;
    x = height;
    height = width;
    width = x;
}
int main()
{
    shape s1("Triangle", 5, 7);
    s1.print();
    s1.swap_W_H();
    s1.print();
}