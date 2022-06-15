#include <iostream>
#include <string>
#include <cmath>


using namespace std;


bool new_game() {
   bool p1_ships[6][6];
   bool p2_ships[6][6];
   bool p1_guess[6][6];
   bool p2_guess[6][6];
   bool p1_results[6][6];
   bool p2_results [6][6];
   return p1_ships, p1_guess, p1_results, p2_ships, p2_guess, p2_results;
}


int main() {

   bool p1_ships[5][5];
   bool p2_ships[5][5];
   bool p1_guess[5][5];
   bool p2_guess[5][5];
   bool p1_results[5][5];
   bool p2_results [5][5];

   std::cout << "Hello World" << std::endl;
   std::cout << p1_ships[0][0] << std::endl;
   return 0;
}



// Structure will be to create the following
// #1 initailize variables aka the 6 boards etc.
// #2 new_game function that establishes the 6 boards and places the ships according for each player
// ^^^^^ possibly create a second function place_ships that does that second portion
// #3 Then create a while loop that ends whenever all the ships have sunk, not sure the best way to accomplish this
// task yet and will max at 36 turns obviously but possibly while TRUE values for both board are under the total 
// number of ship square and with current plan that would be 9 squares, aka 9 TRUE squares on the results board
// for either player means they have sunk all of the ships and then can print depending on the player that wins
// player 1 or 2 wins.

//can ultimately test by running a loop of games randomizing the two players and then showing a plot of the
// times out of 30 the AI wins going first or second etc. Curious to see if it's more about going first
// or the AI being smarter about aim.