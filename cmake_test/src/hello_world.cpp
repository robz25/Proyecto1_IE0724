#include "hello_world.h"
#include <iostream>

using namespace std;

int hello_world(int num){
    for(int count = 0; count < num; count++){
        cout<<"Hello world"<<endl;
    }
    return 0;
}