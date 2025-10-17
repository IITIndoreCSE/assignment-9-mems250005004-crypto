
#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord year[12];

   
    for (int i = 0; i < 12; i++) {
        cout << "Month " << (i + 1) << " Name: ";
        cin.ignore(); // To ignore any leftover newline character
        getline(cin, year[i].month); 
        cout << "Sales Amount: ";
        cin >> year[i].amount;
    }

   
    float maxAmount = year[0].amount;
    float minAmount = year[0].amount;
    string maxMonth = year[0].month;
    string minMonth = year[0].month;

    
    for (int i = 1; i < 12; i++) {
        if (year[i].amount > maxAmount) {
            maxAmount = year[i].amount;
            maxMonth = year[i].month;
        }
        if (year[i].amount < minAmount) {
            minAmount = year[i].amount;
            minMonth = year[i].month;
        }
    }

    
    cout << "Month with maximum sales: " << maxMonth << " with amount " << maxAmount << endl;
    cout << "Month with minimum sales: " << minMonth << " with amount " << minAmount << endl;

    return 0;
}
