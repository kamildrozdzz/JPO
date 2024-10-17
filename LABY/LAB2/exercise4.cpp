/*Program pobierający od użytkownika zdanie oddzielone spacjami (np. "Języki Programowania Obiektowego to super przedmiot"), następnie pobierający pojedynczy znak, a na końcu policzy, ile razy ten znak pojawia się w zdaniu
liczenie powinno być case-insensitive, przykładowo w zdaniu "ALA ma kota" wystąpienie znaku 'a' jest równe 4
podpowiedź: std::islower(), std::isupper(), std::toupper(), std::tolower() */

#include <iostream>
#include <string>
#include <cctype>

using std::cout, std::cin, std::endl, std::string;

int letterCount(const string sentence,const char letter);

int main(){
    string sentence{};
    char letter{};
    cout << "Enter your sentence: ";
    getline(cin,sentence);
    cout << "Enter your char: ";
    cin >> letter;
    cout << "the given character appears " << letterCount(sentence,letter) << " times." << endl;
}

int letterCount(const string sentence, const char letter){
    int sum{};
    for(int i=0;i<sentence.size();i++){
        if(std::tolower(sentence[i])==std::tolower(letter))
            sum+=1;
    }
    return sum;
}