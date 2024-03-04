#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t, t500, t200, t100, t50, t20, t10, t5, t1;
    cout << "Nhap so tien muon rut la: "; cin >> t;
    t500 = t / 500;
    t = t - 500* t500;
    t200 = t / 200;
    t = t - 200 * t200;
    t100 = t / 100;
    t = t - 100 * t100;
    t50 = t / 50;
    t = t - 50 * t50;
    t20 = t / 20;
    t = t - 20 * t20;
    t10 = t / 10;
    t = t - 10 * t10;
    t5 = t / 5;
    t = t - 5 * t5;
    t1 = t / 1;
    t = t - 1 * t1;
    cout << ("So to tien cac loai menh gia ma ban se nhan la: ") << endl;
    cout << "Menh gia 500: " << t500 << endl;
    cout << "Menh gia 200: " << t200 << endl;
    cout << "Menh gia 100: " << t100 << endl;
    cout << "Menh gia 50: " << t50 << endl;
    cout << "Menh gia 20: " << t20 << endl;
    cout << "Menh gia 10: " << t10 << endl;
    cout << "Menh gia 5: " << t5 << endl;
    cout << "Menh gia 1: " << t1 << endl;
    cout << "Tong so to tien ban se nhan: " << t1 + t5 + t10 + t20 + t50 + t100 + t200 + t500;
    return 0;
}