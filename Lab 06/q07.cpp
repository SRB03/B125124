#include <iostream>
using namespace std;

void display(char* notes){
    int i=0;
    int digCount, spaceCount, alphCount;
    digCount = spaceCount = alphCount = 0;

    while(*(notes+i) != '\0'){
        if(*(notes+i) >= '0' && *(notes+i) <= '9'){
            digCount++;
        }else if(*(notes+i) >= 'a' && *(notes+i) <= 'z' || *(notes+i) >= 'A' && *(notes+i) <= 'Z'){
            alphCount++;
        } else if(*(notes+i) == ' '){
            spaceCount++;
        }
        i++;
    }

    cout << "Number of spaces: " << spaceCount << endl;
    cout << "Number of alphabets: " << alphCount << endl;
    cout << "Number of digits: " << digCount << endl;
}

int main(){
    char notes[8] = {'a', 'b', 'c', ' ', '2', '1' , ' ',  '\0'}; 
    display(notes);
    
    return 0;
}