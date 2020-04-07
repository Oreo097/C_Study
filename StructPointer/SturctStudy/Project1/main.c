#include <stdio.h>


int main(char argv)
{
	char words = 'a';
	char* pointer = &words;
	for (int i = 0; i < 20; i++)
	{
		//char a = pointer;
		printf_s(words);
		pointer++;
	}

}
/*int i = 0;
struct helloworld
{
	char words[20];
	char* pointer;
}helloworld;
helloworld.words[20] = "helloworld";
helloworld.pointer = &helloworld.words;
for (; i < 20; i++)
{
	printf(*helloworld.pointer);
}
getchar();*/
