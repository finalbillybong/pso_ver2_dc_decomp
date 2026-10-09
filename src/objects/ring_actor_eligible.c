typedef struct Actor {char unknown0[52];unsigned int flags;char unknown56[836];int mode;} Actor;
typedef char check_flags[(unsigned long)&((Actor *)0)->flags==52?1:-1];
typedef char check_mode[(unsigned long)&((Actor *)0)->mode==892?1:-1];
extern Actor *lookup_at(unsigned int);
int ring_actor_eligible(unsigned short identifier) {Actor *actor;if(identifier!=65535&&(actor=lookup_at(identifier))!=0&&(actor->flags&0x02000800)==0&&actor->mode==14) return 1;return 0;}
