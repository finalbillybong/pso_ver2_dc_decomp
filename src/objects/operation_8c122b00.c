typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c013620(void *, int);
extern int get_current_area_8c032b10(void);
extern void call_8c236cc4(void);
void operation_8c122b00(void)
{
    int t1;
    int t2;
    int t3;
    call_8c013620((void *)0x8c311da0, 0x60);
    t1 = get_current_area_8c032b10();
    if (t1 != 0) {
        t2 = get_current_area_8c032b10();
        if (t2 != 0xf) {
            call_8c013620((void *)0x8c311e00, 0x20);
        }
    }
    t3 = get_current_area_8c032b10();
    if (t3 == 0xf) {
        call_8c236cc4();
    }
}
