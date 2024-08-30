#include<bits/stdc++.h>
using namespace std;
class cBook{
    private:
    string ID,Name;
    int year,pages;
    public:
    void Nhap(){
        cout<<"Enter the book's ID: ";cin>>this->ID;
        cin.ignore();
        cout<<"Enter the name of book: ";getline(cin,this->Name);
        cout<<"Enter year of release: ";cin>>this -> year;
        cout<<"Enter total of pages: ";cin>>this->pages;
    }
    void Xuat(){
        cout<<"Book's ID: ";cout<<this->ID<<endl;
        cout<<"Book's name: ";cout<<this->Name<<endl;
        cout<<"Year of release: ";cout<<this->year<<endl;
        cout<<"Total of pages: ";cout<<this->pages<<endl;
    }
    friend class cListBook;
};
class cListBook{
    private:
    int n;
    cBook a[1000];
    public:
    cListBook(){
        cout<<"Nhap so luong sach: ";cin>>this->n;
        for(int i = 0 ; i < n ;i ++){
            a[i].Nhap();
        }
        cout<<"Cac sach vua nhap: ";
        for(int i = 0 ;i <n ;i ++){
            a[i].Xuat();cout<<" ";
        }
        cout<<endl;
    }
    void LatestReleaseBook(){
        int max = a[0].year;
        int k = 0;
        for(int i = 0 ; i < n ;i ++){
            if(max < a[i].year){
                max = a[i].year;
                k = i;
            }
            else continue;
        }
        cout<<"Sach moi xuat ban :"<<endl;
        a[k].Xuat();
    }
};