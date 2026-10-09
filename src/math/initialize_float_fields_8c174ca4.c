/* Provisional four consecutive scalar fields, matching reviewed constant-zero family. */
typedef struct View { char unknown0[444]; float a,b,c,d; } View;
typedef char check_a[(unsigned long)&((View *)0)->a==444?1:-1];
typedef char check_b[(unsigned long)&((View *)0)->b==448?1:-1];
typedef char check_c[(unsigned long)&((View *)0)->c==452?1:-1];
typedef char check_d[(unsigned long)&((View *)0)->d==456?1:-1];
void initialize_float_fields_8c174ca4(View *o) { o->a=0.0f;o->b=0.0f;o->c=0.0f;o->d=0.0f; }
