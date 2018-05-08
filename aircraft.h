#include<iostream>
using namespace std;
#include"fuselage.h"
#include"tailplane.h"
#include"engine.h"
#include"starboardwing.h"
#include"portwing.h"
class aircraft
{
    private:
    portwing port_wing;
    starboardwing starboard_wing;
    engine engine1,engine2;
    fuselage fuse_lage;
    tailplane tail_plane;
    public:
    aircraft()
    {
    this-> port_wing=port_wing;
    this->starboard_wing=starboard_wing;
    this->engine1=engine1;
    this->fuse_lage=fuse_lage;
    this->tail_plane=tail_plane;
    this->engine2=engine2;
    }
    turn_to_port()
    {
        port_wing.flapup();
        starboard_wing.flapdown();
        tail_plane.rudderleft();
    }
    turn_to_starboard()
    {
        port_wing.flapdown();
        starboard_wing.flapup();
        tail_plane.rudderright();
    }
    
    opendoors()
    {
        const int IDLE=7;
        if((engine1.getspeed()>IDLE) || (engine2.getspeed()>IDLE))
        cout<<"dont open doors"<<endl;
        else
        fuse_lage.opendoors();
    }
    ostream operator <<(ostream& o,aircraft& m)
    {
        o<<"i am an aircraft of pia with "<<getspeed()<<"speed"<endl;
        return o;
    }
};