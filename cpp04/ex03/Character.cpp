#include "Character.hpp"

// Kurucu fonksiyon: karakterin adını ve AMateria dizisini başlatır
Character::Character(std::string const & name) :
    _name(name)
{
    for (int i = 0; i < 4; i++) {
        _inventory[i] = nullptr;
    }
}

// Yıkıcı fonksiyon: AMateria dizisindeki nesneleri serbest bırakır
Character::~Character()
{
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] != nullptr) {
            delete _inventory[i];
        }
    }
}

// Kopyalama kurucusu: başka bir Character nesnesinden kopyalar
Character::Character(Character const & src)
{
    *this = src;
}

// Atama operatörü: başka bir Character nesnesine atama yapar
Character& Character::operator=(const Character& rhs)
{
    if (this == &rhs) 
    {
        return *this;
    }

    _name = rhs._name;

    for (int i = 0; i < 4; i++) 
    {
        if (_inventory[i] != nullptr) 
        {
            delete _inventory[i];
            _inventory[i] = nullptr;
        }
        if (rhs._inventory[i] != nullptr) 
        {
            _inventory[i] = rhs._inventory[i]->clone();
        }
    }

    return *this;
}


// İsim getirme fonksiyonu
std::string const & Character::getName() const
{
    return _name;
}

// AMateria nesnesi ekleme fonksiyonu
void Character::equip(AMateria* m)
{
    if (m == nullptr) 
    {
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == nullptr)
        {
            _inventory[i] = m;
            return;
        }
    }
}

// AMateria nesnesi çıkarma fonksiyonu
void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr) {
        return;
    }
    _inventory[idx] = nullptr;
}


// AMateria nesnesi kullanma fonksiyonu
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || _inventory[idx] == nullptr) {
    return;
    }
    _inventory[idx]->use(target);
}