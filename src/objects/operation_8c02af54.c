typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
};
extern int object_blocked(void *);
extern int create_effect(void *, int, int);
extern void bind_id(void *, unsigned short);
extern int actor_matches_current_mode(void *);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c02af54(Object *o)
{
    int t1;
    int t2;
    int t3;
    t1 = object_blocked((void *)o);
    if (t1 == 0) {
        t2 = create_effect((void *)(((char *)o + 0x324)), 0x1af, 0x10);
        if (t2 != 0) {
            bind_id((void *)t2, (unsigned short)(o->f20));
        }
    }
    t3 = actor_matches_current_mode((void *)o);
    if (t3 != 0) {
        call_8c05fbf8(0x40008, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
