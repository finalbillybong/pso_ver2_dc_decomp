typedef struct Block { int words[19]; } Block;
typedef struct Node {
    int tag;
    short flags;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[2];
    short size;
    float width;
    float height;
    Block data;
    int unknown74;
} Node;
extern void initialize_hierarchy_node(Node *, void *);
extern int validate_node_8c087e78(Node *);
Node *initialize_panel_8c087d8c(Node *o, void *parent, Block *data)
{
    Node **self = &o;
    (void)self;
    initialize_hierarchy_node(o, parent);
    o->dispatch = (void *)0x8c264f98;
    o->tag = *(int *)0x8c2ffed8;
    o->size = 0x78;
    o->unknown74 = 0;
    o->data = *data;
    o->width = 200.0f;
    o->height = 40.0f;
    if (!validate_node_8c087e78(o)) o->flags |= 1;
    return o;
}
