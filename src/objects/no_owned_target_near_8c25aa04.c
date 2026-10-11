extern void *lookup_low_id(int);
extern float distance_xz(void *, void *);

int no_owned_target_near_8c25aa04(char *o)
{
    int result = 1;
    int i;
    int owner = 0x37c;
    for (i = 0; i < 4; i++) {
        char *target = lookup_low_id(i);
        if (target) {
            if (*(int *)(target + owner) != *(int *)0x8c44be04 || distance_xz(target + 0x3c, o + 0x3c) > *(float *)(o + 0xe4) * *(float *)(o + 0xe4)) result = 0;
        }
    }
    return result;
}
