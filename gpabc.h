/*
 *        File: gpabc.h
 *      Author: Me'Kayla Travis
 *        Date: April 15, 2020
 * Description: This header class is used to hold information about 
 *              all of the grading and gpa system in gpa.cc. It holds an abundance of 
 *              different functions to perform various acts on a student's
 *              academic information. 
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifndef GPABC_H
#define GPABC_H

class Gpabc {
    public:

    double find_percent(double n);
    double find_points(double n);
    double gpa(int n);

    private:
    vector <double> points;
    vector <double> overaall;
    double percent;
    double overall;
};

#endif