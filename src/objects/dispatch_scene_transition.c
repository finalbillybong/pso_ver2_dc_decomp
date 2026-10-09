extern int alternate;extern void first_at(void),second_at(void);
void dispatch_scene_transition(void) {if(alternate) second_at();else first_at();}
