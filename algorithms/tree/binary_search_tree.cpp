#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)


//計算量は最悪の場合O(n)になってしまう

//  ->の使い方
// p->〇 ポインタpの指すセルの構成要素○を参照


//一つ一つのノードは親、左の子、右のことつながっている。
struct node{
    node *l,*r,*par;
    int val;
};

void insert(int d,node *root){
    if(root==NULL){
        root->val=d;
        root->l = NULL;
        root->r = NULL;
    }
    node *p=new node();
    p= root;
    while(1){
        if(p->val==d){
            cout<<"格納済"<<endl;
        }
        if(p->val>d){
            if(p->l==NULL){
                node *newnode=new node();
                newnode->val=d;
                p->l=newnode;
                newnode->par=p;
                return;
            }
            p=p->l;

        }
        else{
            if (p->r == NULL){
                node *newnode = new node();
                newnode->val = d;
                newnode->par = p;
                p->r = newnode;
                return;
            }
            p = p->r;
        }
    }
}


void serch(int d,node *root){
    node *p =new node();
    p=root;
    while(p!=NULL){
        if(d>p->val){
            p=p->r;
        }
        else if(d<p->val){
            p=p->
            l;
        }
        else{
            cout<<"true"<<endl;
            return;
        }
    }
    cout<<"false"<<endl;
}

void del_el(node *p){
    if(p->l==NULL&&p->r==NULL){
        if(p->par==NULL){
            p=NULL;
        }
        else{
            if(p->par->l!=NULL){
                p->par->l= NULL;
            }
            else{
                p->par->r = NULL;
            }
            free(p);
            return;
        }

    }
    //子1つ
    if(p->l==NULL||p->r==NULL){
        if(p->l==NULL){
            if(p->par->l==p){
                p->par->l=p->r;
            }
            else{
                p->par->r = p->r;
            }
        }
        else{
            if(p->par->l==p){
                p->par->l=p->l;
            }
            else{
                p->par->r = p->l;
            }
        }
        free(p);
        return;
    }
    
}

void del(int d,node *root){
    node *p =new node();
    p=root;
    while(p!=NULL){
        if(d>p->val){
            p=p->r;
        }
        else if(d<p->val){
            p=p->l;
        }
        else if(p->val==d){ 
            if(p->l==NULL||p->r==NULL){
                del_el(p);
                return;
            }
            //子2つ
            else{
                node *r=new node();
                node *q = new node();
                //qはrの親
                r=p->r;
                q=p;
                //最小値探索
                while(r->l!=NULL){
                    q=r;
                    r=r->l;
                }
                //rが最小値を持つ
                //交換
                p->val=r->val;
                r->val=d;
                del_el(r);
                return;
            }
        }
    }
    return;
    
}
 
int serchmin(node *root){
    node *p=new node();
    node *q = new node();
    p = root;

    while(p!=NULL){
        q=p;
        p=p->l;
    }
    return q->val;
}

void show(node *p){
    cout<<p->val<<"";
    if(p->l==NULL &&p->r==NULL){
        cout<<"";
        return;
    }
    else if(p->l==NULL &&p->r!=NULL){
        cout << "[ ][";
        show(p->r);
        cout<<"]";
        return;
    }
    else if(p->l!=NULL){
        cout << "[";
        show(p->l);
        cout<<"]";
        if(p->r!=NULL){
            cout << "[";
            show(p->r);
            cout << "]";
        }
        else{
            cout << "[ ]]";
            
        }
        return;

    }
}

int main(){
    int val;
    int d;
    node *root =new node();
    cout << "input num >";
    cin >> d;
    root->val = d;
    root->l = NULL;
    root->r = NULL;

    cout << "mode \n i:input number\n s:serch \n d:delete\n see:see tree\n min:show min number\n exit:exit\n" << endl;
    while (1){
        string mode;

        cout << "input mode >";
        cin >> mode;
        if (mode.compare("i") == 0){
            cout<<"input num >";
            cin>>val;
            insert(val,root);   
        }
        else if (mode.compare("s") == 0){
            cout << "input num >";
            cin >> val;
            serch(val,root);
        }
        else if (mode.compare("d") == 0){
            cout << "input num >";
            cin >> val;
            del(val,root);
        }
        else if (mode.compare("min") == 0){
            int min;
            min = serchmin(root);
            cout<<"min="<<min<<endl;
        }
        else if(mode.compare("see") == 0){
            show(root);
        }
        else if (mode.compare("exit") == 0){
            return 0;
        }
    }
}
