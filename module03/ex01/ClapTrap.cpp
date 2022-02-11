#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name("Noname"),
                       m_hitPoints(10),
                       m_energyPoints(10),
                       m_attackDamage(0)
{}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called, \033[31m" << m_name << "\033[0m vanished! (ClapTrap)" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &C) : m_name(C.m_name),
                                        m_hitPoints(C.m_hitPoints),
                                        m_energyPoints(C.m_energyPoints),
                                        m_attackDamage(C.m_attackDamage)
{
    std::cout << "Copy constructor called! (ClapTrap)" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &C)
{
    if (&C == this)
        return (*this);
    m_name = C.m_name;
    m_hitPoints = C.m_hitPoints;
    m_energyPoints = C.m_energyPoints;
    m_attackDamage = C.m_attackDamage;
    return (*this);
}
const std::string &ClapTrap::getMName() const {
    return m_name;
}

int ClapTrap::getMHitPoints() const {
    return m_hitPoints;
}

int ClapTrap::getMEnergyPoints() const {
    return m_energyPoints;
}

int ClapTrap::getMAttackDamage() const {
    return m_attackDamage;
}

ClapTrap::ClapTrap(const std::string name) : m_name(name),
                                            m_hitPoints(10),
                                            m_energyPoints(10),
                                            m_attackDamage(0)
{
    std::cout	<<	"Constructor with a name called, \033[32m"
                <<	m_name
                <<	"\033[0m created! (ClapTrap)" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if (m_hitPoints <= 0 || m_energyPoints <= 0)
    {
        std::cout   << "ClapTrap \033[32m"
                    << m_name
                    << "\033[0m has no energy or points to attack!"
                    << "And now he is dead." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap \033[32m"
                  << m_name
                  << "\033[0m attack "
                  << target
                  << ", causing "
                  << m_attackDamage
                  << " points of damage!" << std::endl;
        m_energyPoints--;
    }

}

void ClapTrap::takeDamage(unsigned int amount) {
    if (m_hitPoints <= 0)
    {
        std::cout	<< "ClapTrap \033[32m"
                     << m_name
                     << "\033[0m is already dead!"
                     << std::endl;
        return;
    }
    m_hitPoints -= amount;
    if (m_hitPoints <= 0)
    {
        std::cout   << "ClapTrap \033[32m"
                    << m_name
                    << "\033[0m damage by "
                    << amount
                    << " points!"
                    << " And now he is dead." << std::endl;
    }
    else
    {
        std::cout   << "ClapTrap \033[32m"
                    << m_name
                    << "\033[0m damaged by "
                    << amount
                    << " points!" << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount) {
    if (m_hitPoints <= 0 || m_energyPoints <= 0)
    {
        std::cout	<<	"ClapTrap \033[32m"
                    <<	m_name
                    <<	"\033[0m is dead! No repaires done."
                    <<	std::endl;
        return;
    }
    std::cout		<<	"ClapTrap \033[32m"
                     <<	m_name
                     <<	"\033[0m repaired by "
                     <<	amount
                     <<	" points!"
                     <<	std::endl;
    m_hitPoints += amount;
    m_energyPoints--;
}

ClapTrap::ClapTrap(int mHitpoints,
                   int mEnergyPoints,
                   int mAttackDamage,
                   std::string mName) : m_name(mName),
                                        m_hitPoints(mHitpoints),
                                        m_energyPoints(mEnergyPoints),
                                        m_attackDamage(mAttackDamage)
{
    std::cout << "Protected constructor called, " << m_name << " created! (ClapTrap)" << std::endl;
}






