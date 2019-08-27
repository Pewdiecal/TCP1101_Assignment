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
#include <cctype>
#ifdef __APPLE__
#include <unistd.h>
#endif
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

const int width = 41;
const int height = 20;
int x, y;
bool isPaused = false;
enum direction {HORIZONTAL_LEFT, HORIZONTAL_RIGHT, VERTICAL_UP, VERTICAL_DOWN};
int directionInput;
int timeSteps = -1;
int scrollingSpeed = 1;
void render();
void coordinateManager(bool pauseStats);
string charList;
string *charStager();
void inputHandler();
void delay();
void clear();


class charArts {
public:
    
    string *A(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *B(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *C(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *D(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *E(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *F(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
        
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *G(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
        
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *H(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *I(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *J(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
        
    }
    
    string *K(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *L(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *M(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
        
    }
    
    string *N(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *O(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *P(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *Q(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *R(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
        
    }
    
    string *S(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *T(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *U(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *V(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *W(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
        
    }
    
    string *X(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
        
    }
    
    string *Y(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *Z(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_0(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_1(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_2(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_3(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_4(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_5(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_6(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *_7(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_8(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
    }
    
    string *_9(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
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
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
    
    string *_SPACE(int seq_vertical = 0, int seq_horizontal = 0, bool print = false, bool isHorizontal = false){
        static string array[11];
        
        for(int i=0; i < 11; i++){
            
            array[i] = "   ";
        }
        
        if(print){
            
            if(isHorizontal){
                cout << array[seq_vertical].at(seq_horizontal);
            }else{
                cout << array[seq_vertical];
            }
            
        }
        
        int widthSize = array[0].size(); //widthSize start counting from 1.
        return array;
        
    }
};


int main(){
    inputHandler();
    charStager();
    bool stopNow = false;
    while (!stopNow){
        render();
        coordinateManager(isPaused);
        if(timeSteps >=0){
            if(timeSteps==0){
                stopNow = true;
            }
            timeSteps--;
        }
        delay();
    }
    
}

void coordinateManager(bool pauseStats){
    if(!pauseStats){
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
    }
    if (x > width-1 || x < 1){
        if(x<1){
            isPaused = true;
        } else if(x > width-1){
            x=1;
        }
        
    } else if (y < 0 || y >height){
        if(y<0){
            y = height-1;
        } else if(y > height){
            y = 1;
        }
        
    }
}

void inputHandler(){

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

    cout << "0.HORIZONTAL_LEFT, 1.HORIZONTAL_RIGHT, 2.VERTICAL_UP, 3.VERTICAL_DOWN, 4.STATIC :";
    cin >> directionInput;
    cout << endl;
    
    if(directionInput <= 3){
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

string *charStager(){
    charArts charObj;
    static bool isCodeExecuted = false;
    static string stagedChar[11];
    string *ptr;
    for (int i = 0; i < charList.size(); i++) {
        if(toupper(charList[i])=='A'){
            ptr = charObj.A();
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
            ptr = charObj._SPACE();
        } else if(toupper(charList[i])=='N'){
            ptr = charObj.N();
        }
        if(!isCodeExecuted){
            for (int e = 0; e < 11; e++) {
                stagedChar[e].append(*(ptr+e));
                
            }
        }
    }
    isCodeExecuted = true;
    return stagedChar;
}

void delay(){
    int microSec;
    switch (scrollingSpeed) {
        case 1:
            microSec = 1000000;
            break;
        case 2:
            microSec = 500000;
            break;
        case 3:
            microSec = 100000;
            break;
        case 4:
            microSec = 50000;
            break;
        case 5:
            microSec = 10000;
            break;
        case 6:
            microSec = 5000;
            break;
        case 7:
            microSec = 1000;
            break;
        case 8:
            microSec = 500;
            break;
        case 9:
            microSec = 100;
            break;
        case 10:
            microSec = 10;
            break;
        default:
            break;
    }
    #ifdef __APPLE__
        usleep(microSec);
    #endif
    #ifdef _WIN32
        Sleep(microSec*1000);
    #endif
}

void clear(){
    #ifdef __APPLE__
    system("clear");
    #endif
    #ifdef _WIN32
    system("cls");
    #endif
}

void render(){
    charArts charObj;
    string *ptr_stagedChar = charStager(); // store the address of stagedChar array from charStager()
    clear(); // MARK: check OS here
    static int skipWidth = 0; // MARK: spaces needs to be deleted
    int charWidth = (*ptr_stagedChar).size()-1; // MARK: total width of char
    static bool notFinishPrinting = false;
    static bool isWrapAroundEnabled = false; // MARK: enable or disable wrap around effect for X axis
    static int printedHeight = 0;
    static int printedWidth = 0;
    const double percent = 50.0;
    double displayedPercentage = 0.00;
    int remainingSpacesX = (width-1) - x; // MARK: remaining printing spaces on X axis based on anchor dot
    int skipWidth_debug = 0; // MARK: DEBUGGING PURPOSES
    bool notFinishPrinting_debug;
    static int widthMinus = 1;
    static int widthAdd = width-2;
    static bool isRunning = false;
    for(int i = 0; i < width + 1; i++ ){ // MARK: render top width
        cout << "-";
    }
    cout << endl;
    
    if(((height-1)-y) <= 10){ // MARK: if char cannot finish print on 1st time start, print the remaining char at first. (VERTICAL USE)
        notFinishPrinting = true;
        printedHeight = (height-y); // MARK: will be = 11 when y = 9, Thus, cause if (printedHeight <= 10 && notFinishPrinting) return false.
    }
    if((charWidth > width) && !isRunning){
        widthAdd = width-1;
        isRunning = true;
    }else if((charWidth < width) && !isRunning){
        widthAdd = charWidth;
        isRunning = true;
    }
    
    for(int k = 0; k < height; k++){ // MARK: render height
        for(int c = 0; c < width; c++){ // MARK: render horizontal space
            if (c==0){ // MARK: if is 1st dot print * to build border.
                cout << "*" ;
                
            } else if(((k==y && c==1 && remainingSpacesX < charWidth && isWrapAroundEnabled) || (k==y && c==x) || (c==x && notFinishPrinting) || (c==1 && notFinishPrinting && remainingSpacesX < charWidth && isWrapAroundEnabled) || (k==y && isPaused && c==1) || (isPaused && c==1 && notFinishPrinting) )){ // MARK: if not 1st dot, check if the current coordinate match x && y value to print char.
                
                notFinishPrinting = true; // BUG: = true when x==40;
                notFinishPrinting_debug = notFinishPrinting; // MARK: DEBUGGING PURPOSES
                if (printedHeight <= 10 && notFinishPrinting){
                    notFinishPrinting_debug = notFinishPrinting; // MARK: DEBUGGING PURPOSES
                    displayedPercentage = (static_cast<double>(printedWidth)/static_cast<double>(charWidth))*100.0;
                    if((remainingSpacesX < charWidth)){ // MARK: when x < 9
                       if(c==1 && remainingSpacesX >=0 && isWrapAroundEnabled){
                            int test = 0; // MARK: NEED TO BE OPTIMIZED, cause skipWidth did not start count from 0
                        
                            for(int contPrintWidth = remainingSpacesX+1; contPrintWidth <= charWidth; contPrintWidth++){
                                
                                cout << (*(ptr_stagedChar+printedHeight)).at(contPrintWidth);
                                
                                if(test !=0){ // MARK: to make skipWidth start counting from 0
                                    skipWidth++;
                                }
                                test++;
                            }
                            
                        }
                        
                        if(((k==y && c==x) || (c==x && notFinishPrinting)) && !isPaused){
                            for(printedWidth = 0; printedWidth <= remainingSpacesX; printedWidth++){
                                cout << (*(ptr_stagedChar+printedHeight)).at(printedWidth);
                                skipWidth = printedWidth;
                                
                            }
                        }
                        
                        skipWidth_debug = skipWidth; // MARK: DEBUGGING PURPOSES
    
                    } else if((remainingSpacesX >= charWidth) && !isPaused){ // MARK: when x >=9
                        displayedPercentage = (static_cast<double>(printedWidth)/static_cast<double>(charWidth))*100.0;
                        cout << *(ptr_stagedChar+printedHeight);
                        skipWidth = charWidth;
                        skipWidth_debug = skipWidth; // MARK: DEBUGGING PURPOSES
                        
                    }
                    
                    if(notFinishPrinting && isPaused && c==1){
                        for(int width=widthMinus; width <= widthAdd ; width++){
                            cout << (*(ptr_stagedChar+printedHeight)).at(width);
                            skipWidth = width-widthMinus;
                            
                        }
                        
                    }
                    
                    if((k==y && c==x) || (c==x && notFinishPrinting) || (isPaused && c==1 && notFinishPrinting) || (k==y && isPaused && c==1)){
                        printedHeight ++;
                    }
                    
                } else{
                    printedHeight = 0;
                    cout << " ";
                    notFinishPrinting = false;
                    if(isPaused && (widthMinus <= charWidth)){
                        widthMinus++;
                        if(y==1 || y==10){
                            cout << widthMinus;
                        }
                    }
                    if(isPaused && (widthMinus > charWidth)){
                        x=width;
                        isPaused = false;
                        isRunning = false;
                        widthMinus = 1;
                        
                    }
                    if(isPaused && (widthAdd < charWidth)){
                        widthAdd++;
                    }
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
    cout << "displayPercentage = " << displayedPercentage << endl;
    cout << "******************* DEBUG *******************" << endl;
}

