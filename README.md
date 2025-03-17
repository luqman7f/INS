# INS - Cryptography Ciphers in C++ and Python

This repository contains implementations of various classical cryptographic ciphers in C++ and Python. These ciphers demonstrate how encryption techniques have evolved and help understand the fundamentals of secure communication.

## 📌 Overview
Cryptography is the backbone of secure data transmission. This repository includes implementations of classical encryption techniques that have shaped modern cryptographic methods. The ciphers are implemented in C++ and Python to provide hands-on experience with encryption and decryption processes.

## 🔐 Implemented Ciphers

### 🔄 Substitution Ciphers:
- **Caesar Cipher** 🏛️: Shifts characters by a fixed number of positions in the alphabet.
- **Monoalphabetic Cipher** 🔠: Each plaintext letter is replaced with a corresponding letter from a shuffled alphabet.
- **Playfair Cipher** 🔢: Encrypts letter pairs using a 5x5 matrix.
- **Vigenère Cipher** 🔑: Uses a repeating keyword to shift text characters, making it stronger than simple substitution.

### 🏗️ Polyalphabetic & Block Ciphers:
- **Hill Cipher** 📊: Employs matrix multiplication for polygraphic substitution.
- **Feistel Cipher** 🔄: Splits plaintext into two halves and processes them through multiple rounds using a round function, key, and XOR operations, forming the basis of modern block ciphers like DES.
- **DES (Data Encryption Standard)** 🔏: Implements the widely used block cipher encryption algorithm that enhances security through multiple rounds of permutation and substitution.
- **RSA (Rivest-Shamir-Adleman)** 🔐: A public-key encryption algorithm that uses modular arithmetic for secure key exchange and message encryption.
- **ECC (Elliptic Curve Cryptography)** 📈: A modern cryptographic algorithm that provides strong security with smaller key sizes, making it efficient for encryption and key exchange.
- **Diffie-Hellman Key Exchange** 🔄: A secure method for exchanging cryptographic keys over an insecure channel without prior key sharing.

## ⚙️ Prerequisites

Before running the programs, ensure you have the following installed:
- **C++ Compiler** (e.g., g++). Verify with:
  ```sh
  g++ --version
  ```
- **Python Interpreter**. Verify with:
  ```sh
  python --version  # or: python3 --version
  ```

## 🚀 Running the Programs

### 🔻 Clone the Repository
```sh
git clone https://github.com/luqman7f/INS.git
cd INS
```

### 💻 Compile and Run C++ Programs:
```sh
g++ caesar.cpp -o caesar && ./caesar
g++ monoalphabetic.cpp -o monoalphabetic && ./monoalphabetic
g++ hill_cipher.cpp -o hill_cipher && ./hill_cipher
g++ vigenere.cpp -o vigenere && ./vigenere
g++ feistal.cpp -o feistal && ./feistal
```

### 🐍 Run Python Programs:
```sh
python playfair.py   # or: python3 playfair.py
python DES.py        # or: python3 DES.py
python rsa.py        # or: python3 rsa.py
python ecc.py        # or: python3 ecc.py
python diffie_hellman.py # or: python3 diffie_hellman.py
```

## 📖 Usage
Each program provides on-screen instructions for encrypting or decrypting messages. Users can input plaintext, apply encryption, and retrieve the corresponding ciphertext. Similarly, decryption restores the original message from ciphertext.

## 🤝 Contributing
We welcome contributions! Feel free to fork this repository, add improvements, and submit pull requests. Enhancements can include:
- Optimizing algorithms for better efficiency.
- Adding graphical or web-based implementations.
- Improving documentation with real-world cryptographic applications.

