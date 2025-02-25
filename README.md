INS - Cryptography Ciphers in C++ and Python
=============================================

This repository contains implementations of various classical cryptographic ciphers using C++ and Python. These ciphers help illustrate how encryption techniques have evolved over time.

Implemented Ciphers:
--------------------
- Caesar Cipher: Shifts characters by a fixed number of positions.
- Monoalphabetic Cipher: Replaces each plaintext letter with a corresponding letter from a fixed shuffled alphabet.
- Playfair Cipher: Encrypts pairs of letters using a 5x5 matrix.
- Hill Cipher: Uses matrix multiplication for polygraphic substitution.
- Vigenère Cipher: Encrypts text using a repeating keyword-based shifting technique.
- Feistel Cipher: Splits plaintext into two halves and processes them through multiple rounds using a round function, key, and XOR operations (forming the basis for modern block ciphers like DES).

Prerequisites:
--------------
- C++ Compiler (e.g., g++). Verify with:
    g++ --version
- Python Interpreter. Verify with:
    python --version
    (or python3 --version)

Running the Programs:
---------------------
1. Clone the repository:
    git clone https://github.com/luqman7f/INS.git
    cd INS

2. Compile and run the C++ programs:

    - Caesar Cipher:
          g++ CaesarCipher.cpp -o CaesarCipher
          ./CaesarCipher

    - Monoalphabetic Cipher:
          g++ MonoalphabeticCipher.cpp -o MonoalphabeticCipher
          ./MonoalphabeticCipher

    - Hill Cipher:
          g++ HillCipher.cpp -o HillCipher
          ./HillCipher

    - Vigenère Cipher:
          g++ VigenereCipher.cpp -o VigenereCipher
          ./VigenereCipher

3. Run the Python programs:

    - Playfair Cipher:
          python playfair_cipher.py
          (or: python3 playfair_cipher.py)

    - Feistel Cipher:
          python feistel.py
          (or: python3 feistel.py)

Usage:
------
Each program provides on-screen instructions to help you encrypt or decrypt messages.

Contributing:
-------------
Contributions are welcome! Feel free to fork the repository, make improvements, and submit pull requests.
