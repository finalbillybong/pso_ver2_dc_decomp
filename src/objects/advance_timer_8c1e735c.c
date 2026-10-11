typedef struct Timer { char unknown0[0x24]; unsigned int ticks; char unknown28[0x10]; int kind; } Timer;
extern void select_mode0_8c1cc49c(void);
extern void select_mode4_8c1cc4f8(void);
void advance_timer_8c1e735c(Timer *o)
{
    if ((float)o->ticks++ > 4.5f) {
        switch (o->kind) {
        case 0:
            select_mode0_8c1cc49c();
            break;
        case 1:
        case 2:
            *(int *)0x8c32c108 = 1;
            select_mode4_8c1cc4f8();
            break;
        }
    }
}
