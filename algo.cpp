#include<iostream>
using namespace std;
template<typename T>
class nodo{
public:
    T valor;
    nodo* siguiente;
    nodo(){
        valor=NULL;
        siguiente=nullptr;
    }
    nodo(T val){
        valor=val;
        siguiente=nullptr;
    }
    void delleteall(){
        if(siguiente){
            siguiente->delleteall();
        }
        delete this;
    }
    ~nodo(){}
};
class lista{
public:
    nodo<T> *m_head;
    int m_num_nodes;
    lista(){
        m_num_nodes=0;
        m_head=nullptr;
    }
    void addhead(T valor){
        nodo<T>* newnodo=new nodo<T> (valor);
        nodo<T>* b=m_head;
        if(!m_head){
            m_head=newnodo;
        }
        else{
            newnodo->siguiente=m_head;
            m_head=newnodo;
            while(temp){
                temp=temp->siguiente;
            }
        }
        m_num_nodes++;
    }
    void addini();
    void addfin();
    void dellall();
};
int main(){

    cout<<"hole";
}
