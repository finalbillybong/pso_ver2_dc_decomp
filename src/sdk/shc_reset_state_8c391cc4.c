/* SDK pool group 0x8c391cc4-0x8c391cf4 (Hitachi SHC): resets the current
   state record and runs two update steps on it. */
typedef struct State {
    int flags;
    int unknown4[14];
    int count;
} State;

extern State *g_state_8c575c3c;
extern void step_a_8c3bb160(State *);
extern void step_b_8c3bb920(State *);

void reset_state_8c391cc4(void)
{
    g_state_8c575c3c->flags = 0x100;
    g_state_8c575c3c->count = 0;
    step_a_8c3bb160(g_state_8c575c3c);
    step_b_8c3bb920(g_state_8c575c3c);
}
