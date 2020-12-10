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
			ch = fgetc(fp);//当前fp所指的字符赋给ch
			cnt++;//字符计数++
		}
		printf("字符数 : %d\n", cnt);
	}
	else if (strcmp(argv[1], "-w") == 0 || strcmp(argv[1], "-W") == 0)
	{
		int c = 1;
		while (!feof(fp))
		{
			ch = fgetc(fp);//当前fp所指的字符赋给ch
			if (ch == ' ' || ch == ',')//判断条件：如果fp所指的字符为逗号和空格
			{
				c++;
				//上面所有字符读完，ch为文本最后一个字符
			}
		}
		printf("单词数 : %d\n", c);
	}
	return 0;
}