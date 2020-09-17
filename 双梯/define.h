#ifndef	_DEFINE_H
#define	_DEFINE_H
#include"SYS.h"
#define factV           D[101]      //电梯实际位置（整数滞后） 数值
#define targetV        D[121]      //电梯目标位置 数值
#define factP           D[10]       //电梯实际位置 楼层
#define remainderP    D[14]       //电梯实际位置余数 用于确定是否在楼层间
#define insideV         D[141]      //电梯内呼位置 数值
#define P                 D[12]       //factP+1  
int buf[5];                              //内呼楼层分离储存数组
#endif

    