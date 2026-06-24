#include <iostream>
#include <string>
using namespace std;

// student's structure
struct Student {
    int id;
    string name;
    int age;
    string course;};

int main(){
    Student students[5] ={
        {24006193, "Sanju", 20, "IT"},
        {24006194, "Ali", 21, "Computer Science"},
        {24006194, "Siti", 22, "Information Systems"},
        {24006196, "John", 20, "Software Engineering"},
        {24006767, "Aina", 23, "Data Science"}};

    // disp all records
    cout << "===== STUDENT RECORDS =====\n";

    for(int i = 0; i < 5; i++){
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;}

    // search student by ID
    int searchID;
    cout << "\nEnter ID to search: ";
    cin >> searchID;

    int position = -1;

    for(int i = 0; i < 5; i++){
        if(students[i].id == searchID){
            position = i;
            break;}}

    if(position != -1){
        cout << "\nRecord Found!" << endl;
        cout << "ID: " << students[position].id << endl;
        cout << "Name: " << students[position].name << endl;
        cout << "Age: " << students[position].age << endl;
        cout << "Course: " << students[position].course << endl;}
    else{
        cout << "Student not found." << endl;}

    // update student record
    int updateID;
    cout << "\nEnter ID to update: ";
    cin >> updateID;

    for(int i = 0; i < 5; i++){
        if(students[i].id == updateID){
            cin.ignore();

            cout << "Enter a new name: ";
            getline(cin, students[i].name);

            cout << "Enter a new age: ";
            cin >> students[i].age;

            cin.ignore();

            cout << "Enter a new course: ";
            getline(cin, students[i].course);

            cout << "\nRecord updated successfully!\n";
            break;}}

    // disp records after update
    cout << "\n===== UPDATED RECORDS =====\n";

    for(int i = 0; i < 5; i++){
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;}

    return 0;
}