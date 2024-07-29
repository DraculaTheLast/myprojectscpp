#include<iostream>
using namespace std;

class currency{
    public: 

    string cur;
    double amount;
    double roc;
    double afterres;

    void converter () {
        string ctc;
        cout<<"Name of currency to convert from INR ₹ : "<<endl;
        cin>>ctc;

        if(ctc=="Euro" || ctc== "USD" || ctc=="Yen"){
        cout<<"amount of INR ₹ to convert"<<endl;
        cin>>amount;
        }
        if(ctc =="Euro"){
            afterres=amount*0.011;
            cout<<"value of currency would be: € "<<afterres<<endl;
        }
        else if(ctc=="USD"){
            afterres=amount*0.012;
            cout<<"value of currency would be: $ "<<afterres<<endl;
        }
        else if(ctc=="Yen"){
            afterres=amount*1.84;
            cout<<"value of the currency would be: ¥ "<<afterres<<endl;
        }
        else{
            cout<<"Invalid input"<<endl;
        }

    }
};
int main(){
    cout<<"Welcome to Indian to international currency converter!"<<endl; 
    cout<<"The available currencies to convert to are: € $ ¥, keywords for them being Euro, USD, Yen"<<endl;
    cout<<"NOTE THAT THIS CURRENCY CONVERTER IS HIGHLY CASE SENSETIVE! "<<endl;
    currency c1;
    c1.converter();
    
    

   
    return 0;
}
