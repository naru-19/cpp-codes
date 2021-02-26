#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)


void insert(int heap[], int data, int tmp)
{
    heap[tmp] = data;
    while (1)
    {
        int parent_tmp = (tmp - 1) / 2;
        if (heap[parent_tmp] > heap[tmp])
        {
            int esc;
            esc = heap[tmp];
            heap[tmp] = heap[parent_tmp];
            heap[parent_tmp] = esc;
            tmp = parent_tmp;
            if (tmp == 0)
            {
                break;
            }
        }
        else
            break;
    }
}
void delmin(int heap[], int heap_top)
{
    heap[0] = heap[heap_top];
    int i = 0;
    int sind;
    int sval;
    while (2 * i + 1 <= heap_top - 1)
    { //子が存在する間実行
        if (2 * i + 1 == heap_top - 1)
        {
            sind = 2 * i + 1;
            sval = heap[2 * i + 1];
        }
        else
        {
            if (heap[2 * i + 1] < heap[2 * i + 2])
            {
                sind = 2 * i + 1;
                sval = heap[sind];
            }
            else
            {
                sind = 2 * i + 2;
                sval = heap[sind];
            }
        }
        if (heap[i] > heap[sind])
        {
            heap[sind] = heap[i];
            heap[i] = sval;
            i = sind;
        }
        else
            return;
    }
}
void sort(int a[],int heap[],int n){
    rep(i,n){
        a[i]=heap[0];
        delmin(heap,n-i-1);
    }
}


int main(){
    int n;
    int *a;
    int *heap;
    cout<<"input size >";
    cin>>n;
    a=new int[n];
    heap = new int[n];
    cout << "input nums >";
    cin>>a[0];
    heap[0]=a[0];
    int heap_top = 0;
    rep(i,n-1){
        cin>>a[i+1];
        heap_top++;
        insert(heap,a[i+1], heap_top);
    }
    sort(a,heap,n);
    rep(i,n){
        cout<<a[i]<<" ";
    }
    cout <<""<< endl;
}