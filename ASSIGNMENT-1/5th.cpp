/* Write a program to ask user about the cost price and selling 
price banana per dozen. Calculate the profit or loss earned 
upon selling 25 bananas. */

#include <iostream>
using namespace std;

int main() {
    double costPricePerDozen, sellingPricePerDozen;
    cout << "Enter the cost price per dozen bananas: ";
    cin >> costPricePerDozen;
    cout << "Enter the selling price per dozen bananas: ";
    cin >> sellingPricePerDozen;

    // Calculate cost and selling price for 25 bananas
    double costFor25 = (costPricePerDozen / 12) * 25;
    double sellingFor25 = (sellingPricePerDozen / 12) * 25;
    double profitOrLoss = sellingFor25 - costFor25;

    if (profitOrLoss > 0)
        cout << "Profit earned on selling 25 bananas = " << profitOrLoss << endl;
    else if (profitOrLoss < 0)
        cout << "Loss incurred on selling 25 bananas = " << -profitOrLoss << endl;
    else
        cout << "No profit, no loss on selling 25 bananas." << endl;

    return 0;
}