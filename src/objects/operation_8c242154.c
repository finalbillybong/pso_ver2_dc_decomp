typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510be0 S_g8c510be0;
typedef struct S_g8c510c10 S_g8c510c10;
extern void call_8c38c8ac(int, void *, int);
void operation_8c242154(void)
{
    int v2;
    int v4;
    int v1;
    int v3;
    v1 = (int)0x50000;
    v2 = (int)0;
    while (0xc > v2) {
        call_8c38c8ac((int)(v2 + 0xa | v1), (void *)(*(S_g8c510be0 **)((char *)0x8c510be0 + (v2 << 2))), 8);
        v2 = (int)(v2 + 1);
    }
    v3 = (int)0x50000;
    v4 = (int)0;
    while (0xc > v4) {
        call_8c38c8ac((int)(v4 + 0x18 | v3), (void *)(*(S_g8c510c10 **)((char *)0x8c510c10 + (v4 << 2))), 8);
        v4 = (int)(v4 + 1);
    }
}
