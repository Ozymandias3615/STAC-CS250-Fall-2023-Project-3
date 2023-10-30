#include "State.h"

State::State()
{
    m_name = "";
    m_energy = 0;
    m_size = 0;
    m_percentage = 0;
}

State::State(string name, double energy, long long int stateSize)
{
    m_name = name;
    m_energy = energy;
    m_size = stateSize;
}

double State::findPercentage()
{
    const double efficiency = 0.15;
    const double wattsSqrFt = 15;
    const double btuPerPanel = 51;
    double energyInBtu = m_energy * 1e12;
    double panelsNeeded = m_energy / (efficiency * btuPerPanel);
    return (panelsNeeded * 18) / m_size;
}

string State::getName()
{
    return m_name;
}
