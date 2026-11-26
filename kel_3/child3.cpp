#include "child3.h"

void create_list_child3(List_child3 &L){
  L.first = nullptr;
}

adr_child3 alokasi_child3(info_child3 x){
  address P = new elm_child3;
    P->info = x;
    P->pembeli = nullptr;
    P->next = nullptr;
    return P;
  
}

void insert_last_child3(List_child3 &L, adr_child3 P){
  if (L.first == nullptr) {
        L.first = P;
    } else {
        adr_child3 Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void delete_first_child3(List_child3 &L, adr_child3 &P){

}

void delete_last_child3(List_child3 &L, adr_child3 &P){
  
}

void delete_child3(List_child3 &L, adr_child3 &P){

}

void print_list_child3(List_child3 L, bool all){

}
adr_child3 find_element_child3(List_child3 L, info_child3 x){

}

