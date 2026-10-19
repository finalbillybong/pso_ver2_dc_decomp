typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4182e0 S_g8c4182e0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern S_g8c4182e0 *g_8c4182e0;
extern void call_8c399810(void *);
extern void call_8c011ed8(int);
void operation_8c014d64(int a0)
{
    int v2;
    int key = a0;
    a0 = (int)(void *)0x8c4182f0;
    for (v2 = 0; 3 > v2; v2++) {
        if (((S_vv1 *)a0)->f00 == key) {
            ((S_vv1 *)a0)->f00 = 0;
            g_8c4182e0 = (S_g8c4182e0 *)((int)g_8c4182e0 + -1);
            call_8c399810(g_8c4182e0);
            break;
        }
        a0 += 4;
    }
    call_8c011ed8(key);
}
