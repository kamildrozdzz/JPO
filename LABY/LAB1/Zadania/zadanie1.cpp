#include <iostream>

using namespace std;

int main(){
    int x{}, suma{};
    cout << "Podaj liczbe: ";
    cin >> x;
    if(x<0){
        cout << "Podano błędną liczbę" << endl;
        return 1;
    }else{
        for(int i=1;i<=x;i++){
            cout << i << " ";
            suma += i;
        }
        cout << "Suma podanych liczb to: " << suma << endl;
        return 0;
    }   
}