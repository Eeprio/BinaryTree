#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include "header.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Bst<int> t1;
    int opc, valor, remover;

    cout << "==ÁRVORE BINÁRIA DE BUSCA==" << endl;

    do {
        cout<<"1 -> Inserir elemento"<<endl;
        cout<<"2 -> Exibir arvore em ordem"<<endl;
        cout<<"3 -> Exibir arvore em pos-ordem"<<endl;
        cout<<"4 -> Exibir arvore em pre-ordem"<<endl;
        cout<<"5 -> Exibir o maior elemento da arvore"<<endl;
        cout<<"6 -> Exibir o menor elemento da arvore"<<endl;
        cout<<"7 -> Remover um elemento da arvore"<<endl;
        cout<<"9 -> Sair"<<endl;
        cout<<"Selecione--> ";
        cin>>opc;


    switch (opc)
    {

    case 1: //insere
        cout<<"Digite o elemento que deseja inserir"<<endl;
        cin>>valor;
        t1.inserir(t1.p_root,valor);
        cout<<"Elemento inserido com sucesso"<<endl;
        break;

    case 2: //pre ordem
        cout<<"PRE ORDEM"<<endl;
        t1.pre_ordem(t1.p_root);
        cout<<endl;
        break;

    case 3: //pos ordem
        cout<<"POS ORDEM"<<endl;
        t1.pos_ordem(t1.p_root);
        cout<<endl;
        break;

    case 4: //em ordem
        cout<<"EM ORDEM"<<endl;
        t1.em_ordem(t1.p_root);
        cout<<endl;
        break;

    case 5: //máximo
        cout<<"O elemento máximo: "<<t1.get_maximum(t1.p_root)<<endl;
        break;

    case 6: //mínimo
            cout<<"O elemento mínimo: "<<t1.get_minimum(t1.p_root)<<endl;
        break;

    case 7:
        cout<<"Digite o elemento que deseja excluir"<<endl;
        cin>>remover;
        break;

    case 9:
        cout<<"Fim..."<<endl;
        break;

}
} while (opc!=9);

return 0;

}
