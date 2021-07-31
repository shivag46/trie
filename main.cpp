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
    node_t* nav = ((node_x_t<1>*)root)->children[0];
    node_t* prev = root;
    int prevIdx=0;

    int start=0;
    
    for(int i=start;i<key.size();i++){
        int idx = -1;
        if(nav==NULL){//case: when the node points to a null value
            nav = createNode(key[i]);
            setChildUtil(prevIdx,nav,(void*)prev);
            prevIdx = 0;

            prev = nav;
            cout<<"NEW: "<<((node_x_t<256>*)(nav))->chars[0]<<" ";
            nav = ((node_x_t<256>*)nav)->children[0];
            continue;
        }

        size_t nodeSize = (int)nav->num_elements;
        for(int j = 0;j < nodeSize;j++){
            node_x_t<256>* temp = (node_x_t<256>*)nav;
            if(temp->chars[j]==key[i]){
                idx = j;
                break;
            }
        }

        if(idx!=-1){//case: when the current node contains a matching character
            prev = nav;
            prevIdx = idx;
            nav = setObjectUtil(idx, nav);
            cout<<"HIT: "<<((node_x_t<256>*)(prev))->chars[idx]<<" ";
        }

        else{//case: when the size of the current node needs to be increased
            node_t* temp = assignObject(nav, key[i]);

            setChildUtil(prevIdx,temp,(void*)prev);

            prev = temp;
            prevIdx = temp->num_elements-1;

            nav = setObjectUtil(temp->num_elements-1, temp);

            cout<<"UP:"<<(int)prev->num_elements<<" "<<((node_x_t<256>*)prev)->chars[prev->num_elements-1]<<" ";
        }
    } 
    cout<<"\n";
}


void test(){
    root=createNode('0');
    add("a");
    add("ab");
    add("abc");
    add("q");
    add("qw");
    add("qwe");
    add("qwer");
    add("qwert");
    add("qwerty");
    add("qwertyu");
    add("qwertyui");
    add("qwertyuio");
    add("qwertyuiop");
    add("qwertyuiopa");
    add("qwertyuiopas");
    add("qwertyuio");
    add("qwert");
    add("qwertyuiopasdfghj");
    add("sdf");
    add("sdfghlop");
    add("sdfa");
    add("sdfab");
    add("sha");
    add("swq");
    add("shas");
    add("solar");
    add("sol");
    add("sdfgh");
    add("sdfghl");
    add("selenium");
    add("sdfghloppos");
    add("sdfghlopues");
    add("soda");
    add("sodar");
    add("sdfghlopwes");
    add("asd");
    add("sodar");
    add("sdfghloppos");
    add("barrister");
    add("barricade");
    add("barricader");
    add("barricadsdef");
}

int main(){
    test();
}