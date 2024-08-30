#include<bits/stdc++.h>
using namespace std;
class cHocSinh{
    private:
    string sID,sHoten;
    int iday,imonth,iyear;
    double dTrungBinh;
    public:
    void NhapHocSinh(){
        cout<<"Nhap ID:";cin>>sID;cin.ignore();
        cout<<"Nhap ho va ten: "; getline(cin,sHoten);
        cout<<"Nhap ngay sinh: ";cin>>iday;
        cout<<"Nhap thang sinh: ";cin>>imonth;
        cout<<"Nhap nam sinh: ";cin>>iyear;
        cout<<"Nhap diem trung binh: "; cin>>dTrungBinh;
    }
    void XuatHocSinh(){
        cout<<"|"<<sID<<"\t|"<<sHoten<<"\t|"<<iday<<"/"<<imonth<<"/"<<iyear<<"\t|"<<dTrungBinh<<endl;
    }
    void HocSinhCoDTBLonHon(cHocSinh a, cHocSinh b){
        if(a.dTrungBinh > b.dTrungBinh){
            cout<<"Hoc sinh "<<a.sHoten<<" co diem trung binh cao hon"<<endl;
        }
        else if(a.dTrungBinh == b.dTrungBinh){
            cout<<"Hai hoc sinh co diem trung binh bang nhau"<<endl;
        }
        else {
            cout<<"Hoc sinh "<<b.sHoten<<" co diem trung binh cao hon"<<endl;
        }
    }
    void HocSinhCoTuoiLonHon(cHocSinh a, cHocSinh b){
        if(a.iyear > b.iyear){
            cout<<"Hoc sinh "<<a.sHoten<<" lon tuoi hon"<<endl;
        }
        else if (a.iyear = b.iyear){
            if(a.imonth > b.imonth){
                cout<<"Hoc sinh "<<a.sHoten<<" lon tuoi hon"<<endl;
            }
            else if(a.imonth == b.imonth){
                if(a.iday > b.iday){
                    cout<<"Hoc sinh "<<a.sHoten<<" lon tuoi hon"<<endl;
                }
                else if ( a.iday == b.iday){
                    cout<<"Hai hoc sinh bang tuoi"<<endl;
                }
                else {
                    cout<<"Hoc sinh "<<b.sHoten<<" lon tuoi hon"<<endl;
                }
            }
            else {
                cout<<"Hoc sinh "<<b.sHoten<< " lon tuoi hon"<<endl;
            }
        }
        else {
            cout<<"Hoc sinh "<<b.sHoten<< " lon tuoi hon"<<endl;
        }
    }
};
int main(){
    cHocSinh a,b;
    a.NhapHocSinh();b.NhapHocSinh();
    a.XuatHocSinh();b.XuatHocSinh();

}
