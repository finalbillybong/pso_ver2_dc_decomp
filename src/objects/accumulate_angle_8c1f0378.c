typedef struct Actor {
    char unknown0[0x20];
    unsigned short id;
    char unknown22[0x2b2];
    int total;
    char unknown2d8[0x78];
    int flags;
    char unknown354[0x1c];
    int delta;
    char unknown374[0x258];
    char record[4];
} Actor;
extern int check_angle_sample_record(void *);
void accumulate_angle_8c1f0378(Actor *o)
{
    int local;
    if (o->flags & 0x400) return;
    local = o->id == *(int *)0x8c418248;
    if (!local) return;
    if (check_angle_sample_record(o->record)) o->total += o->delta;
}
