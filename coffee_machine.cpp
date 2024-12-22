#include<iostream>
#include<cstdlib>
using namespace std;

void pay_money(int a, float espresso, float tea, float latte, float mocha){
    float money_payable;
    cout<<"Please enter the amount 😇💰"<<endl;
    cin>>money_payable;
    if(a==1){
        if(espresso<money_payable){
        cout<<"Thankyou so much for paying. Here is the return amount $"<<money_payable-espresso<<"🙂"<<endl;
        }
        if(espresso==money_payable){
        cout<<"Thankyou so much for paying. 🙂"<<endl;
        }
        if(espresso>money_payable){
        cout<<"OHH NO!! You will need to re-order. You didn't pay enough money. ☹️"<<endl;
        }
    }
    if(a==4){
        if(tea<money_payable){
        cout<<"Thankyou so much for paying. Here is the return amount $"<<money_payable-tea<<"🙂"<<endl;
        }
        if(tea==money_payable){
        cout<<"Thankyou so much for paying. 🙂"<<endl;
        }
         if(tea>money_payable){
        cout<<"OHH NO!! You will need to re-order. You didn't pay enough money. ☹️"<<endl;
        }
    }
    if(a==2){
        if(latte<money_payable){
        cout<<"Thankyou so much for paying. Here is the return amount $"<<money_payable-latte<<"🙂"<<endl;
        }
        if(latte==money_payable){
        cout<<"Thankyou so much for paying. 🙂"<<endl;
        }
        if(latte>money_payable){
        cout<<"OHH NO!! You will need to re-order. You didn't pay enough money. ☹️"<<endl;
        }
    }
      if(a==3){
        if(mocha<money_payable){
        cout<<"Thankyou so much for paying. Here is the return amount $"<<money_payable-mocha<<"🙂"<<endl;
        }
        if(mocha==money_payable){
        cout<<"Thankyou so much for paying. 🙂"<<endl;
        }
        if(mocha>money_payable){
        cout<<"OHH NO!! You will need to re-order. You didn't pay enough money. ☹️"<<endl;
        }
    }
    // Cooking Code
}

int main(){
    cout<<"============================================================="<<endl;
    cout<<"Choose among the following: "<<endl;
    int a;
    cout<<"Enter 1 to drink 'espresso': "<<endl;
    cout<<"Enter 2 to drink 'latte': "<<endl;
    cout<<"Enter 3 to drink 'mocha': "<<endl;
    cout<<"Enter 4 to drink 'tea: "<<endl;
    cin>>a;
    float latte = 10.25, mocha = 11.45, espresso = 8.00, tea = 9.00;
    cout<<"============================================================="<<endl;
    if(a==1){
        cout<<"Alright, an espresso will cost you $8.00 ☕😇"<<endl;
    }
    else if(a==2){
        cout<<"Alright, a latte will cost you $10.25 ☕😇"<<endl;
    }
    else if(a==3){
        cout<<"Alright, a mocha will cost you $11.45 ☕😇"<<endl;
    }
    else if(a==4){
        cout<<"Alright, a tea will cost you $9.00 ☕😇"<<endl;
    }
    else{
        cout<<"I believe you chose to exit the program!! See you Soon\n💖 Stay Hydrated💖"; 
        exit(0);
    }
    pay_money(a, espresso, tea, latte, mocha);
    
}