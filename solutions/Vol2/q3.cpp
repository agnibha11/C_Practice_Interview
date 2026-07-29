#define FIELD_MASK(w,p)     ((((1u << (w)) - 1u) << (p)))
#define FIELD_SET(x,w,p,v)  (((x) & ~FIELD_MASK(w,p)) |            \
                             (((unsigned)(v) << (p)) & FIELD_MASK(w,p)))
/* e.g. write 3 into bits [5:4] of REG */
//REG = FIELD_SET(REG, 2, 4, 3);