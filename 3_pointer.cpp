#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    ptr = new int;
    /* cout << &ptr << endl  // عنوان المؤشر نفسه
          << ptr << endl   // العنوان الي المؤشر بيشاور عليه
          << *ptr << endl; // القيمة الي جوه العنوان ال المؤشر بيشاور عليه*/
    *ptr = 500;
    cout << &*ptr << endl;
    cout << ptr;
    delete ptr;
}