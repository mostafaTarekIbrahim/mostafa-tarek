#include "Reg_exp.h"

Reg_exp::Reg_exp()
{

}


Reg_exp::Reg_exp(string x)
{
   expression = x;
   int mid = x.find(':');
   LHS = x.substr(0,mid-1);
   RHS = x.substr(mid+1,x.size()-1);
}

Reg_exp::~Reg_exp()
{

}

string Reg_exp::get_RHS_exp() const{
           return RHS;
}

string Reg_exp::get_LHS_exp() const{
           return LHS;
}

void Reg_exp::set_exp(string x){
            expression = x;
            int mid = x.find(':');
            LHS = x.substr(0,mid-1);
            RHS = x.substr(mid+1,x.size()-1);
}
