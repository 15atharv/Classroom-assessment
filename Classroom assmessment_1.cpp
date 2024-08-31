#include <iostream>
using namespace std;

int main() {
    // Constants for cost per notebook and pen
    int notebooks = 15;
    int pens = 20;
    float notebookPrice = 2.25;
    float penPrice = 0.75;

    // Calculate the total cost
    float totalCost = (notebooks * notebookPrice) + (pens * penPrice);

    // Output the total cost
    cout << "The total cost of the supplies is Rs. " << totalCost << endl;

    return 0;
}