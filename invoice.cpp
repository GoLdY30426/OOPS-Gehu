#include<iostream>
using namespace std;
class Invoice{
    private:
        string partNumber;
        string partDescription;
        int quantity;
        double pricePerItem;
        double Amount;
    public:
        Invoice(string partNumber,string partDescription,int quantity,double pricePerItem){
            this->partNumber=partNumber;
            this->partDescription=partDescription;
            this->quantity=quantity;
            this->pricePerItem=pricePerItem;
        }
        void setpartNumber(string partNumber){
            this->partNumber=partNumber;
        }
        void setpartDescription(string partDescription){
            this->partDescription=partDescription;
        }
        void setquantity(int quantity){
            if(quantity>0){
                this->quantity=quantity;
            }
            else{
                this->quantity=0;
            }
        }
        void setpricePerItem(double pricePerItem){
            this->pricePerItem=pricePerItem;
        }
        void setAmount(){
            if((quantity*pricePerItem)>0){
            this->Amount=quantity*pricePerItem;
            }
            else{
                this->Amount=0;
            }
        }
        
        string getpartNumber(){
            return partNumber;
        }
        string getpartDescription(){
            return partDescription;
        }
        int getquantity(){
            return quantity;
        }
        double getpricePerItem(){
            return pricePerItem;
        }
        double getAmount(){
            if((quantity*pricePerItem)>0){
            return (quantity*pricePerItem);
            }
            else{
                return 0;
            }
        
        }

    
};



int main(){
    Invoice i("1234","abc",5,10.0);
    cout<<i.getAmount()<<endl;
    cout<<i.getpartNumber()<<endl;
    cout<<i.getpartDescription()<<endl;
}
