typedef struct Meter { char unknown0[0x39c]; int grade; char unknown3a0[4]; short current; short maximum; } Meter;
void classify_ratio_8c0bf654(Meter *o)
{
    int maximum = o->maximum;
    int current = o->current;
    if (maximum == current) o->grade = 0x101;
    else if ((float)maximum * 0.5f < (float)current) o->grade = 0x102;
    else if (current > 0) o->grade = 0x103;
    else o->grade = 0;
}
