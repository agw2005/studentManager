#include <iostream>
#include <vector>

struct student{
    std::string name;
    long long id;
    float gpa;
};

void printArray(std::string theArray[]){
    int theArraySize = 6;
    for(int i = 0; i < theArraySize ; i++){
        std::cout<<theArray[i]<<'\n';
    }
}

std::string capitalize(std::string str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            result += toupper(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string menu[6] = {
            "1. Add a student",
            "2. Delete a student",
            "3. List students",
            "4. Create a task",
            "5. Insert a grade",
            "6. Exit"
    };
    std::vector<student> studentsVector;
    student temporary;
    std::string horizontalLine = "----------------------------------------------------------------------------------------------------";
    int startingInput, count, deleteSelection;
    bool idLengthIsNotTen = true;
    bool gpaValueIsNotValid = true;
    bool programIsRunning = true;

    std::cout << horizontalLine << std::endl;
    std::cout << "Good morning, welcome to the student data center" << std::endl;
    std::cout << "What would you like to do today?" << std::endl;

    while(programIsRunning) {
        std::cout << horizontalLine << std::endl;
        printArray(menu);
        std::cout << horizontalLine << std::endl;
        std::cin >> startingInput;
        std::cout << horizontalLine << std::endl;
        std::cout<<"Input: "<<startingInput<<std::endl;
        switch (startingInput) {
            case 1:
                std::cout << horizontalLine << std::endl;
                std::cout << "Enter the name of the student:\n";
                std::getline(std::cin,temporary.name);
                std::getline(std::cin,temporary.name);
                temporary.name = capitalize(temporary.name);
                while (idLengthIsNotTen) {
                    std::cout << "Enter the student ID:\n";
                    std::cin >> temporary.id;
                    if ((int) (std::to_string(temporary.id)).length() == 10) {
                        idLengthIsNotTen = false;
                    } else { std::cout << "The student ID you just entered is not a valid ID, please try again.\n"; }
                }
                idLengthIsNotTen = true;
                while (gpaValueIsNotValid) {
                    std::cout << "Enter the starting GPA of this student:\n";
                    std::cin >> temporary.gpa;
                    if (temporary.gpa < 0 || temporary.gpa > 4) {
                        std::cout << "The student GPA you just entered is not a valid GPA value, please try again.\n";
                    } else { gpaValueIsNotValid = false; }
                }
                gpaValueIsNotValid = true;
                studentsVector.push_back(temporary);
                std::cout << horizontalLine << std::endl;
                std::cout<<"Student data has been added to the database"<<std::endl;
                break;
            case 2:
                count = 1;
                std::cout << horizontalLine << std::endl;
                std::cout << "Enter the student selection:\n";
                for(student listOfStudentsIteration : studentsVector){
                    std::cout<<count<<". "<<listOfStudentsIteration.name<<'\n';
                    count++;
                }
                std::cin>>deleteSelection;
                studentsVector.erase(studentsVector.begin() + deleteSelection-1);
                std::cout << horizontalLine << std::endl;
                std::cout<<"Student data has been deleted"<<std::endl;
                break;
            case 3:
                std::cout << horizontalLine << std::endl;;
                std::cout<<"How would you like to list the students?"<<std::endl;
                std::cout<<"1. Sorted by name\n2. Sorted by ID\n3. Sorted by GPA"<<std::endl;
                //std::cout<<"List of students:\n";
                //count = 1;
                //for(student listOfStudentsIteration : studentsVector){
                //    std::cout<<count<<". "<<listOfStudentsIteration.name<<" / "
                //    <<listOfStudentsIteration.id<<" / "
                //    <<listOfStudentsIteration.gpa<<'\n';
                //    count++;
                //}
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                programIsRunning = false;
                break;
            default:
                std::cout << "The value you just entered is beyond our instruction, please try again.\n";
                break;
        }
    }
    return 0;
}
