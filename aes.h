
#ifndef AES_128_H
#define AES_128_H

#include <stdio.h>
#include <stdint.h>

#define AES_BLOCK_SIZE      16
#define AES_ROUNDS          10  // 12, 14
#define AES_ROUND_KEY_SIZE  176 // AES-128 имеет 10 кругов, и добавляется AddRoundKey до начала первого круга. (10+1)x16=176.

/**
 * Ключи для AES-128
 * 16 байт - мастер ключ
 * 176 байт - круговой ключ (RoundKey)
 */
void aes_key_schedule_128(const uint8_t *key, uint8_t *roundkeys);

/**
 * Шифрование. Длина простого и Шифра должна составлять один блок (16 байт)
 * Открытый и зашифрованный текст могут указывать на одну и ту же память
 * ключи
 * исходный текст
 * шифр-текст
 */
void aes_encrypt_128(const uint8_t *roundkeys, const uint8_t *plaintext, uint8_t *ciphertext);

/**
* Расшифровка. Длина простого и Шифра должна составлять один блок (16 байт).
* Зашифрованный и открытый текст могут указывать на одну и ту же память.
* ключи
* шифр-текст
* исходный текст
 */
void aes_decrypt_128(const uint8_t *roundkeys, const uint8_t *ciphertext, uint8_t *plaintext);

#endif
