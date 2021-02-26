#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

#define SIZE 100
// 挿入　最小値の削除を想定したヒープ


void insert(int heap[],int data,int tmp){
    heap[tmp]=data;
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
        else break;
    }
}

void delmin(int heap[],int heap_top){
    cout<<"delete "<<heap[0]<<endl;
    heap[0]=heap[heap_top];
    int i=0;
    int sind;
    int sval;
    while(2*i+1<=heap_top-1){//子が存在する間実行
        if(2*i+1==heap_top-1){
            sind = 2 * i + 1;
            sval=heap[2*i+1];
        }
        else{
            if (heap[2 * i + 1] < heap[2 * i + 2])
            {
                sind = 2 * i + 1;
                sval = heap[sind];
            }
            else{
                sind = 2 * i + 2;
                sval = heap[sind];
            }
        }
        if(heap[i]>heap[sind]){
            heap[sind]=heap[i];
            heap[i]=sval;
            i=sind;
        }
        else return;
    }
}
int main(){
    int heap_top = 0;
    int heap[SIZE];
    int data;
    cout << "input num >";
    cin >> data;
    cout << "mode i:input number  d:delete min number " << endl;

    heap[0]=data;
    while(1){
        string mode;
        cout<<"input mode >";
        cin >>mode;
        if(mode.compare("i")==0){
            cout<<"input num >";
            cin>>data;
            heap_top++;
            insert(heap,data,heap_top);
            
        }
        else if(mode.compare("d")==0){
            if(heap_top==0) {
                cout<<"delete "<<heap[heap_top]<<endl;
                return 0;
            }
            delmin(heap,heap_top);
            heap_top--;
        }
        else cout<<"input correct mode(i,d)"<<endl;
    }
}

