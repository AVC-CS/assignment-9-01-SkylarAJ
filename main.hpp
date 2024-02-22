#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5;
struct Student
{
    int id;
    string name;
    string major;
};

void makeStudent(Student *student);
void printStudent(Student *head);

void makeStudent(Student *student)
{
    ifstream file("students.txt");
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return;
    }

    while (!file.eof()) {
        file >> student->id >> student->name >> student->major;
        student++;
    }

    file.close();
}

void printStudent(Student *student)
{
    while (student->id != 0) {
        cout << "ID: " << student->id << ", Name: " << student->name << ", Major: " << student->major << endl;
        student++;
    }
}