def create_matrix(key):
    alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ"
    key_string = ""
    
    for c in (key.upper().replace("J", "I") + alphabet):
        if c not in key_string:
            key_string += c

    matrix = [[None] * 5 for _ in range(5)]
    
    index = 0
    for i in range(5):
        for j in range(5):
            matrix[i][j] = key_string[index]
            index += 1

    return matrix

def find_position(matrix, c):
    for row in range(5):
        for col in range(5):
            if matrix[row][col] == c:
                return row, col
    return None

def pf_encrypt(pt, key):
    matrix = create_matrix(key)

    pt = pt.upper().replace("J", "I").replace(" ", "")
    
    if len(pt) % 2 != 0:
        pt += "X"

    ciphertext = ""

    for i in range(0, len(pt), 2):
        a, b = pt[i], pt[i + 1]
        row1, col1 = find_position(matrix, a)
        row2, col2 = find_position(matrix, b)

        if row1 == row2:
            ciphertext += matrix[row1][(col1 + 1) % 5]
            ciphertext += matrix[row2][(col2 + 1) % 5]
        elif col1 == col2:
            ciphertext += matrix[(row1 + 1) % 5][col1]
            ciphertext += matrix[(row2 + 1) % 5][col2]
        else:
            ciphertext += matrix[row1][col2]
            ciphertext += matrix[row2][col1]

    return ciphertext

key = input("Enter the encryption key: ")
pt = input("Enter the plaintext: ")
ciphertext = pf_encrypt(pt, key)
print("Ciphertext:", ciphertext)