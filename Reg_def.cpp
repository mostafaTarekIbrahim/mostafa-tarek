#include "Reg_def.h"

Reg_def::Reg_def()
{

}


Reg_def::Reg_def(string x)
{
   definition = x;
   int mid = x.find(':');
   LHS = x.substr(0,mid-1);
   RHS = x.substr(mid+1,x.size()-1);
}

Reg_def::~Reg_def()
{

}

string Reg_def::get_RHS_def() const{
           return RHS;
}
string Reg_def::get_LHS_def() const{
           return LHS;
}
void Reg_def::set_def(string x){
            definition = x;
            int mid = x.find('=');
            LHS = x.substr(0,mid-1);
            RHS = x.substr(mid+1,x.size()-1);
            split();
            set_domain();
}

void Reg_def::split(){
    string temp = RHS;
    string splitted;
    int mid;
    while(temp.find('|') != std::string::npos){
        mid = temp.find('|');
        splitted = temp.substr(0,mid-1);
        splitted_sequance.push_back(splitted);
        temp = temp.substr(mid+1,temp.size()-1);
    }
            splitted_sequance.push_back(temp);
}

void Reg_def::set_domain(){
    string temp;
    while( !splitted_sequance.empty() ){    //until vector is empty,
        temp =  splitted_sequance.back();
        if(temp.find('-')){
               int mid = temp.find('-');
               string start = temp.substr(0,mid-1);
               string last  = temp.substr(mid+1, temp.size() - 1);
        } else if(temp.find('+')){

        } else if(temp.find('*')){

        }
       		//display the last element
    splitted_sequance.pop_back(); 			//remove the last element
}
}


