#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    for (int i = 10; i > 0; i--)
    {
        printf("\a% 5d", i); // ベル文字
        fflush(stdout);
        sleep(1);
        printf("\r");  // 復帰文字
    }
    printf("\n"); // 行送り
    return 0;
}

// command lineで. \eはANSIエスケープシーケンス
// printf "\e[31mHello, %s.\n\e[0m" Daisuke 
// https://qiita.com/PruneMazui/items/8a023347772620025ad6
// https://www.mm2d.net/main/prog/c/console-02.html