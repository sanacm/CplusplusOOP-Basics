#include <iostream>
#include "studentClass.h"

using namespace std;

int main() {

    std::cout << "Hello, World!" << std::endl;

    Student student1("Thomas","Edison");

    Student student2("Nikola","Tesla","12345");

    cout<<"\n**************\n";

    Student student3(student1);

    student3.displayInformation();

    cout<<"\n**************\n";

    Student student4(student2);
    student4.displayInformation();

    cout<<"\n**************\n";

    Student studentArray[5];

    cout<<"\n**************\n";

    /*student1.setName("Nikola");
    student1.setSurname("Tesla");
    student1.setID("12345");*/

    string name=student1.getName();
    string surname=student1.getSurname();
    string ID=student1.getID();

    cout<<name<<"\n"<<surname<<"\n"<<ID<<"\n";

    student1.displayInformation();

    cout<<"\n**************\n";

    student2.displayInformation();

    /*student2.setInformation("Thomas","Edison","23456");

    cout<<"\n**************\n";
    student2.displayInformation();*/



    return 0;
}



