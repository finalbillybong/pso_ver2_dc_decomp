typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x25e];
    int f350;
    char unknown354[0x1b4];
    int f508;
    char unknown50c[0x7c];
    float f588;
    char unknown58c[0x254];
    int f7e0;
};
extern int actor_matches_current_mode(void *);
extern void call_8c1e8e60(Object *, int, int);
extern int operation_02c350(void *);
extern void call_8c1ef2fc(Object *);
extern int allocate_block(void *, unsigned int);
extern void initialize_color_blue(int, void *, void *);
extern void spawn_actor_child_if_allowed(void *);
void operation_8c1ef548(Object *o)
{
    int v1;
    int v2;
    int t1;
    int t2;
    int t3;
    t1 = actor_matches_current_mode((void *)o);
    if (t1 != 0) {
        o->f350 &= -5;
        if (((o->f34 & 0x800)) == 0) {
            call_8c1e8e60(o, 1, 0);
            return;
        }
        call_8c1e8e60(o, 0xf, 0);
        v1 = (int)(((o->f7e0 & 1)) != 0);
        if (v1 != 0) {
            t2 = operation_02c350((void *)o);
            o->ff0 = *(short *)((char *)0x8c2e7432 + ((short)t2 << 1));
        } else {
            call_8c1ef2fc(o);
            v2 = (int)(o->f20 == *(int *)0x8c418248);
            if (v2 != 0) {
                t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
                if (t3 != 0) {
                    initialize_color_blue(t3, *(S_g8c44be84 **)0x8c44be84, (void *)0x8c029528);
                }
                o->f508 = t3;
            }
        }
        o->f588 = 1.0f;
        spawn_actor_child_if_allowed((void *)o);
    }
}
