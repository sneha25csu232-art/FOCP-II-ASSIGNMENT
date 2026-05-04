#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Initialize the random seed using the current system time
    srand(static_cast<unsigned int>(time(0)));

    string name;
    
    // Engaging UI using ASCII characters
    cout << "****************************************" << endl;
    cout << "*       THE ULTIMATE BURN WARD         *" << endl;
    cout << "****************************************" << endl;
    cout << "Enter a name to generate a roast: ";
    getline(cin, name);

    // A vector containing 20+ creative roast templates
    // Some add the name at the start, others are designed to flow after the name
    vector<string> roasts = {
        " writes code so slow that even a turtle switched to Python.",
        " - if procrastination were an Olympic sport, you would have a gold medal.",
        "'s debugging style is basically staring at the screen until the bug gets embarrassed.",
        "'s code runs so slowly that even dial-up internet feels fast.",
        " doesn't debug code -- they negotiate with bugs.",
        " - if laziness had a brand ambassador, it would be you.",
        " is the reason why the 'Undo' button was invented.",
        " has a 'To-Do' list that is basically just a 'To-Don't' list.",
        " could make a GPS get lost.",
        " - I've seen better organized code in a bowl of alphabet soup.",
        " is like a cloud. When they disappear, it's a beautiful day.",
        "'s logic is like a browser with 50 tabs open -- 49 of them are frozen.",
        " - your secrets are safe with me. I never even listened in the first place.",
        " brings a lot of joy to the room... whenever they leave it.",
        "'s brain is like the Bermuda Triangle: information goes in, but is never found again.",
        " is the human equivalent of a participation trophy.",
        " - I'm not saying you're slow, but you're the reason they put instructions on shampoo bottles.",
        "'s typing speed is measured in 'minutes per word'.",
        " - I've met some smart people in my life, and you... are definitely one of the people I've met.",
        " is like a software update. Whenever I see you, I think 'Not now'.",
        " - you're not clumsy, the floor just hates you.",
        "'s search history is just a series of 'How to use a spoon' tutorials.",
        " - you're like a '404 Error'. No matter how hard we look, there's nothing there."
    };

    cout << "\n[ SYSTEM: ANALYZING PERSONALITY FLAWS... ]" << endl;
    cout << "[ SYSTEM: GENERATING MAXIMUM DISRESPECT... ]\n" << endl;

    // Logic to select a random roast
    // rand() % roasts.size() picks a number from 0 to 22
    int index = rand() % roasts.size();

    // Output the final result
    cout << "----------------------------------------" << endl;
    cout << ">>> " << name << roasts[index] << endl;
    cout << "----------------------------------------" << endl;

    cout << "\nDisclaimer: This was a joke. Please dont cry." << endl;

    return 0;
}
