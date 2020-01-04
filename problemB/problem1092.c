//
// Created by forgot on 2019-08-04.
//
/*1092 最好吃的月饼 (20 point(s))*/
/*月饼是久负盛名的中国传统糕点之一，自唐朝以来，已经发展出几百品种。

mk.jpg

若想评比出一种“最好吃”的月饼，那势必在吃货界引发一场腥风血雨…… 在这里我们用数字说话，给出全国各地各种月饼的销量，要求你从中找出销量冠军，认定为最好吃的月饼。

输入格式：
输入首先给出两个正整数 N（≤1000）和 M（≤100），分别为月饼的种类数（于是默认月饼种类从 1 到 N 编号）和参与统计的城市数量。

接下来 M 行，每行给出 N 个非负整数（均不超过 1 百万），其中第 i 个整数为第 i 种月饼的销量（块）。数字间以空格分隔。

输出格式：
在第一行中输出最大销量，第二行输出销量最大的月饼的种类编号。如果冠军不唯一，则按编号递增顺序输出并列冠军。数字间以 1 个空格分隔，行首尾不得有多余空格。

输入样例：
5 3
1001 992 0 233 6
8 0 2018 0 2008
36 18 0 1024 4
输出样例：
2018
3 5*/

#include <stdio.h>

//int main() {
//    int N, M;
//    scanf("%d %d", &N, &M);
//    int typeSale[N];
//    for (int m = 0; m < N; m++) {
//        typeSale[m] = 0;
//    }
//
////    计算某种类的销量和
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            int sale;
//            scanf("%d", &sale);
//            typeSale[j] += sale;
//        }
//    }
////取出最大销量
//    int maxSale = 0;
//    for (int k = 0; k < N; k++) {
//        if (typeSale[k] > maxSale) {
//            maxSale = typeSale[k];
//        }
//    }
//    printf("%d\n", maxSale);
//    int count = 0;
////    打印最大销量的排序
//    for (int k = 0; k < N; k++) {
//        if (typeSale[k] == maxSale) {
//            if (count) {
//                printf(" ");
//            }
//
//            printf("%d", k + 1);
//            count++;
//        }
//    }
//
//    return 0;
//}
