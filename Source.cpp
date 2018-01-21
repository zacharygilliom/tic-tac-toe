#include <iostream>
#include <string>
#include <cmath>


using namespace std;


int main() {
	//initialize our variables
	string user1;
	string user2;
	string board[3][3];

	board[0][0] = "1";
	board[0][1] = "2";
	board[0][2] = "3";
	board[1][0] = "4";
	board[1][1] = "5";
	board[1][2] = "6";
	board[2][0] = "7";
	board[2][1] = "8";
	board[2][2] = "9";

	int move;

	bool game_over = false;

	////loop through to initialize the starting values on the board
	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		board[i][j] = "  ";
	//		/*testing to make sure our board is initialized correctly
	//		cout << board[i][j] << endl;*/
	//	}


	//}
	

	//Display the tic tac toe board
	cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
	cout << "___" << "_" << "___" << "_" << "___" << endl;
	cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
	cout << "___" << "_" << "___" << "_" << "___" << endl;
	cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
	
	
	// Start the game while game over does not equal false
	while (game_over == false) {
		// Initialize if each user is an x or if they are an o.
		cout << "User 1 please enter if you would like to be 'x' or 'o'" << endl;
		cin >> user1;
		if (user1 == "x") {
			cout << "Sorry User 2, you have to be " << "o" << endl;
			user2 = "o";
		}
		if (user1 == "o") {
			cout << "Sorry User 2, you have to be " << "x" << endl;
			user2 = "x";
		}
		
		
		for (int k = 1; k < 10 && game_over==false; k++) {
			if (k % 2 == 1) {
				// Ask user1 for their move.
				cout << "Please enter where you would like to place your " << user1 << endl;
				cin >> move;
				
				if (move == 1) {
					board[0][0] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 2) {
					board[0][1] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 3) {
					board[0][2] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 4) {
					board[1][0] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 5) {
					board[1][1] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 6) {
					board[1][2] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 7) {
					board[2][0] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer\n";

					}
				}
				if (move == 8) {
					board[2][1] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}
				if (move == 9) {
					board[2][2] = user1;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";
							

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over\n";

					}
				}

				//Display the tic tac toe board
				cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
				cout << "___" << "_" << "___" << "_" << "___" << endl;
				cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
				cout << "___" << "_" << "___" << "_" << "___" << endl;
				cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;

				

			}
			




			if (k % 2 == 0) {
				// Ask user1 for their move.
				cout << "Please enter where you would like to place your " << user2 << endl;
				cin >> move;
				if (move == 1) {
					board[0][0] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 2) {
					board[0][1] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 3) {
					board[0][2] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 4) {
					board[1][0] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 5) {
					board[1][1] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 6) {
					board[1][2] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 7) {
					board[2][0] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				if (move == 8) {
					board[2][1] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				else if (move == 9) {
					board[2][2] = user2;
					//horizontal win checking
					if ((board[0][0] == board[0][1]) && (board[0][1] == board[0][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[1][0] == board[1][1]) && (board[1][1] == board[1][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[2][1]) && (board[2][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//vertical win checking
					if ((board[0][0] == board[1][0]) && (board[1][0] == board[2][0])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][1] == board[1][1]) && (board[1][1] == board[2][1])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[0][2] == board[1][2]) && (board[1][2] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					//diagonal win checking
					if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
						game_over = true;
						cout << "Game is Over";

					}
					if ((board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
						game_over = true;
						cout << "Game is OVer";

					}
				}
				
				//Display the tic tac toe board
				cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
				cout << "___" << "_" << "___" << "_" << "___" << endl;
				cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
				cout << "___" << "_" << "___" << "_" << "___" << endl;
				cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;


				
			}
			

		}


		game_over = true;
		cin.ignore();
			
	
	}
	
	
	
	cout << "The game over" << endl;

	cin.get();




	return 0;
}



