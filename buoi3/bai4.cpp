#include<bits/stdc++.h>
using namespace std;
class cArray{
    private:
    int Number_of_objects;
    int a[100];
    public:
    cArray(){
        cout<<"Nhap so phan tu: "; cin>>Number_of_objects;
        for(int i =0  ;i < Number_of_objects ; i ++){
            a[i] = rand();
        }
        cout<<"Mang vua tao:"<<endl;
        for(int i =0  ;i < Number_of_objects ; i++){
            cout<<a[i]<< " ";
        }
        cout<<endl;
    }
    void SoAmLonNhat(){
        int max = a[0];
        for(int i = 0 ; i < Number_of_objects ; i ++){
            if(a[i] < max){
                max = a[i];
            }
            else continue;
        }
        if ( max >= 0 ){
            cout<<"Mang khong co so am"<<endl;
        }
        else cout<<"So am lon nhat la "<<max<<endl;
    }
    void SoLanXuatHien(){
        int cnt = 0;
        cout<<"Nhap vao X: ";
        int x; cin>>x;
        for(int i = 0 ;i < Number_of_objects ; i ++){
            if(a[i] == x) cnt++;
            else continue;
        }
        cout<<"So lan xuat hien cua x: "<<cnt<<endl;
    }   
    void MangGiamDan(){
        int dem = 0;
	for (int i = 0; i < Number_of_objects-1; i++)
	{
		if (a[i + 1] <= a[i]) dem++;
	}
	if (dem == Number_of_objects - 1){
        cout<<"Mang giam dan"<<endl;
    }
    else {
        cout<<"Mang khong giam dan"<<endl;
    }
    }
    void SelectionSort(){
        int min_idx;
        for(int i = 0 ; i< Number_of_objects - 1 ; i ++){
            min_idx = i;
            for(int j = i + 1; j < Number_of_objects ;j ++){
                if(a[j]<a[min_idx]){
                    min_idx = j;
                    swap(a[min_idx],a[i]);
                }
            }
        }
        cout<<"Mang da duoc sap xep:"<<endl;
        for(int i =0  ; i< Number_of_objects ; i ++){
            cout<<a[i] << " ";
        }
    }
};
int main(){
    cArray a;
    a.SoAmLonNhat();
    a.SoLanXuatHien();a.MangGiamDan();a.SelectionSort();
    return 0;

}