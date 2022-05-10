#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char filename[30], ch, str[1000];
    int tot = 0, i = 0, vowels = 0, consonants = 0, alphabets = 0, ascii;
    ifstream fp;

    fp.open("C:/Users/ANCHIT SINHA/Desktop/filename.txt", ifstream::in);
    if (!fp)
    {
        cout << endl
             << "File doesn't exist or Access denied!";
        return 0;
    }
    while (fp >> noskipws >> ch)
    {
        str[tot] = ch;
        tot++;
    }
    fp.close();
    str[tot] = '\0';
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alphabets++;

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        else
        {
            ascii = str[i];
            if (ascii >= 65 && ascii <= 90)
                consonants++;
            else if (ascii >= 97 && ascii <= 122)
                consonants++;
        }
        i++;
    }
    cout << endl
         << "Total Number of Alphabets = " << alphabets;
    cout << endl
         << "Total Number of Vowels = " << vowels;
    cout << endl
         << "Total Number of Consonants = " << consonants;
    cout << endl;
    return 0;
}
