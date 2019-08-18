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

#include <iostream>
#include <string>
#ifdef __APPLE__
#include <unistd.h>
#endif
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

const int width = 40;
const int height = 20;
int x, y;
enum direction {HORIZONTAL_LEFT, HORIZONTAL_RIGHT, VERTICAL_UP, VERTICAL_DOWN};
int directionInput = 1;
void render();


class charArts {
public:
    
    int A(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
        string array[] = {  "==========",
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return widthSize-1;
    }
    
    int B(int seq, bool print){
        string array[] = {  "==========",
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
        if(print){
            cout << array[seq];
        }
        
        int widthSize = array[0].size();
        return widthSize;
    }
    
    void C(){
        string array[] = {  "==========",
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
        
    }
    
    void D(){
        string array[] = {  "==========",
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
        
    }
    
    void E(){
        string array[] = {  "==========",
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
        
    }
    
    void F(){
        
        string array[] = {  "==========",
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
        
        for (int i = 0; i < 11; i++){
            cout << array[i] << endl;
            usleep(300000);
        }
        
    }
    
    void G(){
        
        string array[] = {  "==========",
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
        
    }
    
    void H(){
        string array[] = {  "==========",
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
    }
    
    void I(){
        string array[] = {  "======",
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
        
    }
    
    void J(){
        string array[] = {  "==========",
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
        
        
    }
    
    void K(){
        string array[] = {  "==========",
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
        
        
    }
    
    void L(){
        string array[] = {  "==========",
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
        
    }
    
    void M(){
        string array[] = {  "===========",
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
        
        
    }
    
    void N(){
        string array[] = {  "=============",
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
        
    }
    
    void O(){
        string array[] = {  "==========",
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
    }
    
    void P(){
        string array[] = {  "==========",
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
    }
    
    void Q(){
        string array[] = {  "==========",
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
        
    }
    
    void R(){
        string array[] = {  "==========",
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
        
        
    }
    
    void S(){
        string array[] = {  "==========",
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
        
    }
    
    void T(){
        string array[] = {  "==========",
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
        
    }
    
    void U(){
        string array[] = {  "==========",
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
        
    }
    
    void V(){
        string array[] = {  "==========",
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
        
    }
    
    void W(){
        string array[] = {  "================",
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
        
        
    }
    
    void X(){
        string array[] = {  "==========",
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
        
        
    }
    
    void Y(){
        string array[] = {  "==========",
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
        
        
    }
    
    void Z(){
        string array[] = {  "==========",
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
        
    }
    
    void _0(){
        string array[] = {  "==============",
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
        
    }
    
    void _1(){
        string array[] = {  "==========",
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
        
    }
    
    void _2(){
        string array[] = {  "===========",
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
        
    }
    
    void _3(){
        string array[] = {  "===========",
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
        
    }
    
    void _4(){
        string array[] = {  "===========",
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
        
    }
    
    void _5(){
        string array[] = {  "===========",
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
        
    }
    
    void _6(){
        string array[] = {  "===========",
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
        
    }
    
    void _7(){
        string array[] = {  "===========",
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
        
        
    }
    
    void _8(){
        string array[] = {  "===========",
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
        
        
    }
    
    void _9(){
        string array[] = {  "===========",
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
        
    }
};


int main(){
    x = 27; //BUG when x++ = 29
    y = 5;
    while (true){
         //sleep(10);
        render();
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
            default:
                break;
        }
        if (x > 39){
            x = 1;
        } else if (y < 1){
            y = height-1;
        }
        usleep(1000000);
    }
   
}

void render(){
    charArts charObj;
    system("clear"); // check OS here
    static int skipWidth = 0; // spaces needs to be deleted
    int charWidth = charObj.A(0, 0, false, false); // total width of char
    static bool notFinishPrinting = false;
    static int printedHeight = 0;
    static int printedWidth = 0;
    int remainingSpacesX = (width-1) - x; // remaining printing spaces on X axis based on anchor dot
    int skipWidth_debug = 0; // DEBUGGING PURPOSES
    bool notFinishPrinting_debug;
    
    for(int i = 0; i < width + 1; i++ ){ // render top width
        cout << "-";
    }
    cout << endl;
    
    if(((height-1)-y) <= 10){ // MARK: if char cannot finish print on 1st time start, print the remaining char at first. (VERTICAL USE)
        notFinishPrinting = true;
        printedHeight = (height-y); // MARK: will be = 11 when y = 9, Thus, cause if (printedHeight <= 10 && notFinishPrinting) return false.
    }
    
    for(int k = 0; k < height; k++){ // MARK: render height
        for(int c = 0; c < width; c++){ // MARK: render horizontal space
            
            if (c==0){ // if is 1st dot print * to build border.
                cout << "*" ;
                
            } else if(((k==y && c==1 && remainingSpacesX < charWidth) || (k==y && c==x) || (c==x && notFinishPrinting) || (c==1 && notFinishPrinting && remainingSpacesX < charWidth))){ // if not 1st dot, check if the current coordinate match x && y value to print char.
                
                
                notFinishPrinting = true; // BUG: = true when x==40;
                notFinishPrinting_debug = notFinishPrinting; //DEBUGGING PURPOSES
                if (printedHeight <= 10 && notFinishPrinting){
                    notFinishPrinting_debug = notFinishPrinting; //DEBUGGING PURPOSES
                    if(directionInput == HORIZONTAL_LEFT || directionInput == HORIZONTAL_RIGHT){
                        
                        if(remainingSpacesX < charWidth){ // MARK: when x < 9
                            if(c==1 && remainingSpacesX >=0){
                                for(int contPrintWidth = remainingSpacesX+1; contPrintWidth <= charWidth; contPrintWidth++){
                                    charObj.A(printedHeight, contPrintWidth, true, true);
                                    skipWidth = contPrintWidth;
                                    
                                }
                            }
                            if((k==y && c==x) || (c==x && notFinishPrinting)){
                                for(printedWidth = 0; printedWidth <= remainingSpacesX; printedWidth++){
                                    charObj.A(printedHeight, printedWidth, true, true);
                                    skipWidth = printedWidth;
                                    
                                }
                            }
                            //skipWidth = remainingSpacesX;
                            
                            skipWidth_debug = skipWidth; //DEBUGGING PURPOSES
                            
                        } else if(remainingSpacesX >= charWidth){ //MARK: when x >=9
                            charObj.A(printedHeight, 0, true, false);
                            skipWidth = charWidth;
                            skipWidth_debug = skipWidth; //DEBUGGING PURPOSES
                        }
                        if((k==y && c==x) || (c==x && notFinishPrinting)){
                            printedHeight ++;
                        }
                        
                    } else if(directionInput == VERTICAL_UP || directionInput == VERTICAL_DOWN){
                        charObj.A(printedHeight, 0, true, false);
                        skipWidth = charWidth;
                        skipWidth_debug = skipWidth; //DEBUGGING PURPOSES
                        printedHeight ++;
                    }
                    
                    
                } else{
                    printedHeight = 0;
                    cout << " ";
                    notFinishPrinting = false;
                    notFinishPrinting_debug = notFinishPrinting; //DEBUGGING PURPOSES
                }
                
            } else{ // if not match x && y value, just print blank space
                if (skipWidth <= charWidth && skipWidth >0){
                    skipWidth--;
                } else{
                    cout << " ";
                }
                
            }
            
            if (c == width - 1){ // MARK: print * when width - 1 = 39
                cout << "*" ;
            }
            
        }
        cout << endl;
        
    }
    
    for(int i = 0; i < width + 1; i++ ){ // render bottom width
        cout << "-";
    }
    cout << endl;
    
    cout << endl << endl;
    cout << "******************* DEBUG *******************" << endl;
    cout << "Current X = " << x << endl;
    cout << "Current Y = " << y+1 << endl;
    cout << "skipWidth = " << skipWidth_debug << endl;
    cout << "charWidth = " << charWidth << endl;
    cout << "notFinishPrinting = " << notFinishPrinting << endl;
    cout << "printedHeight = " << printedHeight << endl;
    cout << "printedWidth = " << printedWidth << endl;
    cout << "remainingSpacesX = " << remainingSpacesX << endl;
    cout << "******************* DEBUG *******************" << endl;
    
}

