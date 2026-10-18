typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern S_g8c418248 *g_8c418248;
extern int operation_8c0243ec(int, int, unsigned char, char);
int operation_8c103b50(int a0)
{
    int t1;
    int t2;
    unsigned char *v1;
    t1 = ((int (*)(void *))0x8c021ef8)(g_8c418248);
    if (t1 == 0) {
        return -1;
    }
    v1 = (unsigned char *)0x8c285d30 + ((unsigned short)a0 << 1);
    t2 = operation_8c0243ec(t1, 3, v1[0], v1[1]);
    return (int)(t2);
}
