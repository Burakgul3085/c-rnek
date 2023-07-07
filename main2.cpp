#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string cevap;
    
    std::cout << "Sevgýlýye çýkma teklýfý etmek ýstýyor musunuz? (evet/hayýr): ";
    std::cin >> cevap;
    
    if (cevap == "evet") {
        std::string link = "https://youtu.be/GNuXZunRgzg";
        std::string komut = "start " + link;  // Windows için "start" komutu kullanýlýyor
        
        std::cout << "Çýkma teklifinizi yapýn!" << std::endl;
        
        // Sistem komutuyla linki açma
        system(komut.c_str());
    }
    else {
        std::cout << "Anladým, belki baþka bir zaman!" << std::endl;
    }
    
    return 0;
}
