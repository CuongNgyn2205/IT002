#pragma once
#include"header.h"
#ifndef SINHVIEN_H
class SV{
    protected:
    string id,hoten,diachi;
    int tongtin;
    double dtb;
    public:
    void getbaseInfo();
    void outbaseInfo();
    virtual void getSpecifyInfo()=0;
    virtual void outSpecifyInfo()=0;
    virtual bool check() = 0;
    friend class ListSV;
};
class SVDH:public SV{
    private:
    string tenlv;
    double dlv;
    public:
    void getSpecifyInfo();
    void outSpecifyInfo();double diemtb();
    bool check();
};
class SVCD:public SV{
    private:
    double diemtotnghiep;
    public:
    void getSpecifyInfo();void outSpecifyInfo();
    bool check();
    double diemtb();
};
class ListSV{
    private:
    int n;
    vector <SV*> p;
    public:
    void Nhap();
    void Xuat();
    void totnghiep();
    
};
#endif