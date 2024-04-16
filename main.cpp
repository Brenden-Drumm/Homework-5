#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include "MyList.h"
#include "listtools.h"


using namespace std;

/*************************************************************************
** Author : Brenden Drumm
** Program : hw5
** Date Created : February 15, 2024
** Date Last Modified : February 15, 2024
**
*************************************************************************/

struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {if (fullname==rhs.fullname) return true; return false; }
    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false; }
};
ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"--" <<user.state;
    return out;
}

int main()
{
    cout << "Hello world!" << endl;

    string line;
    Profile temp;
    MyList<Profile> pMyList;
    ifstream file("presidentsWstates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            pMyList.insertHead(temp);
        }
    }

    return 0;
}
