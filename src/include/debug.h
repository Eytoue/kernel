/* copyright Lin Chenjun
* All rights reserved
*/

#ifndef __DEBUG_H_
#define __DEBUG_H_

void panic_spin(const char* file,int line,conat char* func,const char* condition);

#ifndef NDEBUG
    #define PANIC(...) panic_spin(__FILE__,__LINE__,__func__,_VA_ARGS__)
    #define ASSRET(CONDITION)          \
                if(CONDITION)          \
                {                      \
                                       \
                }                      \
                else                   \
                {                      \
                    PANIC(#CONDITION); \
                }
#else
    #define ASSRET(CONDITION) ((void)0)
#endif /* NDEBUG */
#endif /* __DEBUG_H_ */
