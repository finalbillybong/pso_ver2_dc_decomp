extern void *view_effect_slots[3];
void *get_view_motion_parameters(void){char *effect=(char *)view_effect_slots[2];return effect?effect+156:0;}
