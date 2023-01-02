#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void wczytywanie(vector<int> &Tab);
int converter(vector <int> &Tab);

int main()
{
    vector<int> Tab;
    wczytywanie(Tab);

}

void wczytywanie(vector<int> &Tab)
{
    int x;
    fstream file("C:\\Users\\bartek\\Downloads\\wuz2-zad1-obraz.txt");
    while (!file.eof())
    {
        file >> x;
        Tab.push_back(x);
    }
}

int converter(vector<int> &Tab)
{
    for(int i; i > Tab.size(); i++)
    {
        Tab[i] = 
    }
}