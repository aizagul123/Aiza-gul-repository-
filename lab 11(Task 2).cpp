#include <iostream>
#include <string>
using namespace std;
struct StudentGrading {
    string name;
    string sapId;
    string address;
    string department;
    double subject1Marks;
    double subject2Marks;
    double maxMarks;
};

void calculateMaxMarks(StudentGrading &student)
 {
    student.maxMarks = (student.subject1Marks + student.subject2Marks) / 2;
 }

void displayStudent(const StudentGrading &student) {
    cout << "Name: " << student.name << endl;
    cout << "SAP ID: " << student.sapId << endl;
    cout << "Address: " << student.address << endl;
    cout << "Department: " << student.department << endl;
    cout << "Subject 1 Marks: " << student.subject1Marks << endl;
    cout << "Subject 2 Marks: " << student.subject2Marks << endl;
    cout << "Maximum Marks: " << student.maxMarks << endl;
}

int main() {
    StudentGrading students[3];
    
    for (int i = 0; i < 3; i++) {
        cout << "Enter information for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "SAP ID: ";
        cin >> students[i].sapId;
        cout << "Address: ";
        cin >> students[i].address;
        cout << "Department: ";
        cin >> students[i].department;
        cout << "Subject 1 Marks: ";
        cin >> students[i].subject1Marks;
        cout << "Subject 2 Marks: ";
        cin >> students[i].subject2Marks;
        calculateMaxMarks(students[i]);
    }

    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " Information:" << " Information:" << endl;
        displayStudent(students[i]);
        cout << endl;
    }
    return 0;
}


