typedef struct Stats { unsigned short field[13]; } Stats;
typedef struct Vector { float x,y,z; } Vector;
typedef struct Shape { char unknown0[16]; float height; } Shape;
typedef struct Actor { char unknown0[60]; Vector position; char unknown72[316]; Shape *shape; } Actor;
typedef char check_layout[sizeof(Stats)==26 && sizeof(Vector)==12 && sizeof(Shape)==20 && sizeof(Actor)==392 && (unsigned long)&((Shape *)0)->height==16 && (unsigned long)&((Actor *)0)->position==60 && (unsigned long)&((Actor *)0)->shape==388 ? 1:-1];
void subtract_actor_stats(const Stats *first,const Stats *second,Stats *result) {
    result->field[0]=second->field[0]-first->field[0];
    result->field[1]=second->field[1]-first->field[1];
    result->field[2]=second->field[2]-first->field[2];
    result->field[3]=second->field[3]-first->field[3];
    result->field[4]=second->field[4]-first->field[4];
    result->field[5]=second->field[5]-first->field[5];
    result->field[11]=second->field[11]-first->field[11];
    result->field[12]=second->field[12]-first->field[12];
}
void actor_elevated_position(Vector *result,const Actor *o) {
    float height=o->shape->height;
    result->x=o->position.x;
    result->y=o->position.y+height*1.2f;
    result->z=o->position.z;
}
