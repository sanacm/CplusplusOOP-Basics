#include <iostream>

using namespace std;

/*
        public: Members declared as public are accessible from anywhere, both within the class and from outside the class.
    They can be accessed by other classes, objects, and functions.

        protected: Members declared as protected are accessible within the class and its derived classes (subclasses). They cannot be accessed from outside the class hierarchy. This means that derived classes can access protected members of their base class, but unrelated classes cannot.

        private: Members declared as private are only accessible within the class itself.
    They are not accessible from derived classes or any other part of the program. Private members are often used to enforce encapsulation and hide implementation details.

 */


class Student{



private:

    string studentName,studentSurname,studentID;//member variables

public:

    Student();
    Student(string,string);
    Student(string,string,string);

    /*  A destructor is a special member function of a class that is automatically called when an object of that class goes out of scope or is explicitly destroyed using the delete keyword.
     The destructor is used to clean up any resources allocated by the object before it is destroyed.
        The destructor is identified by the class name preceded by a tilde (~). It does not take any arguments and does not have a return type, not even void. A class can have only one destructor.

     */

    ~Student();

    /*A copy constructor in C++ is a special constructor that is used to create a new object as a copy of an existing object.
        It is used to initialize a newly created object with the data of another object of the same class.*/


    Student(const Student& other);






    void displayInformation();


//member function

    void setName(string name){
        studentName=name;

    }
    void setSurname(string surname){
        studentSurname=surname;
    }
    void setID(string ID){
        studentID=ID;
    }

    void setInformation(string name,string surname,string ID){
        studentName=name;
        studentSurname=surname;
        studentID=ID;
    }


    string getName(){
        return studentName;
    }
    string getSurname(){
        return studentSurname;
    }
    string getID(){
        return  studentID;
    }


};

Student::Student() {
    cout<<"Default constructor worked"<<endl;
    studentName="None";
    studentSurname="None";
    studentID="None";

}

Student::Student(string name,string surname,string ID) {

    cout<<"3 parameter constructor worked"<<endl;

    studentName=name;
    studentSurname=surname;
    studentID=ID;





}

Student::Student(string name,string surname) {

    cout<<"2 parameter constructor worked"<<endl;

    studentName=name;
    studentSurname=surname;




}

void Student::displayInformation() {
    cout<<"Name:"<<studentName<<"\nSurname:"<<studentSurname<<endl;
    cout<<"ID:"<<studentID<<endl;


}

Student::~Student() {

    cout<<"\nDestructor worked";

}

Student::Student(const Student &other) {
    cout<<"Copy constructor worked"<<endl;

    studentName=other.studentName;
    studentSurname=other.studentSurname;
    studentID=other.studentID;







}









