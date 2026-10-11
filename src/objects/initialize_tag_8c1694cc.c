typedef struct Tag {
    int tag;
    unsigned short flags;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[2];
    short size;
    int value;
} Tag;
extern void initialize_hierarchy_node(Tag *, void *);
Tag *initialize_tag_8c1694cc(Tag *o, void *parent)
{
    initialize_hierarchy_node(o, parent);
    o->dispatch = (void *)0x8c2701cc;
    o->tag = *(int *)0x8c317ab0;
    o->size = 0x24;
    o->value = 0;
    o->flags |= 0x10;
    return o;
}
