#include<bits/stdc++.h>
using namespace std;
class DonThuc{
    private:
    int a,b;
    public:
    void NhapDonThuc(){
        cout<<"Nhap a: ";cin>>this->a;
        cout<<"Nhap b: ";cin>>this->b;
    }
    void XuatDonThuc(){
        cout<<"P(x) = "<<a<<"x^"<<b<<endl;
    }
    void GiaTriDonThuc(){
        int x;
        cout<<"Nhap x: ";cin>>x;
        cout<<"Gia tri don thuc P(x)="<<a*(pow(x,b))<<endl;
    }
    void DaoHam(){
        cout<<"Dao ham cua don thuc P(x)="<<b*a<<"x"<<endl;
    }
    DonThuc TongHaiDonThuc(DonThuc a, DonThuc b){
        DonThuc c;
        c.a = a.a + a.b;
        c.b = c.b;
        return c;
    }
};
int main(){
    DonThuc a,b,c;
    a.NhapDonThuc();a.XuatDonThuc();
    b.NhapDonThuc();b.XuatDonThuc();
    a.DaoHam();
    b.DaoHam();
    c = c.TongHaiDonThuc(a,b);
    c.XuatDonThuc();
    return 0;
    
}