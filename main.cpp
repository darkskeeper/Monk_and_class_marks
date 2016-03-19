#include <iostream>
#include <string>
#include <set>
#include <utility>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int mark;
    string name;
    multiset < pair <int, string> > s;
    while ( T-- )
    {
        cin >> name;
        cin >> mark;
        s.insert( pair < int, string > (100 - mark, name) );
    }
    multiset < pair < int, string > >::iterator it;
    for ( it = s.begin() ; it != s.end() ; ++it )
    {
        cout << it->second << " " << 100 - it->first << endl;
    }
    system ("pause");
    return 0;
}
