#include<bits/stdc++.h>
using namespace std;
class cPhanSo{
    private:
    int iTuSo, iMauSo;
    public:
    cPhanSo(){
        this->iTuSo = 0;
        this->iMauSo = 1;
    }
    void NhapPhanSo(){
        cout<<"Nhap tu so:";cin>>this->iTuSo;
        do{
            cout<<"Nhap mau so:"; cin>>this->iMauSo;
            if(iMauSo == 0){
                cout<<"Phan so khong hop le";
            }
        }while(iMauSo == 0);
    }
    void XuatPhanSo(){
        if(iTuSo < 0 && iMauSo < 0){
            cout<<abs(iTuSo)<<"/"<<abs(iMauSo);
        }
        else if(iTuSo > 0 && iMauSo < 0){
            cout<<(-iTuSo)<<"/"<<abs(iMauSo);
        }
        else
        cout<<this->iTuSo<<"/"<<this->iMauSo<<endl;
    }
    cPhanSo TongPhanSo(cPhanSo a, cPhanSo b){
        cPhanSo tong;
        tong.iTuSo = (a.iTuSo * b.iMauSo) + (b.iTuSo * a.iMauSo);
        tong.iMauSo = a.iMauSo * b.iMauSo;
        int t = __gcd(tong.iTuSo,tong.iMauSo);
        tong.iTuSo /= t;
        tong.iMauSo /= t;
        return tong;
    }
};
int main(){
    cPhanSo a,b,c;
    a.NhapPhanSo();
    b.NhapPhanSo();
    cout<<"2 phan so vua nhap:"<<endl;
    a.XuatPhanSo();b.XuatPhanSo();
    cout<<endl;
    cout<<"Tong 2 phan so vua nhap:"<<endl;
    c=c.TongPhanSo(a,b);
    c.XuatPhanSo();
    return 0;
}