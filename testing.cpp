#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

int x, y;
const int width = 40;
const int height = 20;
char moving; // for user input to move the the letters
int r, c; // r = row , c = column
int counter ;
string input;
int cutWord = 0; //cut the width of the current char one by one
int nextWord = 0; //will be incremented by 1 each time when a char has been completely cutted to show the next char and to cut the next char.

char space[7][6] = { }; // char if the user enter space 
char A[7][6] = { {' ',' ','#',' ',' ',' '}, 
				 {' ','#',' ','#',' ',' '}, 
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ','#',' '},  
				 {'#',' ',' ',' ','#',' '} };

char B[7][6] = { {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#',' ',' '} }; 
				 
char C[7][6] = { {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#','#',' '} };
			 
char D[7][6] = { {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#',' ',' '} };
				 
char E[7][6] = { {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#','#',' '} };
				 
char F[7][6] = { {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '} };
				 
char G[7][6] = { {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ','#','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} }; 
				 
char H[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '} };
				 
char I[7][6] = { {' ','#','#','#',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ','#','#','#',' ',' '} };
				 
char J[7][6] = { {'#','#','#','#',' ',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ',' ','#',' ',' '},
				 {'#',' ',' ','#',' ',' '},
				 {' ','#','#','#',' ',' '} };
				 
char K[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ','#',' ',' '},
				 {'#',' ','#',' ',' ',' '},
				 {'#','#',' ',' ',' ',' '},
				 {'#',' ','#',' ',' ',' '},
				 {'#',' ',' ','#',' ',' '},
				 {'#',' ',' ',' ','#',' '} };
				 
char L[7][6] = { {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#',' ',' '} };
				 
char M[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#','#',' ','#','#',' '},
				 {'#',' ','#',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '} }; 
				 
char N[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#','#',' ',' ','#',' '},
				 {'#',' ','#',' ','#',' '},
				 {'#',' ',' ','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '} }; 
				 
char O[7][6] = { {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#','#',' '} };
				 
char P[7][6] = { {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '} };
				 
char Q[7][6] = { {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ','#',' ','#',' '},
				 {'#',' ',' ','#',' ',' '},
				 {' ','#','#',' ','#',' '} };
				 
char R[7][6] = { {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#',' ',' '},
				 {'#',' ','#',' ',' ',' '},
				 {'#',' ',' ','#',' ',' '},
				 {'#',' ',' ',' ','#',' '} };
				 
char S[7][6] = { {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {' ','#','#','#',' ',' '},
				 {' ',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} };
				 
char T[7][6] = { {'#','#','#','#','#',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '} };
				 
char U[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} };
				 
char V[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#',' ','#',' ',' '},
				 {' ',' ','#',' ',' ',' '} };
				 
char W[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ','#',' ','#',' '},
				 {'#','#',' ','#','#',' '},
				 {'#',' ',' ',' ','#',' '} };
				 
char X[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#',' ','#',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ','#',' ','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '} };
				 
char Y[7][6] = { {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#',' ','#',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '} };
				 
char Z[7][6] = { {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ','#',' ',' ',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#','#','#','#',' '} };
				 
char _0[7][6] = {{' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#','#',' ',' ','#',' '},
				 {'#',' ','#',' ','#',' '},
				 {'#',' ',' ','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} };
				 
char _1[7][6] ={ {' ','#','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {'#','#','#','#','#',' '} };
				 
char _2[7][6] ={ {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ','#',' ',' ',' '},
				 {' ','#',' ',' ',' ',' '},
				 {'#','#','#','#','#',' '} };
				 
char _3[7][6] ={ {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} };
				 
char _4[7][6] ={ {'#',' ',' ','#',' ',' '},
				 {'#',' ',' ','#',' ',' '},
				 {'#',' ',' ','#',' ',' '},
				 {'#',' ',' ','#',' ',' '},
				 {'#','#','#','#','#',' '},
				 {' ',' ',' ','#',' ',' '},
				 {' ',' ',' ','#',' ',' '} };

char _5[7][6] ={ {'#','#','#','#','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#',' ',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {'#','#','#','#',' ',' '} };
				 
char _6[7][6] ={ {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ',' ',' '},
				 {'#','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} };
				 
char _7[7][6] ={ {'#','#','#','#','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '} };
				 
char _8[7][6] ={ {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#',' ',' '} };
				 
char _9[7][6] ={ {' ','#','#','#','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {'#',' ',' ',' ','#',' '},
				 {' ','#','#','#','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '},
				 {' ',' ',' ',' ','#',' '} };

void select( int r, int c, int counter)
{
	switch(input[counter]) 
						{
						case ' ': cout << space[r][c];
							break;
						case 'a':
						case 'A': cout << A[r][c];
							break;
						case 'b':
						case 'B': cout << B[r][c];
							break;
						case 'c':
						case 'C': cout << C[r][c];
							break;
						case 'd':
						case 'D': cout << D[r][c];
							break;
						case 'e':
						case 'E': cout << E[r][c];				
							break;
						case 'f':
						case 'F': cout << F[r][c];							
							break;
						case 'g':
						case 'G': cout << G[r][c];							
							break;
						case 'h':
						case 'H': cout << H[r][c];					
							break;
						case 'i':
						case 'I': cout << I[r][c];				
							break;
						case 'j':
						case 'J': cout << J[r][c];	
							break;
						case 'k':
						case 'K': cout << K[r][c];
							break;
						case 'l':
						case 'L': cout << L[r][c];		
							break;
						case 'm':
						case 'M': cout << M[r][c];
							break;
						case 'n':
						case 'N': cout << N[r][c];
							break;
						case 'o':
						case 'O': cout << O[r][c];							 
							break;
						case 'p':
						case 'P': cout << P[r][c];							
							break;
						case 'q':
						case 'Q': cout << Q[r][c];
							break;
						case 'r':
						case 'R': cout << R[r][c];							
							break;
						case 's':
						case 'S': cout << S[r][c];							
							break;
						case 't':
						case 'T': cout << T[r][c];							
							break;
						case 'u':
						case 'U': cout << U[r][c];							
							break;
						case 'v':
						case 'V': cout << V[r][c];							
							break;
						case 'w':
						case 'W': cout << W[r][c];							
							break;
						case 'x':
						case 'X': cout << X[r][c];							
							break;
						case 'y':
						case 'Y': cout << Y[r][c];							
							break;
						case 'z':
						case 'Z': cout << Z[r][c];							
							break;
						case '0': cout << _0[r][c];							
							break;
						case '1': cout << _1[r][c];							
							break;
						case '2': cout << _2[r][c];							
							break;
						case '3': cout << _3[r][c];							
							break;
						case '4': cout << _4[r][c];							
							break;
						case '5': cout << _5[r][c];							
							break;
						case '6': cout << _6[r][c];						
							break;
						case '7': cout << _7[r][c];							
							break;
						case '8': cout << _8[r][c];							
							break;
						case '9': cout << _9[r][c];							
							break;
						}
}

void Setup(){
	cout << "Please type here: ";
	getline(cin , input);

	cout << " please decide the anchor dote " << endl;
	cout << "enter x" << endl;
	cin >> x;
	cout << "enter y" << endl;
	cin >> y;
}

void printChar ( int r, int countcol, int c )
{
	int counter = nextWord; //counter will = nextWord
	while ( counter < input.size())
	{
		for (  int c = 0; c < 6 && countcol < width ; c++ ) // to check if countcol exceeds the size of the width, it stops printing 
		{
            if(counter==nextWord && c==0){ // to check if we're actually cutting only the first char
                c=cutWord;
            }
			select(r , c, counter);
			countcol++;
		}
		counter++; // increment for the next letter
	}
}
	
void frame()
{
	system("clear");
	int r = 0; // row
	int c = 0; // column
	
	int y_1 = y; 
	int y_2 = y + 1;
	int y_3 = y + 2;
	int y_4 = y + 3;
	int y_5 = y + 4;
	int y_6 = y + 5;
	int y_7 = y + 6;

	for (int i = 0; i < width+1; i++) // print the top border
		cout << "="; 
	cout << endl;
	
	for (int i = 0; i < height; i++) 
	{
		int countcol = 0; // variable for counting the whole columns in the box
		for (int j = 0; j < width; j++) 
		{	
			
			if (j == 0) // print the left border ( no border basically ) 
			{ 
				cout << " ";
			}
			else if (j > 0 && j != width)
			{
				
				if ( j == x && i == y_1) // print 1st row
				{		
					printChar( r, countcol, c );
					r++;
				}
				else if ( j == x && i == y_2) // print 2nd row
				{
					printChar( r, countcol, c );
					r++;
				}
				else if ( j == x && i == y_3) // print 3rd row
				{
					printChar( r, countcol, c );
					r++;
				}
				else if ( j == x && i == y_4) // print 4th row 
				{
					printChar( r, countcol, c );
					r++;
				}
				else if ( j == x && i == y_5) // print 5th row 
				{
					printChar( r, countcol, c );
					r++;
				}
				else if ( j == x && i == y_6) // print 6th row
				{
					printChar( r, countcol, c );
					r++;
				}
				else if ( j == x && i == y_7) // print 7th row
				{
					printChar( r, countcol, c );
					r++;
				}
			
				else // printing the spaces for the rows except for the 7 specific rows that are mentioned above
				{					
						countcol++; 
						cout << " ";
					
					}
				if ( countcol == 40 ) // to stop printing the characters at the right border
						break;
		
			}
			if (j == width - 1) // print the right border ( no border basically ) 
			{
				cout << " ";
			} 
			
		}

		cout << endl;
	
	}
	for ( int i = 0; i < width+1; i++ ) // print the bottom border
		cout << "=";
	cout << endl;
}

void Logic() // logic for moving  
{
	int w;
	
	switch(moving)
	{
	case 'w':
	case 'W' : // going up
	y--;
	if (y < 0){
		y = y % height + height;
		cout << y;
	};
	break;
	
	case 'a': 
	case 'A': // going to the left
	x--;
	if ( x == 0)
	{
		x = -1;
		cout << x;
	}
		
	
	break;
	
	case 'd': 
	case 'D' : // going to the right
	x++;
	
	break;
	
	case 's':
	case 'S' : // going down
	y++;
	if ( y >= height )
	{
		y = y % height;
		cout << y;
	}
	
	}
}

void delay(){
	for( int i = 0; i < 300000000; ++i ){}
}

int main(){
	int steps; // variable to get how many steps for the characters to move
	int countstep = 0;
	Setup();
	
	cout << " w : up " << endl;
	cout << " a : left " << endl;
	cout << " d : right " << endl;
	cout << " s : down " << endl;
	cout << " g : static " << endl;
	cin >> moving;
	
	cout << "how many steps do you want the characters to move  " << endl;
	cin >> steps;
	
	while (countstep < steps)
	{
		frame();
		Logic();
		delay();
        
        //each time the frame has completely being drew, we can start to cut the width of char
        cutWord++;
        if(cutWord ==5){ //since a char has 5 column(start counting from 0), cutWord will be reset to 0 when cutWord = 5
            cutWord = 0;
            if(nextWord < input.size()){ //if cutWord reaches 5, it means that we've edy finish cutting the 1st word from input, so the 1st word should be disappear/ignored by now
                nextWord++; // this will increment by 1 since counter = nextWord inside the printChar function
            }else{
                nextWord = 0; // reset nextWord back to 0 after it exceed input.size()
            }
            
        }
		countstep++;
	}

return 0;

}
