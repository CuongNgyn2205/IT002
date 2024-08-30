#include<bits/stdc++.h>
using namespace std;
class ClassRoom{
    protected:
    string name;
    int floor;
    int room_number;
    double capacity;
    public:
    void Nhap(){
        getline(cin,name);
        cin>>this->floor;
        cin>>this->room_number;
        cin>>this->capacity;
    }
    friend class ClassRoom_List;
    bool operator >(ClassRoom p){
        return {(room_number > p.room_number) || (floor > p.floor)};
    }
};
class Theory:public ClassRoom{
    private:
    int flag=0;
};
class Practice:public ClassRoom{
    private:
    int flag = 0;
};
class Lecture: public ClassRoom{
    private:
    int flag = 0 ;
};
class ClassRoom_List{
    private:
    ClassRoom * p;
    int n;
    int k;
    public:
    ClassRoom_List(){
        cin>>this->n;
        p = new ClassRoom[n];
        for(int i = 0;i < n ; i++){
            p[i].Nhap();
        }
        cin>>this->k;
    };
    double sum(){
        double sum1 = 0;
        for(int i = 0;i < n ;i ++){
            sum1 +=p[i].capacity; 
        }
        return sum1;
    }
    void Capable(){
        ClassRoom min = p[0];
        for(int i = 0;i < n ;i ++){
            if(min > p[i]){
                p[i] = min;
            }
        }
        cout<<min.floor<<endl;
        cout<<min.name;
    }
};
int main(){
    ClassRoom_List a;
    cout<<a.sum()<<endl;
    a.Capable();
    return 0;
}