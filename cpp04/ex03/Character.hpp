#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

// ICharacter arayüzünden miras alan Character sınıfı tanımlanır
class Character : public ICharacter
{
    private:
        std::string _name; 
        // karakterin adı
        AMateria* _inventory[4]; 
        // en fazla 4 adet AMateria nesnesini tutabilen bir dizi
    
    public:
        // Kurucu fonksiyon: karakterin adını ve AMateria dizisini başlatır
        Character(std::string const & name);
        
        // Yıkıcı fonksiyon: AMateria dizisindeki nesneleri serbest bırakır
        ~Character();
        
        // Kopyalama kurucusu: başka bir Character nesnesinden kopyalar
        Character(Character const & src);
        
        // Atama operatörü: başka bir Character nesnesine atama yapar
        Character & operator=(Character const & rhs);
    
        // ICharacter arayüzündeki işlevlerin uygulanması
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};


#endif