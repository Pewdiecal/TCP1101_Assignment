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
int directionInput = 3;
void render();
void coordinateManager();


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
    
    int B(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return widthSize-1;
    }
    
    int C(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int D(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int E(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int F(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
        
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
    
    int G(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
        
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
    
    int H(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int I(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int J(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int K(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int L(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int M(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int N(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int O(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int P(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int Q(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int R(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int S(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int T(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int U(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int V(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int W(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int X(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int Y(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int Z(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _0(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _1(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _2(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _3(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _4(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _5(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _6(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _7(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _8(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
    
    int _9(int seq_vertical, int seq_horizontal, bool print, bool isHorizontal){
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
};


int main(){
    x=35;
    y=5;
    while (true){
        render();
        coordinateManager();
        usleep(1000000);
    }
   
}

void coordinateManager(){
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
    if (x > width-1){
        x = 1;
    } else if (y < 0 || y >height){
        if(y<0){
            y = height-1;
        } else if(y > height){
            y = 1;
        }
        
    }
}

void render(){
    charArts charObj;
    system("clear"); // MARK: check OS here
    static int skipWidth = 0; // MARK: spaces needs to be deleted
    int charWidth = charObj.W(0, 0, false, false); // MARK: total width of char
    static bool notFinishPrinting = false;
    static bool isWrapAroundEnabled = false; // MARK: enable or disable wrap around effect for X axis
    static int printedHeight = 0;
    static int printedWidth = 0;
    int remainingSpacesX = (width-1) - x; // MARK: remaining printing spaces on X axis based on anchor dot
    int skipWidth_debug = 0; // MARK: DEBUGGING PURPOSES
    bool notFinishPrinting_debug;
    
    for(int i = 0; i < width + 1; i++ ){ // MARK: render top width
        cout << "-";
    }
    cout << endl;
    
    if(((height-1)-y) <= 10){ // MARK: if char cannot finish print on 1st time start, print the remaining char at first. (VERTICAL USE)
        notFinishPrinting = true;
        printedHeight = (height-y); // MARK: will be = 11 when y = 9, Thus, cause if (printedHeight <= 10 && notFinishPrinting) return false.
    }
    
    for(int k = 0; k < height; k++){ // MARK: render height
        for(int c = 0; c < width; c++){ // MARK: render horizontal space
            
            if (c==0){ // MARK: if is 1st dot print * to build border.
                cout << "*" ;
                
            } else if(((k==y && c==1 && remainingSpacesX < charWidth && isWrapAroundEnabled) || (k==y && c==x) || (c==x && notFinishPrinting) || (c==1 && notFinishPrinting && remainingSpacesX < charWidth && isWrapAroundEnabled))){ // MARK: if not 1st dot, check if the current coordinate match x && y value to print char.
                
                notFinishPrinting = true; // BUG: = true when x==40;
                notFinishPrinting_debug = notFinishPrinting; // MARK: DEBUGGING PURPOSES
                if (printedHeight <= 10 && notFinishPrinting){
                    notFinishPrinting_debug = notFinishPrinting; // MARK: DEBUGGING PURPOSES
                        
                    if((remainingSpacesX < charWidth)){ // MARK: when x < 9
                       if(c==1 && remainingSpacesX >=0 && isWrapAroundEnabled){
                            int test = 0; // MARK: NEED TO BE OPTIMIZED, cause skipWidth did not start count from 0
                            for(int contPrintWidth = remainingSpacesX+1; contPrintWidth <= charWidth; contPrintWidth++){
                                charObj.W(printedHeight, contPrintWidth, true, true);
                                
                                if(test !=0){ // MARK: to make skipWidth start counting from 0
                                    skipWidth++;
                                }
                                test++;
                            }
                            
                        }
                        if((k==y && c==x) || (c==x && notFinishPrinting)){
                            for(printedWidth = 0; printedWidth <= remainingSpacesX; printedWidth++){
                                charObj.W(printedHeight, printedWidth, true, true);
                                skipWidth = printedWidth;
                                
                            }
                        }
                        skipWidth_debug = skipWidth; // MARK: DEBUGGING PURPOSES
    
                    } else if(remainingSpacesX >= charWidth){ // MARK: when x >=9
                        charObj.W(printedHeight, 0, true, false);
                        skipWidth = charWidth;
                        skipWidth_debug = skipWidth; // MARK: DEBUGGING PURPOSES
                    }
                    
                    if((k==y && c==x) || (c==x && notFinishPrinting)){
                        printedHeight ++;
                    }
                    
                } else{
                    printedHeight = 0;
                    cout << " ";
                    notFinishPrinting = false;
                    notFinishPrinting_debug = notFinishPrinting; // MARK: DEBUGGING PURPOSES
                }
                
            } else{ // MARK: if not match x && y value, just print blank space
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
    
    for(int i = 0; i < width + 1; i++ ){ // MARK: render bottom width
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

