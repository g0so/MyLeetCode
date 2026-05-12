#include <iostream>
#include <vector>
#include <algorithm> // to arrange the ratios in decreasing order
using namespace std;

//to sort items based on value/weight ratio.
bool compare(vector<int> a, vector<int> b)
{
    double A = (1.0 * a[0] / a[1]);
    double B = (1.0 * b[0] / b[1]);
    return A > B;
}

double fractionalKnapsack(vector<int> val, vector<int> wt, int capacity)
{
    int n = val.size();

    //A 2D vector to store the value and weight
    //items[i][0] = value, items[i][1] = weight
    vector<vector<int>> items(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        items[i][0] = val[i];
        items[i][1] = wt[i];
    }

    //sort items based on value-to-weight ratio in descending order
    sort(items.begin(), items.end(), compare);

    double res = 0.0;
    int currentCapacity = capacity;

    for (int i = 0; i < n; i++)
    {
        if(items[i][1] <= currentCapacity)
        {
            res += items[i][0];
            currentCapacity -= items[i][1];
        }

        else
        {
            res += (1.0 * items[i][0] / items[i][1]) * currentCapacity;
            break; //knapsack is full
        }
    }
    return res;
}

int main(void)
{
    vector<int> val = {23, 59, 40};
    vector<int> wt = {20, 10, 30};
    int capacity = 40;

    cout << fractionalKnapsack(val, wt, capacity) << endl;
}