typedef struct Holder {
    char unknown0[0x8a];
    unsigned short target_id;
    char unknown8c[8];
    void *target;
} Holder;

extern void *lookup_low_id(int);
extern int hierarchy_is_active(void *);

int target_inactive_8c10ec8c(Holder *o)
{
    o->target = lookup_low_id(o->target_id & 0xffff);
    if (!o->target) return 1;
    return !hierarchy_is_active(o->target);
}
