
#include <iostream>
using namespace std;


struct Item {
    int id;     
    float cost; 
};

int main() {
    
    Item items[6] = {
        {1, 45.50},  
        {2, 120.75}, 
        {3, 30.00},  
        {4, 75.25},  
        {5, 10.00}, 
        {6, 95.50}   
    };

     
    cout << "Items with cost greater than 50.00:" << endl;
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
