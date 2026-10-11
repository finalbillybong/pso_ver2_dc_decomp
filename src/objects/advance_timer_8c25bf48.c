typedef struct Timer { char unknown0[0x24]; unsigned int ticks; char unknown28[0x10]; int kind; } Timer;
extern void select_mode0_8c1cc49c(void);
extern void select_mode4_8c1cc4f8(void);
void advance_timer_8c25bf48(Timer *o)
{
    if ((float)o->ticks++ > 4.5f) {
        switch (o->kind) {
        case 0:
            select_mode0_8c1cc49c();
            break;
        case 1:
        case 2:
            select_mode4_8c1cc4f8();
            *(int *)0x8c3403e8 = 1;
            break;
        }
    }
}
