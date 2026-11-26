#pragma once
#include<iostream>
using namespace std;
class point
{
private:
	int m_x;//横坐标
	int m_y;//纵坐标

public:
	//设置横坐标
	void setx(int x);
	
	//获取横坐标
	int getx();
	
	//设置纵坐标
	void sety(int y);
	
	//获取纵坐标
	int gety();
	
};

