typedef struct State { int unknown0; int current; int first; int second; int mode; } State;
void select_state3_8c01c234(void)
{
    State *s = (State *)0x8c41cb00;
    s->current = s->second;
    s->mode = 3;
}
