#include <iostream>

using namespace std;

int main(){
    int tab_size{5};
    int arr[tab_size];
    for(int i=0;i<5;i++){
        cout << "Podaj liczbę numer " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int i=0;i<tab_size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}