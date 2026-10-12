typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbaf8 S_L8c4dbaf8;
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_L8c4dbaf8 {
    int f00;
    int f04;
};
extern S_g8c4db9e8 *g_8c4db9e8;
extern int g_8c4dbb14;
extern S_L8c4dbaf8 g_8c4dbaf8;
extern void call_8c191504(int);
extern int operation_8c2324e0(void);
extern int operation_8c2324c0(void);
extern void call_8c17f824(void *);
extern void call_8c17ef78(void);
extern void decode_record_collection(void *);
int operation_8c180ce0(void)
{
    int v1;
    int v21;
    int v41;
    int t1;
    int t2;
    call_8c191504(0);
    v41 = (int)0;
    if (g_8c4db9e8 != 0) {
        v21 = (int)0;
        if (g_8c4dbb14 != 0) {
            t1 = operation_8c2324e0();
            v1 = (int)t1;
            if (t1 == 0) {
                t2 = operation_8c2324c0();
                v1 = (int)t2;
            }
            (&g_8c4dbaf8)->f04 = v1;
            (&g_8c4dbaf8)->f00 = v1;
            call_8c17f824(g_8c4db9e8);
            call_8c17ef78();
            decode_record_collection(g_8c4db9e8);
            v21 = (int)1;
        }
        v41 = (int)v21;
    }
    return v41;
}
