extern void *lookup_low_id(int);
extern void request_resource_release(void *);

typedef struct Timer {
    int unknown0;
    short flags;
    char unknown6[0x1e];
    void *resource;
    int remaining;
} Timer;

void update_target_timer_8c2601a8(Timer *o)
{
    char *target = lookup_low_id(*(int *)0x8c418248);
    int active;
    if (!target || (*(int *)(target + 0x34) & 0x02000000)) {
        o->flags |= 1;
        return;
    }
    active = (*(int *)(target + 0x350) & 1) != 0;
    if (!active && o->remaining > 90) o->remaining = 90;
    if (--o->remaining >= 0) return;
    if (o->resource) {
        request_resource_release(o->resource);
        o->resource = 0;
    }
    o->flags |= 1;
}
