#include <iostream>
#include <string>
using namespace std;

string notes[] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};

int getindex(string s)
{
    for (int i = 0; i < 12; i++)
    {
        if (notes[i] == s)
            return i;
    }
    return 0;
}

string check(int index1, int index2, int index3)
{
    int first_tones, second_tones, third_tones;

    if (index2 < index1)
    {
        first_tones = index2 + 12 - index1;
    }
    else
    {
        first_tones = index2 - index1;
    }
    if (index3 < index2)
    {
        second_tones = index3 + 12 - index2;
    }
    else
    {
        second_tones = index3 - index2;
    }

    if (first_tones == 4 && second_tones == 3)
        return "major";

    else if (first_tones == 3 && second_tones == 4)
        return "minor";

    else
        return "strange";
}

int main()
{
    int index1, index2, index3;

    string s1, s2, s3;
    string s[6];

    cin >> s1 >> s2 >> s3;

    index1 = getindex(s1);
    index2 = getindex(s2);
    index3 = getindex(s3);

    s[0] = check(index1, index2, index3);
    s[1] = check(index1, index3, index2);
    s[2] = check(index2, index1, index3);
    s[3] = check(index2, index3, index1);
    s[4] = check(index3, index1, index2);
    s[5] = check(index3, index2, index1);

    int i = 0;
    while (i < 6)
    {
        if (s[i] == "major" || s[i] == "minor")
        {
            cout << s[i] << endl;
            return 0;
        }
        i++;
    }

    cout << "strange" << endl;
    return 0;
}