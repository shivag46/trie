#include<bits/stdc++.h>
#include"utils.h"
using namespace std;

node_t* root;

node_t* createNode(char c){
    node_x_t<1>* temp = new node_x_t<1>;
    temp->base.num_elements = 1;
    temp->chars[0] = c;
    temp->children[0] = NULL;
    return (node_t*)temp;
}



void add(string key){
    node_t* nav = root;
    node_t* prev = root;
    int prevIdx=0;

    int start=0;
    if(nav==NULL){
        root = createNode(key[0]);
        cout<<((node_x_t<256>*)root)->chars[0];
        nav = ((node_x_t<256>*)root)->children[0];
        prev = root;
        start++;
    }
    
    for(int i=start;i<key.size();i++){
        int idx = -1;

        if(nav==NULL){
            nav = createNode(key[i]);
            ((node_x_t<256>*)prev)->children[prevIdx] = nav;
            cout<<((node_x_t<256>*)nav)->chars[0];

            prev = nav;
            nav = ((node_x_t<256>*)nav)->children[0];
            continue;
        }

        size_t nodeSize = (int)nav->num_elements;
        for(int j = 0;j < nodeSize;j++){
            node_x_t<256>* temp = (node_x_t<256>*)nav;
            if(temp->chars[j]==key[i]){
                cout<<((node_x_t<256>*)temp)->chars[j];
                idx = j;
                break;
            }
        }

        if(idx!=-1){
            prev = nav;
            prevIdx = idx;
            nav = ((node_x_t<256>*)nav)->children[idx];
        }

        else{
            size_t current = nav->num_elements;
            node_x_t<256>* temp = assignObject(current);
            node_x_t<256>* original = ((node_x_t<256>*)nav);
            for(int i=0;i<nav->num_elements;i++){
                temp->chars[i] = original->chars[i];
                temp->children[i] = original->children[i];
            }

            temp->base.num_elements = original->base.num_elements+1;
            temp->chars[temp->base.num_elements-1] = key[i];
            temp->children[temp->base.num_elements-1] = NULL;
            ((node_x_t<256>*)prev)->children[prevIdx] = (node_t*)temp;

            prev = ((node_t*)temp);
            prevIdx = temp->base.num_elements-1;
            if(i==0)
                root = prev;
            //nav = temp->children[temp->base.num_elements-2];
            nav = temp->children[temp->base.num_elements-1];
            cout<<((node_x_t<256>*)prev)->chars[(int)(prev->num_elements-1)];
        }
    } 
    cout<<"\n";
}

int search(string key){
    node_t* nav = root;
    
    for(int i=0;i<key.size();i++){
        int idx = -1;
        if(nav==NULL)
            return 0;
        size_t nodeSize = (int)nav->num_elements;
        for(int j = 0;j < nodeSize;j++){
            node_x_t<256>* temp = (node_x_t<256>*)nav;
            if(temp->chars[j]==key[i]){
                //cout<<((node_x_t<256>*)temp)->chars[j];
                idx = j;
                break;
            }
        }

        if(idx!=-1)
            nav = ((node_x_t<256>*)nav)->children[idx];
        else
            return 0;
    }

    return 1;
}

void test(){
    root=NULL;
    add("sdf");
    add("sdfgh");
    add("sdfa");
    add("sdfab");

    (search("sdfa")==1)?cout<<"Found\n":cout<<"Not found\n";
    (search("sdx")==1)?cout<<"Found\n":cout<<"Not found\n";
    (search("sd")==1)?cout<<"Found\n":cout<<"Not found\n";
    (search("foo")==1)?cout<<"Found\n":cout<<"Not found\n";
    (search("sdfgh")==1)?cout<<"Found\n":cout<<"Not found\n";
    (search("sdfab")==1)?cout<<"Found\n":cout<<"Not found\n";

    add("foo");

    (search("foo")==1)?cout<<"Found\n":cout<<"Not found\n";
    (search("sdfa")==1)?cout<<"Found\n":cout<<"Not found\n";
}

int main(){
/*    node_x_t<1> parent;
    parent.base.num_elements=1;
    parent.chars[0] = 'a';

    node_x_t<2> child;
    child.base.num_elements=32;
    child.chars[1] = 'p';
    child.chars[0] = 'q';

    parent.children[0] = (node_t*)&(child);

    //cout<<((node_x_t<2>*)(parent.children[0]))->chars[0];
    
    node_t* temp = (node_t*)&child;
    //cout<<(int)temp->num_elements;

    node_x_t<256>* ptr = (node_x_t<256>*)&child;
    //cout<<ptr->chars[1]<<ptr->chars[0];
    //cout<<sizeof(int*);*/
    test();

    //for(int i=1;i<=255;i++){
    //   printf("case %d:return ((node_x_t<256>*)new node_x_t<%d>);break;\n",i,i+1);
    //}
}