#include <iostream>
using namespace std;

int main(){

    float cp, sp;

    cout<<"Enter the cost price per dozen bananas : ";
    cin>>cp;

    cout<<"Enter the selling price per dozen bananas : ";
    cin>>sp;

    float cost_price_per_banana = cp / 12;
    float selling_price_per_banana = sp / 12;
    float profit_or_loss_per_banana = selling_price_per_banana - cost_price_per_banana;

    if(selling_price_per_banana > cost_price_per_banana){
        cout<<"Profit on selling 25 bananas is: "<<profit_or_loss_per_banana * 25<<endl;
    }else if(selling_price_per_banana < cost_price_per_banana){
        cout<<"Loss on selling 25 bananas is: "<<-profit_or_loss_per_banana * 25<<endl;
    }else{
        cout<<"No profit no loss"<<endl;
    }

    return 0;
}