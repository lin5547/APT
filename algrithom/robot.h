/*-----------------------------------
	������ 2016.6.1
	���ֻ�������Ч��1�����ڻ��ε��ƣ�2��������λ���㡣
*/
#ifndef ROBOT_H
#define ROBOT_H
#include "Platform.h"

class RobotSound{

	
public:
	
	
	void Robot(const short *x, int Lx,short *y, const short type, const int fs,const double RMfre,const int outwin);
	void WhisperSound(const short *x,int Lx, short **y, int &Ly,const int p);
	RobotSound();
	~RobotSound();
};
#endif