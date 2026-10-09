#include "src/include/vector3.h"
typedef struct View { char unknown0[4]; unsigned short flags; char unknown6[26]; Vector3 position; int ticks; void *child; } View;
typedef char check_position[(unsigned long)&((View *)0)->position==32?1:-1];
typedef char check_ticks[(unsigned long)&((View *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((View *)0)->child==48?1:-1];
extern void move_at(void *,Vector3 *);extern int first_at(void),second_at(void);
void update_raised_position_effect(View *o) {o->position.y+=-60.0f;if(o->child) move_at(o->child,&o->position);if(--o->ticks<0||(!first_at()&&!second_at())) o->flags|=1;}
