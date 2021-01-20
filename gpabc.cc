/*
 *        File: gpabc.cc
 *      Author: Me'Kayla Travis
 *        Date: April 15, 2020
 * Description: This implementation file is used to implement all of the functions 
 *              in gpabc.h. More information is in the header file.
 */

#include <iostream>
#include <vector>
#include <string>
#include "gpabc.h"
using namespace std;

double Gpabc::find_percent(double n){
    percent = 0;
    overall = 0;
    double input = 0;
    
    for(int i = 0; i < n; i++){
        cout << "Enter the percentage you got on the assignment(s)";
        cin >> input;
        points.push_back(input);
        //cin >> pointss[i];
        cout << "Enter the weight of the assignment(s)";
        cin >> input;
        overaall.push_back(input);
        //cin >> overaall[i];
        percent = percent + (points[i] * overaall[i]);
        overall = overall + overaall[i];
        }

        percent = percent / overall;

    return percent;
}

double Gpabc::find_points(double n){
        percent = 0; 
        overall = 0;
        double sum = 0, input = 0;

        for(int i = 0; i < n; i++){
            cout << "Enter the points you got on the assignment(s) ";
            cin >> input;
            points.push_back(input);
            //cin >> pointss[i];
            cout << "Enter the overall amount of points on the assignment(s) ";
            cin >> input;
            overaall.push_back(input);
            //cin >> overaall[i];                    
    }

    for(int i = 0; i < n; i++) {
        sum = sum + points[i];
        overall = overall + overaall[i];
    }

    sum = (sum / overall) * 100;
    return sum;
}

double Gpabc::gpa(int n){
    vector <string> grade;
    string input;
    vector <double> currentGPA;
    vector <double> hours;
    double ggpa, total = 0, gpa = 0, inp = 0;

    for(int i = 0; i < n; i++){
        cout << "Enter your letter grade in Course " << i + 1 << ": ";
        cin >> input;
        grade.push_back(input);
        cout << "Enter the course credit hours: ";
        cin >> inp;
        hours.push_back(inp);
        total = total + hours[i];
    }

    for(int i = 0; i < n; i++){
        if(grade[i] == "A"){
            ggpa = 4.0;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "A-"){
            ggpa = 3.667;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "B+"){
            ggpa = 3.333;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "B"){
            ggpa = 3.0;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "B-"){
            ggpa = 2.667;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "C+"){
            ggpa = 2.333;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "C"){
            ggpa = 2.0;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "C-"){
            ggpa = 1.667;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "D+"){
            ggpa = 1.333;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "D"){
            ggpa = 1.0;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "D-"){
            ggpa = 0.667;
            currentGPA.push_back(ggpa);
        } else if(grade[i] == "F"){
            ggpa = 0.0;
            currentGPA.push_back(ggpa);
        } else {
            cout << "One of the letters entered is not an option" << endl;
            exit(1);
        }
            // gpa += (currentGPA[i] * hours[i]);
    }


    for(int i = 0; i < n; i++){
        gpa += (currentGPA[i] * hours[i]);
    }
                
    cout << gpa << endl;

    gpa /= total;
    return gpa;
}