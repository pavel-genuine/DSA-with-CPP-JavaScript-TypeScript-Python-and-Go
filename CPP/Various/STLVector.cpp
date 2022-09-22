#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> V(3, -1);

    for (int i = 0; i < V.size(); i++)
    {
        cout << V[i] << ' ';
    }

    cout << endl;
    V.push_back(4);

    vector<int>::iterator i;

    for (i = V.begin(); i != V.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << endl;

    for (auto element : V)
    {
        cout << element << ' ';
    }

    cout << endl;
    for (auto i = V.begin(); i != V.end(); i++)
    {
        cout << *i << ' ';
    }
    cout << endl;

typedef pair<int,int> pr;
    priority_queue<pr, vector<pr>, greater<pr>> pq;

    pq.push(make_pair(2,4));
    pq.push(make_pair(4,8));
    pq.push(make_pair(6,12));
    pq.push(make_pair(8,2));

    while (!pq.empty())
    {
        cout << pq.top().first<<'|'<< pq.top().second<< endl;
        pq.pop();
    }
    cout << endl;

    return 0;
}