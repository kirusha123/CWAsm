#pragma once
#include <iostream>
#include <vector>

using namespace std;

static class calculator
{
private:
    float from;
    float to;
    float step;
    /* data */
public:
    /*
    * from - begin point
    * to - end point
    * step - step of calculating
    */
    calculator(float from, float to, float step);
    vector<float> calculate(float (*func)(float x_coord));
};

calculator::calculator(float _from, float _to, float _step)
    :from(_from),
    to(_to),
    step(_step)
{}

    vector<float> calculator::calculate(float (*func)(float x_coord)) {
    int count = (int)((this->to - this->from) / this->step)+1;
    //cout << count<<"\n";
    vector<float> vec;
    vec.reserve(count);
    int it = 0;
    for (float i = this->from; i <= this->to+this->step; i += step)
    {
        vec.push_back(func(i));
        it++;
    }
    return vec;
}