#include <iostream>
#include "Automobile.h"
#include "Vessel.h"
#include "Airplane.h"
#include "Tram.h"
#include "Motorbike.h"

using namespace std;

int main() {
    setlocale(0, "");

    int userChoice = 0;
    Transport* ptr = nullptr;

    cout << "Menu: " << endl;
    cout << "1. Automobile" << endl;
    cout << "2. Vessel" << endl;
    cout << "3. Airplane" << endl;
    cout << "4. Tram" << endl;
    cout << "5. Motorbike" << endl;
    cout << "> ";

    cin >> userChoice;

    switch (userChoice) {
    case 1:
        ptr = new Automobile();
        break;
    case 2:
        ptr = new Vessel();
        break;
    case 3:
        ptr = new Airplane();
        break;
    case 4:
        ptr = new Tram();
        break;
    case 5:
        ptr = new Motorbike();
        break;
    default:
        cout << "ERROR" << endl;
    }

    ptr->Input();
    cout << endl;

    ptr->Print();

    return 0;
}
