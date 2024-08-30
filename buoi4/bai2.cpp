#include<bits/stdc++.h>
using namespace std;
class PhanSo{
    private:
    int iTu,iMau;
    public:
    void NhapPhanSo(){
        cout<<"Nhap tu so: ";cin>>this ->iTu;
        do{
            cout<<"Nhap mau so: ";cin>>this -> iMau;
            if(iMau == 0){
                cout<<"Phan so khong hop le";
            }
        }
        while(iMau == 0);
        
    }
    void XuatPhanSo(){
        if(iTu < 0 && iMau < 0){
            cout<<abs(iTu) << "/"<<abs(iMau);
        }
        else if(iTu > 0 && iMau < 0){
            cout<< -iTu <<"/"<<abs(iMau);
        }
        else cout<<iTu <<"/"<<iMau;
    }
    void PhanSoNgauNhien(){
        iTu = rand();
        do{
            iMau = rand();
        }
        while(iMau == 0);   
    }
    friend class arrPhanSo;
};
class arrPhanSo{
    private:
    int n;
    PhanSo a[1000];
    public:
    friend class PhanSo;
    arrPhanSo(){
        cout<<"Nhap vao so phan so: ";cin>>this -> n;
        for(int i = 0 ; i < n;i ++){
            cout<<"Nhap vao phan so thu "<<i;a[i].NhapPhanSo();
        }
        cout<<"Mang phan so vua nhap la: "<<endl;
        for(int i =0 ; i< n;i ++){
            a[i].XuatPhanSo();cout<<" ";
        }
        cout<<endl;
    }
    void TaoPhanSoNgauNhien(){
        for(int i = 0 ; i < n ;i ++){
            a[i].PhanSoNgauNhien();
        }
        cout<<"Mang phan so vua khoi tao: "<<endl;
        for(int i = 0 ; i< n ; i++){
            a[i].XuatPhanSo();cout<<" ";
        }
        cout<<endl;
    }
    void PhanSoLonNhat(){
        double max =a[0].iTu / a[0].iMau;
        int t,m;
        for(int i  =  1 ; i < n ;i ++){
            double m = a[i].iTu / a[i].iMau;
            if(m > max){
                max = m ;
                t = a[i].iTu;
                m = a[i].iMau;
            }
            else continue;
        }
        cout<<"Phan so lon nhat la: ";
        if(t < 0 && m < 0){
            cout<<abs(t)<<"/"<<abs(m);
        }
        else if(t >0 && m < 0){
            cout<< -t<<"/"<<abs(m);
        }
        else {
            cout<<t<<"/"<<m;
        }
    }
    bool check(int n){
        if(n < 2) return false;
        else {
            for (int i = 2; i <= sqrt(n);i++){
                if(n % i == 0) return false;
            }
        }
        return true;
    }
    void SoCoTuLaSoNguyenTo(){
        int cnt=0;
        for(int i  =0 ; i < n ; i++){
            if(check(a[i].iTu) == true)
            cnt++;
        }
        cout<<"So co tu la so nguyen to la: "<<cnt<<endl;
    }
    void Sort(){
        int t[n];
        int m[n];
        int i, j, min_idx;
        double b[n];int nb = 0;
        for(i = 0 ; i< n ;i ++){
            double t = a[i].iTu /a[i].iMau;
            b[nb++] = t;
        }
        // vong for check double tu/mau va swap phan so trong array
        for (i = 0; i < n-1; i++){
            
            min_idx = i;
            for (j = i+1; j < n; j++)
            if (b[j] < b[min_idx])
                min_idx = j;
            swap(a[min_idx], a[i]);
        }
        cout<<"Mang vua sap xep:"<<endl;
        for(int i = 0 ; i < n ;i ++){
            a[i].XuatPhanSo(); cout<<" ";
        }
    }
};
int main(){
    arrPhanSo a;
    a.TaoPhanSoNgauNhien();
    a.PhanSoLonNhat();
    a.SoCoTuLaSoNguyenTo();
    a.Sort();
    return 0;

}