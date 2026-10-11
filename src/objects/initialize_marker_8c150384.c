typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Source {
    char unknown0[0x2c];
    short column;
    short row;
} Source;
typedef struct Marker {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[2];
    short size;
    short kind;
    char unknown22[0xa];
    short column;
    short row;
    short variant;
    char unknown32[0xa];
    float x;
    float height;
    float z;
    char unknown48[0x3c];
    int state;
} Marker;
extern Vector3 marker_origin;
extern void initialize_actor_mode_state(Marker *);
extern void place_marker_8c15042c(Marker *);
Marker *initialize_marker_8c150384(Marker *o, Source *source, short kind, short variant)
{
    Marker **self = &o;
    (void)self;
    initialize_actor_mode_state(o);
    o->dispatch = (void *)0x8c26e688;
    o->tag = *(int *)0x8c3158e4;
    o->size = 0x3ac;
    o->kind = kind;
    o->variant = variant;
    o->state = 0;
    o->column = source->column;
    o->row = source->row;
    o->height = 80.0f;
    o->x = marker_origin.x;
    o->z = marker_origin.z;
    place_marker_8c15042c(o);
    return o;
}
