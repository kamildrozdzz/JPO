#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int yourNumber{};
    cout << "Podaj swoja liczbe: " << endl;
    do {
        cin >> yourNumber;
        if(yourNumber>randomNumber){
            cout << "The number is too high"<< endl;
        }else if(yourNumber<randomNumber){
            cout << "The number is too low"<< endl;
        }
    }while (randomNumber!=yourNumber);
    cout << "BRAWO!! Udalo Ci sie"<< endl;
    return 0;
}