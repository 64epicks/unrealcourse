#include <iostream>
#include <string>

using namespace std;

void Intro();
string GetGuessAndPrintBack();
// Entry point
int main(int number) {

	Intro();
	constexpr int TURNS = 5;
	for (int count = 1; count <= TURNS; count++) {
		GetGuessAndPrintBack();
	}

	return 0; // exit the application
}
void Intro() {
	constexpr int WORD_LENGH = 5;

	// Introducing the game to the player
	cout << "Bulls and cows!" << endl;
	cout << "*yeeey*..." << endl;
	cout << "" << endl;
	cout << "Can you guess the " << WORD_LENGH;
	cout << " letter isogram I'm thinking of?\n";
	return;
}
string GetGuessAndPrintBack() {
	// Get a guess from the player
	string playerguess = "";
	cout << "Your guess:";
	getline(cin, playerguess);

	//Test if the player didnt type anything
	if (playerguess == "") {
		cout << "ERRRRRRRRRRRRROOOOOOOOOOOOOOOOORRRRRRRRRRRRRRRRRR\n";
	}
	else {
		//Returning value to player
		cout << "Ok so you guessed " << playerguess << endl;
	}
	return playerguess;
}