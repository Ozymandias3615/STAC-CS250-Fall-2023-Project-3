#include <iostream>
#include "State.h"
#include <string>
#include <list>

using namespace std;

int main()
{
    list<State> states;
    list<State>::iterator(it);

    State tx("Texas", 13480.8, 7487580672000);
    State ca("California", 6922.8, 4563554688000);
    State la("Louisiana", 4200.4, 1445216256000);
    State fl("Florida", 4003.1, 1805265792000);
    State il("Illinois", 3612.9, 1614549657600);
    State pa("Pennsylvania", 3413.0, 1238967590400);
    State oh("Ohio", 3404.5, 1249649280000);
    State ny("New York", 3354.2, 1520933990400);
    State ga("Georgia", 2727.6, 1656673920000);
    State mi("Michigan", 2610.6, 2696287334400);

    tx.findPercentage();
    ca.findPercentage();
    la.findPercentage();
    fl.findPercentage();
    il.findPercentage();
    pa.findPercentage();
    oh.findPercentage();
    ny.findPercentage();
    ga.findPercentage();
    mi.findPercentage();

    // Add State objects to the list
    states.push_back(tx);
    states.push_back(ca);
    states.push_back(la);
    states.push_back(fl);
    states.push_back(il);
    states.push_back(pa);
    states.push_back(oh);
    states.push_back(ny);
    states.push_back(ga);
    states.push_back(mi);

    // Sort the list based on land percentage
    states.sort();

    // Output the sorted list
    for (const auto& State : states) {
        cout << State.getName() << " would use " << State.findPercentage() << "% of its area" << endl;
    }

    return 0;
}
