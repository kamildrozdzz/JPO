/*Program, który sprawdzi, czy podany przez użytkownika string jest palindromem
na dwa sposoby: "ręcznie" oraz z wykorzystaniem std::reverse()*/

#include <iostream>
#include <string>
#include <algorithm>

using std::cout, std::endl, std::cin, std::string, std::reverse;

int main(){
    string word{}, word_reverse{}, word_reverse_v2{};
    cout << "Enter your word: ";
    cin >> word;
    cout << "Your word: " << word << endl;

    word_reverse=word;
    reverse(word_reverse.begin(),word_reverse.end());

    cout << "Reversed word: " << word_reverse << endl;

    word_reverse_v2.resize(word.size());
    for(int i=0;i<word.size();i++){
        word_reverse_v2[i]=word[word.size()-i-1];
    }

    cout << "Reversed word v2: " << word_reverse_v2 << endl;

    if((word==word_reverse)&&(word==word_reverse_v2)){
        cout << "The given word is a palindrome." << endl;
    }else{
        cout << "The given word is not a palindrome." << endl;
    }
    return 0;
}