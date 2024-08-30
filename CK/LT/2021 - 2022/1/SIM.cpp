#include"header.h"
#include"SIM.h"
void SIM::getBaseInfo(){
    cout<<"state : ";cin>>this->state;
    cin.ignore();
    cout<<"phone: ";cin.getline(phone,9);
    cout<<"serial: ";getline(cin,serial);
    cout<<"1.Verizon\n"<<"2.AT&T\n"<<"3.Sprint\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:{
            ID = "+001";break;
        }
        case 2:{
            ID = "+002";break;
        }
        case 3:{
            ID = "+003";break;
        }
    }

}
void TraTruoc::getInfo(){
    pl = T;
    cout<<"So du: ";cin>>this->sodu;
    cout<<"so lan nap the: ";cin>>this->solan;
}
void TraSau::getInfo(){
    pl = S;
    cout<<"Goi cuoc\n"<<"1.LCAP\n"<<"2.MCAP\n"<<"3.HCAP\n";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:{
            goicuoc = "LCAP";break;
        }
        case 2:{goicuoc = "MCAP";break;}
        case 3:{goicuoc = "HCAP";break;}
    }
}
double TraTruoc::pay(){
    if(solan < 5){
        return (sodu - sodu*0.1);
    }
    else if(5<= solan && solan <= 10){
        return (sodu - sodu*0.2);
    }
    else return(sodu - sodu*0.5);
}
double TraSau::pay(){
    if(goicuoc == "LCAP")
    return (soghino - soghino*0.05);
    else if(goicuoc =="MCAP")
    return (soghino - soghino*0.1);
    return (soghino - soghino*0.15);
}
void List::getList(){
    cin>>n;
    for(int i = 0 ; i < n; i++){
        int choice;
        cout<<"1.Tra truoc\n"<<"2.Tra sau\n";
        cin>>choice;
        switch(choice){
            case 1:{
                SIM * temp = new TraTruoc;
                temp->getBaseInfo();temp->getInfo();
                list.push_back(temp);
                break;
            }
            case 2:{
                SIM *temp = new TraSau;
                temp->getBaseInfo();temp->getInfo();list.push_back(temp);break;
            }
        }
    }
}
void TraSau::outInfo(){
    cout<<"goi cuoc: "<<goicuoc<<endl;
    cout<<"so ghi no: "<<soghino<<endl;
}
void TraTruoc::outInfo(){
    cout<<"so du: "<<sodu<<endl;
    cout<<"so lan nap the: "<<solan<<endl;
}
void SIM::outBaseInfo(){
    cout<<"serial"<<serial<<endl;
    cout<<"phone"<<"("<<ID<<")"<<phone<<endl;
    cout<<"state: "<<state<<endl;
}
void List::outList(){
    for(int i = 0 ;i < n ;i ++){
        list[i]->outBaseInfo();
        list[i]->outInfo();
    }
}
void List::Total(){
    double sum= 0;
    for(int i = 0 ;i < n ;i ++){
        if(list[i]->ID == "AT&T"){
            sum += list[i]->pay();
        }
    }
    cout<<"Total: "<<sum<<endl;
}
double TraSau::f(){
    return soghino;
}
void List::maxno(){
    double max = 0;
    for(int i = 0;i < n ;i ++){
        if(list[i]->pl == 'S'){
            max = list[i]->f();
        }
    }
    for(int i = 0;i < n ;i ++){
        if(list[i]->pl == 'S'){
            if(max < list[i]->f()){
                max = list[i]->f();
            }
        }
    }
    cout<<"So ghi no lon nhat: "<<max;
}