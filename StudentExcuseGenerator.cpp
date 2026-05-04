#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    string name;
    cout << "Enter student name: ";
    getline(cin, name);

    // A larger list of creative, fun, and strangely believable excuses
    vector<string> excuses = {
        // --- The "Tech Glitch" Category ---
        " spent three hours debugging a ghost in the code that turned out to be a single missing semicolon.",
        " had the file saved, but the 'Auto-Save' feature decided to take a vacation at the worst possible moment.",
        " was ready to submit, but the laptop's cooling fan started sounding like a jet engine and the system thermal-throttled.",
        " accidentally saved the assignment in a file format that currently only exists in the year 2077.",
        " was about to click 'Send' when a sudden Windows update turned the screen into a blue abyss of despair.",

        // --- The "Absurd but Relatable" Category ---
        " was highly productive until they discovered a much more interesting Wikipedia rabbit hole about deep-sea squids.",
        " accidentally drank a triple-espresso and ended up reorganizing their entire room instead of finishing the task.",
        " had the perfect opening paragraph written, but then the cursor started blinking at them judgmentally.",
        " tried to work outside for 'inspiration,' but a very persistent squirrel stole their focus (and their pen).",
        " was halfway through when they realized they had accidentally been doing the assignment for a class they aren't even enrolled in.",

        // --- The "Dramatic Professional" Category ---
        " found a logic error so profound it caused a temporary existential crisis regarding the nature of mathematics.",
        " completed the work, but the cat decided the keyboard was the premium location for a mid-afternoon nap.",
        " encountered a 'File Not Found' error on a file they were literally looking at two seconds prior.",
        " attempted to multi-task, but their brain's RAM reached 100% capacity and required a mandatory sleep-reboot.",
        " was prepared to submit, but the internet connection became so slow it was faster to try and mail the laptop."
    };

    int index = rand() % excuses.size();

    cout << "\n==========================================" << endl;
    cout << "  OFFICIAL ASSIGNMENT DELAY GENERATOR" << endl;
    cout << "==========================================" << endl;
    cout << "RESULT: " << name << excuses[index] << endl;
    cout << "==========================================" << endl;

    return 0;
}