/*
 *        File: gpabc_main.cc
 *      Author: Me'Kayla Travis
 *        Date: April 15, 2020
 * Description: This is the main for the GPAbc's calculator. It asks
 *              the user multiple questions based on the options they
 *              choose from the given menu and stores said information
 *              into vectors within the used files gpabc.h and gpabc.cc.
 *              It takes the given information and calculates the desired
 *              results
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "gpabc.h"

using namespace std;

// This function displays the menu and returns the user's choice
int menu();

//Class Grades
double gradePercent(double grade, double overall, double percent_overall);
void add(int n);

int main(){

    Gpabc grades;
    int c;
    
    cout << "**************************************************" << endl;
    cout << "\t \t Welcome to GPAbc's" << endl << endl;
    c = menu();

    while(c != 3){
        switch(c){
            case 1:
            {
            
            char pick;
            int n;
            cout << "How would you like to get the grade?" << endl;
            cout << "A) Weighted Percent" << endl << "B) Points" << endl;
            cin >> pick;

            if(pick == 'A' || pick == 'a'){

                cout << "How many assignments would you like to enter in? ";
                cin >> n;

                cout << endl << "Your percentage in this class is " << grades.find_percent(n) << "%" << endl << endl;
               // gradePercent();
            }

            else if (pick == 'B' || pick == 'b'){
                int n;
                cout << "How many assignments would you like to enter in? ";
                cin >> n;
                /*
                for(int i = 0; i < n; i++){



                }
                */

                cout << endl << "Your percentage in this class is " << grades.find_points(n) << "%" << endl << endl;

            } else {
                cout << "Not an option" << endl;
                exit(1);

            }
        }

            break;

            case 2: 
            {
                int n;
                cout << "How many classes would you like to enter in? ";
                cin >> n;

                cout << "Your current GPA is " << grades.gpa(n) << endl;
            }

            break;

            case 3:
            {
                cout << "**************************************************" << endl;
                cout << "\t Thank you for using GPAbc's. Goodbye!" << endl << endl;
                cout << "**************************************************" << endl;
            }
            /*
            {
                double desired, current, credit, remaining;

                cout << "Enter your desired GPA: ";
                cin >> desired;
                cout << "Enter your current GPA: ";
                cin >> current;
                cout << "Enter the total amount of credit hours you have taken: ";
                cin >> credit;
                cout << "Enter the total amount of credit hours you have left: ";
                cin >> remaining;

            }
            */

            break;

            default:
            cout << c << " is not an option. Try again" << endl << endl;
            break;
        }

        c = menu();

        }

    return 0;
}

int menu(){
    int c;
    cout << "**************************************************" << endl;
    cout << "* \t \t Choose an option \t \t *" << endl;
    cout << "* \t \t__________________ \t \t *" << endl;
    cout << "* \t \t 1) Get class grade \t \t *" << endl;
    cout << "* \t \t 2) Get GPA \t \t \t *" << endl;
    //cout << "* \t \t 3) Desired GPA \t \t *" << endl;
    cout << "* \t      Press 3 to quit program\t \t *" << endl;
    cout << "**************************************************" << endl;
    cout << "Choice: ";
    cin >> c;
    return c;
}

double gradePercent(int n, double grade, double overall, double percent_overall){

    double percent;

    for(int i = 0; i < n; i++){
        percent  = (grade / overall);
    }

    percent = percent * percent_overall;
    return percent;
}


