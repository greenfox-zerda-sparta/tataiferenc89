#include "Pop.h"
#include "Rock.h"
#include "Reggae.h"
#include "Jukebox.h"
#include <iostream>
using namespace std;

int main() {
  Rock track_01("Metallica","Fuel");
  Reggae track_02("Bob Marley","Buffalo soilder");
  Pop track_03("Backstreet Boys","Backstreet's back");
  Rock track_04("Metallica", "Some kind of monster");
  Rock track_05("Deep Purple", "Smoke on the water");
  Pop track_06("Rihanna", "Diamonds");

  Jukebox jukebox;
  jukebox.addSong(track_01);
  jukebox.addSong(track_02);
  jukebox.addSong(track_03);
  jukebox.addSong(track_04);
  jukebox.addSong(track_05);
  jukebox.addSong(track_06);

  cout << jukebox.printSongs() << endl;
  jukebox.ratingSong("Metallica","Fuel",4);
  jukebox.ratingSong("Metallica","Fuel",5);

  jukebox.ratingSong("Metallica","Some kind of monster",5);
  jukebox.ratingSong("Deep Purple", "Smoke on the water",5);
  jukebox.ratingSong("Deep Purple", "Smoke on the water",2);
  jukebox.ratingSong("Bob Marley","Buffalo soilder",4);
  jukebox.ratingSong("Backstreet Boys","Backstreet's back",5);
  jukebox.ratingSong("Rihanna", "Diamonds",2);

  cout << "Average of Metallica songs: " << jukebox.averageArtist("Metallica") << endl;
  cout << "Average of Backstreet songs: " << jukebox.averageArtist("Backstreet Boys") << endl;
  cout << "Average of Rock: " <<jukebox.averageGenre("Rock") << endl;
  cout << "Average of pop: " <<jukebox.averageGenre("Pop") << endl;
  cout << "Average of reggae: " <<jukebox.averageGenre("Reggae") << endl;
  cout << "Best song is: " <<jukebox.bestSong() << endl;
  cout << "Best genere is: " <<jukebox.topGenre() << endl;

	return 0;
}
