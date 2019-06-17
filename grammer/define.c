#include <stdio.h>

/**
 * #define 名字 替换文本
 *
 * 该 名 字 既 没 有 用 引 号 括 起 来 ，
 * 也 不 是 其他名字的一部分，都用所对应的替换文本替换。
 *
 * 就是定义一个常量了,做的是简单的文本替换。
 *
 * 要么是一个数字，要么是一个变量名
 */
#define PI 3.14
#define AliasOfA a

int main() {
    double a = PI;
    double c = AliasOfA;
    printf("a: %f\n", a);
    return 0;
}