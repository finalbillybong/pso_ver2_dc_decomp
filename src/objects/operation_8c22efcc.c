typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c2e1bbc S_g8c2e1bbc;
extern int call_8c17796c(void *);
int operation_8c22efcc(void)
{
    int v1;
    int t1;
    v1 = (int)0;
    while (0x15 > v1) {
        t1 = call_8c17796c(*(S_g8c2e1bbc **)((char *)0x8c2e1bbc + (v1 << 2)));
        if (t1 == 0) {
            return 0;
        }
        v1 = (int)(v1 + 1);
    }
    return 1;
}
