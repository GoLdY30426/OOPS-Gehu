#include<iostream>
using namespace std;

class bankAccount{
    private:
    string name;
    int AccountN;
    string TOA;
    float Balance;
    public:
    void createAC(string name,string TOA,int Balance){
        this->name=name;
        this->AccountN=5;
        this->TOA=TOA;
        this->Balance=Balance;

    }
    void deposit(int deposit){
        Balance=Balance+deposit;
    }
    void withdraw(int withdraw){
        if(withdraw>Balance){
            cout<<"Insufficient Balance"<<endl;
        }
        else{
            Balance=Balance-withdraw;
        }

    }
    void show(){
        cout<<name<<endl;
        cout<<Balance<<endl;
    }


};

int main(){
    bankAccount z;
    string name;
    
    string TOA;
    float b;

    cout<<"Enter your name"<<endl;
    cin>>name;
   
    cout<<"Enter your TOA"<<endl<<"Saving  Or Current";
    cin>>TOA;
    cout<<"enter initial amount ";
    cin>>b;
    z.createAC(name,TOA,b);
    
    int c;
    cout<<"enter 1 for deposit and 2 for withdraw";
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"enter amount to deposit";
        cin>>b;
        z.deposit(b);
        break;
    
    case 2:
         cout<<"enter amount to withdraw";
        cin>>b;
        z.withdraw(b);
        break;
    }
    
    
    z.show();



    
    
}