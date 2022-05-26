#include <iostream>
using namespace std;

int main()
{
	enum ChessPieces { Empty, Pawn, Knight, Bishop, Rook, Queen, King};
	
	// Initialize ChessBoard array	
	ChessPieces ChessBoard[8][8];

	// Get the Pawns out of the way
	ChessBoard[1][0] = ChessBoard[1][1] = ChessBoard[1][2] = ChessBoard[1][3] = ChessBoard[1][4] = ChessBoard[1][5] = \
	 ChessBoard[1][6] = ChessBoard[1][7] = ChessBoard[6][0] = ChessBoard[6][1] = ChessBoard[6][2] = ChessBoard[6][3] = \
	 ChessBoard[6][4] = ChessBoard[6][5] = ChessBoard[6][6] = ChessBoard[6][7] = Pawn;	

	// Knights
	ChessBoard[0][1] = ChessBoard[0][6] = ChessBoard[7][1] = ChessBoard[7][6] = Knight;
	
	// Bishops
	ChessBoard[0][2] = ChessBoard[0][5] = ChessBoard[7][2] = ChessBoard[7][5] = Bishop;

	// Rooks
	ChessBoard[0][0] = ChessBoard[0][7] = ChessBoard[7][0] = ChessBoard[7][7] = Rook;

	// Queens
	ChessBoard[0][3] = ChessBoard[7][3] = Queen;

	// Kings
	ChessBoard[0][4] = ChessBoard[7][4] = King;

	return 0;
}


