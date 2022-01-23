#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
bool arr[90000001];
void sieve()
{
    int max = 90000000;
    arr[0] = arr[1] = true;
    for (int i = 2; i * i <= max; i++)
    {
        if (!arr[i])
        {
            for (int k = i * i; k <= max; k += i)
            {
                arr[k] = true;
            }
        }
    }
    for (int i = 2; i <= max; i++)
    {
        if (arr[i] == false)
        {
            primes.push_back(i);
        }
    }
}

int main()
{

    int x, y;
    cin >> x;
    sieve();
    while (x--)
    {
        cin >> y;
        cout << primes[y - 1] << endl;
    }

    return 0;
}
