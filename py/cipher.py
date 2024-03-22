def decrypt_caesar_cipher(ciphertext, shift):
    decrypted_text = ""
    for char in ciphertext:
        if char.isalpha():
            shifted_char = chr((ord(char) - ord('A') - shift) % 26 + ord('A')) if char.isupper() else chr((ord(char) - ord('a') - shift) % 26 + ord('a'))
            decrypted_text += shifted_char
        else:
            decrypted_text += char
    return decrypted_text

encrypted_message = "GUR FRPERG BSSVPRE QBA'G YVXR GUR ZRZORE BS EBG13"
shift = 13
decrypted_message = decrypt_caesar_cipher(encrypted_message, shift)
print("Decrypted message:", decrypted_message)