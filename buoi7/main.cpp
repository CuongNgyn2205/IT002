#include"header.h"
#include"Company.h"
#include"Company.cpp"
int main(){
    vector<Employee*> p;
    int n; 
    cout<<"Nhap so nhan vien: ";cin>>n;
    long double sum = 0;
    for(int i = 0;i < n;i ++){
        int choice;
        cout<<"Nhap chuc vu: "<<endl<<"1.Nhan vien van phong"<<endl<<"2.Nhan vien san xuat"<<endl<<"3.Nhan vien quan ly"<<endl;
        cin>>choice;
        switch(choice){
            case 1:{
                Employee* temp = new Office;
                temp->Nhap();
                p.push_back(temp);
                sum+=temp->Salary();
                break;
            }
            case 2:{
                Employee* temp = new Manufacturer;
                temp->Nhap();
                p.push_back(temp);
                sum+=temp->Salary();
                break;
            }
            case 3:{
                Employee* temp = new Manager;
                temp->Nhap();
                p.push_back(temp);
                sum+=temp->Salary();
                break;
            }
        }
    }
    for(int i = 0;i < n ;i ++){
        p[i]->Xuat();
    }
    cout<<"Tong luong : "<<sum<<endl;
    string name;
    cout<<"Nhap ten nhan vien muon tim kiem:";getline(cin,name);
    for(int i = 0;i < n ;i ++){
        if(p[i]->name ==  name){
            p[i]->Xuat();
        }
    }
    return 0;
}