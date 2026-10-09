typedef struct Pair { short first,second; unsigned int state; } Pair;
typedef char check_second[(unsigned long)&((Pair *)0)->second==2?1:-1];
typedef char check_state[(unsigned long)&((Pair *)0)->state==4?1:-1];
void initialize_pair_state(Pair *o) { o->first=0; o->second=0; o->state=0; }
void set_pair_values(Pair *o,short first,short second) { o->first=first;o->second=second; }
