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

int main() {
    std::string menu[6] = {
            "1. Add a student",
            "2. Delete a student",
            "3. List students",
            "4. Create a task",
            "5. Insert a grade",
            "6. Exit"
    };
    std::vector<student> studentVector;
    student temporary;
    std::string horizontalLine = "--------------------------------------------------";
    int startingInput;
    bool idLengthIsNotTen = true;
    bool gpaValueIsNotValid = true;
    bool programIsRunning = true;

    std::cout << horizontalLine << std::endl;
    std::cout << "Good morning, welcome to the student data center" << std::endl;
    std::cout << "What would you like to do today?" << std::endl;
    std::cout << horizontalLine << std::endl;
    printArray(menu);

    while(programIsRunning) {
        std::cin >> startingInput;
        switch (startingInput) {
            case 1:
                std::cout << "Enter the name of the student:\n";
                std::cin >> temporary.name;
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
                studentVector.push_back(temporary);
                break;
            case 2:
                break;
            case 3:
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
