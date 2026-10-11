extern void *lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);

int target_within_xyz_8c1a9f14(char *o, float limit)
{
    char *target = lookup_low_id(*(int *)0x8c418248);
    if (target && limit > squared_distance_xyz(target + 0x3c, o + 0x3c)) return 1;
    return 0;
}
