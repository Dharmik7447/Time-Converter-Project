#include <iostream>
using namespace std;

class TimeConverter
{
public:
    int hrs, mins, secs, total_seconds;

    void convertToSeconds()
    {
        total_seconds = (hrs * 3600) + (mins * 60) + secs;
    }

    void convertToHMS()
    {
        hrs = total_seconds / 3600;
        mins = (total_seconds % 3600) / 60;
        secs = total_seconds % 60;
    }
};

int main()
{
    TimeConverter time;
    int choice;
    do
    {
        cout << "\nTime Converter Menu:\n";
        cout << "1. Convert HH:MM:SS to seconds\n";
        cout << "2. Convert seconds to HH:MM:SS\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter hours: ";
            cin >> time.hrs;
            cout << "Enter minutes: ";
            cin >> time.mins;
            cout << "Enter seconds: ";
            cin >> time.secs;
            time.convertToSeconds();
            cout << "Total seconds: " << time.total_seconds << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter total seconds: ";
            cin >> time.total_seconds;
            time.convertToHMS();
            cout << "HH:MM:SS = " << time.hrs << ":" << time.mins << ":" << time.secs << endl;
        }
    } while (choice != 0);

    return 0;
}