#include<bits/stdc++.h>
using namespace std;
class cHocSinh{
    private:
    string Hoten,ID;
    double dToan,dVan;
    double dTrungBinh;
    public:
    void Nhap1HocSinh(){
        cout<<"Nhap ID hoc sinh:";cin>>ID;cin.ignore();
        cout<<"Nhap ho va ten hoc sinh:";getline(cin,Hoten);
        do{
            cout<<"Nhap diem toan:"; cin>>dToan;
            if(dToan > 10){
                cout<<"Diem toan khong hop le";
            }
        }while(dToan >10);
        do{
            cout<<"Nhap diem van:";cin>>dVan;
            if(dVan > 10){
                cout<<"Diem van khong hop le";
            }
        }while(dVan > 10);
    }
    void XepLoaiHocSinh(double x){
        if(x >= 8){
            cout<<"Gioi";
        }
        else if(6.5 <= x < 8 ){
            cout<<"Kha";
        }
        else if( 5 <= x < 6.5){
            cout<<"Trung binh";
        }
        else if( 3.5 <= x < 5){
            cout<<"Yeu";
        }
        else if( x < 3.5){
            cout<<"Kem";
        }
    }
    void XuatHocSinh(){
        cout<<"ID:"<<ID<<endl;
        cout<<"Ho va ten:"<<Hoten<<endl;
        cout<<"Diem toan:"<<dToan<<endl;
        cout<<"Diem van:"<<dVan<<endl;
        dTrungBinh = (dToan + dVan) / 2;
        cout<<"Diem trung binh:"<<dTrungBinh<<endl;
        XepLoaiHocSinh(dTrungBinh);
    }
};
int main(){
    cHocSinh a;
    a.Nhap1HocSinh();
    a.XuatHocSinh();
    return 0;
}