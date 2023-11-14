//Biblioteca para listas duplamente encadeadas

#include <iostream>
#include <string>

namespace UPF{
    struct node{
        std::string value; // valor
        node *previous;    // anterior
        node *next;        // próximo
    };

    struct list{
        node *first = nullptr; // Primeiro Node
        node *last = nullptr; // Último da Lista
        int num_nodes = 0; //Quantidade de nodes

        int size () {
            return num_nodes; //retorna tamanho
        };

        void push_front(const std::string &s) {
            num_nodes ++;
            node *p = new node;
            p->value = s;
            p->previous = nullptr;
            p->next = first;
            if(first != nullptr) first-> previous = p;
            first = p; // Sempre será o primeiro
            if(last == nullptr) last = p; // Lista nula
        };

        void push_back(const std::string &s) {
            num_nodes ++;
            node *p = new node;
            p->value = s;
            p->previous = last;
            p->next = nullptr;
            if(last != nullptr) last->next = p;
            last = p;
            if(first == nullptr) first = p; 
        };

        int count(const std::string &s) {
            node *p = first;
            int aux = 0;
            while(p != nullptr) { // Percorremos enqanto este elemento não for nulo
                if(p->value == s) aux ++;
                p = p->next;
            }
            return aux;
        }

        node *find(const std::string &s) {
            node *p = first;
            while(p){
                if(p->value == s) return p;
                p = p->next;
            }
            return nullptr;
        }

        void erase(UPF::node *p){
            if(p == first) first -> next;
            if(p == last) last -> previous;
        }

        
    };
    

}; // Namespace UPF
