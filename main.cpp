#include <iostream>
#include <string>
using namespace std;

int main()
{
    char action;
    cout << "\033[1mHello! This is a Celsius <-> Fahrenheit converter.\033[0m\n";

    while (true)
    {
        cout << "\nType '1', if you'd like to convert Celsius -> Fahrenheit\n"
             << "Type '2', if you'd like to convert Fahrenheit -> Celsius\n"
             << "Type 'q' to quit\n"
             << "Input: ";
        cin >> action;

        if (action == 'q')
        {
            cout << "Exiting the program. Goodbye!\n";
            break;
        }

        if (action == '1')
        {
            int celsius;
            cout << "You chose Celsius -> Fahrenheit converter.\n"
                 << "Input the temperature you want to convert (in Celsius)\n"
                 << "Input: ";
            cin >> celsius;
            cout << celsius << "C° = " << (celsius * 9 / 5) + 32 << "F°" << endl;
        }
        else if (action == '2')
        {
            int fahrenheit;
            cout << "You chose Fahrenheit -> Celsius converter.\n"
                 << "Input the temperature you want to convert (in Fahrenheit)\n"
                 << "Input: ";
            cin >> fahrenheit;
            cout << fahrenheit << "F° = " << (fahrenheit - 32) * 5 / 9 << "C°" << endl;
        }
        else
        {
            cout << "Invalid input. Please try again.\n";
        }
    }

    return 0;
}
