//============================================================================
// Name        : CSC450_CTA1_FictPerson.cpp
// Author      : Abnel Franquez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
    Program: Fictional Person Information Display
    Purpose: This simple C++ console application displays information about a fictional person,
             including their first name, last name, street address, city, and zip code.
             The program outputs this information to the console in a formatted manner.
             At the end, it waits for the user to press Enter before exiting,
             ensuring that the output remains visible until the user is ready to close it.


*/

#include <iostream>   // Include the input-output stream library for standard I/O operations
using namespace std;  // Use the standard namespace to avoid prefixing std:: for standard library elements

// Main function: Entry point of the program
int main() {
    // Declaration and initialization of variables to store fictional person's information
    string firstName = "Joey";          // First name of the fictional person
    string lastName = "Rodriguez";            // Last name of the fictional person
    string streetAddress = "619 Sadler Ave";  // Street address of the fictional person
    string city = "Los Angeles";        // City where the fictional person lives
    string zipCode = "90022";           // Zip code of the fictional person's address

    // Display the information stored in variables
    cout << "Fictional Person Information:" << endl;  // Header for the output
    cout << "First Name: " << firstName << endl;      // Display first name
    cout << "Last Name: " << lastName << endl;        // Display last name
    cout << "Street Address: " << streetAddress << endl;  // Display street address
    cout << "City: " << city << endl;                 // Display city
    cout << "Zip Code: " << zipCode << endl;          // Display zip code

    // Wait for user input to keep the console window open (cross-platform solution)
    cout << "\nPress Enter to exit...";  // Prompt user to press Enter before closing
    cin.get();  // Pauses the program until Enter is pressed, allowing the user to view the output

    return 0;  // Return 0 indicates that the program has ended successfully
}
