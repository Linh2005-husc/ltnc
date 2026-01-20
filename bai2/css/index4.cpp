#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính diện tích tam giác
int tinhDienTichTG(double a, double b, double c, double &S)
{
    // Kiểm tra có phải tam giác không
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

    if (tinhDienTichTG(a, b, c, S) == 0)
        cout << "Khong tinh duoc dien tich tam giac";
    else
        cout << "Dien tich tam giac = " << S;

    return 0;
}
