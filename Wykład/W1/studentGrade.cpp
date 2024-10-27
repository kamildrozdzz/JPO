#include <iostream>
#include <vector>
#include <cmath>

using std::cout, std::endl, std::cin, std::vector;

vector<double> studentGrade(void);
double gradeAverage(vector<double> studentGrade);
double finallGrade(double average);

int main(){
    vector studentGradeVec = studentGrade();
    double average = gradeAverage(studentGradeVec);
    double finall = finallGrade(average);
}

vector<double> studentGrade(void){
    vector<double> studentGradeVec;

    for(;;){
        cout << "Enter your student grade: ";
        double grade{};
        cin >> grade;
        if(grade>=2.0&&grade<=5.0)
            studentGradeVec.push_back(grade);       
        cout << "Enter more? [Y/N]: ";
        char ans{};
        cin >> ans;
        if (ans=='n'||ans=='N'){
            break;
        }
    }

    return studentGradeVec;
}

double gradeAverage(vector<double> studentGrade){
    if(studentGrade.size()>0){
        double sum{};
        for (auto i:studentGrade){
            sum +=i;
        }
        cout << "Your student average is: " << sum/studentGrade.size();
        return sum/studentGrade.size();
    }
    return 0;
}

double finallGrade(double average){
    double finallGrade;
    if (average<3.0){
        finallGrade = 2.0;
    }else{
        double near_int = floor(average);
        double frac = average-near_int;

        double adjust{0.5};

        if(frac<0.25){
            adjust = 0.0;
        }else if(frac>0.75){
            adjust = 1.0;
        }
        finallGrade = near_int + adjust;
    }
    cout << endl;
    cout << "Finall grade is " << finallGrade;
    return finallGrade;
}