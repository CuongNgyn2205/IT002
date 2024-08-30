#include"header.h"
#include"HD.h"
void CD::getSpeInfo(){
    cin.ignore();
    cout<<"ten ca si: ";getline(cin,Name_cs);
    cout<<"Don vi san xuat: ";getline(cin,DVSX);
}
void Tranh::getSpeInfo(){
    cout<<"chieu dai: ";cin>>d;
    cout<<"chieu rong: ";cin>>r;
}
void SP::getBaseSp(){
    cin.ignore();
    cout<<"ID sp: ";getline(cin,ID_SP);
    cout<<"tieu de: ";getline(cin,Title);
    cout<<"gia ban: ";cin>>giaban;
}
void CD::outSpeInfo(){
    cout<<"ten ca si: "<<Name_cs<<endl;
    cout<<"don vi san xuat: "<<DVSX<<endl;
}
void Tranh::outSpeInfo(){
    cout<<"chieu dai x chieu rong: "<<d<<"x"<<r<<endl;
}
void SP::outBaseSp(){
    cout<<"ID sp: "<<ID_SP<<endl<<"Title"<<Title<<endl<<"gia ban: "<<giaban<<endl;
}
void ListSP::getL(){
    cout<<"so luong sp :";cin>>n;
    for(int i  =0 ;i < n;i ++){
        cout<<"1.CD\n"<<"2.Tranh\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
                SP* temp = new CD;
                temp->getBaseSp();
                temp->getSpeInfo();
                list.push_back(temp);
                break;
            }
            case 2:{
                SP* temp = new Tranh;
                temp->getBaseSp();temp->getSpeInfo();list.push_back(temp);
                break;
            }
        }
    }
}
double ListSP::total(){
    double sum = 0;
    for(int i = 0; i < n;i ++){
        sum+=list[i]->giaban;
    }
    return sum;
}
void KH::getKH(){
    cin.ignore();
    cout<<"Ma khach hang: ";getline(cin,ID_KH);
    cout<<"Ten khach hang: ";getline(cin,Ten);cout<<"So dien thoai : ";getline(cin,phone);
}
void KH::outKH(){
    cout<<"Ma khach hang: "<<ID_KH<<endl<<"Ten: "<<Ten<<endl<<"So dien thoai: "<<phone<<endl;
}
void HoaDon::getBaseInfo(){
    cin.ignore();
    cout<<"Ma hoa don: ";getline(cin,ID_HD);cout<<"Ngay lap hoa don: ";getline(cin,Date);
    kh.getKH();
    sp.getL();
}
void HoaDon::getgia(){
    this->gia = sp.total();
}
void ListSP::outL(){
    for(int i = 0 ;i < n ;i ++){
        list[i]->outBaseSp();
        list[i]->outSpeInfo();
    }
}
void HoaDon::outBaseInfo(){
    cout<<"Ma hoa don: "<<ID_HD<<endl<<"Date"<<Date<<endl<<"gia: "<<gia;
    kh.outKH();sp.outL();
}
void ListHD::getL(){
    cout<<"So luong hoa don: ";cin>>sl;
    for(int i  =0 ;i < sl;i++){
        HoaDon* temp = new HoaDon;
        temp->getBaseInfo();
        v.push_back(temp);
    }
}
void ListHD::outL(){
    for(int i = 0;i < sl;i ++){
        v[i]->outBaseInfo();
    }
}
void ListHD::Total(){
    double sum = 0;
    for(int i = 0;i < sl;i ++){
        sum+=v[i]->gia;
    }
    cout<<"gia cua hoa don: "<<sum<<endl;
}
void ListHD::Most(){
    double max = v[0]->gia;
    int mark = 0;
    for(int i  = 0;i < sl; i ++){
        if(v[i]->gia > max){
            max = v[i]->gia;
            mark = i;
        }
        
    }
    v[mark]->outBaseInfo();
}