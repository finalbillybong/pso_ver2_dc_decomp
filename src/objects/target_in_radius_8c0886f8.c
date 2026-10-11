extern void *lookup_low_id(int);
extern float distance_xz(void *, void *);

void *target_in_radius_8c0886f8(char *o, float radius)
{
    char *target = lookup_low_id(*(int *)0x8c418248);
    if (target && radius * radius > distance_xz(o + 0x3c, target + 0x3c)) return target;
    return 0;
}
