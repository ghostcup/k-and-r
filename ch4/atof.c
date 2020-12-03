#include <stdio.h>
#include <ctype.h>

double atof(char s[]);

int main() {
    printf("%lf", atof("13.14"));
    return 0;
}

double atof(char s[]) { // string -> double
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); ++i)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (val = 0.0; isdigit(s[i]); ++i)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        i++;
    for (power = 10.0; isdigit(s[i]); ++i) {
        val = val + (s[i] - '0') / power;
        power *= 10.0;
    }

    return sign * val;
}