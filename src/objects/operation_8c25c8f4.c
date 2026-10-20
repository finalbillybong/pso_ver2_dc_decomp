typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv2 S_vv2;
typedef struct S_x10864 S_x10864;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    float f18[0x80];
};
struct S_x10864 {
    float f00;
};
struct S_vv2 {
    int f00;
};
extern Vector3 g_8c3404a4;
extern Vector3 g_8c3404b0;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c37e4a8(float, float);
extern void call_8c3806f6(int, int, int);
extern void call_8c01d9dc(void);
extern void call_8c37e7d4(void *);
extern void forward_reviewed_8c104e8c(void);
extern void call_8c0142d8(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c0a1448(int, void *);
extern void call_8c0a1a78(int);
extern void operation_8c0a237c(void *, void *);
extern void operation_8c01c250(int);
extern void operation_8c01c244(int);
extern void create_descriptor_managers(void);
extern void operation_8c25cc58(void);
extern void call_8c380516(void);
void operation_8c25c8f4(void)
{
    Frame frame;
    unsigned int v1;
    int v3;
    S_vv2 *v2;
    char *v8;
    int t1;
    call_8c37e4a8(1.0f, 0.85f);
    call_8c3806f6(0, 0, 0);
    call_8c01d9dc();
    v1 = (unsigned int)0;
    while ((unsigned int)0x80 > v1) {
        *(float *)((char *)frame.f18 + (v1 << 2)) = 0.0f;
        v1 = (unsigned int)(v1 + 1);
    }
    call_8c37e7d4((void *)frame.f18);
    forward_reviewed_8c104e8c();
    v2 = (S_vv2 *)(void *)0x8c340468;
    v3 = (int)0;
    while (v3 != 7) {
        v8 = (char *)v2->f00;
        v2 = (S_vv2 *)((char *)v2 + 8);
        if (v8 != 0) {
            ((void (*)(void))(v8))();
        }
        v3 = (int)(v3 + 1);
    }
    call_8c0142d8((void *)((void *)0x8c2e2e84));
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf8);
    if (t1 != 0) {
        call_8c0a1448(t1, g_8c44be88);
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c3404a4;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c3404b0;
    call_8c0a1a78(6);
    operation_8c0a237c((void *)(&(&frame)->f0c), (void *)(&frame));
    operation_8c01c250(2);
    operation_8c01c244(2);
    create_descriptor_managers();
    operation_8c25cc58();
    call_8c380516();
}
