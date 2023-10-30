#ifndef STATE_H
#define STATE_H

#include <string>
using namespace std;


class State
{
    public:
        State();
        State(string, double, long long int);
        string getName();
        double findPercentage();

    protected:

    private:
        string m_name;
        double m_energy;
        long long int m_size;
        double m_percentage;
};

#endif // STATE_H
