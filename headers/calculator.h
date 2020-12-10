#include <iostream>
#include <vector>

using namespace std;

class calculator
{
private:
    float from;
    float to;
    float step;
    /* data */
public:
    calculator(float from,float to, float step);
    vector<float> calculate(float (*func)(float x_coord));
};

calculator::calculator(float _from,float _to, float _step)
    :from(_from),
    to(_to),
    step(_step)
{}

vector<float> calculator::calculate(float (*func)(float x_coord)){
    int count = (int)((this->to-this->from)/this->step);
    vector<float> vec;
    vec.reserve(count);
    int it = 0;
    for (float i = this->from; i <= this->to; i += step)
    {
        vec.push_back(func(i));
        it++;
    }
    return vec;
}
