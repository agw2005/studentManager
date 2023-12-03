#include <iostream>
#include <vector>

struct student{
    std::string name;
    long long int id;
    float gpa;
};

void printVector(std::vector<std::string> theVector){
    for(std::string i : theVector){
        std::cout<<i<<'\n';
    }
}

std::vector<student> sortVectorZToA(std::vector<student> theVector) {
    for (int i = 0; i < theVector.size() - 1; i++) {
        for (int ii = i + 1; ii < theVector.size(); ii++) {
            if (theVector[i].name < theVector[ii].name) {
                long long int tempID = theVector[i].id;
                std::string tempName = theVector[i].name;
                float tempGPA = theVector[i].gpa;
                theVector[i].id = theVector[ii].id;
                theVector[i].name = theVector[ii].name;
                theVector[i].gpa = theVector[ii].gpa;
                theVector[ii].id = tempID;
                theVector[ii].name = tempName;
                theVector[ii].gpa = tempGPA;
            }
        }
    }
    return theVector;
}

std::vector<student> sortVectorAToZ(std::vector<student> theVector) {
    for (int i = 0; i < theVector.size() - 1; i++) {
        for (int ii = i + 1; ii < theVector.size(); ii++) {
            if (theVector[i].name > theVector[ii].name) {
                long long int tempID = theVector[i].id;
                std::string tempName = theVector[i].name;
                float tempGPA = theVector[i].gpa;
                theVector[i].id = theVector[ii].id;
                theVector[i].name = theVector[ii].name;
                theVector[i].gpa = theVector[ii].gpa;
                theVector[ii].id = tempID;
                theVector[ii].name = tempName;
                theVector[ii].gpa = tempGPA;
            }
        }
    }
    return theVector;
}

std::vector<student> sortVectorHighestIDValue(std::vector<student> theVector) {
    for (int i = 0; i < theVector.size() - 1; i++) {
        for (int ii = i + 1; ii < theVector.size(); ii++) {
            if (theVector[i].id < theVector[ii].id) {
                long long int tempID = theVector[i].id;
                std::string tempName = theVector[i].name;
                float tempGPA = theVector[i].gpa;
                theVector[i].id = theVector[ii].id;
                theVector[i].name = theVector[ii].name;
                theVector[i].gpa = theVector[ii].gpa;
                theVector[ii].id = tempID;
                theVector[ii].name = tempName;
                theVector[ii].gpa = tempGPA;
            }
        }
    }
    return theVector;
}

std::vector<student> sortVectorLowestIDValue(std::vector<student> theVector) {
    for (int i = 0; i < theVector.size() - 1; i++) {
        for (int ii = i + 1; ii < theVector.size(); ii++) {
            if (theVector[i].id > theVector[ii].id) {
                long long int tempID = theVector[i].id;
                std::string tempName = theVector[i].name;
                float tempGPA = theVector[i].gpa;
                theVector[i].id = theVector[ii].id;
                theVector[i].name = theVector[ii].name;
                theVector[i].gpa = theVector[ii].gpa;
                theVector[ii].id = tempID;
                theVector[ii].name = tempName;
                theVector[ii].gpa = tempGPA;
            }
        }
    }
    return theVector;
}

std::vector<student> sortVectorHighestGPAValue(std::vector<student> theVector) {
    for (int i = 0; i < theVector.size() - 1; i++) {
        for (int ii = i + 1; ii < theVector.size(); ii++) {
            if (theVector[i].gpa > theVector[ii].gpa) {
                float tempGPA = theVector[i].gpa;
                std::string tempName = theVector[i].name;
                long long int tempID = theVector[i].id;
                theVector[i].gpa = theVector[ii].gpa;
                theVector[i].name = theVector[ii].name;
                theVector[i].id = theVector[ii].id;
                theVector[ii].gpa = tempGPA;
                theVector[ii].name = tempName;
                theVector[ii].id = tempID;
            }
        }
    }
    return theVector;
}

