// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random> // generate random numbers
#include <ctime> // make random numbers truly random each time
#include <algorithm> // sort numbers in the array
#include <numeric> // math items like addition and division
using namespace std;

int main()
{

    // I want to welcome the user and offer them a set of 20 lucky numbers.
    cout << "Welcome to my random number generator / organizer / thingamajig!!" << endl;
    cout << endl;
    cout << "Your lucky numbers are:" << endl;


    srand(time(0)); // this ensures that the numbers are actually random each time.

    int numbers[20]; // array to store random numbers


    for (int i = 0; i < 20; ++i) { // generate and store 20 different random numbers
        numbers[i] = rand() % 100 + 1; // generate random number from 1 - 100
        // cout << randomNumber << endl; // display random numbers but not in order
    }

    sort(numbers, numbers + 20); // step 1 to sort the numbers in numerical order.

    for (auto num : numbers) // this section displays the random numbers in numerical order.
        cout << num << " ";
    cout << endl;
    cout << endl;

    cout << "The smallest number in this array is: " << *min_element(numbers, numbers + 20); // this shows the smallest number in the array
    cout << endl;
    cout << endl;

    cout << "The largest number in this array is: " << *max_element(numbers, numbers + 20); // this shows the largest number in the array
    cout << endl;
    cout << endl;

    cout << "The sum of all of the numbers in this array is: " << accumulate(numbers, numbers + 20, 0); // this will add all of the numbers in the array
    cout << endl;
    cout << endl;
    
    int n = sizeof(numbers) / sizeof(numbers[0]); // This will divide the sum of all random numbers by the amount of numbers total, giving us the average
    double avg = accumulate(numbers, numbers + n, 0.0) / n;
    cout << "The average of the numbers in this array is: " << avg << endl;
    cout << endl;
    cout << endl;

    cout << "Have the day you deserve!!!" << endl; // goodbye message
    cout << endl;
    cout << endl;

    return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
