#ifndef KEYWORDS_H
#define KEYWORDS_H

#include <iostream>
#include <string>

using namespace std;

class Keywords
{
     public:
        //DEFAULT CONSTRUCTOR
        Keywords();
        // OVERLOADED CONSTRUCTOR
        Keywords(string);
        // destructor
        ~Keywords();
        // const means that the function doesnot affect on any of the parameters here

        //Accessor functions
        string get_keyword() const;

        //setter
        void set_keyword(string x);

       private:
        string keyword;
};

#endif // KEYWORDS_H
