// Jumanji 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void myFunction() {
    cout << "Welcome to the Forgotten!!!";
}

int main()
{
    string name, ride, answer;
    char ans;
    int deer; // int feet; for how many times this guy has had his foot ran over.
    do {

        myFunction(); 
        return 0;


       // cout << "======== Welcome to The Forgotten ======== " << endl;
        cout << "" << endl; // Using this line to add a space in the application until I learn a better way to do it.
        cout << "" << endl; // I want just a little extra space under the main title and the game.
        cout << "Hey there buddy, are you ok?" << endl;
        cout << "" << endl;
        cout << "I ran over your foot with the car yesterday. You said it was fine but your foot is grey." << endl;
        cout << "" << endl;
        cout << "It looks like it has begun to decay." << endl;
        cout << "" << endl;
        cout << "I can fix it, but it won't be nice. We'll have to soak it in beans and rice " << endl;
        cout << "" << endl;
        cout << "I'll sprinkle some sage and chant out your name. Your name, your name, what was your name? " << endl;
        cout << "" << endl;
        cin >> name; // here, we are going to take in the user's name.
        cout << "" << endl;
        cout << "How could I forget that " << name << " is your name?" << endl; // add the name to the middle of a line of text.
        cout << "" << endl;
        cout << "Nevermind, that's not why we're here. I've come to scope out the humanoid deer" << endl;
        cout << "" << endl;
        cout << "How many of those things live in this land? Eating our bees and drinking our sand? " << endl;
        cout << "" << endl;
        cin >> deer; // deer represents the number of deer the player has seen in their land.
        cout << "" << endl;
        cout << "What in the heck?! The audacity !! " << deer << " deer drank up all of our tea" << endl;
        cout << "" << endl;
        cout << "They are driving our cars and sailing our seas. It looks like a takeover if you're asking me " << endl;
        cout << "" << endl;
        cout << "Tell me good sir, where do they hide? Where do they gather? Where do they ride?!" << endl;
        cout << "" << endl;
        cin >> ride; // asking for the location of the humanoid deer
        cout << "" << endl;
        cout << "They gather in " << ride << " Of course they do!" << endl;
        cout << "" << endl;
        cout << "And if you let them, they'll poop in your shoes" << endl;
        cout << "" << endl;
        cout << "" << endl;
        cout << "Getting off task, we are again." << endl;
        cout << "" << endl;
        cout << "They are eating each and all of our men" << endl;
        cout << "" << endl;
        cout << "How can we stop them? What should we do?" << endl;
        cout << "" << endl;
        cout << "I do not want to get rid of anymore shoes." << endl;
        cout << "" << endl;
        cout << "You'd throw out your own if they did it to you." << endl;
        cout << "" << endl;
        cout << "Our cause has been waiting for someone like you." << endl;
        cout << "" << endl;
        cout << "Come join our party, and fight by our side" << endl;
        cout << "" << endl;
        cout << "If we work together, we'll take out their pride" << endl;
        cout << "" << endl;
        cout << "What do you say " << name << " What will it be?" << endl; // we will bring back in the original name from the beginning of the game.
        cout << "" << endl;
        cout << "If we don't die, we'll finally be free." << endl;
        cout << endl;
        cout << endl;



        cout << "Do you want to play again? (yes or no): " << endl; // User input - Play again? yes or no

        cin >> answer; // asking for yes or no response whether to play again or not.
    } while ( answer == "yes");

    cout << "Thanks for playing The Forgotten!" << endl;

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
