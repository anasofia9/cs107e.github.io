/*
 * Lookup tables for PS/2 scan codes, to determine if they are
 * characters and if so which one.
 *
 * Author: Philip Levis <pal@cs.stanford.edu>
 * Date: 6/20/17
 */


#include <ps2.h>

const int is_char[] = {
    0, // 00
    0, // 01, F9
    0, // 02
    0, // 03, F5
    0, // 04, F3
    0, // 05, F1
    0, // 06, F2
    0, // 07, F12
    0, // 08
    0, // 09, F10
    0, // 0A, F8
    0, // 0B, F6
    0, // 0C, F4
    1, // 0D, 	,
    1, // 0E, `, ~
    0, // 0F
    0, // 10
    0, // 11, LEFT_ALT
    0, // 12, LEFT_SHIFT
    0, // 13
    0, // 14, LEFT_CONTROL
    1, // 15, q, Q
    1, // 16, 1, !
    0, // 17
    0, // 18
    0, // 19
    1, // 1A, z, Z
    1, // 1B, s, S
    1, // 1C, a, A
    1, // 1D, w, W
    1, // 1E, 2, @
    0, // 1F
    0, // 20
    1, // 21, c, C
    1, // 22, x, X
    1, // 23, d, D
    1, // 24, e, E
    1, // 25, 4, $
    1, // 26, 3, #
    0, // 27
    0, // 28
    1, // 29, SPACE
    1, // 2A, v, V
    1, // 2B, f, F
    1, // 2C, t, T
    1, // 2D, r, R
    1, // 2E, 5, %
    0, // 2F
    0, // 30
    1, // 31, n, N
    1, // 32, b, B
    1, // 33, h, H
    1, // 34, g, G
    1, // 35, y, Y
    1, // 36, 6, ^
    0, // 37
    0, // 38
    0, // 39
    1, // 3A, m, M
    1, // 3B, j, J
    1, // 3C, u, U
    1, // 3D, 7, &
    1, // 3E, 8, *
    0, // 3F
    0, // 40
    1, // 41, ,, <
    1, // 42, k, K
    1, // 43, i, I
    1, // 44, o, O
    1, // 45, 0, )
    1, // 46, 9, (
    0, // 47
    0, // 48
    1, // 49, ., >
    1, // 4A, /, ?
    1, // 4B, l, L
    1, // 4C, ;, :
    1, // 4D, p, P
    1, // 4E, -, _
    0, // 4F
    0, // 50
    0, // 51
    1, // 52, ', "
    0, // 53
    1, // 54, [, {
    1, // 55, =, +
    0, // 56
    0, // 57
    0, // 58, CAPS
    0, // 59, RIGHT_SHIFT
    1, // 5A,
    1, // 5B, ], }
    0, // 5C
    1, // 5D, \, |
    0, // 5E
    0, // 5F
    0, // 60
    0, // 61
    0, // 62
    0, // 63
    0, // 64
    0, // 65
    1, // 66, , 
    0, // 67
    0, // 68
    0, // 69, KEYPAD_1
    0, // 6A
    0, // 6B, KEYPAD_4
    0, // 6C, KEYPAD_7
    0, // 6D
    0, // 6E
    0, // 6F
    0, // 70, KEYPAD_0
    0, // 71, KEYPAD_PERIOD
    0, // 72, KEYPAD_2
    0, // 73, KEYPAD_5
    0, // 74, KEYPAD_6
    0, // 75, KEYPAD_8
    1, // 76, ESC
    0, // 77, NUM
    0, // 78, F11
    0, // 79, KEYPAD_PLUS
    0, // 7A, KEYPAD_3
    0, // 7B, KEYPAD_MINUS
    0, // 7C, KEYPAD_TIMES
    0, // 7D, KEYPAD_9
    0, // 7E, SCROLL
    0, // 7F
};


const char shift_char_from_scan[] = {
    ' ', // 0x00
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    ' ', // 0x08
    ' ',
    ' ',
    ' ',
    ' ',
    '\t',
    '~',
    ' ',
    ' ', // 0x10
    ' ',
    ' ',
    ' ',
    ' ',
    'Q',
    '!',
    ' ',
    ' ', // 0x18
    ' ',
    'Z',
    'S',
    'A',
    'W',
    '@',
    ' ',
    ' ', // 0x20
    'C',
    'X',
    'D',
    'E',
    '$',
    '#',
    ' ',
    ' ', // 0x28
    ' ',
    'V',
    'F',
    'T',
    'R',
    '%',
    ' ',
    ' ', // 0x30
    'N',
    'B',
    'H',
    'G',
    'Y',
    '^',
    ' ',
    ' ', // 0x38
    ' ',
    'M',
    'J',
    'U',
    '&',
    '*',
    ' ',
    ' ', // 0x40
    '<',
    'K',
    'I',
    'O',
    ')',
    '(',
    ' ',
    ' ', // 0x48
    '>',
    '?',
    'L',
    ':',
    'P',
    '_',
    ' ',
    ' ', // 0x50
    ' ',
    '\"',
    ' ',
    '{',
    '+',
    ' ',
    ' ',
    ' ', // 0x58
    ' ',
    '\n',
    '}',
    ' ',
    '|',
    ' ',
    ' ',
    ' ', // 0x60
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    '\b',
    ' ',
    ' ', // 0x68
    '1',
    ' ',
    '4',
    '7',
    ' ',
    ' ',
    ' ',
    '0', // 0x70
    '.',
    '2',
    '5',
    '6',
    '8',
    ' ',
    ' ',
    ' ', // 0x78
    '+',
    '3',
    '-',
    '*',
    '9',
    ' ',
    ' '
};

const char char_from_scan[] = {
    ' ', // 0x00
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    ' ', // 0x08
    ' ',
    ' ',
    ' ',
    ' ',
    '\t',
    '`',
    ' ',
    ' ', // 0x10
    ' ',
    ' ',
    ' ',
    ' ',
    'q',
    '1',
    ' ',
    ' ', // 0x18
    ' ',
    'z',
    's',
    'a',
    'w',
    '2',
    ' ',
    ' ', // 0x20
    'c',
    'x',
    'd',
    'e',
    '4',
    '3',
    ' ',
    ' ', // 0x28
    ' ',
    'v',
    'f',
    't',
    'r',
    '5',
    ' ',
    ' ', // 0x30
    'n',
    'b',
    'h',
    'g',
    'y',
    '6',
    ' ',
    ' ', // 0x38
    ' ',
    'm',
    'j',
    'u',
    '7',
    '8',
    ' ',
    ' ', // 0x40
    ',',
    'k',
    'i',
    'o',
    '0',
    '9',
    ' ',
    ' ', // 0x48
    '.',
    '/',
    'l',
    ';',
    'p',
    '-',
    ' ',
    ' ', // 0x50
    ' ',
    '\'',
    ' ',
    '[',
    '=',
    ' ',
    ' ',
    ' ', // 0x58
    ' ',
    '\n',
    ']',
    ' ',
    '\\',
    ' ',
    ' ',
    ' ', // 0x60
    ' ',
    ' ',
    ' ',
    ' ',
    ' ',
    '\b',
    ' ',
    ' ', // 0x68
    '1',
    ' ',
    '4',
    '7',
    ' ',
    ' ',
    ' ',
    '0', // 0x70
    '.',
    '2',
    '5',
    '6',
    '8',
    ' ',
    ' ',
    ' ', // 0x78
    '+',
    '3',
    '-',
    '*',
    '9',
    ' ',
    ' '
};




/* Copyright (c) 2017 Stanford University.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Stanford University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
