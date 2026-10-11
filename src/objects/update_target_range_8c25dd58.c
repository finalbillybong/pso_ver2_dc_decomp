extern void *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);

void update_target_range_8c25dd58(char *o)
{
    char *target = lookup_low_id(*(int *)0x8c418248);
    if (target) {
        float distance = squared_distance_xz(target + 0x3c, o + 0x3c);
        if (*(float *)(o + 0xa0) > distance) *(int *)(o + 0xa4) = 1;
        else *(int *)(o + 0xa4) = 0;
    }
}
