#include <iostream>
#include <string.h>
#include <cstdint>

using namespace std;

string printf(const string& word)
{
    std::cout<< word << std::endl;
}

bool findVowel(const char& word)
{
    const string vowels = "aıoueiöüAIOUEİÖÜ";
    
    for(uint_least8_t i=0; i<vowels.length(); i++)
    {
        if(word==vowels[i])
        {
            return true;
        }
    }

    return false;
}

int main(void)
{
    string word = "";

    printf("Enter a word\n");

    cin>>word;

    cout<<endl;

    if(word.length()<=0)
    {
        std::cout<< "word length <=0";
        return 0;
    }

    for(uint_least8_t i=0; i< word.length(); i++)
    {
        
        cout<< i <<endl;
        
        if(findVowel(word[i])==false && findVowel(word[i+1])==true)
        {
            if(findVowel(word[i+2])==false)
            {
                if(findVowel(word[i+3])==true)
                {
                    cout<< word[i] << word[i+1] <<endl;
                    i+=1;
                }
                else if(findVowel(word[i+3])==false)
                {
                    if(findVowel(word[i+4])==false)
                    {
                        cout<< word[i] << word[i+1] << word[i+2] << word[i+3] << endl;
                        i+=3;
                    }
                    else
                    {
                        cout<< word[i] << word[i+1] << word[i+2] <<endl;
                        i+=2;
                    }
                }
                else
                {
                    cout<< word[i] << word[i+1] << word[i+2] << endl;
                    i+=2;
                }
                
            }
            else if(findVowel(word[i+2])==true )
            {
                if(findVowel(word[i+3])==false && findVowel(word[i+4])==false)
                {
                    cout<< word[i] << word[i+1] << word[i+2] << word[i+3] << word[i+4]<< endl;
                    i+=4;
                }
                else
                {
                    cout<< word[i] << word[i+1] <<endl;
                    cout<< word[i+2] << endl;
                    i+=2;
                }
                
            }
        }
        else if(findVowel(word[i])==true)
        {
            if(findVowel(word[i+1])==false)
            {
                cout<< word[i] ;
                if(findVowel(word[i+2])==false)
                {
                    if(findVowel(word[i+3]==true))
                    {
                        cout<< word[i+1] << word[i+2];
                        i+=2;
                    }
                    else
                    {
                        cout<<word[i+1];
                        i++;
                    }
                }
                cout<<endl;
            }
        }

    }
    
    return 0;
}