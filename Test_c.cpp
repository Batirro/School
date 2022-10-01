#include <iostream>
#include <vector>
 
using namespace std;
 
int main(void) {
    vector<int> intvec;
 
    intvec.push_back(1);
 
    /* Insert next elements */
    for (int i = 1; i < 5; ++i)
        intvec.push_back(i + 1);
 
    for (int i = 0; i < intvec.size(); ++i)
        cout << intvec[i] << endl;
 
    return 0;
}