#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string cevap;
    
    std::cout << "Sevg�l�ye ��kma tekl�f� etmek �st�yor musunuz? (evet/hay�r): ";
    std::cin >> cevap;
    
    if (cevap == "evet") {
        std::string link = "https://youtu.be/GNuXZunRgzg";
        std::string komut = "start " + link;  // Windows i�in "start" komutu kullan�l�yor
        
        std::cout << "��kma teklifinizi yap�n!" << std::endl;
        
        // Sistem komutuyla linki a�ma
        system(komut.c_str());
    }
    else {
        std::cout << "Anlad�m, belki ba�ka bir zaman!" << std::endl;
    }
    
    return 0;
}
