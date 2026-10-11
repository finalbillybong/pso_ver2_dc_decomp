typedef struct Entry { char unknown0[0x14]; float height; } Entry;
typedef struct Marker {
    char unknown0[0x30];
    Entry **entries;
    int flags;
    char unknown38[0xc];
    float height;
    char unknown48[0x10];
    int state;
    char unknown5c[0x24];
    volatile unsigned short markers;
    char unknown82[2];
    short entry;
} Marker;
void raise_marker_8c1cd2f4(Marker *o)
{
    if (!((o->markers & 0xffff) & 0x20)) {
        o->markers = (o->markers & 0xffff) | 0x20;
        o->height = (*(Entry **)((char *)o->entries + (o->entry << 2)))->height + 26.0f;
        if (o->flags & 0x40) o->height += 2.0f;
        o->state = 3;
    }
}
