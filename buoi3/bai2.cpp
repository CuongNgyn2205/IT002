#include<bits/stdc++.h>
using namespace std;
class HinhTron{
    private:
    double pi = M_PI;
    double r;
    public:
    void NhapR(){
        cout<<"nhap r(cm):";
        cin>>this -> r;
    }
    void ChuVi(){
        double C = 2 * pi * r;
        cout<<"Chu vi hinh tron: "<<C<<endl;
    }
    void DienTich(){
        double S = pi * pow(r,2);
        cout<<"Dien tich hinh tron: "<<S<<endl;
    }
};
int main(){
    class HinhTron a;
    a.NhapR();
    a.ChuVi();
    a.DienTich();
    return 0;
}