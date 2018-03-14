#ifndef REG_DEF_H
#define REG_DEF_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Reg_def
{
    public:
        //DEFAULT CONSTRUCTOR
        Reg_def();
        // OVERLOADED CONSTRUCTOR
        Reg_def(string);
        // destructor
        ~Reg_def();
        // const means that the function doesnot affect on any of the parameters here

        //Accessor functions
        string get_RHS_def() const;
        string get_LHS_def()const;
        void set_domain() ;
        void split();

        //setter
        void set_def(string x);

    private:
        string RHS,LHS,definition;
        vector<string> splitted_sequance;
        char *sequance;
};

#endif // REG_EXP_H
