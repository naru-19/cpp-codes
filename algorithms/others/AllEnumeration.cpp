#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
#define DEBUG_ON

// 0〜n-1までの数字の並べ方を全列挙する.

void printVector(const vector<int> &vec)
{
    for (int value : vec)
    {
        cout << value << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 0);
    // 最低一回は実行される。
    do{
        printVector(nums);
    } while (next_permutation(nums.begin(), nums.end()));

    return 0;
}

// next_permuration 辞書順で数列を生成する