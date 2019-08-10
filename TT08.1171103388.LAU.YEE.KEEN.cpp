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
#include <unistd.h>
using namespace std;

const int width = 40;
const int height = 20;
int x, y;
enum direction {HORIZONTAL, VERTICAL};
int directionInput = 0;

class charArts {
public:
    
    int A(int seq_v, int seq_h, bool print, bool isHorizontal){
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
                cout << array[seq_v].at(seq_h);
            }else{
                cout << array[seq_v];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return widthSize;
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
                            "=  =====  =",
                            "==       ==",
                            "===========" };

    }
};


void render(){
    charArts charObj;
    system("clear"); // check OS here
    static int skipWidth = 0;
    static bool notFinishPrinting = false;
    static int printedHeight = 0;
    static int remainingWidth = 0;
    int remainingSpacesX = (width-1) - x;
    
    for(int i = 0; i < width + 1; i++ ){ // render top width
        cout << "-";
    }
    cout << endl;
    
    if(((height-1)-y) <= 10){ //if char cannot finish print on 1st time start, print the remaining char at first. (VERTICAL USE)
        notFinishPrinting = true;
        printedHeight = (height-y); //will be = 11 when y = 9, Thus, cause if (printedHeight <= 10 && notFinishPrinting) return false.
    }
    
    for(int k = 0; k < height; k++){ // render height
        
        for(int c = 0; c < width; c++){ // render horizontal space
            
         /**   if(((width-1)-x) <= (charObj.A(printedHeight, 0, false, false)-1)){
                notFinishPrinting = true;
                
            }**/
            
            if (c==0){ // if is 1st dot print * to build border.
                cout << "*" ;
                
            } else if((k==y && c==x) || (c==x && notFinishPrinting)){ // if not 1st dot, check if the current coordinate match x && y value to print char.
                
                notFinishPrinting = true;
                if (printedHeight <= 10 && notFinishPrinting){
                    if(directionInput == HORIZONTAL){
                        
                        if(remainingSpacesX <= (charObj.A(printedHeight, 0, false, false)-1)){
                            for(int printedWidth = 0; printedWidth <= remainingSpacesX; printedWidth++){
                                charObj.A(printedHeight, printedWidth, true, true);
                            }
                            skipWidth = remainingSpacesX;
                        }else if(remainingSpacesX >= (charObj.A(printedHeight, 0, false, false)-1)){
                            charObj.A(printedHeight, 0, true, false);
                            skipWidth = (charObj.A(printedHeight, 0, false, false)-1);
                        }
                        printedHeight ++;
                        
                    } else if(directionInput == VERTICAL){
                        charObj.A(printedHeight, 0, true, false);
                        skipWidth = (charObj.A(printedHeight, 0, false, false)-1);
                        printedHeight ++;
                    }
                } else{
                    printedHeight = 0;
                    cout << " ";
                    notFinishPrinting = false;
                }
                
            } else{ // if not match x && y value, just print blank space
                if (skipWidth <= (charObj.A(0, 0, false, false)-1) && skipWidth >0){
                    skipWidth--;
                } else{
                    cout << " ";
                }
                
            }
            
            if (c == width - 1){
                cout << "*" ;
            }
            
        }
        cout << endl;
        
    }
    
    for(int i = 0; i < width + 1; i++ ){ // render bottom width
        cout << "-";
    }
    cout << endl;
    
}
int main(){
    x = 20; //BUG when x++ = 29
    y = 5;
    while (true){
         //sleep(10);
        if (x > 39){
            x = 2;
            //y = height-1;
            //test = false;
        }else {
            //y--;
            x++;
        }
        render();
        usleep(100000);
    }
   
}
