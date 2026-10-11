extern void *lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);

int target_in_radius_8c113490(char *o)
{
    char *target = lookup_low_id(*(int *)0x8c418248);
    if (target && *(int *)(target + 0x37c) == *(int *)0x8c44be04) {
        float distance = squared_distance_xyz(target + 0x3c, o + 0x3c);
        float radius = *(float *)(o + 0x104);
        if (radius * radius > distance) return 1;
    }
    return 0;
}
