///要了解字串與陣列的關係
#include <stdio.h>
int main()
{
    printf("請輸入10個英文字母,不能有再空格在裡面:\n");
    char line[11];
    scanf("%s", line);
    printf("這個字是:%s 裡面的字,分別是:\n");

    for(int i=0; i<11; i++){
        printf("第%d個字母: %c 對應的數字是: %d\n", i, line[i], line[i]);
    }
}
