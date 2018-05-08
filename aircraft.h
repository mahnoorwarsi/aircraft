#include<iostream>
using namespace std;
class aircraft
{
    private:
    portwing port_wing;
    starboardwing starboard_wing;
    engine engine 1,engine 2;
    fuselage fuselage;
    tailplane tailplane;
    public:
    aircraft()
    {
    this-> port_wing=0;
    this->starboard_wing=0;
    this->engine=0;
    this-> fuselage=0;
    this->tailplane=0;
    }
    turn_to_port()
    {
        port_wing.flapup();
        starboard_wing.flapdown();
        tailplane.rudderleft();
    }
    turn_to_starboard()
    {
        port_wing.flapdown();
        starboard_wing.flapup();
        tailplane.rudderright();
    }
    
    opendoors()
    {
        if((engine1.getspeed()>IDLE) || (engine2.getspeed(>IDLE))
        cout<<"dont open doors"<<endl;
        else
        fuselage.opendoors();
    }
    ostream operator <<(ostream o,aircraft m)
    {
        o<<"i am an aircraft of pia with "<<getspeed()<<"speed"<endl;
    }
};