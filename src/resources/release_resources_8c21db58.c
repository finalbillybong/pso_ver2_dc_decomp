typedef struct Holder { char unknown0[0x44]; void *fourth; void *third; void *second; void *first; } Holder;
extern void request_resource_release(void *);
void release_resources_8c21db58(Holder *o)
{
    if (o->first) {
        request_resource_release(o->first);
        o->first = 0;
    }
    if (o->second) {
        request_resource_release(o->second);
        o->second = 0;
    }
    if (o->third) {
        request_resource_release(o->third);
        o->third = 0;
    }
    if (o->fourth) {
        request_resource_release(o->fourth);
        o->fourth = 0;
    }
}
