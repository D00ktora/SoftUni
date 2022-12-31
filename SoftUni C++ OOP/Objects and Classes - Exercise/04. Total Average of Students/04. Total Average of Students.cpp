#include <iostream>
#include <vector>
#include <string>

using namespace std;



class Student
{
    string name, surName;
    double greade;
public:


    void print()
    {
        cout << this->name << " " << this->surName << " " << this->greade << endl;
    }
    Student(string, string, double);
    string getName()
    {
        return this->name;
    }
};




Student::Student(string name_, string surName_, double greade_)
{
    this->name = name_;
    this->surName = surName_;
    this->greade = greade_;
}

int main()
{
    int numberOfSutedents;
    cin >> numberOfSutedents;
    vector<Student> allStudents;
    double average = 0;
    if (numberOfSutedents <= 0)
    {
        cout << "Invalid input";
        return 0;
    }
    for (int i = 0; i < numberOfSutedents; i++)
    {
        string student, secondName;
        double averageGrade;
        cin >> student >> secondName >> averageGrade;
        Student myStudent(student, secondName, averageGrade);
        /*for (int i = 0; i < allStudents.size(); i++)
        {
            if (student == myStudent.getName())
            {
                while (true)
                {

                }
            }
        }*/
        //allStudents.push_back(Student(student, secondName, averageGrade));
        allStudents.push_back(myStudent);
        average += averageGrade;
    }

    for (int i = 0; i < numberOfSutedents; i++)
    {
        allStudents[i].print();
    }
    average = average / numberOfSutedents * 1, 0;
    cout << average;
    return 0;
}