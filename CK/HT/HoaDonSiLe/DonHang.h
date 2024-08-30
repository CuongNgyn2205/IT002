#pragma once
#include"header.h"
class CClient{
    protected:
    string Name;
    string Address;
    string Phone;
    string ID_cli;
    public:
    void virtual getBaseClientInfo() = 0;
};
class CCaNhan: public CClient{
    public:
    void getBaseClientInfo();
};
class CDoanhNghiep:public CClient{
    protected:
    string tax_ID;
    public:
    void getBaseClientInfo();
};
class CSanPham: public CDonHang{
    protected:
    string masp;
    string tensp;
    double giatien;
    string NSX;
    int sl;
    public:
    void getsp();
    void getsl();
    
};
class CDoAn: public CSanPham{
    private:
    double khoiluongtinh;
    public:
    void getklt();
};
class CThucUong: public CSanPham{
    protected:
    double dungtich;
    public:
    void getdt();
};
class CGiaiKhat: public CThucUong, public CSanPham{
    public:
};
class CRuou: public CThucUong, public CSanPham{
    protected:
    double nongdo;
    public:
    void getnd();
};
class CDonHang{
    protected:
    string ma;
    string ngay_dat;
    string ngay_giao;
    string diachi_giao;
    CClient *cli;
    CSanPham *sp;
    public:
    void NhapDonHang();
};
class CSi:public CDonHang{
    public:
    double pay();
};
class CLe:public CDonHang{
    public:
    double pay();
};
class CList{
    private:
    int sl;
    vector<CDonHang*>list;
    public:
    void getList();
};