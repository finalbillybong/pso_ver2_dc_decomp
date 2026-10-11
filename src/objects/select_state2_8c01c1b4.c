typedef struct State { int unknown0; int current; int first; int second; int mode; } State;
void select_state2_8c01c1b4(void)
{
    State *s = (State *)0x8c41cb00;
    s->current = s->first;
    s->mode = 2;
}
