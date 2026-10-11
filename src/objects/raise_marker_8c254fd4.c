typedef struct Entry { char unknown0[0x14]; float height; } Entry;
typedef struct Marker {
    char unknown0[0x30];
    Entry **entries;
    int flags;
    char unknown38[0xc];
    float height;
    char unknown48[0x10];
    int state;
    char unknown5c[0x28];
    short entry;
    char unknown86[0xa];
    volatile unsigned short markers;
} Marker;
void raise_marker_8c254fd4(Marker *o)
{
    if (!((o->markers & 0xffff) & 0x01)) {
        o->markers = (o->markers & 0xffff) | 0x01;
        o->height = (*(Entry **)((char *)o->entries + (o->entry << 2)))->height + 26.0f;
        if (o->flags & 0x40) o->height += 2.0f;
        o->state = 3;
    }
}
