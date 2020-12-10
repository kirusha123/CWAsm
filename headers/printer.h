#include <string>
#include <fstream>

#include "calculator.h"

using namespace std;
class printer
{
private:
    /* data */
    float* array;
    int array_len;
    string fname;
public:
    
    printer(vector<float> v,string fname);
    ~printer();
};

printer::printer(vector<float>,string fname)
{
}

printer::~printer()
{
}
