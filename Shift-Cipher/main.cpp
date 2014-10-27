// Discrete math practice - Shift cipher.
// Enter in a string, encrypted or decrypted, choose a k (to shift by),
// and choose whether to encrypt or decrypt the message.
// This is also a practice of using enums and switch/case in C++.
// (c) Sergey Smirnov, 2014

#include <iostream>
#include <vector>

using namespace std;

enum alphabet
{
    A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9, J = 10, K = 11, L = 12,
    M = 13, N = 14, O = 15, P = 16, Q = 17, R = 18, S = 19, T = 20, U = 21, V = 22, W = 23,
    X = 24, Y = 25, Z = 26
};

char get_char(alphabet a)
{
    char c;
    switch (a)
    {
    case 1:
        c = 'A';
        break;
    case 2:
        c = 'B';
        break;
    case 3:
        c = 'C';
        break;
    case 4:
        c = 'D';
        break;
    case 5:
        c = 'E';
        break;
    case 6:
        c = 'F';
        break;
    case 7:
        c = 'G';
        break;
    case 8:
        c = 'H';
        break;
    case 9:
        c = 'I';
        break;
    case 10:
        c = 'J';
        break;
    case 11:
        c = 'K';
        break;
    case 12:
        c = 'L';
        break;
    case 13:
        c = 'M';
        break;
    case 14:
        c = 'N';
        break;
    case 15:
        c = 'O';
        break;
    case 16:
        c = 'P';
        break;
    case 17:
        c = 'Q';
        break;
    case 18:
        c = 'R';
        break;
    case 19:
        c = 'S';
        break;
    case 20:
        c = 'T';
        break;
    case 21:
        c = 'U';
        break;
    case 22:
        c = 'V';
        break;
    case 23:
        c = 'W';
        break;
    case 24:
        c = 'X';
        break;
    case 25:
        c = 'Y';
        break;
    case 26:
        c = 'Z';
        break;
    default:
        c = ' ';
        break;
    }
    return c;
}

int mod(const int &a, const int &b)
{
    int r = a % b;
    if (r < 0)
        r += b;
    return r;
}

vector<char> encrypt_message(char *s, int ecp)
{
    ecp += 1;
    vector<char> f;
    for (size_t i = 0; i < strlen(s); i++)
    {
        int n;
        alphabet a;
        char c;
        switch (s[i])
        {
        case 'A':
            n = mod((1 + ecp), 26);
            break;
        case 'B':
            n = mod((2 + ecp), 26);
            break;
        case 'C':
            n = mod((3 + ecp), 26);
            break;
        case 'D':
            n = mod((4 + ecp), 26);
            break;
        case 'E':
            n = mod((5 + ecp), 26);
            break;
        case 'F':
            n = mod((6 + ecp), 26);
            break;
        case 'G':
            n = mod((7 + ecp), 26);
            break;
        case 'H':
            n = mod((8 + ecp), 26);
            break;
        case 'I':
            n = mod((9 + ecp), 26);
            break;
        case 'J':
            n = mod((10 + ecp), 26);
            break;
        case 'K':
            n = mod((11 + ecp), 26);
            break;
        case 'L':
            n = mod((12 + ecp), 26);
            break;
        case 'M':
            n = mod((13 + ecp), 26);
            break;
        case 'N':
            n = mod((14 + ecp), 26);
            break;
        case 'O':
            n = mod((15 + ecp), 26);
            break;
        case 'P':
            n = mod((16 + ecp), 26);
            break;
        case 'Q':
            n = mod((17 + ecp), 26);
            break;
        case 'R':
            n = mod((18 + ecp), 26);
            break;
        case 'S':
            n = mod((19 + ecp), 26);
            break;
        case 'T':
            n = mod((20 + ecp), 26);
            break;
        case 'U':
            n = mod((21 + ecp), 26);
            break;
        case 'V':
            n = mod((22 + ecp), 26);
            break;
        case 'W':
            n = mod((23 + ecp), 26);
            break;
        case 'X':
            n = mod((24 + ecp), 26);
            break;
        case 'Y':
            n = mod((25 + ecp), 26);
            break;
        case 'Z':
            n = mod((26 + ecp), 26);
            break;
        default:
            n = 99;
            break;
        }
        if (n == 99)
            f.push_back(0);
        else
        {
            a = alphabet(n);
            c = get_char(a);
            f.push_back(c);
        }
    }
    return f;
}

vector<char> decrypt_message(char *s, int ecp)
{
    vector<char> f;
    for (size_t i = 0; i < strlen(s); i++)
    {
        unsigned n;
        alphabet a;
        char c;
        switch (s[i])
        {
        case 'A':
            n = mod((1 - ecp), 26);
            break;
        case 'B':
            n = mod((2 - ecp), 26);
            break;
        case 'C':
            n = mod((3 - ecp), 26);
            break;
        case 'D':
            n = mod((4 - ecp), 26);
            break;
        case 'E':
            n = mod((5 - ecp), 26);
            break;
        case 'F':
            n = mod((6 - ecp), 26);
            break;
        case 'G':
            n = mod((7 - ecp), 26);
            break;
        case 'H':
            n = mod((8 - ecp), 26);
            break;
        case 'I':
            n = mod((9 - ecp), 26);
            break;
        case 'J':
            n = mod((10 - ecp), 26);
            break;
        case 'K':
            n = mod((11 - ecp), 26);
            break;
        case 'L':
            n = mod((12 - ecp), 26);
            break;
        case 'M':
            n = mod((13 - ecp), 26);
            break;
        case 'N':
            n = mod((14 - ecp), 26);
            break;
        case 'O':
            n = mod((15 - ecp), 26);
            break;
        case 'P':
            n = mod((16 - ecp), 26);
            break;
        case 'Q':
            n = mod((17 - ecp), 26);
            break;
        case 'R':
            n = mod((18 - ecp), 26);
            break;
        case 'S':
            n = mod((19 - ecp), 26);
            break;
        case 'T':
            n = mod((20 - ecp), 26);
            break;
        case 'U':
            n = mod((21 - ecp), 26);
            break;
        case 'V':
            n = mod((22 - ecp), 26);
            break;
        case 'W':
            n = mod((23 - ecp), 26);
            break;
        case 'X':
            n = mod((24 - ecp), 26);
            break;
        case 'Y':
            n = mod((25 - ecp), 26);
            break;
        case 'Z':
            n = mod((26 - ecp), 26);
            break;
        default:
            n = 99;
            break;
        }
        if (n == 99)
            f.push_back(0);
        else
        {
            a = alphabet(n);
            c = get_char(a);
            f.push_back(c);
        }
    }
    return f;
}

int main()
{
    int ecp;
    char s[512];
    vector<char> f;
    cout << "Enter a string: ";
    cin.getline(s, 512);
    for (size_t i = 0; i < strlen(s); i++)
        s[i] = toupper(s[i]);
    cout << "Enter a number to encrypt or decrypt by: ";
    cin >> ecp;
    int choice;
    cout << "Would you like to encrypt or decrypt this message?\n\t1. Encrypt\n\t2. Decrypt\nOption: ";
    cin >> choice;
    cout << "Original string: " << s << "\n";
    if (choice == 1)
    {
        f = encrypt_message(s, ecp);
        cout << "Encrypted message: ";
    }
    else if (choice == 2)
    {
        f = decrypt_message(s, ecp);
        cout << "Decrypted message: ";
    }
    else
    {
        cout << "Invalid token, terminating program.\n";
    }
    for (size_t i = 0; i < f.size(); i++)
        cout << f[i];
    cout << "\n";
}