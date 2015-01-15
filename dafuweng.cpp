//先要知道人物面朝什么方向
int font;//0是面朝右侧，1是面朝左侧
do 
{
	if (font)
	{
		if (layer->tileGIDAt(Point(x-1,y))//如果Gid不得0才会前进,第一个if是判断面前是否有路
		{
			/*执行移动Point(x,y) moveby Point(x-1,y)*/
			break;
		}
	}
	else
	{
		if (layer->tileGIDAt(Point(x+1,y))//如果Gid不得0才会前进,第一个if是判断面前是否有路
		{
			/*执行移动Point(x,y) moveby Point(x+1,y)*/
			break;
		}
	}
	if (layer->tileGIDAt(Point(x,y+1));//获取当前坐标的GID)//如果Gid不得0才会前进
	{
		/*执行移动Point(x,y) moveby Point(x,y+1)*/

	}
	else if (layer->tileGIDAt(Point(x,y-1))//如果Gid不得0才会前进
	{
		/*执行移动Point(x,y) moveby Point(x,y-1)*/

	}
} while (0);

/*当走路函数结束后，执行玩家当前图块要执行的操作*/
/*简单工厂实现，传入参数Tag，执行相应的操作*/

class Operation
{
public:
	void GetResult()
	{
		/*获取*/
	}
protected:
private:
};