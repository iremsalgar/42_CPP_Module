#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* _materias[4]; 
        // AMateria nesnelerini tutmak için bir koleksiyon
    public:
        MateriaSource(); 
        // yapıcı fonksiyon
        ~MateriaSource(); 
        // yıkıcı fonksiyon
        MateriaSource(MateriaSource const & src); 
        // kopya yapıcı fonksiyon
        MateriaSource & operator=(MateriaSource const & rhs); 
        // atama operatörü
        virtual void learnMateria(AMateria* m); 
        // IMateriaSource arayüzünden uygulanmış saf sanal işlev
        virtual AMateria* createMateria(std::string const & type); 
        // IMateriaSource arayüzünden uygulanmış saf sanal işlev
};

#endif