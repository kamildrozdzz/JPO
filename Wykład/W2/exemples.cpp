#include <iostream>
#include <vector>
#include <iterator>


using std::cout, std::endl, std::cin, std::vector;
using RealVec = vector<int>;
using Matrix = vector<RealVec>;

int main(){
    vector<double> dobVector{5, 0.0};
    copy(dobVector.begin(),dobVector.end(),std::ostream_iterator<double>(cout, " "));

    Matrix macierz ={
        {2,2,0,11},
        {3,5,1,2},
        {6,2,34,3}
    };
}