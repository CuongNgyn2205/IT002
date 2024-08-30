#pragma once
#include"header.h"
class Stuff{
    public:
    string name;
    int sl;
    double cost;
    public:
    void getInfo();
};
class Bill:public Stuff{
    private:
    string id;
    string date;
    Stuff *list;
    int so_loai_hang_hoa;
    public:
    void getBillInfo();
    long double Sum();
};
class Employee{
    protected:
    string name;
    string address;
    string phonenum;
    public:
    void getBaseInfo();
    virtual double Salary() = 0;
    virtual void getSpecialInfo() = 0;
    virtual void outSpecialInfo() = 0;
    void outBaseInfo();
    friend class Company;
};
class EmpHours:public Employee{
   private:
   int hour_of_work;
   double baseSalary;
   public:
   void getSpecialInfo();
   void outSpecialInfo();
   double Salary();
};
class EmpMonth:public Employee{
    private:
    double baseSalary;
    public:
    void getSpecialInfo();
    void outSpecialInfo();
    double Salary();
};
class EmpHoaHong:public Employee{
    private:
    double DoanhThu;
    double Tyle;
    public:
    void getSpecialInfo();
    void outSpecialInfo();
    double Salary();
};
class Company{
    private:
    int n;
    vector<Employee*>p;
    public: 
    void getList();
    long double ThanhToan();
};