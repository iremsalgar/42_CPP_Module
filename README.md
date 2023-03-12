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

## cpp de bazı farklı çıktılar ve fonksiyonlar
bazı farklı çıktı veren denemeler yapılmıştır:

```cpp
#include <iostream>

int main ()
{
    std::string c ("selam");

    std::cout << c.length() << std::endl;
    std::cout << c.find("el", 0) << std::endl;
    std::cout << c.substr(2, 2) << std::endl;

    //number

    double a(5.5);
    a++;
    std::cout << a << std::endl;
    std::cout << 10 / 3 << std::endl;
    std::cout << 10.0 / 3.0 << std::endl;
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

## cmath kütüphanesi kullanımı ile ilgili örnekler

```cpp
#include <iostream>
#include <cmath>

int main()
{
    //pow() sayıların üssünü almamızı sağlar
    std::cout << pow(3, 2) << std::endl;
    std::cout << pow(3, 5) << std::endl;

    //sqrt() sayıların karekökünü bulur
    std::cout << sqrt(3) << std::endl;
    std::cout << sqrt(36) << std::endl;
    std::cout << sqrt(4.4) << std::endl;

    //round() sayıları en yakın tam sayıya yuvarlar
    std::cout << round(4.3) << std::endl;
    std::cout << round(6.5) << std::endl;

    //floor() sayıları bir önceki tam sayıya yuvarlar
    std::cout << floor(2.1) << std::endl;
    std::cout << floor(2.999999) << std::endl;

    //ceil() sayılaro bir sonraki tam sayıya yuvarlar
    std::cout << ceil(3.3) << std::endl;
    std::cout << ceil(7) << std::endl;

    //fmax() sayılardan maksimumu bulur
    std::cout << fmax(30, 10) << std::endl; 
    std::cout << fmax(3, 10) << std::endl; 
    //fmin() sayılardan minimum olanı bulur
    std::cout << fmin(30, 10) << std::endl;
    std::cout << fmin(3, 10) << std::endl;  
}
```
