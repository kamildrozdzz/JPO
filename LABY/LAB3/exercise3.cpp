#include <iostream>

using std::cout, std::endl;

class GlobalClass{
    public:
        GlobalClass(){
            cout << "Constructor of GlobalClass called" << endl;
        }
        ~GlobalClass(){
            cout << "Destructor of GlobalClass called" << endl;
        }
};

class LocalClass{
    public:
        LocalClass(){
            cout << "Constructor of GlobalClass called" << endl;
        }
        ~LocalClass(){
            cout << "Destructor of GlobalClass called" << endl;
        }
};

class BlockClass{
    public:
        BlockClass(){
            cout << "Constructor of GlobalClass called" << endl;
        }
        ~BlockClass(){
            cout << "Destructor of GlobalClass called" << endl;
        }
};  

GlobalClass globalObject;

int main(){
    cout << "Entering main() function" << endl;

    LocalClass localObject;

    {
        BlockClass blockObject;
    }

    cout << "Leaving main() function" << endl;
}