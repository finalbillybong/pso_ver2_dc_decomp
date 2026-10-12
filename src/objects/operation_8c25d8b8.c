typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c513440 S_g8c513440;
extern int allocate_block(void *, unsigned int);
extern void call_8c25ddac(int, void *);
extern void call_8c25d964(int, void *, int);
int operation_8c25d8b8(int a0)
{
    int t1;
    int t2;
    if (*(int *)0x8c513440 == 0) {
        t1 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x20);
        if (t1 != 0) {
            call_8c25ddac(t1, *(S_g8c44be98 **)0x8c44be98);
        }
    }
    if (*(int *)0x8c513440 != 0) {
        t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0xd4);
        if (t2 != 0) {
            call_8c25d964(t2, *(S_g8c513440 **)0x8c513440, a0);
        }
        return t2;
    }
    return 0;
}
