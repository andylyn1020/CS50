#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

        }
    }
}
