#include <iostream>

using std::cout, std::endl, std::cin;

class Animal{
    public:
        virtual void makeSound() = 0;
        virtual ~Animal(){};
};

class Dog : public Animal{
    public:
        void makeSound() override{
            cout << "Woof!" << endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound() override{
            cout << "Meow!" << endl;
        }
};

Animal* chooseAnimal(int number);

int main(){
    cout << "Enter a number: ";
    int x{};
    cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    delete animal;

    return 0;
}

Animal* chooseAnimal(int number){
     if(number%2 == 0){
        return new Dog;
    }else{
        return new Cat;
    }
}