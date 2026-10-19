typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x24];
    Arg0_24 *f24;
};
extern void restore_child_blend(void);
extern void visit_hierarchy_10(void *);
void operation_8c227c8c(Object *o)
{
    restore_child_blend();
    if (o->f24 != 0) {
        visit_hierarchy_10((void *)(o->f24));
    }
}
