int main()
{
    int x;
    int y=10;
    int a[10];
    if (y && y >= 0 && y + 2 < (int)(sizeof(a) / sizeof(a[0])))
    {
        x=a[y+2];
    }
    return 0;
}

