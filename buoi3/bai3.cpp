#include<bits/stdc++.h>
using namespace std;
class ToaDo{
    private:
    double x,y;
    public:
    ToaDo(){
        this->x = this->y = 0;
    }
    ToaDo(double x, double y){
        this->x = x;
        this->y = y;
    }
    void NhapToaDo(){
        cout<<"Nhap x: ";cin>>this->x;
        cout<<"Nhap y: ";cin>>this->y; 
    }
    void KhoangCach(ToaDo a, ToaDo b){
        double c = 0;
        c = sqrt(pow((b.x - a.x),2) + pow((b.y - a.y),2));
        cout<<"Khoang cach giua 2 diem la: "<<c<<endl;
    }
};
int main(){
    ToaDo a,b,c;
    a.NhapToaDo();
    b.NhapToaDo();
    c.KhoangCach(a,b);
    return 0;
}