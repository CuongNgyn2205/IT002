#include"header.h"
#include"SinhVien.h"
void SV::getbaseInfo(){
    cout<<"Nhap ID: ";getline(cin,id);
    cout<<"Nhap ho ten:";getline(cin,hoten);
    cout<<"Nhap dia chi: ";getline(cin,diachi);
    cout<<"Nhap tong so tin chi: ";cin>>this->tongtin;cout<<"Nhap so diem trung binh";cin>>this->dtb;
}
void SV::outbaseInfo(){
    cout<<"ID:"<<id<<endl;
    cout<<"Ho ten: "<<hoten<<endl<<"Dia chi: "<<diachi<<endl<<"Tong so tin chi:"<<tongtin<<endl<<"Diem trung binh: "<<dtb<<endl;
}
void SVDH::getSpecifyInfo(){
    cout<<"Nhap ten luan van:";
    getline(cin,tenlv);
    cout<<"Nhap diem luan van:";cin>>this->dlv;
}
void SVCD::getSpecifyInfo(){
    cout<<"Nhap so diem tot nghiep";cin>>this->diemtotnghiep;
    
}
void SV::outbaseInfo(){
    cout<<"ID: "<<id<<endl;
    cout<<"ho ten:"<<hoten<<endl;
    cout<<"dia chi: "<<diachi<<endl;
    cout<<"tong so tin chi: "<<tongtin<<endl;
}
void SVDH::outSpecifyInfo(){
    cout<<"Ten luan van:"<<tenlv<<endl<<"Diem luan van:"<<dlv<<endl;
}
void SVCD::outSpecifyInfo(){
    cout<<"Diem tot nghiep:"<<diemtotnghiep<<endl;
}
bool SVCD::check(){
    if(tongtin>=120&&dtb>=5&&diemtotnghiep>=5){
        return true;
    }
    return false;
}
bool SVDH::check(){
    if(tongtin>=170&&dtb>=5&&dlv>=5) return true;
    return false;
}
double SVDH::diemtb(){
    return dtb;
}
double SVCD::diemtb(){
    return dtb;
}

void ListSV::Nhap(){
    cout<<"Nhap so sinh vien:";cin>>this->n;
    for(int i = 0;i < n ;i ++){
        int choice;
        cout<<"1.He cao dang"<<endl<<"2.He dai hoc"<<endl<<"Chon chuong trinh hoc"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                SV*temp = new SVCD;
                temp->getbaseInfo();
                temp->getSpecifyInfo();
                p.push_back(temp);
                break;
            }
            case 2:{
                SV*temp = new SVDH;
                temp->getbaseInfo();
                temp->getSpecifyInfo();
                p.push_back(temp);
                break;
            }
        }
    }
}
void ListSV::totnghiep(){
    int tn = 0;
    for(int i = 0;i < n ;i ++){
        if(p[i]->check() == 1) n++;
    }
    cout<<"So sinh vien tot nghiep:"<<tn<<endl;
}
void ListSV::Xuat(){
    double max = p[0]->dtb;
    int index = 0;
    for(int i = 0;i < n ;i ++){
        if(p[i]->dtb>max){
            max = p[i]->dtb;
            index = i;
        }
    }
    p[index]->outbaseInfo();
    p[index]->outSpecifyInfo();
}