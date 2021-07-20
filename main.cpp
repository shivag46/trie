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
    node_t* nav = ((node_x_t<256>*)root)->children[0];
    node_t* prev = root;
    int prevIdx=0;

    int start=0;
    
    for(int i=start;i<key.size();i++){
        int idx = -1;

        if(nav==NULL){//case: when the node points to a null value
            nav = createNode(key[i]);
            ((node_x_t<256>*)prev)->children[prevIdx] = nav;
            prevIdx = 0;

            prev = nav;
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
            nav = ((node_x_t<256>*)nav)->children[idx];
        }

        else{//case: when the size of the current node needs to be increased
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

            nav = temp->children[temp->base.num_elements-1];
        }
    } 
}

int search(string key){
    node_t* nav = ((node_x_t<256>*)root)->children[0];
    
    for(int i=0;i<key.size();i++){
        int idx = -1;
        if(nav==NULL){
            return 0;
        }
        size_t nodeSize = (int)nav->num_elements;
        for(int j = 0;j < nodeSize;j++){
            node_x_t<256>* temp = (node_x_t<256>*)nav;
            if(temp->chars[j]==key[i]){
                idx = j;
                break;
            }
        }

        if(idx!=-1){
            nav = ((node_x_t<256>*)nav)->children[0];
        }
        else
            return 0;
    }

    return 1;
}

void test(){
    root=createNode('\0');
    add("sdf");
    add("sdfgh");
    add("sdfa");
    add("sdfab");
    add("sha");
    add("swq");
}

int main(){
    test();
}