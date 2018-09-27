#include <iostream>


using namespace std;


int main()
{
    
    char x[] = { "bvwevwev euirhvwehv we hvbvn wevuhb ewvj  eee" };
    
    
    for ( auto i : x )
    {
        if (i == 'e')
            cout << "X" << endl;
        else
            cout << i << endl ;
    }
    cout << endl ;
    return 0;
}

