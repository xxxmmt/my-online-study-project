#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

//点类：

/*class point
{
private:
	int m_x;//横坐标
	int m_y;//纵坐标

public:
	//设置横坐标
	void setx(int x)
	{
		m_x = x;
	}
	//获取横坐标
	int getx()
	{
		return m_x;
	}
	//设置纵坐标
	void sety(int y)
	{
		m_y = y;
	}
	//获取纵坐标
	int gety()
	{
		return m_y;
	}
};
*/

//圆类：
/*class  circle
{
private:
	int m_r;//半径
	point m_center;

public:
	//设置半径
	void setr(int r)
	{
		m_r = r;
	}
	//获取半径
	int getr()
	{
		return m_r;
	}
	//设置圆心
	void setcenter(point center)
	{
		m_center = center;
	}
	//获取圆心
	point getcenter()
	{
		return m_center;
	}
};
*/

void isincircle(circle& c, point& p)
{
	//计算两点间距离平方
	int distance=(c.getcenter().getx() - p.getx())* (c.getcenter().getx() - p.getx()) + (c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
	//计算半径的平方
	int rdistance=c.getr()* c.getr();
	if (distance == rdistance)
	{
		cout << "点在圆上";
	}
	else if (distance > rdistance)
	{
		cout << "点在圆外";
	}
	else
	{
		cout << "点在圆内";
	}
}

int main(){
	//创建圆
	circle c;//圆
	c.setr(10);//半径
	point ccenter;
	ccenter.setx(10);//横坐标
	ccenter.sety(0);//纵坐标
	c.setcenter(ccenter);

	//创建点
	point p;
	p.setx(10);
	p.sety(10);

	//判断
	isincircle(c, p);

	return 0;
}