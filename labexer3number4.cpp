#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;
    
    char b;
    cout << "Enter a another character: ";
    cin >> b;
    int al = int(a);
    int bl = int(b);

    if(al > bl) {
        int temp = bl;
        bl = al;
        al = temp;
        for(int i = al; i <= bl; i++) {
            char hey = i;
            cout << hey;
        }
    } else {
        for(int i = al; i <= bl; i++) {
            char hey = i;
            cout << hey;
        }
    }
    
    return 0;
}
