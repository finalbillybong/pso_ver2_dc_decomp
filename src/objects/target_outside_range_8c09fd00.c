extern void *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);

int target_outside_range_8c09fd00(char *o, float limit)
{
    char *target = lookup_low_id(*(int *)0x8c418248);
    if (!target) return 0;
    return !(limit > squared_distance_xz(target + 0x3c, o + 0x3c));
}
