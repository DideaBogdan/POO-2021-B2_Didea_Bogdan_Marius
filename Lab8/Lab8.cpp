#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

ifstream fin("input.txt");

void ToLower(string &str)
{
    for (int i = 0; i < str.size(); i++)
        str[i] = tolower(str[i]);
}

void Split(vector<string>& vect, string str)
{
    string sep(" .,;:!?_");
    size_t size;
    int poz = 0;
    while ((size=str.find_first_not_of(sep,poz)) != std::string::npos)
    {
        poz = str.find_first_of(sep, size+1 );
        vect.push_back(str.substr(size, poz-size));
        
    }
}

void MakeMap(map<string, int>& m, vector<string>vect)
{
    for (int i = 0; i < vect.size(); i++)
        ToLower(vect[i]);
    for (int i = 0; i < vect.size(); i++)
        m[vect[i]] = m[vect[i]] + 1;
}

class Cmp
{
public:
    bool operator () (pair<string, int>const & a, pair<string, int>const & b) const
    {
        if (a.second != b.second)
            return a.second < b.second;
        else
            if (a.first.compare(b.first) > 0)
                return true;
            else return false;
    }
};

int main()
{
    string str;
    vector<string> vect;
    map<string, int> Map;
    priority_queue <pair<string, int>, vector<pair<string, int> > , Cmp> q;
    getline(fin, str);
    Split(vect, str);
    MakeMap(Map, vect);
    for (map<string,int>::iterator i = Map.begin(); i != Map.end(); i++)
    {
        pair<string, int> temp(i->first, i->second);
        q.push(temp);
    }
    while (!q.empty())
    {
        cout << '"' << q.top().first << '"' << " => " << q.top().second << "\n";
        q.pop();
    }
    return 0;
}

