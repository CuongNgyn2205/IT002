#pragma once
#ifndef HD_H
#include"header.h"
class KH{
    private:
    string ID_KH,Ten,phone;
    public:
    void getKH();
    void outKH();
};
class SP{
    protected:
    string ID_SP,Title;
    double giaban;
    public:
    void getBaseSp();
    void outBaseSp();
    virtual void getSpeInfo()=0;
    virtual void outSpeInfo()=0;
    friend class ListSP;
};
class Tranh: public SP{
    protected:
    int d,r;
    public:
    void getSpeInfo();
    void outSpeInfo();
};
class CD:public SP{
    protected:
    string Name_cs, DVSX;
    public:
    void getSpeInfo();
    void outSpeInfo();
};
class ListSP{
    private:
    int n;
    vector<SP*>list;
    public:
    void getL();void outL();
    double total();
};
class HoaDon{
    protected:
    string ID_HD,Date;
    double gia;
    KH kh;
    ListSP sp;
    public:
    void getBaseInfo();
    void outBaseInfo();
    void getgia();
    friend class ListHD;
};
class ListHD{
    private:
    int sl;
    vector<HoaDon*> v; 
    public:
    void getL();
    void outL();
    void Total();
    void Most();
};
#endif 
