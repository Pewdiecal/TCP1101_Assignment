/**********|**********|**********|
 Program: TT08.1171103388.LAU.YEE.KEEN.cpp
 Course: TCP1101 Programming Fundamentals
 Year: 2019/2020 Trimester 1
 Name: Lau Yee Keen Calvin
 ID: 1171103388
 Lecture Section: TC04
 Tutorial Section: TT08
 Email: 1171103388@student.mmu.edu.my
 Phone: 014-6099666
 **********|**********|**********/

// All preprocessor codes
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

#ifdef __WIN32__
#include <windows.h>
#endif

using namespace std;

const int width = 41;
const int height = 20;
int x, y; //coordinates holder
bool isPaused = false; //coordinate status
enum direction {HORIZONTAL_LEFT, HORIZONTAL_RIGHT, VERTICAL_UP, VERTICAL_DOWN}; //direction input constant
int directionInput; //direction input value holder
int timeSteps = -1; //time steps value holder
int scrollingSpeed = 1; //scrolling speed value holder
void render(); //renders animation, characters on screen
void coordinateManager(bool pauseStats); //calculates and manages the whole coordinates system
string charList;
string *charStager(); //Staging function used to put char on stage
void inputHandler(); //Handle user inputs
void delay2();
void clear();

class charArts { // a class that holds all the characters arts details.
public:
    
