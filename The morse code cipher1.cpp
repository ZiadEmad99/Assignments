// The Morse code cipher program.
// By : Ziad Emad Salah
// 28/2/2018
// Version 1.0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int  main()
{
    cout <<"Ahlan ya user ya habibi. \n";
    int whattodo ;
    cout <<"What do you like to do today? \n";
    cout <<"1- Cipher a message \n";
    cout <<"2- Decipher a message \n";
    cout <<"3- End \n";
    cin >> whattodo ;
    if ( whattodo  == 1 )
    {
        string letter;
        cout <<"Please enter the message to cipher: " ;
        cin.ignore();
        getline(cin, letter);
        string alphabet = "abcdefghijklmnopqrstuvwxyz.,";
        string morsecipher[28] = { ".- ", "-... ", "-.-. ", "-.. ", ". ", "..-. ", "--. ", ".... ", ".. ", ".--- ", "-.- ", ".-.. ", "-- ", "-. ", "--- ", ".--. ", "--.- ", ".-. ", "... ", "- ", "..- ", "...- ", ".-- ", "-..- ", "-.-- ", "--.. ", ".-.-.- ", "--..-- " };
        for (int  i = 0 ; i < letter.length() ; i++)
        {
            for (int j=0 ; j< 29; j++)
            {
                if (letter[i] == alphabet[j])
                {
                    cout << morsecipher[j];
                }
                if (letter[i] == ' ')
                {
                    cout <<"   ";
                    break;
                }

            }
        }
    }
    else if (whattodo == 2)
    {
        cout << "Note: Please type the character ','  between your words .\n ";
        string cipher[600] ;
        cout <<"Enter your cipher : ";
        for ( int i = 0 ; i < 500 ; i++)
        {
            cin>>cipher[i];
            if (cipher[i] == ".-")
            cout << "a";
            else if (cipher[i] == "," )
                cout << "///";             // In order to add space between words
            else if (cipher[i] == "-..." )
                cout << "b";
            else if (cipher[i] == "-.-.")
                cout <<"c";
             else if (cipher[i] == "-.." )
                cout << "d";
            else if (cipher[i] == "." )
                cout << "e";
            else if (cipher[i] == "..-.")
                cout <<"f";
            else if (cipher[i] == "--.")
                cout <<"g";
            else if (cipher[i] == "...." )
                cout << "h";
            else if (cipher[i] == "..")
                cout <<"i";
             else if (cipher[i] == ".---" )
                cout << "j";
            else if (cipher[i] == "-.-" )
                cout << "k";
            else if (cipher[i] == ".-..")
                cout <<"l";
            else if (cipher[i] == "--")
                cout <<"m";
            else if (cipher[i] == "-." )
                cout << "n";
            else if (cipher[i] == "---")
                cout <<"o";
            else if (cipher[i] == ".--." )
                cout << "p";
            else if (cipher[i] == "--.-" )
                cout << "q";
            else if (cipher[i] == ".-.")
                cout <<"r";
            else if (cipher[i] == "...")
                cout <<"s";
            else if (cipher[i] == "-" )
                cout << "t";
            else if (cipher[i] == "..-")
                cout <<"u";
             else if (cipher[i] == "...-" )
                cout << "v";
            else if (cipher[i] == ".--" )
                cout << "w";
            else if (cipher[i] == "-..-")
                cout <<"x";
            else if (cipher[i] == "-.--")
                cout <<"y";
            else if (cipher[i] == "--..")
                    cout << "z";



        }

    }

    return 0 ;
}
