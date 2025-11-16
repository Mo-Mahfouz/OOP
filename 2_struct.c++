#include <iostream>
using namespace std;
struct Human
{
    // string name;
    int age;
    int experience;
};
Human Func(Human a, Human b)
{
    Human sum;
    sum.age = a.age + b.age;
    sum.experience = a.experience + b.experience;
    return sum;
}

int main()
{
    Human x = {/*"Ahmed",*/ 22, 2};
    cout << x.age << endl;
    Human y;
    y.age = 25;
    y.experience = 3;
    Human s = Func(x, y);
    cout << s.age << endl
         << s.experience;
    return 0;
}