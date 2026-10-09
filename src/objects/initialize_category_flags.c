typedef struct Player { char unknown0[56]; short categories[22]; } Player;
typedef struct CategoryRow { short values[22]; } CategoryRow;
typedef struct View { char unknown0[24]; void *dispatch; char unknown28[4]; Player *player; int state,category,value,limit; char unknown52[4]; int count; unsigned int bits; char unknown64[4]; int active; float phase; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_player[(unsigned long)&((View *)0)->player==32?1:-1];
typedef char check_category[(unsigned long)&((View *)0)->category==40?1:-1];
typedef char check_value[(unsigned long)&((View *)0)->value==44?1:-1];
typedef char check_limit[(unsigned long)&((View *)0)->limit==48?1:-1];
typedef char check_count[(unsigned long)&((View *)0)->count==56?1:-1];
typedef char check_bits[(unsigned long)&((View *)0)->bits==60?1:-1];
typedef char check_active[(unsigned long)&((View *)0)->active==68?1:-1];
typedef char check_phase[(unsigned long)&((View *)0)->phase==72?1:-1];
typedef char check_categories[(unsigned long)&((Player *)0)->categories==56?1:-1];
extern Player *player;extern CategoryRow limits[];
extern void base_at(View *,void *);extern int row_at(Player *);extern int flag_at(int,int);
View *initialize_category_flags(View *o,void *parent,int category) {
 View **home=&o;unsigned int bit;int i;View *current;
 base_at(o,parent);o->dispatch=(void *)0x8c2657a0;o->player=player;o->state=0;o->category=category;
 { View *current=o;o->limit=*(short *)((char *)&limits[row_at(current->player)]+((unsigned int)current->category<<1)); }
 { View *current=o;current->value=*(short *)((char *)&current->player->categories+((unsigned int)current->category<<1)); }
 o->count=0;o->bits=0;for(i=0,bit=1;current=o,i<current->limit;bit<<=1,++i) {if(flag_at(current->category,i)) {++o->count;o->bits|=bit;}}
 o->active=1;o->phase=0.0f;return o;
}
