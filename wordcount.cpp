#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	int cnt;
	char ch;
	FILE* fp;
	fp = fopen(argv[2], "r");
	cnt = 0;
	if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "-C") == 0)
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);//��ǰfp��ָ���ַ�����ch
			cnt++;//�ַ�����++
		}
		printf("�ַ��� : %d\n", cnt);
	}
	else if (strcmp(argv[1], "-w") == 0 || strcmp(argv[1], "-W") == 0)
	{
		int c = 1;
		while (!feof(fp))
		{
			ch = fgetc(fp);//��ǰfp��ָ���ַ�����ch
			if (ch == ' ' || ch == ',')//�ж����������fp��ָ���ַ�Ϊ���źͿո�
			{
				c++;
				//���������ַ����꣬chΪ�ı����һ���ַ�
			}
		}
		printf("������ : %d\n", c);
	}
	return 0;
}