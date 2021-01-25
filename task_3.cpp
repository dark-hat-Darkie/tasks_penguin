#include <bits/stdc++.h>
using namespace std;

class Teacher {
    string teachers[5];

public:
    Teacher(){
        teachers[0] = "John Smith";
        teachers[1] = "Lara Gilbert";
        teachers[2] = "Johanna Kabir";
        teachers[3] = "Danniel Robertson";
        teachers[4] = "Larry Cooper";
    }

    string getTeacherName(int index){ return teachers[index]; }
};

class Course: public Teacher {
    string courses[5];

public:
    Course(){
        courses[0] = "English Grammer";
        courses[1] = "Mathematics";
        courses[2] = "Physics";
        courses[3] = "Chemistry";
        courses[4] = "Biology";
    }

    void listCourseAndTeacherName(){
        for(int i = 0; i < 5; i++)
            cout << courses[i] << ", " << getTeacherName(i) << endl;
        cout << endl;
    }

    string getCourseName(int index){ return courses[index]; }

    void showCourseList(){
        for(int i = 0; i < 5; i++)
            cout << i+1 << ". " << courses[i] << endl;
    }
};

class Routine : public Course {
    vector<int> indexes;

public:
    Routine(){}

    void setIndex(int index){ indexes.push_back(index); }

    void showRoutine(){
        int siz = indexes.size();

        for(int i = 0; i < siz; i += 3){
            cout << indexes[i] << " " << indexes[i + 1] << " " << getCourseName(indexes[i + 2]) << endl;
        }
        cout << endl;
    }
};

int main(){
    Teacher teachers;
    Course courses;
    Routine routine;

    char choice;

CHOICE:
    cout << "A. Create Routine\nB. Show Routine\nC. List Courses with Teachers Name\n" << endl;
    cin >> choice;
    switch(choice){
    case 'A':
        courses.showCourseList();

        int quantity;
        cout << "How many course schedule you want to add? ";
        cin >> quantity;

        for(int i = 0; i < quantity; i++){
            int dayIndex, hourIndex, courseIndex;
            cin >> dayIndex >> hourIndex >> courseIndex;
            routine.setIndex(dayIndex);
            routine.setIndex(hourIndex);
            routine.setIndex(courseIndex);
        }

        goto CHOICE;

    case 'B':
        routine.showRoutine();
        goto CHOICE;

    case 'C':
        courses.listCourseAndTeacherName();
        goto CHOICE;
    }


}
