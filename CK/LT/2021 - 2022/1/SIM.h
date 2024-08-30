#pragma once
#include"header.h"
class SIM{
    protected:
    string serial;
    char phone[10];
    int state;
    string ID;
    public:
    void getBaseInfo();void outBaseInfo();
    virtual void getInfo() = 0;
    virtual double pay() = 0;
    virtual void outInfo() = 0;
    friend class List;
    enum loai{T,S};loai pl;
    virtual double f() = 0;
};
class TraTruoc:public SIM{
    private:
    long double sodu;
    int solan;
    public:
    void getInfo();
    double pay();
    void outInfo();
    double f(){return 0;};
};
class TraSau:public SIM{
    private:
    string goicuoc;
    double soghino;
    public:
    void getInfo();
    double pay();void outInfo();
    double f();
};
class List{
    private:
    int n;
    vector<SIM*>list;
    public:
    void getList();
    void outList();
    void Total();
    void maxno();
};