//��Ҫ֪�������泯ʲô����
int font;//0���泯�Ҳ࣬1���泯���
do 
{
	if (font)
	{
		if (layer->tileGIDAt(Point(x-1,y))//���Gid����0�Ż�ǰ��,��һ��if���ж���ǰ�Ƿ���·
		{
			/*ִ���ƶ�Point(x,y) moveby Point(x-1,y)*/
			break;
		}
	}
	else
	{
		if (layer->tileGIDAt(Point(x+1,y))//���Gid����0�Ż�ǰ��,��һ��if���ж���ǰ�Ƿ���·
		{
			/*ִ���ƶ�Point(x,y) moveby Point(x+1,y)*/
			break;
		}
	}
	if (layer->tileGIDAt(Point(x,y+1));//��ȡ��ǰ�����GID)//���Gid����0�Ż�ǰ��
	{
		/*ִ���ƶ�Point(x,y) moveby Point(x,y+1)*/

	}
	else if (layer->tileGIDAt(Point(x,y-1))//���Gid����0�Ż�ǰ��
	{
		/*ִ���ƶ�Point(x,y) moveby Point(x,y-1)*/

	}
} while (0);

/*����·����������ִ����ҵ�ǰͼ��Ҫִ�еĲ���*/
/*�򵥹���ʵ�֣��������Tag��ִ����Ӧ�Ĳ���*/

class Operation
{
public:
	void GetResult()
	{
		/*��ȡ*/
	}
protected:
private:
};