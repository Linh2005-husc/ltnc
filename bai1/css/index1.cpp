#include <iostream>
#include <cmath>
using namespace std;

int dientichTG(double a, double b, double c, double &S)
{
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;

    double p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    return 1;
}

int main()
{
    double a, b, c, S;
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;

    if (dientichTG(a, b, c, S) == 0)
        cout << "Khong phai tam giac.\n";
    else
        cout << "Dien tich tam giac = " << S << endl;

    return 0;
}
