#include <iostream>
#include <fstream>

#include "printer.h"

using namespace std;

float func(float x_coord){
    return 3*x_coord + 1;
}

int main(){
    cout<<func(4)<<endl;
     return 0;
}

// printer p(coords,"Graph");