    string *A(){ // function will return the address of the array that stores the drawing of char arts in list of strings
       static string array[] = {  "==========",
            "====  ====",
            "===    ===",
            "==  ==  ==",
            "=  ====  =",
            "=  ====  =",
            "=        =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "==========" };

        return array; //address of the array is returned
    }
    
    string *B(){
       static string array[] = {  "==========",
            "=      ===",
            "=  ===  ==",
            "=  ====  =",
            "=  ===  ==",
            "=      ===",
            "=  ===  ==",
            "=  ====  =",
            "=  ===  ==",
            "=      ===",
            "==========" };
       
        return array;
    }
    
    string *C(){
       static string array[] = {  "==========",
            "===     ==",
            "==  ===  =",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "==  ===  =",
            "===     ==",
            "==========" };

        return array;
    }
    
    string *D(){
       static string array[] = {  "==========",
            "=       ==",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=       ==",
            "==========" };

        return array;
    }
    
    string *E(){
       static string array[] = {  "==========",
            "=        =",
            "=  =======",
            "=  =======",
            "=  =======",
            "=      ===",
            "=  =======",
            "=  =======",
            "=  =======",
            "=        =",
            "==========" };

        return array;
    }
    
    string *F(){
        
       static string array[] = {  "==========",
            "=        =",
            "=  =======",
            "=  =======",
            "=  =======",
            "=      ===",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "==========" };

        return array;
        
    }
    
    string *G(){
        
       static string array[] = {  "==========",
            "==      ==",
            "=   ==   =",
            "=  ====  =",
            "=  =======",
            "=  =======",
            "=  ===   =",
            "=  ====  =",
            "=   ==   =",
            "==      ==",
            "==========" };

        return array;
        
    }
    
    string *H(){
       static string array[] = {  "==========",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=        =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "==========" };

        return array;
    }
    
    string *I(){
       static string array[] = {  "======",
            "=    =",
            "==  ==",
            "==  ==",
            "==  ==",
            "==  ==",
            "==  ==",
            "==  ==",
            "==  ==",
            "=    =",
            "======" };

        return array;
        
    }
    
    string *J(){
       static string array[] = {  "==========",
            "=====    =",
            "======  ==",
            "======  ==",
            "======  ==",
            "======  ==",
            "======  ==",
            "=  ===  ==",
            "=  ===  ==",
            "==     ===",
            "==========" };

        return array;
        
        
    }
    
    string *K(){
       static string array[] = {  "==========",
            "=  ====  =",
            "=  ===  ==",
            "=  ==  ===",
            "=  =  ====",
            "=     ====",
            "=  ==  ===",
            "=  ===  ==",
            "=  ====  =",
            "=  ====  =",
            "==========" };

        return array;
        
    }
    
    string *L(){
       static string array[] = {  "==========",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "=        =",
            "==========" };

        return array;
        
    }
    
    string *M(){
       static string array[] = {  "===========",
            "=  =====  =",
            "=   ===   =",
            "=  =   =  =",
            "=  == ==  =",
            "=  =====  =",
            "=  =====  =",
            "=  =====  =",
            "=  =====  =",
            "=  =====  =",
            "===========" };

        return array;
        
        
    }
    
    string *N(){
       static string array[] = {  "=============",
            "=  =======  =",
            "=   ======  =",
            "=    =====  =",
            "=  ==  ===  =",
            "=  ===  ==  =",
            "=  ====  =  =",
            "=  =====    =",
            "=  ======   =",
            "=  =======  =",
            "=============" };

        return array;
        
    }
    
    string *O(){
       static string array[] = {  "==========",
            "===    ===",
            "==  ==  ==",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "==  ==  ==",
            "===    ===",
            "==========" };

        return array;
    }
    
    string *P(){
       static string array[] = {  "==========",
            "=       ==",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=       ==",
            "=  =======",
            "=  =======",
            "=  =======",
            "=  =======",
            "==========" };

        return array;
    }
    
    string *Q(){
       static string array[] = {  "==========",
            "==      ==",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  =  =  =",
            "=  ==    =",
            "==      ==",
            "==========" };

        return array;
        
    }
    
    string *R(){
       static string array[] = {  "==========",
            "=       ==",
            "=  ====  =",
            "=  ====  =",
            "=  ===   =",
            "=      ===",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "==========" };

        return array;
        
        
    }
    
    string *S(){
       static string array[] = {  "==========",
            "==      ==",
            "=  ====  =",
            "=  ====  =",
            "==  ======",
            "====  ====",
            "======  ==",
            "=  ====  =",
            "=  ====  =",
            "==      ==",
            "==========" };

        return array;
    }
    
    string *T(){
       static string array[] = {  "==========",
            "=        =",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "==========" };

        return array;
    }
    
    string *U(){
       static string array[] = {  "==========",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=   ==   =",
            "==      ==",
            "==========" };

        return array;
    }
    
    string *V(){
       static string array[] = {  "==========",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=  ====  =",
            "=   ==   =",
            "==  ==  ==",
            "==  ==  ==",
            "===    ===",
            "====  ====",
            "==========" };

        return array;
        
    }
    
    string *W(){
       static string array[] = {  "================",
            "=  ====  ====  =",
            "=  ====  ====  =",
            "=  ====  ====  =",
            "=  ====  ====  =",
            "=   ==    ==  ==",
            "==  ==    ==  ==",
            "==  ==    ==  ==",
            "===    ==    ===",
            "====  ====  ====",
            "================" };

        return array;
        
        
    }
    
    string *X(){
       static string array[] = {  "==========",
            "=   ==   =",
            "==  ==  ==",
            "==  ==  ==",
            "===    ===",
            "====  ====",
            "===    ===",
            "==  ==  ==",
            "==  ==  ==",
            "=  ====  =",
            "==========" };

        return array;
        
        
    }
    
    string *Y(){
       static string array[] = {  "==========",
            "=  ====  =",
            "=   ==   =",
            "==  ==  ==",
            "==  ==  ==",
            "===    ===",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "==========" };

        return array;
        
    }
    
    string *Z(){
       static string array[] = {  "==========",
            "=        =",
            "======  ==",
            "=====  ===",
            "=====  ===",
            "====  ====",
            "===  =====",
            "===  =====",
            "==  ======",
            "=        =",
            "==========" };

        return array;
        
    }
    
    string *_0(){
       static string array[] = {  "==============",
            "====      ====",
            "===   ==   ===",
            "===  ====  ===",
            "===  ====  ===",
            "===  ====  ===",
            "===  ====  ===",
            "===  ====  ===",
            "===   ==   ===",
            "====      ====",
            "==============" };

        return array;
        
    }
    
    string *_1(){
       static string array[] = {  "==========",
            "====  ====",
            "===   ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "====  ====",
            "==      ==",
            "==========" };

        return array;
        
    }
    
    string *_2(){
       static string array[] = {  "===========",
            "====   ====",
            "==   =   ==",
            "=   ===   =",
            "======   ==",
            "=====   ===",
            "====   ====",
            "===   =====",
            "==   ======",
            "=        ==",
            "===========" };

        return array;
        
    }
    
    string *_3(){
       static string array[] = {  "===========",
            "====   ====",
            "==   =   ==",
            "=   ===   =",
            "======   ==",
            "====    ===",
            "======   ==",
            "=   ===   =",
            "==   =   ==",
            "====   ====",
            "===========" };

        return array;
        
    }
    
    string *_4(){
       static string array[] = {  "===========",
            "======  ===",
            "=====   ===",
            "====    ===",
            "===  =  ===",
            "==  ==  ===",
            "=  ===  ===",
            "=         =",
            "======  ===",
            "======  ===",
            "===========" };

        return array;
        
    }
    
    string *_5(){
       static string array[] = {  "===========",
            "=         =",
            "=  ========",
            "=  ========",
            "=  =    ===",
            "=   ===  ==",
            "=  =====  =",
            "========  =",
            "=  ====  ==",
            "===     ===",
            "===========" };

        return array;
        
    }
    
    string *_6(){
       static string array[] = {  "===========",
            "==       ==",
            "=  =====  =",
            "=  ========",
            "=       ===",
            "=   ===  ==",
            "=  =====  =",
            "=  =====  =",
            "==  ===   =",
            "===     ===",
            "===========" };

        return array;
    }
    
    string *_7(){
       static string array[] = {  "===========",
            "=         =",
            "=  =====  =",
            "=======  ==",
            "======  ===",
            "=====  ====",
            "====  =====",
            "====  =====",
            "====  =====",
            "====  =====",
            "===========" };

        return array;
        
    }
    
    string *_8(){
       static string array[] = {  "===========",
            "===     ===",
            "==  ===  ==",
            "=  =====  =",
            "==  ===  ==",
            "===     ===",
            "==  ===  ==",
            "=  =====  =",
            "==  ===  ==",
            "===     ===",
            "===========" };

        return array;
    }
    
    string *_9(){
       static string array[] = {  "===========",
            "===     ===",
            "==  ===   =",
            "=  =====  =",
            "=  =====  =",
            "==  ===   =",
            "====   =  =",
            "========  =",
            "========  =",
            "========  =",
            "===========" };
        return array;
        
    }
    
    string *SPACE(){
        static string array[11]; // Has size of 11
        
        for(int i=0; i < 11; i++){ // use loop to store the spaces into array
            
            array[i] = "   "; // each element of array will be stored with "   "(3 spaces)
        }
        return array; // returns the address of the array
    }
};


int main(){
#ifdef _WIN32
    system("color a");
#endif
    inputHandler(); // will get the user input first
    charStager(); // this function will store all the characters choosen by the user into an array
    while (true){ // Infinite loop to keep the frame rendering
        render();
        coordinateManager(isPaused);
        if(timeSteps >=0){ // to check the user actually want to stop the execution of the program by specifying a time steps
            
            if(timeSteps==0){
                break; // terminate the infinite loop once time steps reaches 0
            }
            timeSteps--;
        }
        delay2();
        clear();
    }
    
}

void coordinateManager(bool pauseStats){ // this func reponsible to calculate and manage the whole coordinate system in this program
    if(!pauseStats){ // if the calculations of coordinate is not being paused, keep calculating the next value of the coordinates for the anchor dot
        switch (directionInput) {
            case HORIZONTAL_LEFT:
                x--;
                break;
            case HORIZONTAL_RIGHT:
                x++;
                break;
            case VERTICAL_UP:
                y--;
                break;
            case VERTICAL_DOWN:
                y++;
                break;
            default: // movement will be static when user enter 4 in the direction input holder
                break;
        }
    }
    
    // all of the coordinates value will be resetted to prevent it from getting -ve values or values that is more than the total width and height
    if (x > width-1 || x < 1){
        if(x<1){ // it will pause the coordinates when x < 1
            isPaused = true;
        } else if(x > width-1){ // reset x to 1 when x exceeds the total width value
            x=1;
        }
        
    } else if (y < 0 || y >height){
        if(y<0){ // it will reset the y coordinate value if y < 0
            y = height-1;
        } else if(y > height){
            y = 1;
        }
        
    }
}


void inputHandler(){ //this func responsible to ask and receive user inputs only

    clear();
    
        cout << "Please enter the words that you would like to display: ";
        getline (cin, charList);
        cout << endl;
    
        cout << "Please enter the anchor dot for X axis:";
        cin >> x;
        x=x+1;
        cout << endl;
   
        cout << "Please enter the anchor dot for Y axis:";
        cin >> y;
    
        y=((height)-y)-1;
        cout << endl;
    
        cout << "Please enter your scrolling direction" << endl;
        cout << "0.HORIZONTAL_LEFT, 1.HORIZONTAL_RIGHT, 2.VERTICAL_UP, 3.VERTICAL_DOWN, 4.STATIC:";
        cin >> directionInput;
    
        cout << endl;
    
    
    if(directionInput <= 3){ //if the user wants the scrolling effects (0.HORIZONTAL_LEFT, 1.HORIZONTAL_RIGHT, 2.VERTICAL_UP, 3.VERTICAL_DOWN), ask below questions
        cout << "Please enter time steps, (Enter -1 for unlimited time stpes):";
        cin >> timeSteps;
        cout << endl;
        
        cout << "1.SLOWEST 2.VERY_SLOW 3.NOT_VERY_SLOW 4.MEDIUM 5.NOT_VERY_FAST 6.FASTER 7.VERY_FAST 8.FASTEST 9.SUPER_FAST 10.ASAP" << endl;
        cout << "Please enter the scrolling speed:";
        cin >> scrollingSpeed;
        cout << endl;
    }
    
    clear();
    
}

string *charStager(){ // this func responsible to read the user's inputted string from charList, and then convert it into char arts, then stores the char arts into a "staging" array
    
    charArts charObj; // charArts object
    static bool isCodeExecuted = false; // to make sure that this func is already being executed at the very begining of the program
    static string stagedChar[11]; // staging array
    string *ptr; // string pointer
    
    for (int i = 0; i < charList.size(); i++){ // loop through every single char in charList to convert all char in to char arts
        if(toupper(charList[i])=='A'){ // will convert all input to UPPERCASE first before checking it
            ptr = charObj.A(); // pointer will point to the address of that specific array address returned by the charArts object
        } else if(toupper(charList[i])=='B'){
            ptr = charObj.B();
        } else if(toupper(charList[i])=='C'){
            ptr = charObj.C();
        } else if(toupper(charList[i])=='D'){
            ptr = charObj.D();
        } else if(toupper(charList[i])=='E'){
            ptr = charObj.E();
        } else if(toupper(charList[i])=='F'){
            ptr = charObj.F();
        } else if(toupper(charList[i])=='G'){
            ptr = charObj.G();
        } else if(toupper(charList[i])=='H'){
            ptr = charObj.H();
        } else if(toupper(charList[i])=='I'){
            ptr = charObj.I();
        } else if(toupper(charList[i])=='J'){
            ptr = charObj.J();
        } else if(toupper(charList[i])=='K'){
            ptr = charObj.K();
        } else if(toupper(charList[i])=='L'){
            ptr = charObj.L();
        } else if(toupper(charList[i])=='M'){
            ptr = charObj.M();
        } else if(toupper(charList[i])=='O'){
            ptr = charObj.O();
        } else if(toupper(charList[i])=='P'){
            ptr = charObj.P();
        } else if(toupper(charList[i])=='Q'){
            ptr = charObj.Q();
        } else if(toupper(charList[i])=='R'){
            ptr = charObj.R();
        } else if(toupper(charList[i])=='S'){
            ptr = charObj.S();
        } else if(toupper(charList[i])=='T'){
            ptr = charObj.T();
        } else if(toupper(charList[i])=='U'){
            ptr = charObj.V();
        } else if(toupper(charList[i])=='W'){
            ptr = charObj.W();
        } else if(toupper(charList[i])=='X'){
            ptr = charObj.X();
        } else if(toupper(charList[i])=='Y'){
            ptr = charObj.Y();
        } else if(toupper(charList[i])=='Z'){
            ptr = charObj.Z();
        } else if(toupper(charList[i])=='0'){
            ptr = charObj._0();
        } else if(toupper(charList[i])=='1'){
            ptr = charObj._1();
        } else if(toupper(charList[i])=='2'){
            ptr = charObj._2();
        } else if(toupper(charList[i])=='3'){
            ptr = charObj._3();
        } else if(toupper(charList[i])=='4'){
            ptr = charObj._4();
        } else if(toupper(charList[i])=='5'){
            ptr = charObj._5();
        } else if(toupper(charList[i])=='6'){
            ptr = charObj._6();
        } else if(toupper(charList[i])=='7'){
            ptr = charObj._7();
        } else if(toupper(charList[i])=='8'){
            ptr = charObj._8();
        } else if(toupper(charList[i])=='9'){
            ptr = charObj._9();
        } else if(toupper(charList[i])==' '){
            ptr = charObj.SPACE();
        } else if(toupper(charList[i])=='N'){
            ptr = charObj.N();
        }
        if(!isCodeExecuted){ // if this func is not being executed before, only then store all the element from the char arts array into the staging array.
            
            for (int e = 0; e < 11; e++) { // store the char arts array that has been pointed by ptr into the staging array
                stagedChar[e].append(*(ptr+e)); // ptr will be dereferenced according to the address before being stored into the array
            }

        }
    }
    
    isCodeExecuted = true; // set to true once this func is being called and completed
    return stagedChar; // return the stagedChar array address
}

void delay2()
{ // to delay each time the frame refreshes
    int delay;
    switch (scrollingSpeed) {
        case 1:
            delay = 300000000;
            break;
        case 2:
            delay = 250000000;
            break;
        case 3:
            delay = 22000000;
            break;
        case 4:
            delay = 19000000;
            break;
        case 5:
            delay = 15000000;
            break;
        case 6:
            delay = 12000000;
            break;
        case 7:
            delay = 10000000;
            break;
        case 8:
            delay = 8888888;
            break;
        case 9:
            delay = 6666666;
            break;
        case 10:
            delay = 2000000;
            break;
        default:
            break;
    }
    for( int i = 0; i < delay; ++i )
    { }
}

void clear(){ // clear the previously rendered frame
    #ifdef __APPLE__
        system("clear");
    #endif
    #ifdef _WIN32
        system("cls");
    #endif
    #ifdef __linux__
        system("clear");
    #endif
}

void render(){ // this func responsible to render all the scenes including movement, char arts, and animations.
    
    charArts charObj;
    string *ptr_stagedChar = charStager(); // stores the address of stagedChar array from charStager()
    static int skipWidth = 0; // spaces needs to be deleted
    int charWidth = (*ptr_stagedChar).size()-1; // total size of string from a single element from stagedChar
    static bool notFinishPrinting = false; // to check if the whole stagedChar array has finish printing or not
    static bool isWrapAroundEnabled = false; // enable or disable wrap around effect for X axis
    static int printedHeight = 0; // stores current printed element index from stagedChar
    static int printedWidth = 0; // stores current size of string that has been printed from stagedChar
    const double percent = 50.0;
    double displayedPercentage = 0.00;
    int remainingSpacesX = (width-1) - x; // calculate remaining spaces for printing on X axis based on anchor dot
    int skipWidth_debug = 0; // DEBUGGING PURPOSES
    bool notFinishPrinting_debug; // DEBUGGING PURPOSES
    static int widthMinus = 1;
    static int widthAdd = width-2;
    static bool isRunning = false;
    
    for(int i = 0; i < width + 1; i++ ){ //  render top width
        cout << "#";
    }
    cout << endl;
    
    if(((height-1)-y) <= 10){ //  if char cannot finish print on 1st time start, print the remaining char at first. (VERTICAL USE)
        notFinishPrinting = true;
        printedHeight = (height-y); //  will be = 11 when y = 9, Thus, cause if (printedHeight <= 10 && notFinishPrinting) return false.
    }
    if((charWidth > width) && !isRunning){
        widthAdd = width-1;
        isRunning = true;
    }else if((charWidth < width) && !isRunning){
        widthAdd = charWidth;
        isRunning = true;
    }
    
    for(int k = 0; k < height; k++){ //  render height
        for(int c = 0; c < width; c++){ //  render horizontal space
            
            if (c==0){ //  if is 1st dot print * to build border.
                cout << "#" ;
                
            } else if(((k==y && c==1 && remainingSpacesX < charWidth && isWrapAroundEnabled) || (k==y && c==x) || (c==x && notFinishPrinting) || (c==1 && notFinishPrinting && remainingSpacesX < charWidth && isWrapAroundEnabled) || (k==y && isPaused && c==1) || (isPaused && c==1 && notFinishPrinting) )){
                
                notFinishPrinting = true;
                notFinishPrinting_debug = notFinishPrinting; //  DEBUGGING PURPOSES
                if (printedHeight <= 10 && notFinishPrinting){ // if array element not finish printed yet and notFinishPrinting is true, start printing the char arts
                    notFinishPrinting_debug = notFinishPrinting; //  DEBUGGING PURPOSES
                    displayedPercentage = (static_cast<double>(printedWidth)/static_cast<double>(charWidth))*100.0;
                    
                    if((remainingSpacesX < charWidth)){ // if not enough printing spaces for stagedChar
                       if(c==1 && remainingSpacesX >=0 && isWrapAroundEnabled){ // (CODE FOR MILESTONE 2 use)
                            int test = 0; //  NEED TO BE OPTIMIZED, cause skipWidth did not start count from 0
                        
                            for(int contPrintWidth = remainingSpacesX+1; contPrintWidth <= charWidth; contPrintWidth++){ //
                                
                                cout << (*(ptr_stagedChar+printedHeight)).at(contPrintWidth);
                                
                                if(test !=0){ //  to make skipWidth start counting from 0
                                    skipWidth++;
                                }
                                test++;
                            }
                            
                        }
                        
                        if(((k==y && c==x) || (c==x && notFinishPrinting)) && !isPaused){ //starts to print while coordinate is not paused
                            for(printedWidth = 0; printedWidth <= remainingSpacesX; printedWidth++){
                                cout << (*(ptr_stagedChar+printedHeight)).at(printedWidth);
                                skipWidth = printedWidth; // set skipWidth to the printed amout of string size
                                
                            }
                        }
                        
                        skipWidth_debug = skipWidth; //  DEBUGGING PURPOSES
    
                    } else if((remainingSpacesX >= charWidth) && !isPaused){ // if space is sufficient to print all char
                        displayedPercentage = (static_cast<double>(printedWidth)/static_cast<double>(charWidth))*100.0;
                        cout << *(ptr_stagedChar+printedHeight);
                        skipWidth = charWidth;
                        skipWidth_debug = skipWidth; //  DEBUGGING PURPOSES
                        
                    }
                    
                    if(notFinishPrinting && isPaused && c==1){ // if moving towards left, it will remove width by width from the array without moving the anchor dot
                        for(int width=widthMinus; width <= widthAdd ; width++){
                            cout << (*(ptr_stagedChar+printedHeight)).at(width);
                            skipWidth = width-widthMinus;
                            
                        }
                        
                    }
                    
                    if((k==y && c==x) || (c==x && notFinishPrinting) || (isPaused && c==1 && notFinishPrinting) || (k==y && isPaused && c==1)){ // increase the stagedChar array index
                        printedHeight ++;
                    }
                    
                } else{ // once char printing is completed, reset everything back its origin value.
                    printedHeight = 0;
                    cout << " ";
                    notFinishPrinting = false;
                    
                    if(isPaused && (widthMinus <= charWidth)){ // increase the initialization value of for loop to remove front width by 1
                        widthMinus++;

                    }
                    if(isPaused && (widthMinus > charWidth)){ // once widthMinus has exceeded the charWidth value, reset everything
                        x=width;
                        isPaused = false;
                        isRunning = false;
                        widthMinus = 1;
                        
                    }
                    if(isPaused && (widthAdd < charWidth)){ //increase the validation value of for loop by 1 to display the width behind the border
                        widthAdd++;
                    }
                    notFinishPrinting_debug = notFinishPrinting; //  DEBUGGING PURPOSES
                }
                
            } else{ // if not match x && y value, just print blank space
                if (skipWidth <= charWidth && skipWidth >0){ //To delete additional space after cout each char
                    skipWidth--;
                } else{ // print blank space
                    cout << " ";
                }
                
            }
            
            if (c == width - 1){ //  print * when width - 1 = 40
                cout << "#" ;
            }
            
        }
        cout << endl;
        
    }
    
    for(int i = 0; i < width + 1; i++ ){ //  render bottom border width
        cout << "#";
    }
    cout << endl;
    
}

