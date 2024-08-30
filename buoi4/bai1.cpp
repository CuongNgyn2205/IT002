#include<bits/stdc++.h>
using namespace std;
class cArray{
    private:
    int n;
    int *p = new int [n];
    public:
    cArray(){
        cout<<"Nhap so phan tu cua mang: ";cin>>this->n;
        for(int i = 0 ; i < n ;i ++){
            cout<<"Nhap a["<<i<<"]: ";cin>> this->p[i];
        }
        cout<<"Mang vua nhap: ";
        for(int i = 0 ;i < n ; i++){
            cout<<p[i]<<" ";
        }
    }
    void SoNguyenNgauNhien(){
        for(int i = 0 ;i < n; i ++){
            p[i] = rand();
        }
        cout<<"Mang vua khoi tao: "<<endl;
        for(int i = 0 ; i<n ; i ++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    void SoLanXuatHien(){
        int x,cnt = 0;cout<<"Nhap vao x: ";cin>>x;
        for(int i = 0 ; i< n ; i ++){
            if(x == p[i])
            cnt++;
        }
        cout<<"So lan xuat hien cua x: "<<cnt<<endl;

    }
    void MangTangDan(){
        int flag = 0;
        for(int i = 0; i < n-1; i++){
        if(p[i] > p[i+1]) flag = 1;
    }
        if(flag == 0){
            cout<<"Mang tang dan"<<endl;
        }
        else if(flag == 1){
            cout<<"Mang khong tang dan"<<endl;
        }
    }
    int PtuLeNhoNhat(){
        int min = p[0];
        for(int i  =0 ; i < n ;i ++){
            if(p[i] % 2 == 1){
                if(min > p[i]){
                    min = p[i];
                }
            }
        }
        return min;
    }
    void selectionSort(){
        int i, j, min_idx;
        for (i = 0; i < n-1; i++){
 
            min_idx = i;
            for (j = i+1; j < n; j++)
            if (p[j] < p[min_idx])
                min_idx = j;
            swap(p[min_idx], p[i]);
        }
        cout<<"Mang vua sap xep:"<<endl;
        for(int i = 0 ; i < n ;i ++){
            cout<<p[i]<<" ";
        }
    }

};
int main(){
    cArray a;
    a.SoNguyenNgauNhien();
    a.SoLanXuatHien();
    a.MangTangDan();
    cout<<"Phan tu le nho nhat:"<<endl;
    cout<<a.PtuLeNhoNhat()<<endl;
    a.selectionSort();
    return 0;

}