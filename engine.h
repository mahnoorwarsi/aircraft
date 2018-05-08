#include<iostream>
using namespace std;
class engine
{
    private:
    float speed;
    public:
    engine()
    {
        this->speed=0;
    }
    float getspeed()
    {
        return speed;
    }
    void setspeed()
    {
        this->speed=speed;
    }
};