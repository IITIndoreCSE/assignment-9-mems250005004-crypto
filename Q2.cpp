#include <iostream>
using namespace std;


struct Color {
    int red;   
    int green; 
    int blue;  
};

int main() {
    
    Color colors[5] = {
        {100, 150, 200},  
        {255, 100, 50},   
        {120, 200, 255},  
        {50, 80, 110},    
        {180, 220, 240}   
    };

    
    for (int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    cout << "New RGB values after inversion for all 5 colors:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Color " << i+1 << ": RGB(" 
             << colors[i].red << ", " 
             << colors[i].green << ", " 
             << colors[i].blue << ")" << endl;
    }

    return 0;
}

