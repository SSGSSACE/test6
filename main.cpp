#include <iostream>
#include "nhap.h"
#include "inketqua.h"
#include "tong.h"
#include "hieu.h"
using namespace std;

int main()
{

    nhap();
    x = tong(a, b);
    y = hieu(a, b);
    ketquacong(x);
    cout << "Hello";
    ketquatru(y);
    return 0;
}
void nhap()
{
    cout << "Nhap so thu 1: ";
    cin >> a;
    cout << "Nhap so thu 2: ";
    cin >> b;
}