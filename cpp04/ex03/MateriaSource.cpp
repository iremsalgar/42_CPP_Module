#include "MateriaSource.hpp"

// Yapıcı fonksiyon, _materias dizisini sıfırlar
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _materias[i] = nullptr;
    }
}

// Yıkıcı fonksiyon, _materias dizisindeki tüm AMateria nesnelerini siler
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i]) {
            delete _materias[i];
        }
    }
}

// Kopya yapıcı fonksiyon, _materias dizisindeki AMateria nesnelerini kopyalar
MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int i = 0; i < 4; i++) {
        if (src._materias[i]) {
            _materias[i] = src._materias[i]->clone();
        } else {
            _materias[i] = nullptr;
        }
    }
}

// Atama operatörü, _materias dizisindeki AMateria nesnelerini atar
MateriaSource & MateriaSource::operator=(MateriaSource const & rhs) {
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            if (_materias[i]) {
                delete _materias[i];
            }
            if (rhs._materias[i]) {
                _materias[i] = rhs._materias[i]->clone();
            } 
            else {
                _materias[i] = nullptr;
            }
        }
    }
    return *this;
}

// AMateria nesnesi öğrenmek için kullanılır, _materias dizisine AMateria nesnelerini ekler
void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] == nullptr) {
            _materias[i] = m;
            break;
        }
    }
}

// Yeni bir AMateria nesnesi oluşturmak için kullanılır, type parametresine göre AMateria nesnesi oluşturur
AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_materias[i] != nullptr && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return nullptr;
}
