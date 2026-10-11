int clamp14_8c247860(int value)
{
    if ((signed char)value > 14) value = 14;
    return value;
}

void split14_8c247870(signed char value, signed char *head, signed char *rest)
{
    if (value <= 14) {
        *head = value;
        *rest = 0;
        return;
    }
    *head = 14;
    *rest = value - 14;
}
