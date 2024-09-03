#include<iostream>
using namespace std;
class electricityBill{
    private:
    string name;
    int unit;
    float sum;
    public:
    void setUnit(int a){
        unit=a;
    }
    int getUnit(){
        return unit;
    }
    void setName(string a){
        name=a;
    }
    string getname(){
        return name;
    
    }
    void details(){
        cout<<"details are";

    }
    void calculateBill(int a){
        if(a<=100){
            sum=a*1;
        }
        else if(a<=200){
            sum=(a*1.33)+1;
        }
        else{
            sum=(a*1.5)+1.33+1;
            sum=sum+50+0.15;
        }
    }
    
    void showBill(){
        cout<<name<<endl;
        cout<<unit<<endl;
        cout<<sum<<endl;
        
    }
};



int main(){
    int a;
    int n;
    cout<<"enter no. of customers"<<endl;
    cin>>n;
    string s;
    electricityBill e[n];
    for(int i=0;i<n;i++){
        cout<<"enter"<<i+1<<"customer"<<endl;
        cout<<"enter the name";
        cin>>s;
        cout<<"enter unit";
        cin>>a;
        e[i].setName(s);
        e[i].setUnit(a);
        int u;
        u=e[i].getUnit();
        e[i].calculateBill(u);
    }

    for(int i=0;i<n;i++){
        e[i].showBill();
    }
    



}