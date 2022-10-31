#include <stdio.h>
#include "reverse.h"

void reverse(string str)
{
    reverse(str.substr(1));
    cout << str[0];
}