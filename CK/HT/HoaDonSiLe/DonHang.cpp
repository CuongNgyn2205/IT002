#include"header.h"
#include"DonHang.h"
void CCaNhan::getBaseClientInfo(){
    cout<<"Mã khách hàng: ";getline(cin,this->ID_cli);
    cout<<"Tên khách hàng: ";getline(cin,Name);
    cout<<"Địa chỉ: ";getline(cin,this->Address);
    cout<<"SĐt: ";getline(cin,this->Phone);
}
void CDoanhNghiep::getBaseClientInfo(){
    cout<<"Mã khách hàng: ";getline(cin,this->ID_cli);
    cout<<"Tên khách hàng: ";getline(cin,Name);
    cout<<"Địa chỉ: ";getline(cin,this->Address);
    cout<<"SĐt: ";getline(cin,this->Phone);
    cout<<"Ma so thue: ";getline(cin,this->tax_ID);
}
void CSanPham::getsp(){
    cout<<"Ma ";getline(cin,this->masp);
    cout<<"Tên: ";getline(cin,this->tensp);
    cout<<"Giá tiền:  ";cin>>this->giatien;
    cout<<"Nơi sản xuất: ";getline(cin,this->NSX);
}
void CDoAn::getklt(){
    cout<<"Nhap khoi luong tinh : ";cin>>this->khoiluongtinh;
}
void CThucUong::getdt(){
    cout<<"Nhap dung tich: ";cin>>this->dungtich;
}
void CSanPham::getsl(){
    cout<<"Nhap so luong mua: ";cin>>this->sl;
}
void CRuou::getnd(){
    cout<<"Nhap nong do: ";cin>>this->nongdo;
}
void CDonHang::NhapDonHang(){
    cout<<"Mã đơn hàng: ";getline(cin,this->ma);
    cout<<"Ngày đặt hàng: ";getline(cin,this->ngay_dat);
    cout<<"Ngày Giao hàng:";getline(cin,this->ngay_giao);
    cout<<"Địa chỉ giao hàng: ";getline(cin,this->diachi_giao);
}
double CSi::pay(){
   
}
void CList::getList(){
    cout<<"Nhap so luong don hang: ";cin>>this->sl;
    for(int i = 0; i < this->sl; i ++){
        
    }
}