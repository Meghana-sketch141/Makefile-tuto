#include <bits/stdc++.h>
#include "function.h"
using namespace std;

// Recursive factorial program
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}
