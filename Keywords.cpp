#include "Keywords.h"

Keywords::Keywords()
{
    //ctor
}


Keywords::Keywords(string x)
{
   keyword = x;
}

Keywords::~Keywords()
{

}

string Keywords::get_keyword() const{
           return keyword;
}

void Keywords::set_keyword(string x){
    keyword = x;
}

