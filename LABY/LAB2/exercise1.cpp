/*Program zliczający sumę pewnych wierszy i kolumn macierzy
na początku pobierz od użytkownika dwie liczby - kolejno liczbę wierszy i kolumn macierzy
następnie stwórz prostą macierz liczb int (podpowiedź: wektor wektorów), wypełnij ją liczbami losowymi z zakresu 0-9 i wyświetl macierz na ekranie
następnie oblicz sumę wszystkich elementów macierzy, które należą do parzystych kolumn lub nieparzystych wierszy (licz kolumny i wiersze od "0")
funkcjonalność zliczania zaimplementuj w osobnej funkcji (przekaż macierz do funkcji jako jej argument)
Na poniższej przykładowej macierzy 4x5 liczbami "1" oznaczono szukane liczby - kolumny 0, 2, 4 oraz wiersze 1, 3*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using std::cout, std::cin, std::endl, std::vector;

int SumColsAndRows(const vector<vector<int>> matrix);

int main(){
    int cols, rows;
    srand(static_cast<unsigned int>(time(0)));

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols,0));
    for(int i{0};i<rows;i++){
        for(int j{0};j<cols;j++){
            matrix[i][j]=rand() % 10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The sum of elements belonging to even columns or odd rows: " << SumColsAndRows(matrix) << endl;
}

int SumColsAndRows(const vector<vector<int>> matrix){
    int sum{};
    
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(j%2!=0 || i%2!=1){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}