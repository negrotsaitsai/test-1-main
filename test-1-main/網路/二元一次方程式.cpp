/**
 * Name: root.c
 * Subject: Calculate the root(s) of ax^2 + bx + c = 0
 * Author: Shiuh-Sheng Yu
 * Modified Date: 2004/11/02
 * Toolkit: gcc
 */

#include <stdio.h>
#include <math.h>
/**
 * Print out the root(s) of ax^2 + bx + c = 0
 */
void root(double a, double b, double c) {
    double tmp;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("有無限多解\n");
            } else {
                printf("無解\n");
            }
        } else {
            printf("有一解: %f\n", -c/b);
        }
    } else {
        tmp = b*b - 4*a*c;
        if (tmp > 0) { // 有兩解
            printf("有兩解: %f %f\n", (-b+sqrt(tmp))/a/2.0, (-b-sqrt(tmp))/a/2.0);
        } else if (tmp < 0) {
            printf("無解\n");
        } else {
            printf("有一解: %f\n", -b/a/2.0);
        }
    }
}

int main() {
    char buf[100];
    double a, b, c;
    for(gets(buf); buf[0] != 0; gets(buf)) {
        if (sscanf(buf, "%lf %lf %lf", &a, &b, &c) != 3) {
            printf("Please input three floats in a line.\n");
        } else {
            root(a, b, c);
        }
    }
}

