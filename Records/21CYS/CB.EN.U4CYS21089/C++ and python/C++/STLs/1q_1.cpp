#include <bits/stdc++.h>
#include <queue>
using namespace std;

void display(queue<int> p)
{
    queue<int> p1 = p;
    while (!p1.empty())
    {
        cout << p1.front() << " ";
        p1.pop();
    }
    cout << endl;
}

void FindandDelete(queue<int> p, int q)
{

    while (!p.empty())
    {
        if (p.front() == q)
        {
            p.pop();
        }
        else
        {
            cout << p.front() << " ";
            p.pop();
        }
    }
}
int main()
{

    int sizee, counter;
    cin >> sizee;
    cin >> counter;

    queue<int> q;
    string a;
    int k = 0;

    int b;
    for (int i = 0; i < counter; i++)
    {
        cin >> a;
        if (a == "E")
        {
            k = 1;
        }
        else if (a == "D")
        {
            k = 2;
        }
        else if (a == "S")
        {
            k = 3;
        }
        else if (a == "I")
        {
            k = 4;
        }
        else if (a == "F")
        {
            k = 5;
        }
        else
        {
            k = 6;
        }
        switch (k)
        {
        case 1:
            if (q.size() < sizee)
            {
                cin >> b;
                q.push(b);
                display(q);
                break;
            }
            else
            {
                cout << "Queue Full Exception";
                display(q);
                break;
            }
            break;
        case 2:
            if (q.size() > 0)
            {
                cout << q.front() << endl;
                q.pop();
                break;
            }
            else
            {
                cout << "Queue Empty Exception" << endl
                     << "None" << endl;
                break;
            }
            break;
        case 3:
            cout << q.size() << endl;
            break;
        case 4:
            if (q.empty())
            {
                cout << "True" << endl;
            }
            else
            {
                cout << "False" << endl;
            }
            break;
        case 5:
            cout << q.front() << endl;
            break;
        case 6:
            cin >> b;
            FindandDelete(q, b);
            break;
        }
    }
}