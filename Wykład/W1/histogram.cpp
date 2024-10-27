#include <iostream>
#include <vector>
#include <string>

using std::cout, std::endl, std::cin, std::vector, std::string;

void histogram(void);

int main(){
    histogram();
    return 0;
}

void histogram(void){
    vector histogram('z'-'a'+1,0);
    string in_str;

    cout << "Enter your word: ";
    cin >> in_str;

    for(auto i:in_str){
        if(std::isalpha(i))
            ++histogram[std::tolower(i)-'a'];
    }

    for(auto i{'a'}; i <= 'z'; i++)
        cout << i << " | ";

    cout << endl;

    for(auto i:histogram)
        cout << i << " | ";
}