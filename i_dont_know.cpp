#include <iostream>
#include <string> // for using strings in cpp

using namespace std;
// 3 things for creating a function;
// 1) function name;
// 2) return type;
// 3) arguments

// argc is an argument count;
// argv is an arguments array;
string to_apper(string istanbul)
{
    int i = 0;
    while (i < istanbul.size())
    {
        if ('a' <= istanbul[i] && istanbul[i] <= 'z')
            istanbul[i] = istanbul[i] - 32;
        else if ('A' <= istanbul[i] && istanbul[i] <= 'Z')
            istanbul[i] = istanbul[i] + 32;
        else{
            cout<<"Error";
        exit(0);
        }
        i++;
    }
    return istanbul;
}
int main(int argc, char const *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
    {
        cout << to_apper(argv[i]) << endl;
    }
    // cout << i << endl;
    // while (i <= argc)
    // {
    //     std::cout << argv[i] << std::endl;
    //     i++;
    // }
    return 0;
}
