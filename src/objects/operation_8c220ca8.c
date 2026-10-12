typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc24 S_g8c4dbc24;
typedef struct S_g8c4dbc24_0 S_g8c4dbc24_0;
typedef struct S_g8c4dbc24_0_0 S_g8c4dbc24_0_0;
typedef struct S_g8c505c28 S_g8c505c28;
struct S_g8c4dbc24 {
    S_g8c4dbc24_0 *f00;
};
extern void call_8c22ecd4(void *, void *, int);
void operation_8c220ca8(int a0, int a1)
{
    if (*(int *)0x8c505c28 != 0) {
        call_8c22ecd4(*(S_g8c505c28 **)0x8c505c28, *(S_g8c4dbc24_0_0 **)((char *)((char *)(*(S_g8c4dbc24 **)0x8c4dbc24)->f00 + 0x0) + (a0 << 2)), a1 | 0x80);
    }
}
