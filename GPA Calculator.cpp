#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    double numberofclasses = 0, credits = 0, totalcredits = 0, points = 0;
    double gpa = 0;
    char lettergrade;

    cout << "This program calculates your GPA on a 4.0 scale\n\n";
    cout << "How many courses are you calculating for?\n";
    cin >> numberofclasses;

    for (i = 0; i < numberofclasses; i++)
    {
        cout << "\nFor Course " << i + 1 << ": How many credits is this course?\n";
        cin >> credits;
        totalcredits += credits;

        cout << "What was your grade in this course? Please do not include + or -, just the letter.\n";
        cin >> lettergrade;

        if (lettergrade == 'A' || lettergrade == 'a') points += 4.0 * credits;
        else if (lettergrade == 'B' || lettergrade == 'b') points += 3.0 * credits;
        else if (lettergrade == 'C' || lettergrade == 'c') points += 2.0 * credits;
        else if (lettergrade == 'D' || lettergrade == 'd') points += credits;
        else if (lettergrade == 'F' || lettergrade == 'f') points += 0 * credits;
    }

    gpa = points / totalcredits;

    cout << "\nNumber of courses: " << numberofclasses << endl;
    cout << "Total credits taken: " << totalcredits << endl;
    cout << "GPA: " << setprecision(2) << fixed << gpa << "\n\n";

    return 0;
}