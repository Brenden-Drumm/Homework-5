#ifndef MYLIST_H
#define MYLIST_H
#include "listtools.h"

template<class T>
class MyList
{
    public:

        MyList();
        //friend class listtools;
        void insertHead( T theData);
        T deleteHead( );
        bool search( T &target);
        void display( );


    private:
        Node<T> *head;
};

template<class T>
void insertHead( T theData){

};

template<class T>
T deleteHead(){

};

template<class T>
bool search( T &target){

};


void display(){

};



#endif // MYLIST_H
