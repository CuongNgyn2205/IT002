#include<bits/stdc++.h>
using namespace std;
class cSoPhuc{
    private:
    double dThuc,dAo;
    public:
    void NhapSoPhuc();
    void XuatSoPhuc();
    cSoPhuc operator+(cSoPhuc &b);
    cSoPhuc operator-(cSoPhuc &b);
    cSoPhuc operator*(cSoPhuc &b);
    cSoPhuc operator/(cSoPhuc &b);
    bool operator==(cSoPhuc &b);

};
void cSoPhuc:: NhapSoPhuc(){
    cout<<"Nhap phan thuc:";cin>>this->dThuc;
    cout<<"Nhap phan ao:";cin>> this->dAo;
}
void cSoPhuc::XuatSoPhuc(){
    if(dAo < 0){
        cout<<dThuc<<" "<<dAo;
    }
    else if(dAo ==0){
        cout<<dThuc;
    }
    else {
        cout<<dThuc <<" "<<dAo;
    }
}
cSoPhuc cSoPhuc ::operator+(cSoPhuc &b){
    cSoPhuc p;
    p.dThuc = dThuc + b.dThuc ;
    p.dAo = dAo + b.dAo;
    return p;
}
cSoPhuc cSoPhuc :: operator-(cSoPhuc &b){
    cSoPhuc p;
    p.dThuc = dThuc - b.dThuc ;
    p.dAo = dAo - b.dAo;
    return p;
}
cSoPhuc cSoPhuc :: operator*(cSoPhuc &b){
    cSoPhuc p;
    p.dThuc = dThuc*b.dThuc - dAo*b.dAo;
    p.dAo = dThuc*b.dAo + dAo*b.dThuc; 
    return p;
}