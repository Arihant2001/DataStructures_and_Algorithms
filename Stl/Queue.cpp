#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(50);
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}
