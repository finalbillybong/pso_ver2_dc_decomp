#include "src/include/vector3.h"
#include "src/include/classes/TObjDFTenchuFuru.h"
typedef char check_position[(unsigned long)&((TObjDFTenchuFuru *)0)->position==32?1:-1];
typedef char check_ticks[(unsigned long)&((TObjDFTenchuFuru *)0)->ticks==44?1:-1];
typedef char check_child[(unsigned long)&((TObjDFTenchuFuru *)0)->child==48?1:-1];
extern void move_at(void *,Vector3 *);extern int first_at(void),second_at(void);
void TObjDFTenchuFuru_update_8c21afd4(TObjDFTenchuFuru *o) {o->position.y+=-60.0f;if(o->child) move_at(o->child,&o->position);if(--o->ticks<0||(!first_at()&&!second_at())) o->flags|=1;}
