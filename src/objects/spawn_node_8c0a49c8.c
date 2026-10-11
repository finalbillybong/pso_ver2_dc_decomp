typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Node {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[4];
    Vector3 start;
    Vector3 end;
    int owner;
} Node;
typedef struct Source {
    char unknown0[0x90];
    Vector3 start;
    Vector3 end;
} Source;
extern void *node_heap;
extern void *node_class;
extern Source *segment_source;
extern int segment_dirty;
extern void *allocate_block(void *, int);
extern void initialize_hierarchy_node(Node *, void *);
extern void set_mode_8c0a2144(int);
extern void link_segment_8c0a237c(Vector3 *, Vector3 *);
Node *spawn_node_8c0a49c8(int owner)
{
    Node *node;
    node = allocate_block(node_heap, 0x3c);
    if (node) {
        Node *self = node;
        Node **home = &self;
        (void)home;
        initialize_hierarchy_node(node, node_class);
        self->dispatch = (void *)0x8c265b18;
        self->owner = owner;
        set_mode_8c0a2144(6);
        self->start = segment_source->start;
        self->end = segment_source->end;
        link_segment_8c0a237c(&self->start, &self->end);
        segment_dirty = 0;
    }
    return node;
}
