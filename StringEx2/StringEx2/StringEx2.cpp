#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mains;
    getline(cin, mains);
    bool palindrom=false;
    for (int i = 0; i < mains.length()/2; i++) {
        if (mains.at(i) != mains.at(mains.length() - 1 - i)) {
            palindrom = false;
            break;
        }
        else {
            palindrom = true;
        }
    }
    if (palindrom) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    cout << endl;
    for (int i = 0; i < mains.length(); i++) {
        mains.replace(i, 1, 1, (char)toupper(mains[i]));
    }
    cout << mains;
}