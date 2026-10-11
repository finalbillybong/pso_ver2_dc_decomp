typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Trigger {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[4];
    Vector3 position;
    int kind;
    int state;
    int timer;
    int target;
    int count;
    int first;
    int second;
} Trigger;
extern void initialize_hierarchy_node(Trigger *, void *);
Trigger *initialize_trigger_8c237254(Trigger *o, Vector3 *position, int kind, int target, void *parent)
{
    initialize_hierarchy_node(o, parent);
    o->dispatch = (void *)0x8c27904c;
    o->position = *position;
    o->kind = kind;
    o->state = 0;
    o->target = target;
    o->count = 0;
    o->timer = 0;
    o->first = 0;
    o->second = 0;
    return o;
}
