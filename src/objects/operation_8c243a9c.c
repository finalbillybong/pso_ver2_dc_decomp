typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    int f30;
};
extern int lookup_low_id(int);
extern void operation_8c026700(int, int);
extern void call_8c09ecc0(void);
extern void call_8c192aa8(void);
extern void operation_8c1734e8(void *);
extern void clear_global_render_resources(void);
extern void start_reverse_fade(void *);
extern void call_8c2445c0(void);
extern void start_fade_state(void *);
void operation_8c243a9c(Object *o)
{
    int t1;
    if (o->f24 != 0) {
        if (o->f24 == 1) {
            goto L_8c243ad6;
        }
        if (o->f24 == 2) {
            goto L_8c243b14;
        }
        if (o->f24 == 3) {
            return;
        }
        return;
    }
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        operation_8c026700(t1, -1);
    }
    o->f30 = 0xf;
    o->f24 = 1;
L_8c243ad6:;
    if (!(--o->f30 > 0)) {
        call_8c09ecc0();
        call_8c192aa8();
        if (*(int *)0x8c4db520 != 0) {
            operation_8c1734e8((void *)(*(S_g8c4db520 **)0x8c4db520));
        }
        clear_global_render_resources();
        *(int *)0x8c510cc0 = 0;
        start_reverse_fade((void *)((void *)0x8c243b6c));
        o->f24 = 2;
        return;
L_8c243b14:;
        if (*(int *)0x8c510cc0 != 0) {
            call_8c2445c0();
            start_fade_state((void *)((void *)0x8c243b88));
            o->f24 = 3;
        }
    }
}
