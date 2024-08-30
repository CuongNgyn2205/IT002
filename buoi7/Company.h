#pragma once
#include"header.h"
#ifndef COMPANY_H
class Employee{
    protected:
     string ns;
    public:
    enum loai{Off,Manu,Mana};string name;
    loai pl;
    friend class Office;
    friend class Manufacturer;
    friend class Manager;
    virtual double Salary() = 0;
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
};
class Office: public Employee{
    private:
    int day;
    double trocap;
    double baseSalary;
    public:
    void Xuat();
    void Nhap();
    double Salary();
};
class Manufacturer:public Employee{
    private:
    int products;
    double baseSalary;
    public:
    void Xuat();
    void Nhap();
    double Salary();
};
class Manager:public Employee{
    private:
    int Heso;
    double extra;
    double baseSalary;
    public:
    void Nhap();
    void Xuat();
    double Salary();
};
#endif