#include <iostream>  // we need to import this program for printing
#include <string>    // for using strings in cpp
using namespace std; // for not writing std at the beginning of cout, string and endl

int find_sobachka(string a)
{
    // here we have argument a; the type is string.
    //this function searches @ in string and returns it's position, index
    int i;
    i = 0;

    // initialize i variable
    while (i < a.size()) //cycle goes while i is less than string's length
    {
        if (a[i] == '@') // if character at ith index is a @ symbol, then we return this index
            return i;
        i++;
    }
    // otherwise we return -1
    return -1;
}

int main(int argc, char const *argv[])
{
    string name;

    name = "abdullahmail.com";
    cout << name << endl;
    // cout << name.size() << endl;
    // we call fuction find_sobachka and we pass variable name as parameter
    if (find_sobachka(name) >= 0)
        cout << find_sobachka(name) << endl;
    else
        cout << "there is no @ symbol" << endl;
    return 0;
}

// ctrl+alt for multi-line editing
// ctrl+shift for highlighting