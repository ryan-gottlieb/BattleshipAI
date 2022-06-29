#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <ctime>
#include <cstdlib>

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

int p1_move_order(int N) {       // Esablishes a random linear vector that has random order with unique values
   std::vector<int> v1(N);       // Create a vector of length N
   for(int i=0; i < N-1; ++i)     // Linearize vector with increasing values through N-1
      v1[i] = i;                       
   std::random_shuffle(v1[0], v1[N]);  // Shuffle the order of the vector
   return v1;                    // Return the vector that has the randomized order
}

int move_transform(int Val, int N) {    //Transform the single value index from the randomized vector (value 1)
   int size = sqrt(N);              // Find the length and width of square board via N (# of spaces on board)
   int x_axis = floor(Val / size);  // Find row value based on the floor of division (since indexing starts at 0)
   int y_axis = Val % size;         // Find column value based on the modulus of the value divided by size
}

int p2_move_order(int N) {
   std::vector<int> v2(N/2);
   for(int i=0; i < (N/2); i++)
      v2[i] = 2*i;
   return v2;
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