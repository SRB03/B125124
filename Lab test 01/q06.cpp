#include <iostream>
using namespace std;

int longest(int* duration, int size){
    int max = *(duration);

    for(int i=1; i<size; i++){
        if(max < *(duration + i))
            max = *(duration + i);
    }

    return max;
}

int main(){
    int *songs = new int[6];
    for(int i=0; i<6; i++)
        songs[i] = i*80+15;
    cout << "The songs durations are: ";
    for(int i=0; i<6; i++)
        cout << songs[i] << " ";
    cout << endl;
    
    cout << "Song with largest duration: " << longest(songs, 6) << endl;
    
    return 0;
}