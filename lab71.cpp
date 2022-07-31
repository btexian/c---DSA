#include <iostream>
#include <vector>

using namespace std;
// vector<int> num;
void addelement(vector<int> &vec, int ele)
{
    vec.push_back(ele);
}

void display(vector<int> &vec)
{
    if (vec.size() == 0)
    {
        cout << "the vector is empty" << endl;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
void del(vector<int> &vec)
{
    vec.erase(vec.end() - 1);
}

void clear(vector<int> &vec)
{
    vec.clear();
}

int main()
{
    vector<int> num;
    addelement(num, 1);
    addelement(num, 2);
    addelement(num, 3);
    display(num);
    del(num);
    display(num);
    clear(num);
    display(num);
}