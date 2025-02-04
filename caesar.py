Plaintext=input("Enter text:\n")
k=3
print("Encoded code:")
for i in Plaintext:
    if (i.islower()):
        ascii=((ord(i)+k-97)%26+97)
        print(chr(ascii))
    else:
        ascii=((ord(i)+k-65)%26+65)
        print(chr(ascii))
print("Decoded code:")
for i in Plaintext:
    if (i.islower()):
        ascii=((ord(i)-k-97)%26+97)
        print(chr(ascii))
    else:
        ascii=((ord(i)-k-65)%26+65)
        print(chr(ascii))
