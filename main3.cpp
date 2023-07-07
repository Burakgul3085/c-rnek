#include <iostream>
#include <windows.h> // Windows için

int main() {
    std::cout << "Merhaba Fatma!" << std::endl;
    std::cout << "Sen benim dünyamý aydýnlatan yýldýzsýn." << std::endl;
    std::cout << "Gözlerin, güzelliðin ve zarafetin beni büyülüyor." << std::endl;
    std::cout << "Her anýnda seninle olmak istiyorum." << std::endl;
    std::cout << "Seninle geçirdiðim her an benim için deðerli." << std::endl;
    std::cout << "Kalbim senin için çarpýyor ve sadece seni düþünüyor." << std::endl;
    std::cout << "Aþkýmý sana ilan etmek istiyorum: SENÝ ÇOK SEVÝYORUM!" << std::endl;

    std::string sarkiLinki;
    std::string cevap;

    std::cout << "Çýkma teklifimi kabul eder misin? (evet/hayýr): ";
    std::cin >> cevap;

    // Çýkma teklifini kabul ettiyse:
    if (cevap == "evet") {
        sarkiLinki = "https://www.youtube.com/watch?v=GNuXZunRgzg"; // Kabul edildiðinde açýlacak þarký
    } else {
        sarkiLinki = "https://www.youtube.com/watch?v=aLRletzlJ-4"; // Kabul edilmediðinde açýlacak þarký
    }

    ShellExecute(NULL, "open", sarkiLinki.c_str(), NULL, NULL, SW_SHOWNORMAL); // Windows için

    return 0;
}


