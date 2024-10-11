#include <iostream>

using namespace std;

double convert(double tf);

int main(){
    double tf{};
    cout<<"Podaj temperature w Farenheitach: ";
    cin >> tf;
    double tc {convert(tf)};
    cout << tf << " Farenheita == " << tc << " Celsjusza" << endl;
    return 0;
}

double convert(double tf){
    double tc=(tf-32.0)*(5.0/9.0);
    return tc;
}