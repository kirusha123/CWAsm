#pragma once
#include <string>
#include <fstream>

#include "calculator.h"
#include "field.h"


using namespace std;
static class printer
{
private:
    /* data */
    fsize get_size(rectangle f_s);
public:

    printer(vector<float> v,rectangle field, float step, string fname);
    ~printer();
};

printer::printer(vector<float> v, rectangle field, float step, string fname)
{
    fsize f_size = get_size(field);
    int y_step_count = f_size.height / step + 1;

    

}



printer::~printer()
{
}
