//
// Created by yarin665 on 04/05/18.
//

#ifndef TICTACTOE_ILLEGALCOORDINATEEXCEPTION_H
#define TICTACTOE_ILLEGALCOORDINATEEXCEPTION_H
#include <exception>
#include <string>
#include "Index.h"
using namespace std;


class IllegalCoordinateException:public exception{
private:
    Index index;
    int numEx=0;
public:
    //Constructor for IllegalCoordinateException class.
    IllegalCoordinateException(const Index& index);
    IllegalCoordinateException(const int x);

    //Function for exception throwing - returns the string printed in the exception throwing.
    string theCoordinate() const;
};

#endif //TICTACTOE_ILLEGALCOORDINATEEXCEPTION_H
