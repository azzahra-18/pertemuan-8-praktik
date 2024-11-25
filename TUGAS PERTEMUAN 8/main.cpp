#include <iostream>
using namespace std;


   /* int recAdd(int a, int b){
    if (b == 0){
    return a;
    }
    return recAdd(a+1, b-1);
    }; */

    int recPowerOfTwo(int base, int power){
    if (power == 0){
        return 1;
        } else {
        return base * recPowerOfTwo(base, power - 1);
    }
    };

    int main() {
    /*int a,b;
    cout << "masukkan bilangan pertama:";
    cin >> a;
    cout <<"masukkan bilangan kedua:";
    cin >> b;
    cout << "hasil penjumlahan " <<a<<"+"<<b<<" adalah: "<<recAdd(a,b)<< endl;*/


    int base,power;
    cout <<"masukkan bilangan basis: ";
    cin >>base;
    cout <<"masukkan bilangan pangkat: ";
    cin >>power;
    cout <<"hasil " <<base<< " pangkat " <<power<<" adalah :"<<recPowerOfTwo(base,power)<<endl;

    return 0;
}
