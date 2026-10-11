typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
struct S_c8c122700 {
    char unknown0[0x18];
    void *f18;
    char unknown1c[0x3c];
    int f58;
};
extern void lookup_low_id(int);
extern S_c8c122700 *allocate_block(void *, int);
extern void call_8c1ab508(S_c8c122700 *, int, int, int, int, int);
S_c8c122700 *create_tracker_8c231984(int a0, int a1)
{
    S_c8c122700 *t1;
    lookup_low_id(a1);
    t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, 0x5c);
    if (t1 != 0) {
        call_8c1ab508(t1, a0, a1, -1, -1, 0);
        t1->f18 = (void *)0x8c278f98;
        t1->f58 = 5;
    }
    return t1;
}
