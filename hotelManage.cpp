#include<iostream>
using namespace std;
class hotel{
    private:
    int Rno;
    string name;
    int tarrif;
    int nod;
    float Amount;
    float calc(){
        float A;
        if(tarrif*nod>10000){
            A=1.05*(tarrif*nod);
        }
        else{
            A=(tarrif*nod);
        }
        return A;
    }
    
    public:
    void checkIn(int R,string n,int t,int b){
        Rno=R;
        name=n;
        tarrif=t;
        nod=b;
        

    }
    
    void checkout(){
        
        cout<<Rno<<endl;
        cout<<name<<endl;
        cout<<tarrif<<endl;
        cout<<nod<<endl;
        cout<<calc()<<endl;
    }
};

int main(){
    int n,b;
    cout<<"enter no. of customers"<<endl;
    cin>>b;
    string s;
    int t;
    int a;
    hotel h[b];
    for(int i=0;i<b;i++){
        cout<<"enter"<<i+1<<"customer"<<endl;
        cout<<"enter room no."<<endl;
        cin>>n;
        cout<<"enter name"<<endl;
        cin>>s;
        cout<<"enter per day charge"<<endl;
        cin>>t;
        cout<<"enter no of days"<<endl;
        cin>>a;
        h[i].checkIn(n,s,t,a);
    }


    for(int i=0;i<b;i++){
        h[i].checkout();
    }
    
   
    
}