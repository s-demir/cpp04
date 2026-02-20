#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	// 1. ADIM: Temel Polymorphism ve Dizi Testi
	const int arraySize = 4;
	Animal* animals[arraySize];

	std::cout << "--- HAYVANLAR OLUŞTURULUYOR ---" << std::endl;
	for (int i = 0; i < arraySize / 2; i++) {
		animals[i] = new Dog( );
	}
	for (int i = arraySize / 2; i < arraySize; i++) {
		animals[i] = new Cat();
	}

	std::cout << "\n--- SES TESTİ ---" << std::endl;
	for (int i = 0; i < arraySize; i++) {
		animals[i]->makeSound();
	}

	std::cout << "\n--- HAYVANLAR SİLİNİYOR (Destructor Test) ---" << std::endl;
	// Burada her hayvan silindiğinde hem kendi destructor'ı hem de
	// Brain destructor'ı çalışmalı (Virtual destructor sayesinde)
	for (int i = 0; i < arraySize; i++) {
		delete animals[i];
	}

	// 2. ADIM: Derin Kopyalama (Deep Copy) İspatı
	std::cout << "\n--- DERİN KOPYALAMA TESTİ ---" << std::endl;
	Dog basic;
	{
		Dog tmp = basic; // Kopyalama Kurucusu (Copy Constructor) çalışır
		// tmp burada kapsam dışına çıkınca silinecek.
		// Eğer derin kopyalama olmazsa basic'in beyni de zarar görür.
	}
	// Eğer program buraya kadar çökmeden geldiyse derin kopyalama başarılıdır!
	std::cout << "Basic hala hayatta ve beyni sağlam!" << std::endl;

	return 0;
}