#include<iostream>
#include<string>
using namespace std;
#include"aircraft.h"

main()
{
    aircraft pia;
    cout<<pia;
    pia.opendoors();
    pia.turn_to_starboard();
    cout<<pia;

}