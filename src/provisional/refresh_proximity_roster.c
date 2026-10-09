typedef struct Vector { float x,y,z; } Vector;
typedef struct Actor { char unknown0[60]; Vector position; char unknown72[820]; int area; char unknown896[1124]; char name[24]; } Actor;
typedef struct Object { char unknown0[60]; Vector position; char unknown72[156]; float radius; char unknown232[8]; int area; char unknown244[32]; char names[4][24]; int near_flags[4],count,near_count,present,unknown400; void *menu; } Object;
typedef char check_layout[sizeof(Vector)==12 && sizeof(Actor)==2044 && sizeof(Object)==408 && (unsigned long)&((Actor *)0)->position==60 && (unsigned long)&((Actor *)0)->area==892 && (unsigned long)&((Actor *)0)->name==2020 && (unsigned long)&((Object *)0)->position==60 && (unsigned long)&((Object *)0)->radius==228 && (unsigned long)&((Object *)0)->area==240 && (unsigned long)&((Object *)0)->names==276 && (unsigned long)&((Object *)0)->near_flags==372 && (unsigned long)&((Object *)0)->count==388 && (unsigned long)&((Object *)0)->near_count==392 && (unsigned long)&((Object *)0)->present==396 && (unsigned long)&((Object *)0)->menu==404 ? 1:-1];
extern int area,local_index;
extern Actor *actor_at(int);
extern float squared_distance(const Vector *,const Vector *);
extern void copy_name(char *,const char *),destroy_menu(void *),disable(void),enable(void);
extern int enabled(void);
void refresh_proximity_roster(Object *o) {
    int old_count=o->count;
    int i;
    o->count=0;o->near_count=0;o->present=0;
    for(i=0;i<4;++i) {
        Actor *actor=actor_at(i);
        if(actor) {
            int actor_area=actor->area;
            int near=0;
            if(actor_area==o->area) o->present=1;
            if(actor_area==area) {
                float distance=squared_distance(&actor->position,&o->position);
                if(!(distance>o->radius*o->radius)) { near=1;++o->near_count; }
            }
            *(int *)((char *)o->near_flags+((unsigned int)o->count<<2))=near;
            copy_name(o->names[o->count],actor->name);
            ++o->count;
        }
    }
    for(i=o->count;i<4;++i) o->names[i][0]=0;
    if(old_count!=o->count) {
        void *menu=o->menu;
        if(menu) { destroy_menu(menu);o->menu=0; }
    }
    { Actor *actor=actor_at(local_index);
      if(actor && actor->area==area) {
        float distance=squared_distance(&actor->position,&o->position);
        float radius=o->radius+25.0f;
        if(!(distance>radius*radius)) { if(enabled()) disable(); }
        else { if(!enabled()) enable(); }
      }
    }
}
