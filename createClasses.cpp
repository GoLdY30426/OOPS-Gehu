#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    string name;
    string companyName;
    float salary;
    public:
    void setid(int a){
        id=a;
    }
    int getid(){
        return id;
    }
    void setName(string a){
        name=a;
    }
    string getname(){
        return name;
    
    }
    void setcompanyname(string a){
        companyName=a;
    }
    string getcompanyName(){
        return companyName;
    
    }
    void setsalary(float a){
        salary=a;
    }
    float getsalary(){
        return salary;
    
    }

};

int main(){
    int n;
    cout<<"enter no. of customers"<<endl;
    cin>>n;
    employee a;
    string b="Rahul";
    a.setsalary(15000);
    a.setid(15);
    a.setName(b);
    a.setcompanyname("google");
    cout<<a.getid()<<endl;
    cout<<a.getname()<<endl;
    cout<<a.getsalary()<<endl;
    cout<<a.getcompanyName()<<endl;

}