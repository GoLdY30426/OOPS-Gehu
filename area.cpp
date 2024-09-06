#include<iostream>
using namespace std;
class area{
    
    public:
    
    double calArea(double h,double b){
        return (0.5*b*h);
        
    }
    double calArea(double r){
        return 3.14*r*r;
        
    }
    double calArea(int l,int b){
        return l*b;
        
    }
    
};

int main(){
    area d1;
    cout<<d1.calArea(2.0)<<endl;
    cout<<d1.calArea(2.0,5.0)<<endl;
    cout<<d1.calArea(5,6)<<endl;
}