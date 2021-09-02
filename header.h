#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

template <typename Tipo>

struct Node{
    Tipo info;
    Node<Tipo> *p_left;
    Node<Tipo> *p_right;
};

template <typename Tipo>

struct Bst{
Node<Tipo> *p_root;
    Bst(){
        p_root=NULL;
}

void inserir(Node<Tipo> *&root, Tipo x){

    if(root==NULL){
            root=new Node<Tipo>;
            root->info=x;
            root->p_left=NULL;
            root->p_right=NULL;

    }
    else{
            if(x < root->info){
                inserir(root->p_left,x);
            }
            else{
                inserir(root->p_right,x);
            }
    }
}

void retira(Node<Tipo>* &t, Tipo x)
{
        if (t != NULL)
        {
            if (t->info > x)
            {
                retira(t->p_left, x);
            }
            else if (t->info < x)
            {
                retira(t->p_right, x);
            }
            else
            {
                if (t->p_left == NULL && t->p_right == NULL)
                {
                    Node <Tipo>* aux = t;
                    t = NULL;
                    delete aux;
                }
                else if (t->p_left == NULL)
                {
                    Node <Tipo>* aux = t;
                    t = t->p_right;
                    delete aux;
                }
                else if (t->p_right == NULL)
                {
                    Node<Tipo>* aux = t;
                    t = t->p_left;
                    delete aux;
                }
                else
                {
                    Node<Tipo>* aux = t->p_left;

                    while (aux->p_right != NULL)
                    {
                        aux = aux->p_right;
                    }

                    t->info = aux->info;
                    aux->info = x;
                    retira(t->p_left, x);
                }
            }
}
}

Tipo get_maximum(Node<Tipo> *root)
{
   if (root != NULL)
    {
            if (root->p_right != NULL)
            {
                return get_maximum(root->p_right);
            }
            else
            {
                return root->info;
            }
    }
    else
        {
            return NULL;
        }

}

Tipo get_minimum(Node<Tipo> *root)
{
    if (root != NULL) {

    Node<Tipo> *aux = root;

    while (aux->p_left !=NULL)
    {
        aux= aux->p_left;

    }
    return (aux->info);
    }
    return NULL;

}
void pre_ordem(Node<Tipo> *pre){   // RED
        if(pre!=NULL){
                cout<<pre->info<<" ";
                pre_ordem(pre->p_left);
                pre_ordem(pre->p_right);
            }
}
void pos_ordem(Node<Tipo> *pos){ //EDR
        if(pos!=NULL){
        pos_ordem(pos->p_left);
        pos_ordem(pos->p_right);
        cout<<pos->info<<" ";
        }
}

void em_ordem(Node<Tipo> *in_o){
    if(in_o!=NULL){
    em_ordem(in_o->p_left);
    cout<<in_o->info<<" ";
    em_ordem(in_o->p_right);
    }
}

};

#endif // HEADER_H_INCLUDED
