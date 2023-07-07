#include <iostream>
#include <windows.h> // Windows i�in

int main() {
    std::cout << "Merhaba Fatma!" << std::endl;
    std::cout << "Sen benim d�nyam� ayd�nlatan y�ld�zs�n." << std::endl;
    std::cout << "G�zlerin, g�zelli�in ve zarafetin beni b�y�l�yor." << std::endl;
    std::cout << "Her an�nda seninle olmak istiyorum." << std::endl;
    std::cout << "Seninle ge�irdi�im her an benim i�in de�erli." << std::endl;
    std::cout << "Kalbim senin i�in �arp�yor ve sadece seni d���n�yor." << std::endl;
    std::cout << "A�k�m� sana ilan etmek istiyorum: SEN� �OK SEV�YORUM!" << std::endl;

    std::string sarkiLinki;
    std::string cevap;

    std::cout << "��kma teklifimi kabul eder misin? (evet/hay�r): ";
    std::cin >> cevap;

    // ��kma teklifini kabul ettiyse:
    if (cevap == "evet") {
        sarkiLinki = "https://www.youtube.com/watch?v=GNuXZunRgzg"; // Kabul edildi�inde a��lacak �ark�
    } else {
        sarkiLinki = "https://www.youtube.com/watch?v=aLRletzlJ-4"; // Kabul edilmedi�inde a��lacak �ark�
    }

    ShellExecute(NULL, "open", sarkiLinki.c_str(), NULL, NULL, SW_SHOWNORMAL); // Windows i�in

    return 0;
}


