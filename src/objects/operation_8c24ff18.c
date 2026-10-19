typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c339ca0 S_L8c339ca0;
typedef struct S_g8c339cf0 S_g8c339cf0;
struct S_L8c339ca0 {
    char unknown0[0x4c];
    int f4c;
    int f50;
};
struct S_g8c339cf0 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c339ca0[];
extern void request_resource_release(void *);
extern void call_8c24ffa4(int);
extern void operation_8c250108(int, int);
void operation_8c24ff18(int a0, int a1)
{
    if (*(int *)0x8c4e2ba0 == 0) {
        *(int *)(g_8c339ca0 + 0x4c) = 0;
        *(int *)(g_8c339ca0 + 0x50) = 0;
        return;
    }
    if (*(int *)(g_8c339ca0 + 0x50) != 0) {
        if (a1 == 0) {
            request_resource_release((void *)(*(S_g8c339cf0 **)(g_8c339ca0 + 0x50)));
        } else {
            (*(S_g8c339cf0 **)(g_8c339ca0 + 0x50))->f04 |= 1;
        }
        *(int *)(g_8c339ca0 + 0x4c) = 0;
        *(int *)(g_8c339ca0 + 0x50) = 0;
    }
    switch (a1) {
    case 0:
        return;
    case 1:
        call_8c24ffa4(a0);
        return;
    default:
        operation_8c250108(a0, a1);
        return;
    }
}
