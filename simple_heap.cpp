#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

// heapの性質
// 1.2分木。
// 2.葉をのぞき二つのノードを持つ。
// 3.葉は左詰め。
// 4.親は子より必ず大きな値をとる。

int main()
{
    bool isleaf;
    int size;
    cout << "input heap size >";
    cin >> size;
    cout << "" << endl;
    cout << "input nums >";
    int tmp;
    int *heap;
    heap = new int(size);
    rep(i, size)
    {
        cin >> tmp;
        isleaf = false;
        heap[i] = tmp;
        if (i != 0)
        {
            // 親のindexは今のインデックスから1引いて2で割った時の商
            int j = i;
            while (1)
            {
                int parent_tmp = (j - 1) / 2;
                if (heap[parent_tmp] < heap[j])
                {
                    int esc;
                    esc = heap[j];
                    heap[j] = heap[parent_tmp];
                    heap[parent_tmp] = esc;
                    j = parent_tmp;
                    if (j == 0)
                    {
                        break;
                    }
                }
                else
                    break;
            }
        }
    }
    int _i = 0;
    int line = 0;
    //出力はこの順
    //                             0
    //             1                               2
    //     3               4               5               6
    // 7       8       9       10      11      12      13      14
    rep(i, size)
    {
        cout << heap[i] << " ";
    }
}
