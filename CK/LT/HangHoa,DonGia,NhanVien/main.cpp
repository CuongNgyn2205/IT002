#include"header.h"
#include"Company.h"
#include"Company.cpp"
int main(){
    Bill a;
    a.getBillInfo();
    long double sum = a.Sum();
    Company b;
    b.getList();
    sum +=b.ThanhToan();
    cout<<"Tong tien phai tra: "<<sum;
    return 0;
}