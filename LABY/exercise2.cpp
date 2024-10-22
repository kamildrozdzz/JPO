#include <iostream>

using std::cout, std::endl;

class Student {
private:
    std::string m_name;
    int m_age;

public:
    void setAge(int a) {
        if(a>0)
            m_age = a;
    }
    int getAge() const {
        return m_age;
    }
    void setName(std::string n) {
        if(n.size()>0)
            m_name = n;
    }
    std::string getName() const {
        return m_name;
    }
};

int main(){
    Student student;
    student.setName("Kamil");
    student.setAge(22);
    cout << "My name is " << student.getName() << ", and I am " << student.getAge() << " years old." << endl;

    student.setName("");
    student.setAge(-2);
    cout << "My name is " << student.getName() << ", and I am " << student.getAge() << " years old." << endl;
}