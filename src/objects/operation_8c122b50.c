typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
extern void call_8c236df0(void);
extern void call_8c01364c(void *, int);
void operation_8c122b50(void)
{
    int t1;
    int t2;
    int t3;
    t1 = get_current_area_8c032b10();
    if (t1 == 0xf) {
        call_8c236df0();
    }
    t2 = get_current_area_8c032b10();
    if (t2 != 0) {
        t3 = get_current_area_8c032b10();
        if (t3 != 0xf) {
            call_8c01364c((void *)0x8c311e00, 0x20);
        }
    }
    call_8c01364c((void *)0x8c311da0, 0x60);
}
