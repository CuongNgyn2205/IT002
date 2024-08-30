#include"header.h"
class Client{
    protected:
    string id_cl;
    string name_cl;
    string address_cl;
    string phone_cl;
    public:
    void getClientInfo();
};
class Application:Bill_Details{
    protected:
    string id_pd;
    string name_pd;
    double cost;
    string from_pd;
    public:
    void getAppInfo();
    virtual double pay() = 0;
};
class Vertical_Fan:Application{
    public:
    double pay(){return 500;};
};
class E_Fan:public Application{
    private:
    double capacity;
    public:
    double pay(){return capacity*500;};
};
class A_Fan:public Application{
    private:
    double capacity;
    public:
    double pay(){return capacity * 400;};
};
class Oneway_Air_Conditioner:public Application{
    public:
    double pay(){
        return 1000;
    };
};
class Tow_way_Air_Condtioner:public Application{
    public:
    double pay(){return 2000;};
};
class Bill_Details{
    protected:
    Application *list_app;
    public:
    void getBill_Details();
};
class Bill:public Client, public Bill_Details {
    protected:
    Bill_Details *details;
    Client client;
    string ID_Bill;
    string date_Bill;
    double cost;
    public:
    void getBillInfo();
    double pay();
    friend class Bill_List;

};
class Bills_List{
    private:
    int n;
    Bill* list;
    public:
    void getBill_List();
};