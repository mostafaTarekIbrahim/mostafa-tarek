#include <fstream>
#include <sstream>
#include <stdio.h>

#include "Reg_exp.h"
#include "Reg_def.h"
#include "Keywords.h"

bool is_reg_exp(string x);
bool is_reg_def(string x);
bool is_Punctuate(string x);
bool is_keyword(string x);

string removeSpaces(string str);

int main()
{

    vector<Reg_def> list_reg_def;
    vector<Reg_exp> list_reg_exp;
    vector<Keywords> list_keywords;

    bool check_reg_exp;
    Reg_exp exp;
    Reg_def def;
    Keywords key_word;
    std::ifstream infile("input_file.txt");
    string line;
    while (getline(infile, line))
    {
        check_reg_exp = false;
        std::istringstream iss(line);

       if(is_reg_exp(line)){
            check_reg_exp = true;
            exp.set_exp(line);
            //cout<<"exp"<<endl;
            list_reg_exp.push_back(exp);
           } else if(is_reg_def(line) && !check_reg_exp){
            def.set_def(line);
            cout<<"lhs = " + def.get_LHS_def()<<endl;
            cout<<"rhs = "  + def.get_RHS_def() + '\n'<<endl;
            //cout<<"def" <<endl;
            list_reg_def.push_back(def);
           } else if(is_keyword(line)){

            cout<<"key"<<endl;
            int start = line.find('{');
            int last = line.find('}');
            key_word.set_keyword(line.substr(start+1,last-1));
            list_keywords.push_back(key_word);
           } else if(is_Punctuate(line)){
              //  cout <<"punctuate" <<endl;
           } else {
           //cout << line <<endl;
           }
    }


    return 0;
}

bool is_reg_exp(string x){
    return (x.find(':') != std::string::npos);
}

bool is_reg_def(string x){
    return (x.find('=') != std::string::npos);
}

bool is_Punctuate(string x){
    string c = removeSpaces(x);
    cout<<c.at(c.size() - 1)<<endl;
    return (c.at(0) == '[');
}

bool is_keyword(string x){
    return (removeSpaces(x).at(0) == '{');
}

string removeSpaces(string str)
{
    int i = 0, j = 0;
    while (str[i])
    {
        if (str[i] != ' '&& str[i] != '\t')
           str[j++] = str[i];
        i++;
    }
    for(int i = j ;i < str.size();i++)
        str[i] = '\0';
    return str;
}

vector<string> split(const string &s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}

void print_letter(){

char alphabet = 'a';
int c = 0;

while (alphabet <= 'z') {
    printf("%c ", alphabet);
    alphabet++; c++;
     if (c % 6 == 0)
       printf("\n");
   }
}
