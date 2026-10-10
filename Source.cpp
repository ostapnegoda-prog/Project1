#include <iostream>
#include <string>

using namespace std;
string status;

int main() {
    int assignment, total, exam;
    cout << "Enter assignment: ";

    cin >> assignment;

    cout << "Enter exam: ";

    cin >> exam;

    total = assignment + exam;

    if (assignment < 20 || exam < 30) {
        status = "potribne dodatkove opracjyvannya";
    }
    if (total >= 60) {
        status = "pidsymkovi ymovu vukonano";
    }
    if (total < 60) {
        status = "zagalnoi symu nedostatnio";
    }
    if (total > 100) {
        status = "pomulka";
    }
    if (assignment > 40 || exam > 60){
        status = "pomulka";
    }
    
        cout << "Assignment: " << assignment << endl;
        cout << "Exam: " << exam << endl;
        cout << "Status: " << status << endl;
        cout << "Total: " << total << " baliv" << endl;


        return 0;
    }