
#include <iostream>
#include <string>

using namespace std;


#ifndef REG_EXP_H
#define REG_EXP_H


class Reg_exp
{
    public:
        //DEFAULT CONSTRUCTOR
        Reg_exp();
        // OVERLOADED CONSTRUCTOR
        Reg_exp(string);
        // destructor
        ~Reg_exp();
        // const means that the function doesnot affect on any of the parameters here

        //Accessor functions
        string get_RHS_exp() const;
        string get_LHS_exp()const;
        void set_exp(string x);

    private:
        string RHS,LHS,expression;
};

#endif // REG_EXP_H
