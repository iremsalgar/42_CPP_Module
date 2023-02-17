# 42_CPP_Module


## std::string in cpp

std::string, C++ programlama dilinde kullanılan bir sınıftır ve string veri türünü temsil eder. Stringler, bir veya daha fazla karakterin sıralı bir dizisi olarak tanımlanabilir ve metinleri depolamak için yaygın olarak kullanılır.

std::string sınıfı, C dilinde kullanılan null-terminated char dizilerine (C-strings) benzer bir kullanım sunar, ancak C-strings'e kıyasla daha güvenli bir alternatif sunar. Bu sınıf, bir dizi metinle çalışırken bellek yönetimini otomatik olarak ele alır ve stringlerin boyutunu dinamik olarak ayarlar.

bu örnekteki çıktıları kontrol ediniz:
```cpp
#include <iostream>

int main()
{
    std::string a ("selam");
    std::string &b = a;
    char &c  = a[1]; 
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}
```

## Arguments passed by value and by reference in cpp


C++ programlama dilinde, bir fonksiyona argümanlar değer veya referans olarak geçirilebilir. Bu iki yöntem arasındaki fark, fonksiyonun argümanlara nasıl eriştiği ve onları nasıl değiştirdiğinde ortaya çıkar.

Argüman değer olarak geçirildiğinde, argümanın bir kopyası oluşturulur ve fonksiyona geçirilir. Bu, fonksiyonun argümanlarda yaptığı herhangi bir değişikliğin asıl argümanı etkilemeyeceği anlamına gelir.

Argüman referans olarak geçirildiğinde, asıl argüman doğrudan fonksiyona geçirilir ve fonksiyon bu argümana doğrudan erişebilir. Bu, fonksiyonun argümanları doğrudan değiştirebileceği anlamına gelir.

Argümanların nasıl geçirileceği, fonksiyonun işlevine ve programlama amaçlarına bağlıdır. Eğer bir fonksiyonun argümanlarını değiştirmesi gerekiyorsa, argümanlar referans olarak geçirilmelidir. Ancak, argüman değişikliklerinin orijinal argümanı etkilememesi gerektiğinde, argümanlar değer olarak geçirilmelidir.


```cpp
#include <iostream>

int deneme(int *c, int *d)
{
    std::cout << *c << std::endl;
    std::cout << &c << std::endl;
    std::cout << c << std::endl;

    *c = 10;
    *d = 20;

    std::cout << *c << std::endl;
    std::cout << &c << std::endl;
    std::cout << c << std::endl;
    return 0;
}
    
int main()
{
    int a = 5;
    int b (4);

    std::cout << "ilk:" << a << std::endl;
    std::cout << "ilk adres:" << &a << std::endl;

    deneme(&a, &b);
    std::cout << "son:" << a << std::endl;
    std::cout << "son adress:" << &a << std::endl;


}
```
