#include <iostream>
using namespace std;

int main () {
    int angka;
    cout<<"Masukkan bilangan: ";
    cin>>angka;

    if (angka<0) {
        cout<<"Nilai Mutlak = "<<-angka<<endl;
    }
    else {
        cout<<"Nilai Mutlak = "<<angka<<endl;
    }

    return 0;
}