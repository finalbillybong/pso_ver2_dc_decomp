typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
};
extern int g_8c470324;
extern int operation_8c1f1850(void);
extern void select_mode3_8c1cc4e0(void);
extern int operation_8c01018c(int);
extern void initialize_channel_handles(void);
extern void select_available_channel(void);
extern void select_mode2_8c1cc4c8(void);
extern void select_mode19_8c1cc648(void);
void operation_8c0e9630(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    v1 = (int)((int)o->f28 + 1);
    o->f28 = (int)(v1);
    if ((float)v1 > 5.5f) {
        switch (g_8c470324) {
        case 0:
            t1 = operation_8c1f1850();
            if ((unsigned int)(unsigned char)t1 > (unsigned int)1) {
                select_mode3_8c1cc4e0();
                return;
            }
            t2 = operation_8c1f1850();
            if ((unsigned char)t2 == 1) {
                t3 = operation_8c01018c((int)((void *)0x8c319870));
                if (t3 != -1) {
                    initialize_channel_handles();
                    select_available_channel();
                    select_mode2_8c1cc4c8();
                    return;
                }
            }
            initialize_channel_handles();
            select_available_channel();
            select_mode19_8c1cc648();
            return;
        case 1:
            select_mode19_8c1cc648();
        }
    }
}
