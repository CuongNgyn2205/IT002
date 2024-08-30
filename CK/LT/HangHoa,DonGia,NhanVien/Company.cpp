#include"header.h"
#include"Company.h"
void Stuff::getInfo(){
    cout<<"Nhap ten san pham: ";getline(cin,name);
    cout<<"Nhap so luong san pham: ";cin>>this->sl;
    cout<<"Nhap don gia cua san pham: ";cin>>this->cost;
}
void Bill::getBillInfo(){
    cout<<"Nhap so hoa don: ";getline(cin,id);
    cout<<"Nhap ngay hoa don: ";getline(cin,date);
    cout<<"Nhap so loai hang hoa: ";cin>>this->so_loai_hang_hoa;
    cout<<"Nhap danh sach hang hoa: ";
    list = new Stuff[so_loai_hang_hoa];
    for(int i =0 ;i < so_loai_hang_hoa;i ++){
        list[i].getInfo();
    }
}
long double Bill::Sum(){
    long double sum = 0;
    for(int i = 0 ;i < so_loai_hang_hoa ;i ++){
        sum += (list[i].cost* list[i].sl);
    }
    return sum;
}
void Employee::getBaseInfo(){
    cout<<"Nhap ho ten: ";getline(cin,name);cout<<"Nhap dia chi: ";getline(cin,address);cout<<"Nhap so dien thoai: ";getline(cin,phonenum);
}
void Employee::outBaseInfo(){
    cout<<"Ho ten: "<<this->name<<endl<<"Dia chi: "<<this->address<<endl<<"Phone number: "<<this->phonenum<<endl;
}
void EmpHours::getSpecialInfo(){
    cout<<"Nhap so gio lam viec: ";cin>>this->hour_of_work;
    cout<<"Nhap luong moi gio: ";cin>>this->baseSalary;
}
double EmpHours::Salary(){
    return (this->hour_of_work* this->baseSalary);
}
void EmpMonth::getSpecialInfo(){
    cout<<"Nhap luong :";cin>>this->baseSalary;
}
double EmpMonth::Salary(){
    return this->baseSalary;
}
void EmpHoaHong::getSpecialInfo(){
    cout<<"Nhap doanh thu cua thang: ";cin>>this->DoanhThu;
    cout<<"Nhap ty le hoa hong: ";cin>>this->Tyle;
}
double EmpHoaHong::Salary(){
    return (this->DoanhThu*this->Tyle);
}
void EmpMonth::outSpecialInfo(){
    cout<<"Luong co ban:"<<this->baseSalary<<endl;
}
void EmpHours::outSpecialInfo(){
    cout<<"So gio lam viec trong thang: "<<this->hour_of_work<<endl;
    cout<<"Luong tinh theo moi gio: "<<this->baseSalary<<endl;
}
void EmpHoaHong::outSpecialInfo(){
    cout<<"Tong doanh thu ban hang: "<<this->DoanhThu<<endl;
    cout<<"Ty le hoa hong: "<<this->Tyle<<endl;
}
void Company::getList(){
    cout<<"Nhap so luong nhan vien: ";cin>>this->n;

    for(int i = 0; i < n ;i ++){
        int choice;
        
        cout<<"Nhap vai tro:"<<endl<<"1.Nhan vien theo thang"<<endl<<"2. Nhan vien theo gio"<<endl<<"3. Nhan vien theo hoa hong"<<endl;cin>>choice;
        switch(choice){
            case 1: {
                Employee*temp = new EmpMonth ;
                temp->getBaseInfo();
                temp->getSpecialInfo();
                p.push_back(temp);
                break;
            }
            case 2:{
                Employee*temp = new EmpHours;
                temp->getBaseInfo();
                temp->getBaseInfo();
                p.push_back(temp); 
                break;
            }
            case 3:{
                Employee*temp = new EmpHoaHong;
                temp->getBaseInfo();
                temp->getSpecialInfo();
                p.push_back(temp);
                break;
            }
        }
    }
}
long double Company::ThanhToan(){
    long double tong  =  0;
    for(int i = 0 ;i < n ;i ++){
        tong+=p[i]->Salary();
    }
    return tong;
}