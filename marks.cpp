#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int arr[5];
    int score;
    public:
    void setName(string name){
        this->name=name;
    }
    void setmarks(){
        cout<<"enter the score of 5 subject";
        for(int i=0;i<5;i++){
            cin>>arr[i];
            score=score+arr[i];
        }

    }
    int getscore(){
        return score;
    }

};


int main(){
    int n,max=0;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cout<<"enter score for "<<i<<"student";
        s[i].setmarks();
    }
 
    for(int i=0;i<n;i++){
        if((s[i].getscore())>(s[0].getscore())){
            max=max+1;
        }
    }

    cout<<max<<endl;

}