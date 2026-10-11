extern void *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);

int target_within_range_8c185748(char *o, unsigned short id, float limit)
{
    char *target = lookup_low_id(id);
    if (!target) return 0;
    return limit > squared_distance_xz(target + 0x3c, o + 0x3c);
}
