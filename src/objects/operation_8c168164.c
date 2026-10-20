typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db2f0 S_L8c4db2f0;
typedef struct Object Object;
struct S_L8c4db2f0 {
    char unknown0[0x20];
    int f20;
};
extern S_L8c4db2f0 g_8c4db2f0;
extern char gc_8c4db2f0[];
extern char g_8c4db300[];
int operation_8c168164(Object *o, int a1)
{
    int v1;
    int v2;
    if (*(int *)((char *)(gc_8c4db2f0 + 0x20) + (a1 * 0x24)) == 0) {
        return 0;
    }
    if (*(int *)((char *)(gc_8c4db2f0 + 0x20) + (a1 * 0x24)) == 2) {
        v1 = (int)0;
        while (4 > v1) {
            *(int *)((char *)((char *)o + 0x0) + (v1 << 2)) = (int)(*(int *)((char *)((char *)(a1 * 0x24 + gc_8c4db2f0) + 0x0) + (v1 << 2)));
            *(int *)((char *)((char *)o + 0x10) + (v1 << 2)) = (int)(*(int *)((char *)((char *)((char *)(int *)(gc_8c4db2f0 + 0x10) + a1 * 0x24) + 0x0) + (v1 << 2)));
            v1 = (int)(v1 + 1);
        }
        return 2;
    }
    if (*(int *)((char *)(gc_8c4db2f0 + 0x20) + (a1 * 0x24)) == 1) {
        v2 = (int)0;
        while (4 > v2) {
            *(int *)((char *)((char *)o + 0x0) + (v2 << 2)) = (int)(*(int *)((char *)((char *)(a1 * 0x24 + gc_8c4db2f0) + 0x0) + (v2 << 2)));
            *(int *)((char *)((char *)o + 0x10) + (v2 << 2)) = (int)(*(int *)((char *)((char *)((char *)(int *)(gc_8c4db2f0 + 0x10) + a1 * 0x24) + 0x0) + (v2 << 2)));
            v2 = (int)(v2 + 1);
        }
        return 1;
    }
    return 0;
}
