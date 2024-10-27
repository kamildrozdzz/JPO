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
            cout << "Constructor of LocalClass called" << endl;
        }
        ~LocalClass(){
            cout << "Destructor of LocalClass called" << endl;
        }
};

class BlockClass{
    public:
        BlockClass(){
            cout << "Constructor of BlockClass called" << endl;
        }
        ~BlockClass(){
            cout << "Destructor of BlockClass called" << endl;
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