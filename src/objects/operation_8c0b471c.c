typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
extern int g_8c46ee80;
extern int current_effect_mode(void);
extern float squared_distance_xz(void *, void *);
extern int effect_query_is_true(void *);
extern void set_effect_bit0(void *);
extern void clear_effect_bit0(void *);
void operation_8c0b471c(Object *o)
{
    int v1;
    int v5;
    int v2;
    int v6;
    int t1;
    float t2;
    int t3;
    int t4;
    t1 = current_effect_mode();
    if (t1 != 0) {
        t2 = squared_distance_xz((void *)((int)o + 0x2c), (void *)(g_8c46ee80 + 0x90));
        if (!(102400.0f > t2)) {
            v1 = (int)0;
            while (3 > v1) {
                v2 = (int)(v1 << 2);
                t3 = effect_query_is_true((void *)(*(Arg0_20 **)((char *)((char *)o + 0x20) + (v2))));
                if (t3 != 0) {
                    set_effect_bit0((void *)(*(Arg0_20 **)((char *)((char *)o + 0x20) + (v2))));
                }
                v1 = (int)(v1 + 1);
            }
            return;
        }
        v5 = (int)0;
        while (3 > v5) {
            v6 = (int)(v5 << 2);
            t4 = effect_query_is_true((void *)(*(Arg0_20 **)((char *)((char *)o + 0x20) + (v6))));
            if (t4 != 0) {
                clear_effect_bit0((void *)(*(Arg0_20 **)((char *)((char *)o + 0x20) + (v6))));
            }
            v5 = (int)(v5 + 1);
        }
    }
}
