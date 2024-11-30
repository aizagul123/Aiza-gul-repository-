#include <iostream>
using namespace std;


struct Student {
    int id;
    string name;
    int age;
    string grade;
};

 int MAX_STUDENTS =2; 

void createStudent(Student students[], int studentCount)
 {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Student list is full." << endl;
        return;
    }

    Student newStudent;
    cout << "Enter student ID: ";
    cin >> newStudent.id;
    cin.ignore(); 
    cout << "Enter student name: ";
    getline(cin, newStudent.name);
    cout << "Enter student age: ";
    cin >> newStudent.age;
    cin.ignore();
    cout << "Enter student grade: ";
    getline(cin, newStudent.grade);

    students[studentCount] = newStudent;
    studentCount++;
    cout << "Student added successfully!" << endl;
}

// Function to read all students
void readStudents (Student students[], int studentCount)
 {
    if (studentCount == 0) {
        cout<<"No students available."<< endl;
        return;
    }

    cout << "\nList of Students:\n";
    for (int i = 0; i < studentCount; ++i) {
        cout << "ID: " << students[i].id << " Name: " << students[i].name
             << " Age: " << students[i].age << "Grade: " << students[i].grade << endl;
    }
}

// Function to update a student's information
void updateStudent(Student students[], int studentCount) 
{
    int id;
    cout<<"Enter student ID to update: ";
    cin>>id;

    for (int i = 0; i < studentCount; ++i)
	 {
        if (students[i].id == id) 
		{
            cout << "Enter new name: ";
            cin>> students[i].name;
            cout << "Enter new age: ";
            cin>>students[i].age;
            cout << "Enter new grade: ";
            cin>>students[i].grade;

            cout<<"Student information updated"<<endl;
            return;
        }
    }
    cout<<"Student with ID" <<id<<"not found"<<endl;
}

// Function to delete a student
void deleteStudent(Student students[], int &studentCount)
 {
    int id;
    cout<<"Enter student ID to delete: ";
    cin>>id;

    for (int i = 0; i < studentCount; ++i) 
	{
        if (students[i].id == id) {
            
            for (int j = i; j < studentCount - 1; ++j)
			 {
                students[j]=students[j + 1];
            }
            studentCount--;
            cout<<"Student with ID "<< id <<"has been deleted."<<endl;
            return ;
        }
    }
    cout<<"Student with ID "<<id<<" not found"<<endl;
}


void displayMenu()
 {
    cout<<"\nStudent Management System\n";
    cout<<"\nCreate student\n";
    cout<<"\nRead students\n";
    cout<<"\nUpdate student\n";
    cout<<"\nDelete student\n";
    cout << "\nExit\n";
    cout << "Enter your choice: ";
}

int main() {
    Student students[MAX_STUDENTS];
    int student = 0;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                createStudent(students, student);
                break;
            case 2:
                readStudents(students, student);
                break;
            case 3:
                updateStudent(students, student);
                break;
            case 4:
                deleteStudent(students, student);
                break;
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}


