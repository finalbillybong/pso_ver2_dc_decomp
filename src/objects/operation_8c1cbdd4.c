typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_x64912 S_x64912;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    float f18[0x80];
};
struct S_x64912 {
    float f00;
};
extern Vector3 g_8c329274;
extern Vector3 g_8c329280;
extern S_g8c44be88 *g_8c44be88;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2e44;
extern void call_8c37e4a8(float, float);
extern void call_8c3806f6(int, int, int);
extern void call_8c37e7d4(void *);
extern void call_8c01d9dc(void);
extern void forward_reviewed_8c104e8c(void);
extern void call_8c013620(void *, int);
extern void call_8c014498(void *, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c0a1448(int, void *);
extern void call_8c0a1a78(int);
extern void operation_8c0a237c(void *, void *);
extern void create_descriptor_managers(void);
extern void operation_8c1bec9c(void *, int);
void operation_8c1cbdd4(void)
{
    Frame frame;
    unsigned int v1;
    int t1;
    int t2;
    call_8c37e4a8(1.0f, 1.0f);
    call_8c3806f6(0, 0, 0);
    v1 = (unsigned int)0;
    while ((unsigned int)0x80 > v1) {
        *(float *)((char *)frame.f18 + (v1 << 2)) = 0.0f;
        v1 = (unsigned int)(v1 + 1);
    }
    call_8c37e7d4((void *)frame.f18);
    call_8c01d9dc();
    forward_reviewed_8c104e8c();
    call_8c013620((void *)((void *)0x8c32915c), 0x118);
    call_8c014498((void *)((void *)0x8c2e2e84), 4);
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0xf8);
    if (t1 != 0) {
        call_8c0a1448(t1, g_8c44be88);
    }
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c329274;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c329280;
    call_8c0a1a78(6);
    operation_8c0a237c((void *)(&(&frame)->f0c), (void *)(&frame));
    create_descriptor_managers();
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x20);
    if (t2 != 0) {
        operation_8c1bec9c((void *)t2, (int)g_8c44be88);
    }
    g_8c4e2e44 = 0;
}
