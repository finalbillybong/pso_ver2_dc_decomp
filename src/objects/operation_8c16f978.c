typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern void operation_8c02884c(int);
extern void clear_flag2_8c028828(void *);
void operation_8c16f978(void)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        operation_8c02884c(t1);
        clear_flag2_8c028828((void *)t1);
    }
}
