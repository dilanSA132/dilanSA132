// Practica Examen de diagnostico.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// 4 ejercicios
//1) piedra papel o tijera
//2) Metodo camel y snake
//3) comparacion de numero mayor en una secuencia 
//4) tic tac toe
#include <iostream>
using namespace std; 
int main()
{
	string resultado = "";
	string player1 = "";
	string player2 = "";
	string word="";
	string result = "";
	int numeroEleccion = 0;
	while (numeroEleccion != 6) {

		cout << endl;
		cout << "Bienvenido al Programa estimado ususario" << endl;
		cout << "1) Para Jugar piedra, papel o tijera" << endl;
		cout << "2) Metodo camel" << endl;
		cout << "3) Metodo Snake" << endl;
		cout << "4) Secuencia de comparacion" << endl;
		cout << "5) Tic Tac Toe" << endl;
		cin >> numeroEleccion;
		cout << endl; 

		switch (numeroEleccion) {
		case 1: // Juego piedra papel o tijera
			cout << "Jugador 1: " << endl;
			cin >> player1;
			cout << "Jugador 2: " << endl;
			cin >> player2;
			cout << endl;
			if (player1 == player2) {
				resultado = "Hay un empate entre los dos jugadores";
			}
			else {
				if (player1 == "tijera" && player2 == "papel" || player1 == "papel" && player2 == "piedra" || player1 == "piedra" && player2 == "tijera") {
					resultado = "Gana el Jugador numero 1 con: " + player1;
				}
				else {
					resultado = "Gana el Jugador numero 2 con: " + player2;
				}
			}
			cout << resultado;
			cout << endl;
			break;
		case 2: // camel 
			cout << "Escriba la palabra" << endl;
			cin >> word;
			cout << endl;

			for (int i = 0; i < word.length(); i++) {
				bool isLastChar = (i + 1) >= word.length();
				if (word[i] == '_' && !isLastChar) {
					char nextCharAsUpper = toupper(word[i + 1]);
					string nextCharToString(1, nextCharAsUpper);
					result = result.append(nextCharToString);
					i++;
				}
				else {
					string nextCharToString(1, word[i]);
					result = result.append(nextCharToString);
				}
			}
			cout << result << endl;
			break;
		case 3: // snake
			cout << "Escriba la palabra" << endl;
			cin >> word;
			cout << endl;
			for (int i = 0; i < word.length(); i++) {
				if (isupper(word[i])) {
					char charAsLower = tolower(word[i]);
					string charToString(1, charAsLower);
					result = result.append("_" + charToString);
				}
				else {
					string charToString(1, word[i]);
					result = result.append(charToString);
				}
			}
			cout << result << endl;
			break;
		case 4: //secuencia


			break;

		case 5: //Tic Tac Toe
			break;
		}
	}
}
