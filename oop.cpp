#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    void setMarks(float m) {
        if (m >= 0 && m <= 100)
            marks = m;
        else
            marks = 0;
    }

    void display() {
        cout << rollNo << " "
             << name << " "
             << marks << endl;
    }
};

void printResult(Student s) {
    if (s.getMarks() >= 40)
        cout << s.getName() << " PASS" << endl;
    else
        cout << s.getName() << " FAIL" << endl;
}

int main() {

    Student s[3] = {
        Student(101, "Asha", 82),
        Student(102, "Rahul", 35),
        Student(103, "Meera", 105)
    };

    for (int i = 0; i < 3; i++) {
        s[i].display();
    }

    s[1].setMarks(45);

    for (int i = 0; i < 3; i++) {
        printResult(s[i]);
    }

    return 0;
}