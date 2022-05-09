/*
One fine October day a mathematics teacher Vasily Petrov went to a class and saw there n pupils who sat at the  desks, two people at each desk. Vasily quickly realized that number n is even. Like all true mathematicians, Vasily has all students numbered from 1 to n.

But Vasily Petrov did not like the way the children were seated at the desks. According to him, the students whose numbers differ by 1, can not sit together, as they talk to each other all the time, distract others and misbehave.

On the other hand, if a righthanded student sits at the left end of the desk and a lefthanded student sits at the right end of the desk, they hit elbows all the time and distract each other. In other cases, the students who sit at the same desk, do not interfere with each other.

Vasily knows very well which students are lefthanders and which ones are righthanders, and he asks you to come up with any order that meets these two uncomplicated conditions (students do not talk to each other and do not bump their elbows). It is guaranteed that the input is such that at least one way to seat the students always exists.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int i, j, k;
    int n, x;

    scanf("%d", &n);
    char s[n + 1];

    cin >> s;

    j = n / 2;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == 'L' && s[j] == 'R')
            printf("%d %d\n", i + 1, j + 1);
        else
            printf("%d %d\n", j + 1, i + 1);

        j++;
    }

    return 0;
}