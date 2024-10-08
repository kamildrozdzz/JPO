#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int yourNumber{};
    cout << "Podaj swoja liczbe: " << endl;
    cin >> yourNumber;
    do {
        if(yourNumber>randomNumber){
            cout << "The number is too high"<< endl;
            cin >> yourNumber;
        }else if(yourNumber<randomNumber){
            cout << "The number is too low"<< endl;
            cin >> yourNumber;
        }
    }while (randomNumber!=yourNumber);
    cout << "BRAWO!! Udalo Ci sie"<< endl;
}