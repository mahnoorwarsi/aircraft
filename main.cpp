#include<iostream>
using namespace std;
#include"aircraft.h"
#include"fuselage.h"
#include"tailplane.h"
#include"engine.h"
#include"starboardwing.h"
#include"portwing.h"
main()
{
    aircraft pia;
    cout<<pia;
    aircraft.opendoors();
    aircraft.turnstarboardwing();
    cout<<pia;

}