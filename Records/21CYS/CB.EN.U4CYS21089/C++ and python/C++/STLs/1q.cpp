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
    char a;
    int b;
    for (int i = 0; i < counter; i++)
    {
        cin >> a;
        switch (a)
        {
        case 'E':
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
        case 'D':
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
        case 'S':
            cout << q.size() << endl;
            break;
        case 'I':
            if (q.empty())
            {
                cout << "True" << endl;
            }
            else
            {
                cout << "False" << endl;
            }
            break;
        case 'F':
            cout << q.front() << endl;
            break;
        default:
            cin >> b;
            FindandDelete(q, b);
            break;
        }
    }
}