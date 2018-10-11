#include <iostream>
#include <string>

int main()
{
    std::string plain;          // original plain text
    std::string encrypted = ""; // cipher text encrypted by rot13
    std::string decrypted = ""; // plain text decrypted by rot13

    // get plain text from user input.
    std::getline(std::cin, plain);

    // encrypt the original input by rot13
    for (char c : plain) {
	char e = '*';

        // TODO: encrypt the original input by rot13

	encrypted += e;
    }

    // decrypt the encrypted cipher text by rot13
    for (char e : encrypted) {
        char d = '#';

        // TODO: decrypt the encrypted cipher text by rot13

	decrypted += d;
    }

    std::cout << "encrypted: " << encrypted
              << "\ndecrypted: " << decrypted << "\n\n";

    if (plain == decrypted) {
        std::cout << "PASS!\n";
    } else {
        std::cout << "FAIL!\n\n" 
		  << "your dercypted message doesn't match the original message!"
		  << "\n\toriginal message:  " << plain
		  << "\n\tdecrypted message: " << decrypted << "\n";
    }
}


