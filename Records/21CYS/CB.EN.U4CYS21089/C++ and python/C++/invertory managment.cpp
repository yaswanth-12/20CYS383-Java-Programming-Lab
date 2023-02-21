#include <iostream>
#include <string>
using namespace std;

class Inventory
{

private:
    string item_name;
    string ItemID;
    int price;
    int stock;
    int reorder_point;
    int minimum_order;
    int order_amount = 0;

public:
    Inventory()
    {
        cin >> item_name >> ItemID >> price >> stock >> reorder_point >> minimum_order;
    }

    int cal()
    {
        int k;
        if ((stock < reorder_point))
        {
            order_amount = reorder_point + minimum_order - stock + 1;
            if (order_amount > 0)
            {
                print();
                return 1;
            }
        }
        return 0;
    }

    void print()
    {
        cout << item_name << endl;
        cout << order_amount << endl;
    }
};

int main()
{
    int n, k, m = 0;
    cin >> n;
    Inventory inv[n];

    for (int i = 0; i < n; i++)
    {
        k = inv[i].cal();
        m = m + k;
    }

    if (m == 0)
    {
        cout << "All items are available";
    }
}