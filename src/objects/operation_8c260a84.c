typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(void *);
int operation_8c260a84(void)
{
    int t1;
    t1 = lookup_low_id(*(S_g8c418248 **)0x8c418248);
    if (t1 == 0) {
        return 0;
    }
    return t1 + 0x7e4;
}
