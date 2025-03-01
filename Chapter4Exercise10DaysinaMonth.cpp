/*
Filename: Chapter4Exercise10DaysinaMonth.cpp
programmer: Morgan Thorne
Date: March 2025
Requirements:
Write a program that asks the user to enter a month (Letting the user enter an integer between 1-12)
and the year. The program should then display the number of days in that month.
1. Determine whether the year is divisible by 100. If it is, then it is 
a leap year if and only if it is divisible by 400. For example 2000 is a leap but 2100 is not.
2: If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4.
For example, 2008 is a leap year but 2009 is not.
*/

#include <iostream>
using namespace std;

int main()
{
    int month = 0;
    int Year;
    int Days;
    //LeapYear = 2 because if and else if statement assigns them the value of 0 or 1 based whether its a leap year
    int LeapYear = 2;
    
    //output asking for month and user enters an integer
    cout << "Please enter a month: ";
    cin >> month;

    //If user enters wrong integer they are directed to enter an integer between 1-12
    while (month < 1 || month > 12) {
        cout << "Those are not real months, Please enter an integer of 1-12: ";
        cin >> month;
    }
    
    //out asking for year and user enters year
    cout << "What year?: ";
    cin >> Year;

    //Using While to only enter year between 1-10,000
    while (Year < 1 || Year > 10000) {
        cout << "Please enter a year between 1 - 10,000: ";
        cin >> Year;
    }

    //Using switch statement to assign days to months
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "The are 31 Days ";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "There are 30 days ";
    }

    //Else if statement, assigns the month based off of integer entered, also outputs the date in month, year 
    if (month == 1) {
        cout << "in January, " << Year;
    }
            else if (month == 3) {
                cout << "in March, " << Year;
            }
                else if (month == 4) {
                    cout << "in April, " << Year;
                }
                    else if (month == 5) {
                        cout << "in May, " << Year;
                    }
                        else if (month == 6) {
                            cout << "in June, " << Year;
                        }
                            else if (month == 7) {
                                cout << "in July, " << Year;
                            }
                                else if (month == 8) {
                                    cout << "in August, " << Year;
                                }
                                    else if (month == 9) {
                                        cout << "in September, " << Year;
                                    }
                                        else if (month == 10) {
                                            cout << "in October, " << Year;
                                        }
                                            else if (month == 11) {
                                                cout << "in November, " << Year;
                                            }
                                                else if (month == 12) {
                                                    cout << "in December, " << Year;
                                                }
    
    switch (month)
    case 2:
    //if and else if statement, used to determine whether the year entered by user is a leap year.
    //Assigns a value of 1 if a leap year and 0 if not a leap year   
    if (Year % 100 == 0) {
        if (Year % 400 == 0) {
            LeapYear = 1;
            cout << "It's a leap year.";
        }
        else {
            LeapYear = 0;
            cout << "It's not a leap year.";
        }
    }
    else if (Year % 100 != 0) {
        if (Year % 4 == 0)
            LeapYear = 1;
        cout << "Its a leap year! ";
    }
        else {
            LeapYear = 0;
            cout << "It's not a leap year! ";
        }
    //Output for whether its a leap day or not
    if (LeapYear == 1)
        cout << "There are 29 days on February, " << Year;
    else if (LeapYear == 0)
        cout << "There are 28 days on February, " << Year;
}

