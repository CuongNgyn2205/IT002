#include<bits/stdc++.h>
using namespace std;
class SoPhuc{
    private:
    double dThuc,dAo;
    public:
    void NhapSoPhuc(){
        cout<<"Nhap phan thuc: ";cin>>this -> dThuc;
        cout<<"Nhap phan ao: ";cin>>this -> dAo;
    }
    void XuatSoPhuc(){
        if(dAo < 0){
            cout<<dThuc<<" - "<<abs(dAo)<<"i";
        }
        else if (dAo > 0) cout<<dThuc<<" + "<<dAo<<"i";
        else cout<<dThuc<<" + "<<dAo<<"i";
    }
    SoPhuc Cong2SoPhuc(SoPhuc a, SoPhuc b){
        SoPhuc tong;
        tong.dThuc = a.dThuc + b.dThuc;
        tong.dAo = a.dAo + b.dAo;
        return tong;
    }
};
int main(){
    SoPhuc a,b,c;
    a.NhapSoPhuc();
    b.NhapSoPhuc();
    cout<<"So phuc thu 1: ";a.XuatSoPhuc();cout<<endl;
    cout<<"So phuc thu 2: ";b.XuatSoPhuc();cout<<endl;
    c=c.Cong2SoPhuc(a,b);
    cout<<"Tong 2 so phuc:"<<endl;
    c.XuatSoPhuc();
    return 0;
}