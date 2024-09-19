#pragma once
#include"header.h"
#include"Company.h"
void Office::Nhap(){
    pl = Off;
    cout<<"Nhap ho ten: ";getline(cin,name);
    cout<<"Nhap ngay thang nam sinh: ";getline(cin,ns);
    cout<<"Nhap luong co ban: ";cin>>this->baseSalary;
    cout<<"Nhap so tien tro cap: ";cin>>this->trocap;
    cout<<"Nhap so ngay lam viec: ";cin>>this->day;
    
}
void Manufacturer::Nhap(){ 
    pl = Manu;
    cout<<"Nhap ho ten: ";getline(cin,name);
    cout<<"Nhap ngay thang nam sinh: ";getline(cin,ns);
    cout<<"Nhap so san pham da hoan thanh: ";cin>>this->products;
    cout<<"Nhap luong co ban: ";cin>>this->baseSalary;
   
}
void Manager::Nhap(){
    pl = Mana;
    cout<<"Nhap ho ten: ";getline(cin,name);
    cout<<"Nhap ngay thang nam sinh: ";getline(cin,ns);
    cout<<"Nhap he so chuc vu: ";cin>>this->Heso;
    cout<<"Nhap luong co ban: ";cin>>this->baseSalary;
    cout<<"Nhap so tien thuong: ";cin>>this->extra;
    
}
double Office::Salary(){
    return (baseSalary + day*200.000 + trocap);
}
double Manufacturer::Salary(){
    return (baseSalary + products*2.000);
}
double Manager::Salary(){
    return (baseSalary*Heso + extra);
}
void Office::Xuat(){
    cout<<"Ho ten: "<<name<<endl;
    cout<<"Ngay thang nam sinH: "<<ns<<endl;
    cout<<"So ngay lam viec: "<<day<<endl;
    cout<<"So tien tro cap: "<<trocap<<endl;
}
void Manufacturer::Xuat(){
    cout<<"Ho ten: "<<name<<endl;
    cout<<"Ngay thang nam sinh: "<<ns<<endl;
    cout<<"So san pham da hoan thanh: "<<products<<endl;
}
void Manager::Xuat(){
    cout<<"Ho ten: "<<name<<endl;
    cout<<"Ngay thang nam sinh: "<<ns<<endl;
    cout<<"He so chuc vu: "<<Heso<<endl;
    cout<<"So tien thuong: "<<extra<<endl;
}
