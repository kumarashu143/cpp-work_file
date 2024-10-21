#include <iostream>
#include <string>

int main() {
    int age;
    std::string nation;
    std::string qualification;

    // Input age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Input nation
    std::cout << "Enter your nation: ";
    std::cin.ignore(); // To clear the newline character from the input buffer
    std::getline(std::cin, nation);

    // Input qualification
    std::cout << "Enter your qualification: ";
    std::getline(std::cin, qualification);

    // Check age
    if (age >= 18) {
        // Age is valid, check nation
        if (nation == "India") {
            // Nation is valid, check qualification
            if (qualification == "8th passed") {
                std::cout << "You meet the requirements!" << std::endl;
            } else {
                std::cout << "You do not meet the requirements." << std::endl;
                std::cout << "Qualification must be '8th passed'." << std::endl;
            }
        } else {
            std::cout << "You do not meet the requirements." << std::endl;
            std::cout << "Nation must be India." << std::endl;
        }
    } else {
        std::cout << "You do not meet the requirements." << std::endl;
        std::cout << "Age must be 18 or older." << std::endl;
    }

    return 0;
}
