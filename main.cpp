#include <iostream>
#include "MyArray.h"
using namespace std;

int main(int argc, char** argv){
    // driving code
    
    //int arr[] = {5, 3, 2};
    //MyArray<int>* my_arr = new MyArray<int>(arr, 3);
     //my_arr->push(5);
     //my_arr->push(5);
     //my_arr->push(5);
     //my_arr->push(5);
     //my_arr->push(5);
     //my_arr->push(5);
     //my_arr->push(5);
     //cout << my_arr->get_capacity() << endl;
     //my_arr->print();


    //my_arr= new MyArray<int>();
    //my_arr->push(5);
    //my_arr->push(6);
    //my_arr->push(7);


     //my_arr->insert(0, 10);
     //cout << my_arr->get(0) <<' ' << my_arr->get(1) << endl;
      //my_arr->print();
    int arr[] = {5, 3, 2};
     MyArray<int>* my_arr = new MyArray<int>(arr, 3);
     cout << my_arr->remove(1)<< " " << my_arr->pop() << " " << my_arr->remove(0) << endl;
}