std::vector<student> sortVectorLowestGPAValue(std::vector<student> theVector) {
    for (int i = 0; i < theVector.size() - 1; i++) {
        for (int ii = i + 1; ii < theVector.size(); ii++) {
            if (theVector[i].gpa < theVector[ii].gpa) {
                long long int tempID = theVector[i].id;
                std::string tempName = theVector[i].name;
                float tempGPA = theVector[i].gpa;
                theVector[i].id = theVector[ii].id;
                theVector[i].name = theVector[ii].name;
                theVector[i].gpa = theVector[ii].gpa;
                theVector[ii].id = tempID;
                theVector[ii].name = tempName;
                theVector[ii].gpa = tempGPA;
            }
        }
    }
    return theVector;
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

void horizontalLine(){
    std::cout<<"----------------------------------------------------------------------------------------------------"<<std::endl;
}

void outputTheInput(int value){
    horizontalLine();
    std::cout<<"Input: "<<value<<'\n';
    horizontalLine();
}

void returnToMenu(){
    std::string listIsRunning;
    horizontalLine();
    std::cout<<"Enter any value to return to menu\n";
    std::cin>>listIsRunning;
}

void startingMenu(std::vector<std::string> theMenu){
    horizontalLine();
    printVector(theMenu);
    horizontalLine();
}

void printStringButWithBreaks(std::string theString){
    for(int i = 0 ; i <= (int)size(theString) ; i+=50){
        for(int ii = 0 ; ii < 50 && i+ii < (int)size(theString)  ; ii++){
            std::cout<<theString[i+ii];
        }
        std::cout<<"";
    }
    std::cout<<'\n';
}

int main() {
    std::vector<std::string> menu = {
            "1. Add a student",
            "2. Delete a student",
            "3. List students",
            "4. Create a task",
            "5. Insert a grade",
            "6. Exit"
    };

    std::vector<student> studentsVector,temporaryStudentsVector;
    std::vector<std::string> taskDocumentVector;
    student temporary;
    std::string taskTitle, taskDescription, taskDocument, taskDeadlinePhase;
    float newGrade;
    int startingInput,
    count, iterationStudentNaming,
    deleteSelection,
    sortSelection,
    taskDeadline,
    taskDeadlinePhaseSelection,
    taskDocumentSelection,
    taskDocumentAmount,
    gradingSelection;
    bool idLengthIsNotTen = true;
    bool gpaValueIsNotValid = true;
    bool programIsRunning = true;
    bool taskDeadlinePhaseValid = true;
    bool taskDeadlineValid = true;
    bool taskDocumentSelectionValid = true;
    bool studentIsValid = true;

    horizontalLine();
    std::cout << "Good morning, welcome to the student data center" << std::endl;
    std::cout << "What would you like to do today?" << std::endl;

    while(programIsRunning) {
        startingMenu(menu);
        std::cin>>startingInput;
        outputTheInput(startingInput);
        switch (startingInput) {
            case 1:
                iterationStudentNaming = 0; //This will make sense below
                std::cout << "Enter the name of the student:\n";
                std::getline(std::cin, temporary.name);
                std::getline(std::cin, temporary.name);
                temporary.name = capitalize(temporary.name);
                //Allow user to input a name (with spaces)
                //The 'if' below will check if there are students of the same name-
                //-but only works if there is already a student in the database
                if(studentsVector.size() != 0) {
                    for (int i = 0; i < studentsVector.size(); i++) {
                        if (studentsVector[i].name == temporary.name) {
                            horizontalLine();
                            std::cout << "The student by that name already exist! Please try again.\n";
                            horizontalLine();
                            iterationStudentNaming++;
                        } else { studentIsValid = false; }
                    }
                }
                else{
                    studentIsValid = false;
                }
                //Now, without the code below, if the code above it were to detect that a student have the same name,-
                //-it will ask the user for input (name) twice instead of once (std::getline is weird).
                //So my solution is to use getline twice at first, but if it detects a student of the same name,-
                //then it will only use getline once, fixing the "ask for input twice" problem.
                while(studentIsValid && iterationStudentNaming != 0) {
                    std::cout << "Enter the name of the student:\n";
                    std::getline(std::cin, temporary.name);
                    temporary.name = capitalize(temporary.name);
                    if(studentsVector.size() != 0) {
                        for (int i = 0; i < studentsVector.size(); i++) {
                            if (studentsVector[i].name == temporary.name) {
                                horizontalLine();
                                std::cout << "The student by that name already exist! Please try again.\n";
                                horizontalLine();
                            } else { studentIsValid = false; }
                        }
                    }
                    else{
                        studentIsValid = false;
                    }
                }
                studentIsValid = true;
                //same thing with ID as with names, but this time it does not use getline, instead it uses cin.
                //Which is why it does not need a complex iteration like the one with the student name.
                while(studentIsValid){
                    while (idLengthIsNotTen) {
                        std::cout << "Enter the student ID:\n";
                        std::cin >> temporary.id;
                        if ((int) (std::to_string(temporary.id)).length() == 10) {
                            idLengthIsNotTen = false;
                        } else {
                            std::cout << "The student ID you just entered is not a valid ID, please try again.\n";
                        }
                    }
                    idLengthIsNotTen = true;
                    if(studentsVector.size() != 0) {
                        for (int i = 0; i < studentsVector.size(); i++) {
                            if (studentsVector[i].id == temporary.id) {
                                horizontalLine();
                                std::cout << "The student by that ID already exist! Please try again.\n";
                                horizontalLine();
                            } else { studentIsValid = false; }
                        }
                    }
                    else{
                        studentIsValid = false;
                    }
                }
                studentIsValid = true;
                //No need to check if a student have the same GPA.
                while (gpaValueIsNotValid) {
                    std::cout << "Enter the starting GPA of this student:\n";
                    std::cin >> temporary.gpa;
                    if (temporary.gpa < 0 || temporary.gpa > 4) {
                        std::cout << "The student GPA you just entered is not a valid GPA value, please try again.\n";
                    } else { gpaValueIsNotValid = false; }
                }
                gpaValueIsNotValid = true;
                studentsVector.push_back(temporary);
                horizontalLine();
                std::cout << "Student data has been added to the database" << std::endl;
                break;
            case 2:
                count = 1;
                std::cout << "Enter the student selection:\n";
                for (student listOfStudentsIteration: studentsVector) {
                    std::cout << count << ". " << listOfStudentsIteration.name << '\n';
                    count++;
                }
                std::cout << "0. Cancel\n";
                std::cin >> deleteSelection;
                if (deleteSelection != 0) {
                    outputTheInput(deleteSelection);
                    studentsVector.erase(studentsVector.begin() + deleteSelection - 1);
                    std::cout << "Student data has been deleted" << std::endl;
                } else {
                    outputTheInput(deleteSelection);
                    std::cout << "Student deletion has been cancelled" << std::endl;
                }
                break;
            case 3:
                std::cout << "How would you like to list the students?" << std::endl;
                std::cout << "1. Sorted by name (descending)\n"
                             "2. Sorted by name (ascending)\n"
                             "3. Sorted by ID (descending)\n"
                             "4. Sorted by ID (ascending)\n"
                             "5. Sorted by GPA (descending)\n"
                             "6. Sorted by GPA (ascending)" << std::endl;
                std::cin >> sortSelection;
                switch (sortSelection) {
                    case 1:
                        outputTheInput(sortSelection);
                        temporaryStudentsVector = sortVectorZToA(studentsVector);
                        count = 1;
                        for (student i: temporaryStudentsVector) {
                            std::cout << count << ". " << i.name << " / " << i.id << " / " << i.gpa << '\n';
                            count++;
                        }
                        returnToMenu();
                        break;
                    case 2:
                        outputTheInput(sortSelection);
                        temporaryStudentsVector = sortVectorAToZ(studentsVector);
                        count = 1;
                        for (student i: temporaryStudentsVector) {
                            std::cout << count << ". " << i.name << " / " << i.id << " / " << i.gpa << '\n';
                            count++;
                        }
                        returnToMenu();
                        break;
                    case 3:
                        outputTheInput(sortSelection);
                        temporaryStudentsVector = sortVectorHighestIDValue(studentsVector);
                        count = 1;
                        for (student i: temporaryStudentsVector) {
                            std::cout << count << ". " << i.id << " / " << i.name << " / " << i.gpa << '\n';
                            count++;
                        }
                        returnToMenu();
                        break;
                    case 4:
                        outputTheInput(sortSelection);
                        temporaryStudentsVector = sortVectorLowestIDValue(studentsVector);
                        count = 1;
                        for (student i: temporaryStudentsVector) {
                            std::cout << count << ". " << i.id << " / " << i.name << " / " << i.gpa << '\n';
                            count++;
                        }
                        returnToMenu();
                        break;
                    case 5:
                        outputTheInput(sortSelection);
                        temporaryStudentsVector = sortVectorLowestGPAValue(studentsVector);
                        count = 1;
                        for (student i: temporaryStudentsVector) {
                            std::cout << count << ". " << i.gpa << " / " << i.name << " / " << i.id << '\n';
                            count++;
                        }
                        returnToMenu();
                        break;
                    case 6:
                        outputTheInput(sortSelection);
                        temporaryStudentsVector = sortVectorHighestGPAValue(studentsVector);
                        count = 1;
                        for (student i: temporaryStudentsVector) {
                            std::cout << count << ". " << i.gpa << " / " << i.name << " / " << i.id << '\n';
                            count++;
                        }
                        returnToMenu();
                        break;
                    default:
                        std::cout << "The value you just entered is beyond our instruction, please try again.\n";
                        break;
                }
                break;
            case 4:
                std::cout << "What is the title of this task you would like to give to your students?\n";
                std::getline(std::cin, taskTitle);
                std::getline(std::cin, taskTitle);

                std::cout << "Provide the description of the task:\n";
                std::getline(std::cin, taskDescription);

                std::cout << "Would you like to attach any file?\n1. Yes\n2. No\n";
                while(taskDocumentSelectionValid) {
                    std::cin >> taskDocumentSelection;
                    if (taskDocumentSelection == 1) {
                        std::cout << "How many files do you want to attach?\n";
                        std::cin>>taskDocumentAmount;
                        for(int i = 0 ; i < taskDocumentAmount ; i++){
                            std::cout << "What is the name of file number "<<i+1<<'\n';
                            std::cin >> taskDocument;
                            taskDocumentVector.push_back(taskDocument);
                        }
                        taskDocumentSelectionValid = false;
                    }
                    else if (taskDocumentSelection == 2){
                        taskDocument = "-";
                        taskDocumentSelectionValid = false;
                    }
                    else{std::cout << "The value you just entered is beyond our instruction, please try again.\n";}
                }
                std::cout << "What is the deadline of this task? (hour from 0 -- 12)\n";
                while(taskDeadlineValid){
                    std::cin >> taskDeadline;
                    if(taskDeadline < 13 && taskDeadline > 0){taskDeadlineValid = false;}
                    else{
                        std::cout << "The value you just entered is not a valid hour.\n";
                    }
                }
                std::cout << "1. AM\n2. PM\n";
                while (taskDeadlinePhaseValid){
                    std::cin >> taskDeadlinePhaseSelection;
                    if (taskDeadlinePhaseSelection == 1) {
                        taskDeadlinePhase = "AM";
                        taskDeadlinePhaseValid = false;
                    }
                    else if (taskDeadlinePhaseSelection == 2) {
                        taskDeadlinePhase = "PM";
                        taskDeadlinePhaseValid = false;
                    }
                    else { std::cout << "The value you just entered is beyond our instruction, please try again.\n"; }
                }
                horizontalLine();
                std::cout<<"New task created\n";
                horizontalLine();
                std::cout<<"Title      : "<<capitalize(taskTitle)<<"\nDeadline   : "<<taskDeadline<<" "<<taskDeadlinePhase<<"\nDescription:\n";
                printStringButWithBreaks(taskDescription);
                std::cout<<"Attachment(s):\n";
                for(int i = 0 ; i < taskDocumentVector.size() ; i++){
                    std::cout<<"> "<<taskDocumentVector[i]<<'\n';
                }
                break;
            case 5:
                count = 1;
                std::cout << "Which students will receive a grade?\n";
                for (student listOfStudentsIteration : studentsVector) {
                    std::cout << count << ". " << listOfStudentsIteration.name << '\n';
                    count++;
                }
                std::cout << "0. Cancel\n";
                std::cin>>gradingSelection;
                if (gradingSelection != 0) {
                    outputTheInput(gradingSelection);
                    std::cout<<"What is the value of the grade?\n";
                    std::cin>>newGrade;
                    studentsVector[gradingSelection-1].gpa += newGrade;
                    studentsVector[gradingSelection-1].gpa /= 2.0;
                    horizontalLine();
                    std::cout << "Student successfully has received the grade!" << std::endl;
                    std::cout<<studentsVector[gradingSelection-1].name<<" - GPA: "<<studentsVector[gradingSelection-1].gpa<<'\n';
                } else {
                    outputTheInput(gradingSelection);
                    std::cout << "Grading has been cancelled" << std::endl;
                }
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
