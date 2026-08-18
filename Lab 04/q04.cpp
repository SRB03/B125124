#include <iostream>
using namespace std;

class Song{
    string song_name;
    string artist_name;
    int duration;
public:
    Song(){
        cout << "Enter song name: ";
        cin >> song_name;
        cout << "Enter artist name: ";
        cin >> artist_name;
        cout << "Enter duration: ";
        cin >> duration;    
    }
    void display(){
        cout << "Song name: " << song_name << endl;
        cout << "Artist name: " << artist_name << endl;
        cout << "Duration(in seconds): " << duration << endl;
    }
    friend void compareSongs(Song, Song);
};

void compareSongs(Song S1, Song S2){
    cout << endl;
    if(S1.duration == S2.duration){
        cout << "Both songs have same duration = " << S1.duration << endl;
    } else {
        cout << "The song with greater duration is: " << endl;
        if (S1.duration > S2.duration)
            S1.display();
        else
            S2.display();
    }
}

int main(){
    Song *S1 = new Song();
    Song *S2  = new Song();
    compareSongs(*S1, *S2);

    delete S1;
    delete S2;
    return 0;
}