#include <set>
#include <iostream>
using namespace std;

int main() 
{
    int n; cin >> n;
    string str;
    while (n--)
    {       
        cin >> str;
        set<char> s(begin(str), end(str));
        cout << s.size() << "\n";
    }
}