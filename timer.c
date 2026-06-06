#include <stddef.h>
#include <sys/ioctl.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <poll.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <time.h>
#include <stdint.h>
int _global_argc;
const char** _global_argv;
static  size_t   from_dash_integral0 (    int64_t  x67 ) {
    return ( (size_t ) (  x67 ) );
}

struct env1 {
    ;
    ;
    size_t  growth_dash_factor1951;
    ;
    size_t  starting_dash_size1950;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

enum Unit_4 {
    Unit_4_Unit,
};

enum CAllocator_6 {
    CAllocator_6_CAllocator,
};

struct Slice_7 {
    uint8_t *  f_ptr;
    size_t  f_count;
};

struct List_5 {
    enum CAllocator_6  f_al;
    struct Slice_7  f_elements;
    size_t  f_count;
};

struct envunion3 {
    enum Unit_4  (*fun) (  struct env1*  ,    struct List_5 *  );
    struct env1 env;
};

struct env2 {
    ;
    struct env1 envinst1;
    ;
    ;
    ;
    ;
};

struct envunion9 {
    enum Unit_4  (*fun) (  struct env2*  ,    struct List_5 *  ,    uint8_t  );
    struct env2 env;
};

struct env8 {
    ;
    ;
    struct env2 envinst2;
    ;
    ;
    ;
};

struct envunion11 {
    enum Unit_4  (*fun) (  struct env8*  ,    struct List_5 *  ,    struct Slice_7  );
    struct env8 env;
};

struct env10 {
    ;
    ;
    struct env8 envinst8;
};

struct StrBuilder_14 {
    struct List_5  f_chars;
};

struct envunion13 {
    enum Unit_4  (*fun) (  struct env10*  ,    struct StrBuilder_14 *  ,    struct Slice_7  );
    struct env10 env;
};

struct env12 {
    ;
    struct env10 envinst10;
    ;
    ;
};

struct Char_17 {
    uint8_t *  f_ptr;
    size_t  f_num_dash_bytes;
};

struct envunion16 {
    enum Unit_4  (*fun) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  );
    struct env12 env;
};

struct env15 {
    ;
    ;
    ;
    ;
    ;
    struct env12 envinst12;
    ;
};

struct StrConcat_20 {
    int64_t  field0;
    struct Char_17  field1;
};

static struct StrConcat_20 StrConcat_20_StrConcat (  int64_t  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_20 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion19 {
    enum Unit_4  (*fun) (  struct env15*  ,    struct StrBuilder_14 *  ,    struct StrConcat_20  );
    struct env15 env;
};

struct envunion21 {
    enum Unit_4  (*fun) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  );
    struct env12 env;
};

struct env18 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env15 envinst15;
    ;
    struct env12 envinst12;
    ;
    ;
};

struct StrView_24 {
    struct Slice_7  f_contents;
};

struct envunion23 {
    struct StrView_24  (*fun) (  struct env18*  ,    struct StrConcat_20  ,    enum CAllocator_6  );
    struct env18 env;
};

struct env22 {
    ;
    ;
    ;
    ;
    ;
    ;
    struct env18 envinst18;
};

struct env26 {
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3088;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env27 {
    bool *  should_dash_resize3088;
    ;
    ;
    ;
};

enum ColorPalette_31 {
    ColorPalette_31_Palette8,
    ColorPalette_31_Palette16,
    ColorPalette_31_Palette256,
    ColorPalette_31_PaletteRGB,
};

struct Array_33 {
    uint8_t _arr [32];
};

struct Termios_32 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_33  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

struct Tui_30 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_31  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_32  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct envunion29 {
    bool  (*fun) (  struct env27*  ,    struct Tui_30 *  );
    struct env27 env;
};

struct env28 {
    struct env27 envinst27;
    ;
};

struct envunion35 {
    bool  (*fun) (  struct env27*  ,    struct Tui_30 *  );
    struct env27 env;
};

struct env34 {
    struct env27 envinst27;
    ;
    ;
    ;
    ;
    ;
};

static  enum CAllocator_6   idc36 (  ) {
    return ( CAllocator_6_CAllocator );
}

struct Slice_37 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  int64_t   op_dash_mul40 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) * (  r196 ) );
}

static  const char* *   offset_dash_ptr39 (    const char* *  x338 ,    int64_t  count340 ) {
    const char*  temp41;
    return ( (const char* * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul40 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp41 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral42 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub43 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) - (  r277 ) );
}

static  struct Slice_37   get38 (  ) {
    return ( (struct Slice_37) { .f_ptr = ( (  offset_dash_ptr39 ) ( ( _global_argv ) ,  (  from_dash_integral42 ( 1 ) ) ) ) , .f_count = (  op_dash_sub43 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static  struct timespec   undefined46 (  ) {
    struct timespec  temp47;
    return (  temp47 );
}

static  int32_t   from_dash_integral49 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   clock_dash_monotonic48 (  ) {
    return (  from_dash_integral49 ( 1 ) );
}

static  struct timespec   now44 (  ) {
    struct timespec  temp45 = ( (  undefined46 ) ( ) );
    struct timespec *  t3036 = ( &temp45 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic48 ) ( ) ) ,  (  t3036 ) ) );
    return ( * (  t3036 ) );
}

struct Maybe_50 {
    enum {
        Maybe_50_None_t,
        Maybe_50_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_50_Just_s;
    } stuff;
};

static struct Maybe_50 Maybe_50_Just (  const char*  field0 ) {
    return ( struct Maybe_50 ) { .tag = Maybe_50_Just_t, .stuff = { .Maybe_50_Just_s = { .field0 = field0 } } };
};

enum Ordering_53 {
    Ordering_53_LT,
    Ordering_53_EQ,
    Ordering_53_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp52 (    size_t  l179 ,    size_t  r181 ) {
    return ( builtin_size_tcmp( (  l179 ) , (  r181 ) ) );
}

static  int64_t   size_dash_i6454 (    size_t  x583 ) {
    return ( (int64_t ) (  x583 ) );
}

static  struct Maybe_50   try_dash_get51 (    struct Slice_37  slice1683 ,    size_t  i1685 ) {
    if ( ( (  cmp52 ( (  i1685 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1685 ) , ( (  slice1683 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    const char* *  elem_dash_ptr1686 = ( (  offset_dash_ptr39 ) ( ( (  slice1683 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1685 ) ) ) ) );
    return ( ( Maybe_50_Just ) ( ( * (  elem_dash_ptr1686 ) ) ) );
}

static  bool   eq56 (    int32_t  l106 ,    int32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq55 (    const char*  l1616 ,    const char*  r1618 ) {
    return (  eq56 ( ( ( strcmp ) ( (  l1616 ) ,  (  r1618 ) ) ) , (  from_dash_integral49 ( 0 ) ) ) );
}

static  const char*   from_dash_string57 (    uint8_t *  ptr82 ,    size_t  dref83 ) {
    return ( ( (const char* ) (  ptr82 ) ) );
}

struct Maybe_58 {
    enum {
        Maybe_58_None_t,
        Maybe_58_Just_t,
    } tag;
    union {
        struct {
            struct StrView_24  field0;
        } Maybe_58_Just_s;
    } stuff;
};

static struct Maybe_58 Maybe_58_Just (  struct StrView_24  field0 ) {
    return ( struct Maybe_58 ) { .tag = Maybe_58_Just_t, .stuff = { .Maybe_58_Just_s = { .field0 = field0 } } };
};

static  const char*   from_dash_charlike60 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  void *   cast_dash_ptr65 (    FILE * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of66 (    FILE *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  FILE *   zeroed63 (  ) {
    FILE *  temp64;
    FILE *  x559 = (  temp64 );
    ( ( memset ) ( ( (  cast_dash_ptr65 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of66 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  FILE *   null_dash_ptr62 (  ) {
    return ( (  zeroed63 ) ( ) );
}

static  bool   is_dash_ptr_dash_null61 (    FILE *  p569 ) {
    return ( (  p569 ) == ( (  null_dash_ptr62 ) ( ) ) );
}

static  int32_t   seek_dash_end67 (  ) {
    return (  from_dash_integral49 ( 2 ) );
}

static  int32_t   seek_dash_set68 (  ) {
    return (  from_dash_integral49 ( 0 ) );
}

struct TypeSize_71 {
    size_t  f_size;
};

static  struct TypeSize_71   get_dash_typesize70 (  ) {
    uint8_t  temp72;
    return ( (struct TypeSize_71) { .f_size = ( sizeof( ( (  temp72 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr73 (    void *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  size_t   op_dash_mul74 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) * (  r282 ) );
}

static  struct Slice_7   allocate69 (    enum CAllocator_6  dref1867 ,    size_t  count1869 ) {
    if (!(  dref1867 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1870 = ( ( ( (  get_dash_typesize70 ) ( ) ) ) .f_size );
    uint8_t *  ptr1871 = ( (  cast_dash_ptr73 ) ( ( ( malloc ) ( (  op_dash_mul74 ( (  size1870 ) , (  count1869 ) ) ) ) ) ) );
    return ( (struct Slice_7) { .f_ptr = (  ptr1871 ) , .f_count = (  count1869 ) } );
}

static  size_t   op_dash_add75 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) + (  r272 ) );
}

static  size_t   i32_dash_size76 (    int32_t  x595 ) {
    return ( (size_t ) ( (int64_t ) (  x595 ) ) );
}

struct StrConcat_83 {
    struct StrView_24  field0;
    size_t  field1;
};

static struct StrConcat_83 StrConcat_83_StrConcat (  struct StrView_24  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_83 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_82 {
    struct StrConcat_83  field0;
    struct StrView_24  field1;
};

static struct StrConcat_82 StrConcat_82_StrConcat (  struct StrConcat_83  field0 ,  struct StrView_24  field1 ) {
    return ( struct StrConcat_82 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_81 {
    struct StrConcat_82  field0;
    size_t  field1;
};

static struct StrConcat_81 StrConcat_81_StrConcat (  struct StrConcat_82  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_81 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_80 {
    struct StrConcat_81  field0;
    struct Char_17  field1;
};

static struct StrConcat_80 StrConcat_80_StrConcat (  struct StrConcat_81  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_80 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_86 {
    struct StrView_24  field0;
    struct StrConcat_80  field1;
};

static struct StrConcat_86 StrConcat_86_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_80  field1 ) {
    return ( struct StrConcat_86 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_85 {
    struct StrConcat_86  field0;
    struct Char_17  field1;
};

static struct StrConcat_85 StrConcat_85_StrConcat (  struct StrConcat_86  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_85 ) { .field0 = field0 ,  .field1 = field1 };
};

static  int32_t   size_dash_i3289 (    size_t  x613 ) {
    return ( (int32_t ) (  x613 ) );
}

static  enum Unit_4   print_dash_str88 (    struct StrView_24  self1304 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3289 ) ( ( ( (  self1304 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1304 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str94 (    size_t  self1389 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1389 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str93 (    struct StrConcat_83  self1428 ) {
    struct StrConcat_83  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str94 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str92 (    struct StrConcat_82  self1428 ) {
    struct StrConcat_82  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str93 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str88 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str91 (    struct StrConcat_81  self1428 ) {
    struct StrConcat_81  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str92 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str94 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

struct CharDestructured_97 {
    enum {
        CharDestructured_97_Ref_t,
        CharDestructured_97_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_17  field0;
        } CharDestructured_97_Ref_s;
        struct {
            uint32_t  field0;
        } CharDestructured_97_Scalar_s;
    } stuff;
};

static struct CharDestructured_97 CharDestructured_97_Ref (  struct Char_17  field0 ) {
    return ( struct CharDestructured_97 ) { .tag = CharDestructured_97_Ref_t, .stuff = { .CharDestructured_97_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_97 CharDestructured_97_Scalar (  uint32_t  field0 ) {
    return ( struct CharDestructured_97 ) { .tag = CharDestructured_97_Scalar_t, .stuff = { .CharDestructured_97_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq99 (    uint8_t  l116 ,    uint8_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint8_t   size_dash_u8101 (    size_t  x622 ) {
    return ( (uint8_t ) (  x622 ) );
}

static  size_t   op_dash_div102 (    size_t  l285 ,    size_t  r287 ) {
    return ( (  l285 ) / (  r287 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer100 (    uint8_t *  ptr658 ) {
    return ( (  size_dash_u8101 ) ( (  op_dash_div102 ( ( ( (size_t ) (  ptr658 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral103 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32104 (    size_t  x616 ) {
    return ( (uint32_t ) (  x616 ) );
}

static  size_t   cast105 (    uint8_t *  x356 ) {
    return ( (size_t ) (  x356 ) );
}

static  struct CharDestructured_97   destructure98 (    struct Char_17  c695 ) {
    if ( (  eq99 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer100 ) ( ( (  c695 ) .f_ptr ) ) ) , (  from_dash_integral103 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_97_Scalar ) ( ( (  size_dash_u32104 ) ( ( ( (  cast105 ) ( ( (  c695 ) .f_ptr ) ) ) ) ) ) ) );
    } else {
        return ( ( CharDestructured_97_Ref ) ( (  c695 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp106 (    uint32_t  l164 ,    uint32_t  r166 ) {
    return ( builtin_uint32_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint32_t   from_dash_integral107 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast110 (    uint32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  uint8_t   u32_dash_u8109 (    uint32_t  x637 ) {
    return ( (  cast110 ) ( (  x637 ) ) );
}

static  enum Unit_4   printf_dash_char96 (    struct Char_17  c728 ) {
    struct CharDestructured_97  dref729 = ( (  destructure98 ) ( (  c728 ) ) );
    if ( dref729.tag == CharDestructured_97_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3289 ) ( ( ( dref729 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref729 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref729.tag == CharDestructured_97_Scalar_t ) {
            if ( (  cmp106 ( ( dref729 .stuff .CharDestructured_97_Scalar_s .field0 ) , (  from_dash_integral107 ( 127 ) ) ) == 2 ) ) {
                const char*  temp108 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp108);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8109 ) ( ( dref729 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) ) );
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str95 (    struct Char_17  self1329 ) {
    ( (  printf_dash_char96 ) ( (  self1329 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str90 (    struct StrConcat_80  self1428 ) {
    struct StrConcat_80  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str91 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str87 (    struct StrConcat_86  self1428 ) {
    struct StrConcat_86  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str90 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str84 (    struct StrConcat_85  self1428 ) {
    struct StrConcat_85  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str87 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  struct StrView_24   from_dash_string111 (    uint8_t *  ptr86 ,    size_t  count88 ) {
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = (  ptr86 ) , .f_count = (  count88 ) } ) } );
}

static  uint8_t *   cast113 (    uint8_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp116 (    uint8_t  l169 ,    uint8_t  r171 ) {
    return ( builtin_uint8_tcmp( (  l169 ) , (  r171 ) ) );
}

static  uint8_t   op_dash_add117 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) + (  r252 ) );
}

static  size_t   next_dash_char115 (    uint8_t *  p668 ) {
    uint8_t  pb669 = ( * (  p668 ) );
    if ( (  cmp116 ( (  pb669 ) , (  from_dash_integral103 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp116 ( (  pb669 ) , (  op_dash_add117 ( (  op_dash_add117 ( (  op_dash_add117 ( (  from_dash_integral103 ( 128 ) ) , (  from_dash_integral103 ( 64 ) ) ) ) , (  from_dash_integral103 ( 32 ) ) ) ) , (  from_dash_integral103 ( 16 ) ) ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp116 ( (  pb669 ) , (  op_dash_add117 ( (  op_dash_add117 ( (  from_dash_integral103 ( 128 ) ) , (  from_dash_integral103 ( 64 ) ) ) ) , (  from_dash_integral103 ( 32 ) ) ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp116 ( (  pb669 ) , (  op_dash_add117 ( (  from_dash_integral103 ( 128 ) ) , (  from_dash_integral103 ( 64 ) ) ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp118 = ( (  from_dash_string57 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp118);
                    exit ( 1 );
                    ( Unit_4_Unit );
                }
            }
        }
    }
}

static  struct Char_17   scan_dash_from_dash_mem114 (    uint8_t *  p680 ) {
    size_t  clen681 = ( (  next_dash_char115 ) ( (  p680 ) ) );
    if ( (  cmp52 ( (  clen681 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp119 = ( (  from_dash_string57 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp119);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( (struct Char_17) { .f_ptr = (  p680 ) , .f_num_dash_bytes = (  clen681 ) } );
}

static  struct Char_17   from_dash_charlike112 (    uint8_t *  ptr684 ,    size_t  num_dash_bytes686 ) {
    uint8_t *  ptr687 = ( ( (  cast113 ) ( (  ptr684 ) ) ) );
    return ( (  scan_dash_from_dash_mem114 ) ( (  ptr687 ) ) );
}

static  enum Unit_4   panic79 (    struct StrConcat_80  errmsg1632 ) {
    ( (  print_dash_str84 ) ( ( ( StrConcat_85_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1632 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint8_t *   offset_dash_ptr120 (    uint8_t *  x338 ,    int64_t  count340 ) {
    uint8_t  temp121;
    return ( (uint8_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul40 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp121 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   get_dash_ptr78 (    struct Slice_7  slice1677 ,    size_t  i1679 ) {
    if ( ( (  cmp52 ( (  i1679 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1679 ) , ( (  slice1677 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic79 ) ( ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1679 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1677 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1680 = ( (  offset_dash_ptr120 ) ( ( (  slice1677 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1679 ) ) ) ) );
    return (  elem_dash_ptr1680 );
}

static  enum Unit_4   set77 (    struct Slice_7  slice1694 ,    size_t  i1696 ,    uint8_t  x1698 ) {
    uint8_t *  ep1699 = ( (  get_dash_ptr78 ) ( (  slice1694 ) ,  (  i1696 ) ) );
    (*  ep1699 ) = (  x1698 );
    return ( Unit_4_Unit );
}

static  uint8_t   char_dash_u8122 (    struct Char_17  c701 ) {
    struct CharDestructured_97  dref702 = ( (  destructure98 ) ( (  c701 ) ) );
    if ( dref702.tag == CharDestructured_97_Ref_t ) {
        return ( * ( ( dref702 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref702.tag == CharDestructured_97_Scalar_t ) {
            return ( (  u32_dash_u8109 ) ( ( dref702 .stuff .CharDestructured_97_Scalar_s .field0 ) ) );
        }
    }
}

static  struct Char_17   nullchar123 (  ) {
    return ( (  from_dash_charlike112 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_58   try_dash_read_dash_contents59 (    const char*  filename2730 ,    enum CAllocator_6  al2732 ) {
    FILE *  file2733 = ( ( fopen ) ( (  filename2730 ) ,  ( (  from_dash_charlike60 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null61 ) ( (  file2733 ) ) ) ) {
        return ( (struct Maybe_58) { .tag = Maybe_58_None_t } );
    }
    ( ( fseek ) ( (  file2733 ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  seek_dash_end67 ) ( ) ) ) );
    int32_t  file_dash_size2734 = ( ( ftell ) ( (  file2733 ) ) );
    ( ( fseek ) ( (  file2733 ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  seek_dash_set68 ) ( ) ) ) );
    struct Slice_7  file_dash_buf2735 = ( ( (  allocate69 ) ( (  al2732 ) ,  (  op_dash_add75 ( ( (  i32_dash_size76 ) ( (  file_dash_size2734 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2735 ) .f_ptr ) ,  (  from_dash_integral49 ( 1 ) ) ,  (  file_dash_size2734 ) ,  (  file2733 ) ) );
    ( (  set77 ) ( (  file_dash_buf2735 ) ,  ( (  i32_dash_size76 ) ( (  file_dash_size2734 ) ) ) ,  ( (  char_dash_u8122 ) ( ( (  nullchar123 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2733 ) ) );
    struct StrView_24  str2736 = ( (struct StrView_24) { .f_contents = (  file_dash_buf2735 ) } );
    return ( ( Maybe_58_Just ) ( (  str2736 ) ) );
}

struct Maybe_125 {
    enum {
        Maybe_125_None_t,
        Maybe_125_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_125_Just_s;
    } stuff;
};

static struct Maybe_125 Maybe_125_Just (  int64_t  field0 ) {
    return ( struct Maybe_125 ) { .tag = Maybe_125_Just_t, .stuff = { .Maybe_125_Just_s = { .field0 = field0 } } };
};

struct StrConcat_129 {
    struct StrView_24  field0;
    struct StrView_24  field1;
};

static struct StrConcat_129 StrConcat_129_StrConcat (  struct StrView_24  field0 ,  struct StrView_24  field1 ) {
    return ( struct StrConcat_129 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_128 {
    struct StrConcat_129  field0;
    struct Char_17  field1;
};

static struct StrConcat_128 StrConcat_128_StrConcat (  struct StrConcat_129  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_128 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str130 (    struct StrConcat_129  self1428 ) {
    struct StrConcat_129  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str88 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str127 (    struct StrConcat_128  self1428 ) {
    struct StrConcat_128  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str130 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic126 (    struct StrView_24  errmsg1632 ) {
    ( (  print_dash_str127 ) ( ( ( StrConcat_128_StrConcat ) ( ( ( StrConcat_129_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1632 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  int64_t   undefined131 (  ) {
    int64_t  temp132;
    return (  temp132 );
}

static  int64_t   or_dash_fail124 (    struct Maybe_125  x1645 ,    struct StrView_24  errmsg1647 ) {
    struct Maybe_125  dref1648 = (  x1645 );
    if ( dref1648.tag == Maybe_125_None_t ) {
        ( (  panic126 ) ( (  errmsg1647 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else {
        if ( dref1648.tag == Maybe_125_Just_t ) {
            return ( dref1648 .stuff .Maybe_125_Just_s .field0 );
        }
    }
}

struct StrViewIter_134 {
    struct StrView_24  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_134   into_dash_iter136 (    struct StrView_24  self1293 ) {
    return ( (struct StrViewIter_134) { .f_ds = (  self1293 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_134   chars135 (    struct StrView_24  self1307 ) {
    return ( (  into_dash_iter136 ) ( (  self1307 ) ) );
}

struct Maybe_137 {
    enum {
        Maybe_137_None_t,
        Maybe_137_Just_t,
    } tag;
    union {
        struct {
            struct Char_17  field0;
        } Maybe_137_Just_s;
    } stuff;
};

static struct Maybe_137 Maybe_137_Just (  struct Char_17  field0 ) {
    return ( struct Maybe_137 ) { .tag = Maybe_137_Just_t, .stuff = { .Maybe_137_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_137   next139 (    struct StrViewIter_134 *  self1299 ) {
    if ( (  cmp52 ( ( ( * (  self1299 ) ) .f_i ) , ( ( ( ( * (  self1299 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    uint8_t *  char_dash_ptr1300 = ( ( (  offset_dash_ptr120 ) ( ( (  cast113 ) ( ( ( ( ( * (  self1299 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i6454 ) ( ( ( * (  self1299 ) ) .f_i ) ) ) ) ) );
    struct Char_17  char1301 = ( (  scan_dash_from_dash_mem114 ) ( (  char_dash_ptr1300 ) ) );
    (*  self1299 ) .f_i = (  op_dash_add75 ( ( ( * (  self1299 ) ) .f_i ) , ( (  char1301 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_137_Just ) ( (  char1301 ) ) );
}

static  struct StrViewIter_134   into_dash_iter141 (    struct StrViewIter_134  self1296 ) {
    return (  self1296 );
}

static  struct Maybe_137   head138 (    struct StrViewIter_134  it1092 ) {
    struct StrViewIter_134  temp140 = ( (  into_dash_iter141 ) ( (  it1092 ) ) );
    return ( (  next139 ) ( ( &temp140 ) ) );
}

static  struct Maybe_125   reduce142 (    struct StrViewIter_134  iterable1043 ,    struct Maybe_125  base1045 ,    struct Maybe_125 (*  fun1047 )(    struct Char_17  ,    struct Maybe_125  ) ) {
    struct Maybe_125  x1048 = (  base1045 );
    struct StrViewIter_134  it1049 = ( (  into_dash_iter141 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1050 = ( (  next139 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_137_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_137_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    struct Maybe_125  temp143;
    return (  temp143 );
}

struct Maybe_145 {
    enum {
        Maybe_145_None_t,
        Maybe_145_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_145_Just_s;
    } stuff;
};

static struct Maybe_145 Maybe_145_Just (  int32_t  field0 ) {
    return ( struct Maybe_145 ) { .tag = Maybe_145_Just_t, .stuff = { .Maybe_145_Just_s = { .field0 = field0 } } };
};

static  bool   is_dash_digit147 (    struct Char_17  c2271 ) {
    return ( (  cmp116 ( ( (  char_dash_u8122 ) ( (  c2271 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp116 ( ( (  char_dash_u8122 ) ( (  c2271 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  void *   cast_dash_ptr153 (    int32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of154 (    int32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int32_t   zeroed151 (  ) {
    int32_t  temp152;
    int32_t  x559 = (  temp152 );
    ( ( memset ) ( ( (  cast_dash_ptr153 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of154 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  uint8_t *   cast155 (    int32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed149 (    uint8_t  x562 ) {
    int32_t  temp150 = ( (  zeroed151 ) ( ) );
    int32_t *  y563 = ( &temp150 );
    uint8_t *  yp564 = ( (  cast155 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  int32_t   u8_dash_i32148 (    uint8_t  x649 ) {
    return ( (  cast_dash_on_dash_zeroed149 ) ( (  x649 ) ) );
}

static  uint8_t   op_dash_sub156 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) - (  r257 ) );
}

static  struct Maybe_145   parse_dash_digit146 (    struct Char_17  c2274 ) {
    if ( ( (  is_dash_digit147 ) ( (  c2274 ) ) ) ) {
        return ( ( Maybe_145_Just ) ( ( (  u8_dash_i32148 ) ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2274 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_145) { .tag = Maybe_145_None_t } );
    }
}

static  int64_t   op_dash_add157 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) + (  r186 ) );
}

static  int64_t   i32_dash_i64158 (    int32_t  x592 ) {
    return ( (int64_t ) (  x592 ) );
}

static  struct Maybe_125   sequence_dash_maybe144 (    struct Char_17  e2280 ,    struct Maybe_125  b2282 ) {
    struct Maybe_125  dref2283 = (  b2282 );
    if ( dref2283.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref2283.tag == Maybe_125_Just_t ) {
            struct Maybe_145  dref2285 = ( (  parse_dash_digit146 ) ( (  e2280 ) ) );
            if ( dref2285.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
            }
            else {
                if ( dref2285.tag == Maybe_145_Just_t ) {
                    return ( ( Maybe_125_Just ) ( (  op_dash_add157 ( (  op_dash_mul40 ( ( dref2283 .stuff .Maybe_125_Just_s .field0 ) , (  from_dash_integral42 ( 10 ) ) ) ) , ( (  i32_dash_i64158 ) ( ( dref2285 .stuff .Maybe_145_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_125   parse_dash_int133 (    struct StrView_24  s2277 ) {
    struct StrViewIter_134  cs2287 = ( (  chars135 ) ( (  s2277 ) ) );
    struct Maybe_137  dref2288 = ( (  head138 ) ( (  cs2287 ) ) );
    if ( dref2288.tag == Maybe_137_Just_t ) {
        return ( (  reduce142 ) ( (  cs2287 ) ,  ( ( Maybe_125_Just ) ( (  from_dash_integral42 ( 0 ) ) ) ) ,  (  sequence_dash_maybe144 ) ) );
    }
    else {
        if ( dref2288.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
}

static  struct StrView_24   undefined160 (  ) {
    struct StrView_24  temp161;
    return (  temp161 );
}

static  struct StrView_24   or_dash_fail159 (    struct Maybe_58  x1645 ,    struct StrView_24  errmsg1647 ) {
    struct Maybe_58  dref1648 = (  x1645 );
    if ( dref1648.tag == Maybe_58_None_t ) {
        ( (  panic126 ) ( (  errmsg1647 ) ) );
        return ( (  undefined160 ) ( ) );
    }
    else {
        if ( dref1648.tag == Maybe_58_Just_t ) {
            return ( dref1648 .stuff .Maybe_58_Just_s .field0 );
        }
    }
}

struct LineIter_163 {
    struct StrView_24  f_og;
    size_t  f_last;
};

struct Maybe_168 {
    enum {
        Maybe_168_None_t,
        Maybe_168_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_168_Just_s;
    } stuff;
};

static struct Maybe_168 Maybe_168_Just (  uint8_t  field0 ) {
    return ( struct Maybe_168 ) { .tag = Maybe_168_Just_t, .stuff = { .Maybe_168_Just_s = { .field0 = field0 } } };
};

static  uint8_t   undefined169 (  ) {
    uint8_t  temp170;
    return (  temp170 );
}

static  uint8_t   or_dash_fail167 (    struct Maybe_168  x1645 ,    struct StrConcat_80  errmsg1647 ) {
    struct Maybe_168  dref1648 = (  x1645 );
    if ( dref1648.tag == Maybe_168_None_t ) {
        ( (  panic79 ) ( (  errmsg1647 ) ) );
        return ( (  undefined169 ) ( ) );
    }
    else {
        if ( dref1648.tag == Maybe_168_Just_t ) {
            return ( dref1648 .stuff .Maybe_168_Just_s .field0 );
        }
    }
}

static  struct Maybe_168   try_dash_get171 (    struct Slice_7  slice1683 ,    size_t  i1685 ) {
    if ( ( (  cmp52 ( (  i1685 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1685 ) , ( (  slice1683 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_168) { .tag = Maybe_168_None_t } );
    }
    uint8_t *  elem_dash_ptr1686 = ( (  offset_dash_ptr120 ) ( ( (  slice1683 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1685 ) ) ) ) );
    return ( ( Maybe_168_Just ) ( ( * (  elem_dash_ptr1686 ) ) ) );
}

static  uint8_t   get166 (    struct Slice_7  slice1689 ,    size_t  i1691 ) {
    return ( (  or_dash_fail167 ) ( ( (  try_dash_get171 ) ( (  slice1689 ) ,  (  i1691 ) ) ) ,  ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1691 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1689 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get165 (    struct Slice_7  self1787 ,    size_t  idx1789 ) {
    return ( (  get166 ) ( (  self1787 ) ,  (  idx1789 ) ) );
}

static  size_t   min174 (    size_t  l1186 ,    size_t  r1188 ) {
    if ( (  cmp52 ( (  l1186 ) , (  r1188 ) ) == 0 ) ) {
        return (  l1186 );
    } else {
        return (  r1188 );
    }
}

static  struct Slice_7   subslice173 (    struct Slice_7  slice1702 ,    size_t  from1704 ,    size_t  to1706 ) {
    uint8_t *  begin_dash_ptr1707 = ( (  offset_dash_ptr120 ) ( ( (  slice1702 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  from1704 ) ) ) ) );
    if ( ( (  cmp52 ( (  from1704 ) , (  to1706 ) ) != 0 ) || (  cmp52 ( (  from1704 ) , ( (  slice1702 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_7) { .f_ptr = (  begin_dash_ptr1707 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1708 = (  op_dash_sub43 ( ( (  min174 ) ( (  to1706 ) ,  ( (  slice1702 ) .f_count ) ) ) , (  from1704 ) ) );
    return ( (struct Slice_7) { .f_ptr = (  begin_dash_ptr1707 ) , .f_count = (  count1708 ) } );
}

static  struct StrView_24   byte_dash_substr172 (    struct StrView_24  s2074 ,    size_t  from2076 ,    size_t  to2078 ) {
    return ( (struct StrView_24) { .f_contents = ( (  subslice173 ) ( ( (  s2074 ) .f_contents ) ,  (  from2076 ) ,  (  to2078 ) ) ) } );
}

static  struct Maybe_58   next164 (    struct LineIter_163 *  self2248 ) {
    if ( ( (  cmp52 ( ( ( * (  self2248 ) ) .f_last ) , ( ( ( ( * (  self2248 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq99 ( (  elem_dash_get165 ( ( ( ( * (  self2248 ) ) .f_og ) .f_contents ) , ( ( * (  self2248 ) ) .f_last ) ) ) , ( (  char_dash_u8122 ) ( ( (  nullchar123 ) ( ) ) ) ) ) ) ) ) {
        return ( (struct Maybe_58) { .tag = Maybe_58_None_t } );
    }
    size_t  i2249 = ( ( * (  self2248 ) ) .f_last );
    while ( ( (  cmp52 ( (  i2249 ) , ( ( ( ( * (  self2248 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq99 ( ( (  get166 ) ( ( ( ( * (  self2248 ) ) .f_og ) .f_contents ) ,  (  i2249 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2249 = (  op_dash_add75 ( (  i2249 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_24  line2250 = ( (  byte_dash_substr172 ) ( ( ( * (  self2248 ) ) .f_og ) ,  ( ( * (  self2248 ) ) .f_last ) ,  (  i2249 ) ) );
    if ( (  cmp52 ( (  i2249 ) , ( ( ( ( * (  self2248 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2249 = (  op_dash_add75 ( (  i2249 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2248 ) .f_last = (  i2249 );
    return ( ( Maybe_58_Just ) ( (  line2250 ) ) );
}

static  struct LineIter_163   into_dash_iter176 (    struct LineIter_163  self2245 ) {
    return (  self2245 );
}

static  struct Maybe_58   head162 (    struct LineIter_163  it1092 ) {
    struct LineIter_163  temp175 = ( (  into_dash_iter176 ) ( (  it1092 ) ) );
    return ( (  next164 ) ( ( &temp175 ) ) );
}

static  struct LineIter_163   lines177 (    struct StrView_24  s2242 ) {
    return ( (struct LineIter_163) { .f_og = (  s2242 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr180 (    uint8_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_4   free179 (    enum CAllocator_6  dref1873 ,    struct Slice_7  slice1875 ) {
    if (!(  dref1873 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr180 ) ( ( (  slice1875 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free178 (    struct StrView_24  s2058 ,    enum CAllocator_6  al2060 ) {
    ( (  free179 ) ( (  al2060 ) ,  ( (struct Slice_7) { .f_ptr = ( ( (  s2058 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_4_Unit );
}

struct envunion182 {
    const char*  (*fun) (  struct env22*  ,    struct StrConcat_20  ,    enum CAllocator_6  );
    struct env22 env;
};

static  const char*   cast184 (    uint8_t *  x356 ) {
    return ( (const char* ) (  x356 ) );
}

static  void *   cast_dash_ptr194 (    uint8_t * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of195 (    uint8_t *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint8_t *   zeroed192 (  ) {
    uint8_t *  temp193;
    uint8_t *  x559 = (  temp193 );
    ( ( memset ) ( ( (  cast_dash_ptr194 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of195 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  uint8_t *   null_dash_ptr191 (  ) {
    return ( (  zeroed192 ) ( ) );
}

static  struct Slice_7   empty190 (  ) {
    return ( (struct Slice_7) { .f_ptr = ( (  null_dash_ptr191 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_5   mk189 (    enum CAllocator_6  al1945 ) {
    struct Slice_7  elements1946 = ( (  empty190 ) ( ) );
    return ( (struct List_5) { .f_al = (  al1945 ) , .f_elements = (  elements1946 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrBuilder_14   mk188 (    enum CAllocator_6  al2578 ) {
    return ( (struct StrBuilder_14) { .f_chars = ( (  mk189 ) ( (  al2578 ) ) ) } );
}

struct IntStrIter_200 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

enum EmptyIter_202 {
    EmptyIter_202_EmptyIter,
};

struct AppendIter_201 {
    enum EmptyIter_202  f_it;
    struct Char_17  f_elem;
    bool  f_appended;
};

struct StrConcatIter_199 {
    struct IntStrIter_200  f_left;
    struct AppendIter_201  f_right;
};

struct env203 {
    struct StrBuilder_14 *  builder2560;
    struct env12 envinst12;
};

struct envunion204 {
    enum Unit_4  (*fun) (  struct env203*  ,    struct Char_17  );
    struct env203 env;
};

static  struct StrConcatIter_199   into_dash_iter206 (    struct StrConcatIter_199  self1416 ) {
    return (  self1416 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp209 (    int32_t  l159 ,    int32_t  r161 ) {
    return ( builtin_int32_tcmp( (  l159 ) , (  r161 ) ) );
}

struct Range_212 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_212 Range_212_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_212 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env213 {
    int64_t  base1160;
    ;
};

struct envunion214 {
    int64_t  (*fun) (  struct env213*  ,    int32_t  ,    int64_t  );
    struct env213 env;
};

struct RangeIter_215 {
    struct Range_212  field0;
    int32_t  field1;
};

static struct RangeIter_215 RangeIter_215_RangeIter (  struct Range_212  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_215 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_215   into_dash_iter216 (    struct Range_212  dref846 ) {
    return ( ( RangeIter_215_RangeIter ) ( ( ( Range_212_Range ) ( ( dref846 .field0 ) ,  ( dref846 .field1 ) ) ) ,  ( dref846 .field0 ) ) );
}

static  int32_t   op_dash_add218 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) + (  r209 ) );
}

static  struct Maybe_145   next217 (    struct RangeIter_215 *  self854 ) {
    struct RangeIter_215  dref855 = ( * (  self854 ) );
    if ( true ) {
        if ( (  cmp209 ( ( dref855 .field1 ) , ( dref855 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_145) { .tag = Maybe_145_None_t } );
        }
        struct Maybe_145  x859 = ( ( Maybe_145_Just ) ( ( dref855 .field1 ) ) );
        (*  self854 ) = ( ( RangeIter_215_RangeIter ) ( ( ( Range_212_Range ) ( ( dref855 .field0 .field0 ) ,  ( dref855 .field0 .field1 ) ) ) ,  (  op_dash_add218 ( ( dref855 .field1 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
        return (  x859 );
    }
}

static  int64_t   reduce211 (    struct Range_212  iterable1043 ,    int64_t  base1045 ,   struct envunion214  fun1047 ) {
    int64_t  x1048 = (  base1045 );
    struct RangeIter_215  it1049 = ( (  into_dash_iter216 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1050 = ( (  next217 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_145_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_145_Just_t ) {
                struct envunion214  temp219 = (  fun1047 );
                x1048 = ( temp219.fun ( &temp219.env ,  ( dref1050 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    int64_t  temp220;
    return (  temp220 );
}

static  struct Range_212   to221 (    int32_t  from837 ,    int32_t  to839 ) {
    return ( ( Range_212_Range ) ( (  from837 ) ,  (  to839 ) ) );
}

static  int32_t   op_dash_sub222 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) - (  r214 ) );
}

static  int64_t   lam223 (   struct env213* env ,    int32_t  item1164 ,    int64_t  x1166 ) {
    return (  op_dash_mul40 ( (  x1166 ) , ( env->base1160 ) ) );
}

static  int64_t   pow210 (    int64_t  base1160 ,    int32_t  p1162 ) {
    struct env213 envinst213 = {
        .base1160 =  base1160 ,
    };
    return ( (  reduce211 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1162 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral42 ( 1 ) ) ,  ( (struct envunion214){ .fun = (  int64_t  (*) (  struct env213*  ,    int32_t  ,    int64_t  ) )lam223 , .env =  envinst213 } ) ) );
}

static  int64_t   op_dash_div224 (    int64_t  l199 ,    int64_t  r201 ) {
    return ( (  l199 ) / (  r201 ) );
}

static  uint8_t   cast225 (    int64_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  int64_t   op_dash_sub226 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) - (  r191 ) );
}

static  void *   cast_dash_ptr234 (    size_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of235 (    size_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  size_t   zeroed232 (  ) {
    size_t  temp233;
    size_t  x559 = (  temp233 );
    ( ( memset ) ( ( (  cast_dash_ptr234 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of235 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  uint8_t *   cast236 (    size_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed230 (    uint8_t  x562 ) {
    size_t  temp231 = ( (  zeroed232 ) ( ) );
    size_t *  y563 = ( &temp231 );
    uint8_t *  yp564 = ( (  cast236 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  size_t   u8_dash_size229 (    uint8_t  x643 ) {
    return ( (  cast_dash_on_dash_zeroed230 ) ( (  x643 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer228 (    uint8_t *  ptr661 ,    uint8_t  b663 ) {
    size_t  s664 = ( ( (size_t ) (  ptr661 ) ) );
    size_t  exp665 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add75 ( (  op_dash_sub43 ( (  s664 ) , ( (  u8_dash_size229 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer100 ) ( (  ptr661 ) ) ) ) ) ) ) , (  op_dash_mul74 ( (  exp665 ) , ( (  u8_dash_size229 ) ( (  b663 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast237 (    size_t  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  struct Char_17   from_dash_u8227 (    uint8_t  b690 ) {
    uint8_t *  ptr691 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer228 ) ( ( ( (  cast237 ) ( ( (  u8_dash_size229 ) ( (  b690 ) ) ) ) ) ) ,  (  from_dash_integral103 ( 103 ) ) ) );
    return ( (struct Char_17) { .f_ptr = (  ptr691 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_137   next208 (    struct IntStrIter_200 *  self1347 ) {
    if ( ( ( * (  self1347 ) ) .f_negative ) ) {
        (*  self1347 ) .f_negative = ( false );
        return ( ( Maybe_137_Just ) ( ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp209 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    int64_t  trim_dash_down1348 = ( (  pow210 ) ( (  from_dash_integral42 ( 10 ) ) ,  (  op_dash_sub222 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    int64_t  upper1349 = (  op_dash_div224 ( ( ( * (  self1347 ) ) .f_int ) , (  trim_dash_down1348 ) ) );
    int64_t  upper_dash_mask1350 = (  op_dash_mul40 ( (  op_dash_div224 ( (  upper1349 ) , (  from_dash_integral42 ( 10 ) ) ) ) , (  from_dash_integral42 ( 10 ) ) ) );
    uint8_t  digit1351 = ( ( (  cast225 ) ( (  op_dash_sub226 ( (  upper1349 ) , (  upper_dash_mask1350 ) ) ) ) ) );
    (*  self1347 ) .f_len = (  op_dash_sub222 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1352 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1351 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1352 ) ) );
}

static  struct Maybe_137   next239 (    enum EmptyIter_202 *  dref755 ) {
    return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
}

static  struct Maybe_137   next238 (    struct AppendIter_201 *  self985 ) {
    struct Maybe_137  dref986 = ( (  next239 ) ( ( & ( ( * (  self985 ) ) .f_it ) ) ) );
    if ( dref986.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref986 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref986.tag == Maybe_137_None_t ) {
            if ( ( ! ( ( * (  self985 ) ) .f_appended ) ) ) {
                (*  self985 ) .f_appended = ( true );
                return ( ( Maybe_137_Just ) ( ( ( * (  self985 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
        }
    }
}

static  struct Maybe_137   next207 (    struct StrConcatIter_199 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next208 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each198 (    struct StrConcatIter_199  iterable1024 ,   struct envunion204  fun1026 ) {
    struct StrConcatIter_199  temp205 = ( (  into_dash_iter206 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_199 *  it1027 = ( &temp205 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next207 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                struct envunion204  temp240 = (  fun1026 );
                ( temp240.fun ( &temp240.env ,  ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp245 (    int64_t  l154 ,    int64_t  r156 ) {
    return ( builtin_int64_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int64_t   op_dash_neg246 (    int64_t  l204 ) {
    return ( (  from_dash_integral42 ( 0 ) ) - (  l204 ) );
}

static  bool   eq248 (    int64_t  l101 ,    int64_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  int32_t   count_dash_digits247 (    int64_t  self1355 ) {
    if ( (  eq248 ( (  self1355 ) , (  from_dash_integral42 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1356 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp245 ( (  self1355 ) , (  from_dash_integral42 ( 0 ) ) ) == 2 ) ) {
        self1355 = (  op_dash_div224 ( (  self1355 ) , (  from_dash_integral42 ( 10 ) ) ) );
        digits1356 = (  op_dash_add218 ( (  digits1356 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1356 );
}

static  struct IntStrIter_200   int_dash_iter244 (    int64_t  int1359 ) {
    if ( (  cmp245 ( (  int1359 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_200) { .f_int = (  op_dash_neg246 ( (  int1359 ) ) ) , .f_len = ( (  count_dash_digits247 ) ( (  op_dash_neg246 ( (  int1359 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_200) { .f_int = (  int1359 ) , .f_len = ( (  count_dash_digits247 ) ( (  int1359 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_200   chars243 (    int64_t  self1386 ) {
    return ( (  int_dash_iter244 ) ( (  self1386 ) ) );
}

static  enum EmptyIter_202   into_dash_iter253 (    enum EmptyIter_202  self753 ) {
    return (  self753 );
}

static  struct AppendIter_201   append252 (    enum EmptyIter_202  it969 ,    struct Char_17  e971 ) {
    return ( (struct AppendIter_201) { .f_it = ( (  into_dash_iter253 ) ( (  it969 ) ) ) , .f_elem = (  e971 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_201   cons251 (    enum EmptyIter_202  it974 ,    struct Char_17  e976 ) {
    return ( (  append252 ) ( (  it974 ) ,  (  e976 ) ) );
}

static  enum EmptyIter_202   nil254 (  ) {
    return ( EmptyIter_202_EmptyIter );
}

static  struct AppendIter_201   single250 (    struct Char_17  e979 ) {
    return ( (  cons251 ) ( ( (  nil254 ) ( ) ) ,  (  e979 ) ) );
}

static  struct AppendIter_201   chars249 (    struct Char_17  self1332 ) {
    return ( (  single250 ) ( (  self1332 ) ) );
}

static  struct StrConcatIter_199   into_dash_iter242 (    struct StrConcat_20  dref1423 ) {
    return ( (struct StrConcatIter_199) { .f_left = ( (  chars243 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_199   chars241 (    struct StrConcat_20  self1434 ) {
    return ( (  into_dash_iter242 ) ( (  self1434 ) ) );
}

struct env263 {
    struct env2 envinst2;
    struct List_5 *  list2004;
};

struct envunion264 {
    enum Unit_4  (*fun) (  struct env263*  ,    uint8_t  );
    struct env263 env;
};

struct SliceIter_265 {
    struct Slice_7  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_265   into_dash_iter267 (    struct Slice_7  self1742 ) {
    return ( (struct SliceIter_265) { .f_slice = (  self1742 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_168   next268 (    struct SliceIter_265 *  self1748 ) {
    size_t  off1749 = ( ( * (  self1748 ) ) .f_current_dash_offset );
    if ( (  cmp52 ( (  op_dash_add75 ( (  off1749 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1748 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_168) { .tag = Maybe_168_None_t } );
    }
    uint8_t  elem1750 = ( * ( (  offset_dash_ptr120 ) ( ( ( ( * (  self1748 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  off1749 ) ) ) ) ) );
    (*  self1748 ) .f_current_dash_offset = (  op_dash_add75 ( (  off1749 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_168_Just ) ( (  elem1750 ) ) );
}

static  enum Unit_4   for_dash_each262 (    struct Slice_7  iterable1024 ,   struct envunion264  fun1026 ) {
    struct SliceIter_265  temp266 = ( (  into_dash_iter267 ) ( (  iterable1024 ) ) );
    struct SliceIter_265 *  it1027 = ( &temp266 );
    while ( ( true ) ) {
        struct Maybe_168  dref1028 = ( (  next268 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_168_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_168_Just_t ) {
                struct envunion264  temp269 = (  fun1026 );
                ( temp269.fun ( &temp269.env ,  ( dref1028 .stuff .Maybe_168_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  bool   eq275 (    size_t  l126 ,    size_t  r128 ) {
    return ( (  l126 ) == (  r128 ) );
}

struct env276 {
    ;
    ;
    struct Slice_7  new_dash_slice1956;
};

struct Tuple2_278 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_278 Tuple2_278_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_278 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion277 {
    enum Unit_4  (*fun) (  struct env276*  ,    struct Tuple2_278  );
    struct env276 env;
};

static  enum Unit_4   lam279 (   struct env276* env ,    struct Tuple2_278  dref1957 ) {
    return ( (  set77 ) ( ( env->new_dash_slice1956 ) ,  ( (  i32_dash_size76 ) ( ( dref1957 .field1 ) ) ) ,  ( dref1957 .field0 ) ) );
}

struct FromIter_282 {
    int32_t  f_from;
};

struct Zip_281 {
    struct SliceIter_265  f_left_dash_it;
    struct FromIter_282  f_right_dash_it;
};

static  struct Zip_281   into_dash_iter284 (    struct Zip_281  self874 ) {
    return (  self874 );
}

struct Maybe_285 {
    enum {
        Maybe_285_None_t,
        Maybe_285_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_278  field0;
        } Maybe_285_Just_s;
    } stuff;
};

static struct Maybe_285 Maybe_285_Just (  struct Tuple2_278  field0 ) {
    return ( struct Maybe_285 ) { .tag = Maybe_285_Just_t, .stuff = { .Maybe_285_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_145   next287 (    struct FromIter_282 *  dref868 ) {
    int32_t  v870 = ( ( (* dref868 ) ) .f_from );
    (* dref868 ) .f_from = (  op_dash_add218 ( ( ( (* dref868 ) ) .f_from ) , (  from_dash_integral49 ( 1 ) ) ) );
    return ( ( Maybe_145_Just ) ( (  v870 ) ) );
}

static  struct Maybe_285   next286 (    struct Zip_281 *  self877 ) {
    struct Zip_281  copy878 = ( * (  self877 ) );
    while ( ( true ) ) {
        struct Maybe_168  dref879 = ( (  next268 ) ( ( & ( (  copy878 ) .f_left_dash_it ) ) ) );
        if ( dref879.tag == Maybe_168_None_t ) {
            return ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
        }
        else {
            if ( dref879.tag == Maybe_168_Just_t ) {
                struct Maybe_145  dref881 = ( (  next287 ) ( ( & ( (  copy878 ) .f_right_dash_it ) ) ) );
                if ( dref881.tag == Maybe_145_None_t ) {
                    return ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
                }
                else {
                    if ( dref881.tag == Maybe_145_Just_t ) {
                        ( (  next268 ) ( ( & ( ( * (  self877 ) ) .f_left_dash_it ) ) ) );
                        ( (  next287 ) ( ( & ( ( * (  self877 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_285_Just ) ( ( ( Tuple2_278_Tuple2 ) ( ( dref879 .stuff .Maybe_168_Just_s .field0 ) ,  ( dref881 .stuff .Maybe_145_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_4   for_dash_each280 (    struct Zip_281  iterable1024 ,   struct envunion277  fun1026 ) {
    struct Zip_281  temp283 = ( (  into_dash_iter284 ) ( (  iterable1024 ) ) );
    struct Zip_281 *  it1027 = ( &temp283 );
    while ( ( true ) ) {
        struct Maybe_285  dref1028 = ( (  next286 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_285_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_285_Just_t ) {
                struct envunion277  temp288 = (  fun1026 );
                ( temp288.fun ( &temp288.env ,  ( dref1028 .stuff .Maybe_285_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct FromIter_282   into_dash_iter290 (    struct FromIter_282  it866 ) {
    return (  it866 );
}

static  struct Zip_281   zip289 (    struct Slice_7  left885 ,    struct FromIter_282  right887 ) {
    struct SliceIter_265  left_dash_it888 = ( (  into_dash_iter267 ) ( (  left885 ) ) );
    struct FromIter_282  right_dash_it889 = ( (  into_dash_iter290 ) ( (  right887 ) ) );
    return ( (struct Zip_281) { .f_left_dash_it = (  left_dash_it888 ) , .f_right_dash_it = (  right_dash_it889 ) } );
}

static  struct FromIter_282   from291 (    int32_t  f863 ) {
    return ( (struct FromIter_282) { .f_from = (  f863 ) } );
}

static  enum Unit_4   grow_dash_if_dash_full274 (   struct env1* env ,    struct List_5 *  list1955 ) {
    if ( (  eq275 ( ( ( * (  list1955 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list1955 ) .f_elements = ( (  allocate69 ) ( ( ( * (  list1955 ) ) .f_al ) ,  ( env->starting_dash_size1950 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list1955 ) ) .f_count ) , ( ( ( * (  list1955 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_7  new_dash_slice1956 = ( (  allocate69 ) ( ( ( * (  list1955 ) ) .f_al ) ,  (  op_dash_mul74 ( ( ( * (  list1955 ) ) .f_count ) , ( env->growth_dash_factor1951 ) ) ) ) );
            struct env276 envinst276 = {
                .new_dash_slice1956 =  new_dash_slice1956 ,
            };
            struct envunion277  fun1960 = ( (struct envunion277){ .fun = (  enum Unit_4  (*) (  struct env276*  ,    struct Tuple2_278  ) )lam279 , .env =  envinst276 } );
            ( (  for_dash_each280 ) ( ( (  zip289 ) ( ( ( * (  list1955 ) ) .f_elements ) ,  ( (  from291 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) ,  (  fun1960 ) ) );
            ( (  free179 ) ( ( ( * (  list1955 ) ) .f_al ) ,  ( ( * (  list1955 ) ) .f_elements ) ) );
            (*  list1955 ) .f_elements = (  new_dash_slice1956 );
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   add272 (   struct env2* env ,    struct List_5 *  list1963 ,    uint8_t  elem1965 ) {
    struct envunion3  temp273 = ( (struct envunion3){ .fun = (  enum Unit_4  (*) (  struct env1*  ,    struct List_5 *  ) )grow_dash_if_dash_full274 , .env =  env->envinst1 } );
    ( temp273.fun ( &temp273.env ,  (  list1963 ) ) );
    ( (  set77 ) ( ( ( * (  list1963 ) ) .f_elements ) ,  ( ( * (  list1963 ) ) .f_count ) ,  (  elem1965 ) ) );
    (*  list1963 ) .f_count = (  op_dash_add75 ( ( ( * (  list1963 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam270 (   struct env263* env ,    uint8_t  x2008 ) {
    struct envunion9  temp271 = ( (struct envunion9){ .fun = (  enum Unit_4  (*) (  struct env2*  ,    struct List_5 *  ,    uint8_t  ) )add272 , .env =  env->envinst2 } );
    return ( temp271.fun ( &temp271.env ,  ( env->list2004 ) ,  (  x2008 ) ) );
}

static  enum Unit_4   add_dash_all261 (   struct env8* env ,    struct List_5 *  list2004 ,    struct Slice_7  it2006 ) {
    struct env263 envinst263 = {
        .envinst2 = env->envinst2 ,
        .list2004 =  list2004 ,
    };
    ( (  for_dash_each262 ) ( (  it2006 ) ,  ( (struct envunion264){ .fun = (  enum Unit_4  (*) (  struct env263*  ,    uint8_t  ) )lam270 , .env =  envinst263 } ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   write_dash_slice259 (   struct env10* env ,    struct StrBuilder_14 *  builder2550 ,    struct Slice_7  s2552 ) {
    struct envunion11  temp260 = ( (struct envunion11){ .fun = (  enum Unit_4  (*) (  struct env8*  ,    struct List_5 *  ,    struct Slice_7  ) )add_dash_all261 , .env =  env->envinst8 } );
    ( temp260.fun ( &temp260.env ,  ( & ( ( * (  builder2550 ) ) .f_chars ) ) ,  (  s2552 ) ) );
    return ( Unit_4_Unit );
}

static  struct Slice_7   from_dash_char292 (    struct Char_17  c1855 ,    uint8_t *  buf1857 ) {
    struct CharDestructured_97  dref1858 = ( (  destructure98 ) ( (  c1855 ) ) );
    if ( dref1858.tag == CharDestructured_97_Ref_t ) {
        return ( (struct Slice_7) { .f_ptr = ( ( dref1858 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1858 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1858.tag == CharDestructured_97_Scalar_t ) {
            if ( (  cmp106 ( ( dref1858 .stuff .CharDestructured_97_Scalar_s .field0 ) , (  from_dash_integral107 ( 127 ) ) ) == 2 ) ) {
                const char*  temp293 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp293);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            (*  buf1857 ) = ( (  u32_dash_u8109 ) ( ( dref1858 .stuff .CharDestructured_97_Scalar_s .field0 ) ) );
            return ( (struct Slice_7) { .f_ptr = (  buf1857 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_4   write_dash_char257 (   struct env12* env ,    struct StrBuilder_14 *  builder2555 ,    struct Char_17  c2557 ) {
    struct envunion13  temp258 = ( (struct envunion13){ .fun = (  enum Unit_4  (*) (  struct env10*  ,    struct StrBuilder_14 *  ,    struct Slice_7  ) )write_dash_slice259 , .env =  env->envinst10 } );
    uint8_t  temp295;
    uint8_t  temp294 = (  temp295 );
    ( temp258.fun ( &temp258.env ,  (  builder2555 ) ,  ( (  from_dash_char292 ) ( (  c2557 ) ,  ( &temp294 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam255 (   struct env203* env ,    struct Char_17  c2564 ) {
    struct envunion16  temp256 = ( (struct envunion16){ .fun = (  enum Unit_4  (*) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  ) )write_dash_char257 , .env =  env->envinst12 } );
    return ( temp256.fun ( &temp256.env ,  ( env->builder2560 ) ,  (  c2564 ) ) );
}

static  enum Unit_4   write197 (   struct env15* env ,    struct StrBuilder_14 *  builder2560 ,    struct StrConcat_20  s2562 ) {
    struct env203 envinst203 = {
        .builder2560 =  builder2560 ,
        .envinst12 = env->envinst12 ,
    };
    ( (  for_dash_each198 ) ( ( (  chars241 ) ( (  s2562 ) ) ) ,  ( (struct envunion204){ .fun = (  enum Unit_4  (*) (  struct env203*  ,    struct Char_17  ) )lam255 , .env =  envinst203 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Slice_7   cast298 (    struct Slice_7  x356 ) {
    return ( (struct Slice_7 ) (  x356 ) );
}

static  struct StrView_24   as_dash_str297 (    struct StrBuilder_14 *  builder2584 ) {
    return ( (struct StrView_24) { .f_contents = ( (  cast298 ) ( ( (  subslice173 ) ( ( ( ( * (  builder2584 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2584 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_24   mk_dash_dyn_dash_str186 (   struct env18* env ,    struct StrConcat_20  s2604 ,    enum CAllocator_6  al2606 ) {
    struct StrBuilder_14  temp187 = ( (  mk188 ) ( (  al2606 ) ) );
    struct StrBuilder_14 *  sb2607 = ( &temp187 );
    struct envunion19  temp196 = ( (struct envunion19){ .fun = (  enum Unit_4  (*) (  struct env15*  ,    struct StrBuilder_14 *  ,    struct StrConcat_20  ) )write197 , .env =  env->envinst15 } );
    ( temp196.fun ( &temp196.env ,  (  sb2607 ) ,  (  s2604 ) ) );
    struct envunion21  temp296 = ( (struct envunion21){ .fun = (  enum Unit_4  (*) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  ) )write_dash_char257 , .env =  env->envinst12 } );
    ( temp296.fun ( &temp296.env ,  (  sb2607 ) ,  ( (  nullchar123 ) ( ) ) ) );
    struct StrView_24  dynstr2608 = ( (  as_dash_str297 ) ( (  sb2607 ) ) );
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = ( ( (  dynstr2608 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub43 ( ( ( (  dynstr2608 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  const char*   mk_dash_const_dash_str183 (   struct env22* env ,    struct StrConcat_20  s2611 ,    enum CAllocator_6  al2613 ) {
    struct envunion23  temp185 = ( (struct envunion23){ .fun = (  struct StrView_24  (*) (  struct env18*  ,    struct StrConcat_20  ,    enum CAllocator_6  ) )mk_dash_dyn_dash_str186 , .env =  env->envinst18 } );
    return ( ( (  cast184 ) ( ( ( ( temp185.fun ( &temp185.env ,  (  s2611 ) ,  (  al2613 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct ConstStrIter_301 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_301   into_dash_iter303 (    const char*  self1311 ) {
    return ( (struct ConstStrIter_301) { .f_ogstr = (  self1311 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_301   chars302 (    const char*  self1326 ) {
    return ( (  into_dash_iter303 ) ( (  self1326 ) ) );
}

static  uint8_t *   cast305 (    const char*  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint8_t   cast306 (    int32_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_137   next304 (    struct ConstStrIter_301 *  self1317 ) {
    uint8_t *  char_dash_ptr1318 = ( ( (  cast305 ) ( ( ( * (  self1317 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1319 = ( (  offset_dash_ptr120 ) ( (  char_dash_ptr1318 ) ,  ( (  size_dash_i6454 ) ( ( ( * (  self1317 ) ) .f_i ) ) ) ) );
    if ( (  eq99 ( ( * (  optr1319 ) ) , ( (  cast306 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    struct Char_17  char1320 = ( (  scan_dash_from_dash_mem114 ) ( (  optr1319 ) ) );
    (*  self1317 ) .f_i = (  op_dash_add75 ( ( ( * (  self1317 ) ) .f_i ) , ( (  char1320 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_137_Just ) ( (  char1320 ) ) );
}

static  int32_t   fprintf_dash_char307 (    FILE *  file734 ,    struct Char_17  c736 ) {
    struct CharDestructured_97  dref737 = ( (  destructure98 ) ( (  c736 ) ) );
    if ( dref737.tag == CharDestructured_97_Ref_t ) {
        return ( ( fprintf ) ( (  file734 ) ,  ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3289 ) ( ( ( dref737 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref737 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref737.tag == CharDestructured_97_Scalar_t ) {
            if ( (  cmp106 ( ( dref737 .stuff .CharDestructured_97_Scalar_s .field0 ) , (  from_dash_integral107 ( 127 ) ) ) == 2 ) ) {
                const char*  temp308 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp308);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            return ( ( fprintf ) ( (  file734 ) ,  ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8109 ) ( ( dref737 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each311 (    struct StrViewIter_134  iterable1024 ,    enum Unit_4 (*  fun1026 )(    struct Char_17  ) ) {
    struct StrViewIter_134  temp312 = ( (  into_dash_iter141 ) ( (  iterable1024 ) ) );
    struct StrViewIter_134 *  it1027 = ( &temp312 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next139 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print310 (    struct StrView_24  s1621 ) {
    ( (  for_dash_each311 ) ( ( (  chars135 ) ( (  s1621 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  bool   undefined313 (  ) {
    bool  temp314;
    return (  temp314 );
}

static  bool   unreachable309 (  ) {
    ( (  print310 ) ( ( (  from_dash_string111 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( (  undefined313 ) ( ) );
}

static  bool   try_dash_write_dash_contents300 (    const char*  filename2744 ,    const char*  contents2746 ) {
    FILE *  file2747 = ( ( fopen ) ( (  filename2744 ) ,  ( (  from_dash_charlike60 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null61 ) ( (  file2747 ) ) ) ) {
        return ( false );
    }
    struct ConstStrIter_301  it2748 = ( (  chars302 ) ( (  contents2746 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref2749 = ( (  next304 ) ( ( & (  it2748 ) ) ) );
        if ( dref2749.tag == Maybe_137_None_t ) {
            ( ( fclose ) ( (  file2747 ) ) );
            return ( true );
        }
        else {
            if ( dref2749.tag == Maybe_137_Just_t ) {
                int32_t  chars_dash_written2751 = ( (  fprintf_dash_char307 ) ( (  file2747 ) ,  ( dref2749 .stuff .Maybe_137_Just_s .field0 ) ) );
                if ( (  cmp209 ( (  chars_dash_written2751 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable309 ) ( ) );
}

struct StrConcat_316 {
    struct StrView_24  field0;
    const char*  field1;
};

static struct StrConcat_316 StrConcat_316_StrConcat (  struct StrView_24  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_316 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_319 {
    struct StrView_24  field0;
    struct StrConcat_316  field1;
};

static struct StrConcat_319 StrConcat_319_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_316  field1 ) {
    return ( struct StrConcat_319 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_318 {
    struct StrConcat_319  field0;
    struct Char_17  field1;
};

static struct StrConcat_318 StrConcat_318_StrConcat (  struct StrConcat_319  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_318 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str322 (    const char*  self1323 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1323 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str321 (    struct StrConcat_316  self1428 ) {
    struct StrConcat_316  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str322 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str320 (    struct StrConcat_319  self1428 ) {
    struct StrConcat_319  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str321 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str317 (    struct StrConcat_318  self1428 ) {
    struct StrConcat_318  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str320 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic315 (    struct StrConcat_316  errmsg1632 ) {
    ( (  print_dash_str317 ) ( ( ( StrConcat_318_StrConcat ) ( ( ( StrConcat_319_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1632 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   write_dash_contents299 (    const char*  filename2754 ,    const char*  contents2756 ) {
    if ( ( ! ( (  try_dash_write_dash_contents300 ) ( (  filename2754 ) ,  (  contents2756 ) ) ) ) ) {
        ( (  panic315 ) ( ( ( StrConcat_316_StrConcat ) ( ( (  from_dash_string111 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename2754 ) ) ) ) );
    }
    return ( Unit_4_Unit );
}

struct Slice_325 {
    enum Unit_4 *  f_ptr;
    size_t  f_count;
};

static  void *   cast_dash_ptr326 (    enum Unit_4 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_4   free324 (    enum CAllocator_6  dref1873 ,    struct Slice_325  slice1875 ) {
    if (!(  dref1873 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr326 ) ( ( (  slice1875 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free_dash_const_dash_str323 (    const char*  s2616 ,    enum CAllocator_6  al2618 ) {
    ( (  free324 ) ( (  al2618 ) ,  ( (struct Slice_325) { .f_ptr = ( (enum Unit_4 * ) (  s2616 ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_4_Unit );
}

static  struct ConstStrIter_301   into_dash_iter330 (    struct ConstStrIter_301  self1314 ) {
    return (  self1314 );
}

static  struct Maybe_137   head328 (    struct ConstStrIter_301  it1092 ) {
    struct ConstStrIter_301  temp329 = ( (  into_dash_iter330 ) ( (  it1092 ) ) );
    return ( (  next304 ) ( ( &temp329 ) ) );
}

static  struct Maybe_125   reduce331 (    struct ConstStrIter_301  iterable1043 ,    struct Maybe_125  base1045 ,    struct Maybe_125 (*  fun1047 )(    struct Char_17  ,    struct Maybe_125  ) ) {
    struct Maybe_125  x1048 = (  base1045 );
    struct ConstStrIter_301  it1049 = ( (  into_dash_iter330 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1050 = ( (  next304 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_137_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_137_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    struct Maybe_125  temp332;
    return (  temp332 );
}

static  struct Maybe_125   sequence_dash_maybe333 (    struct Char_17  e2280 ,    struct Maybe_125  b2282 ) {
    struct Maybe_125  dref2283 = (  b2282 );
    if ( dref2283.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref2283.tag == Maybe_125_Just_t ) {
            struct Maybe_145  dref2285 = ( (  parse_dash_digit146 ) ( (  e2280 ) ) );
            if ( dref2285.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
            }
            else {
                if ( dref2285.tag == Maybe_145_Just_t ) {
                    return ( ( Maybe_125_Just ) ( (  op_dash_add157 ( (  op_dash_mul40 ( ( dref2283 .stuff .Maybe_125_Just_s .field0 ) , (  from_dash_integral42 ( 10 ) ) ) ) , ( (  i32_dash_i64158 ) ( ( dref2285 .stuff .Maybe_145_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_125   parse_dash_int327 (    const char*  s2277 ) {
    struct ConstStrIter_301  cs2287 = ( (  chars302 ) ( (  s2277 ) ) );
    struct Maybe_137  dref2288 = ( (  head328 ) ( (  cs2287 ) ) );
    if ( dref2288.tag == Maybe_137_Just_t ) {
        return ( (  reduce331 ) ( (  cs2287 ) ,  ( ( Maybe_125_Just ) ( (  from_dash_integral42 ( 0 ) ) ) ) ,  (  sequence_dash_maybe333 ) ) );
    }
    else {
        if ( dref2288.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
}

struct envunion336 {
    struct Tui_30  (*fun) (  struct env26*  );
    struct env26 env;
};

static  struct Termios_32   undefined340 (  ) {
    struct Termios_32  temp341;
    return (  temp341 );
}

static  int32_t   stdin_dash_fileno342 (  ) {
    return (  from_dash_integral49 ( 0 ) );
}

static  struct termios *   cast_dash_ptr343 (    struct Termios_32 *  p359 ) {
    return ( (struct termios * ) (  p359 ) );
}

static  uint32_t   u32_dash_and344 (    uint32_t  l2629 ,    uint32_t  r2631 ) {
    return ( (  l2629 ) & (  r2631 ) );
}

static  uint32_t   u32_dash_neg345 (    uint32_t  l2634 ) {
    return ( ~ (  l2634 ) );
}

struct Array_347 {
    uint32_t _arr [4];
};

struct ArrayIter_349 {
    struct Array_347  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_349   into_dash_iter350 (    struct Array_347  self2166 ) {
    return ( (struct ArrayIter_349) { .f_backing = (  self2166 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_351 {
    enum {
        Maybe_351_None_t,
        Maybe_351_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_351_Just_s;
    } stuff;
};

static struct Maybe_351 Maybe_351_Just (  uint32_t  field0 ) {
    return ( struct Maybe_351 ) { .tag = Maybe_351_Just_t, .stuff = { .Maybe_351_Just_s = { .field0 = field0 } } };
};

struct StrConcat_357 {
    struct StrConcat_82  field0;
    int32_t  field1;
};

static struct StrConcat_357 StrConcat_357_StrConcat (  struct StrConcat_82  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_357 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_356 {
    struct StrConcat_357  field0;
    struct Char_17  field1;
};

static struct StrConcat_356 StrConcat_356_StrConcat (  struct StrConcat_357  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_356 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_360 {
    struct StrView_24  field0;
    struct StrConcat_356  field1;
};

static struct StrConcat_360 StrConcat_360_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_356  field1 ) {
    return ( struct StrConcat_360 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_359 {
    struct StrConcat_360  field0;
    struct Char_17  field1;
};

static struct StrConcat_359 StrConcat_359_StrConcat (  struct StrConcat_360  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_359 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str364 (    int32_t  self1365 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1365 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str363 (    struct StrConcat_357  self1428 ) {
    struct StrConcat_357  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str92 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str364 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str362 (    struct StrConcat_356  self1428 ) {
    struct StrConcat_356  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str363 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str361 (    struct StrConcat_360  self1428 ) {
    struct StrConcat_360  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str362 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str358 (    struct StrConcat_359  self1428 ) {
    struct StrConcat_359  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str361 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic355 (    struct StrConcat_356  errmsg1632 ) {
    ( (  print_dash_str358 ) ( ( ( StrConcat_359_StrConcat ) ( ( ( StrConcat_360_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1632 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint32_t *   cast_dash_ptr365 (    struct Array_347 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   offset_dash_ptr366 (    uint32_t *  x338 ,    int64_t  count340 ) {
    uint32_t  temp367;
    return ( (uint32_t * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul40 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp367 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr354 (    struct Array_347 *  arr2094 ,    size_t  i2097 ) {
    if ( ( (  cmp52 ( (  i2097 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2097 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2097 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2098 = ( ( (  cast_dash_ptr365 ) ( (  arr2094 ) ) ) );
    return ( (  offset_dash_ptr366 ) ( (  p2098 ) ,  ( (int64_t ) (  i2097 ) ) ) );
}

static  uint32_t   get353 (    struct Array_347 *  arr2101 ,    size_t  i2104 ) {
    return ( * ( (  get_dash_ptr354 ) ( (  arr2101 ) ,  (  i2104 ) ) ) );
}

static  struct Maybe_351   next352 (    struct ArrayIter_349 *  self2173 ) {
    if ( (  cmp52 ( ( ( * (  self2173 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  e2175 = ( (  get353 ) ( ( & ( ( * (  self2173 ) ) .f_backing ) ) ,  ( ( * (  self2173 ) ) .f_cur ) ) );
    (*  self2173 ) .f_cur = (  op_dash_add75 ( ( ( * (  self2173 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_351_Just ) ( (  e2175 ) ) );
}

static  uint32_t   reduce348 (    struct Array_347  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct ArrayIter_349  it1049 = ( (  into_dash_iter350 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1050 = ( (  next352 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_351_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_351_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    uint32_t  temp368;
    return (  temp368 );
}

static  uint32_t   u32_dash_or369 (    uint32_t  l2621 ,    uint32_t  r2623 ) {
    return ( (  l2621 ) | (  r2623 ) );
}

static  uint32_t   u32_dash_ors346 (    struct Array_347  vals2626 ) {
    return ( (  reduce348 ) ( (  vals2626 ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  u32_dash_or369 ) ) );
}

static  struct Array_347   from_dash_listlike370 (    struct Array_347  self330 ) {
    return (  self330 );
}

static  uint32_t   echo371 (  ) {
    return (  from_dash_integral107 ( 8 ) );
}

static  uint32_t   icanon372 (  ) {
    return (  from_dash_integral107 ( 2 ) );
}

static  uint32_t   isig373 (  ) {
    return (  from_dash_integral107 ( 1 ) );
}

static  uint32_t   iexten374 (  ) {
    return (  from_dash_integral107 ( 32768 ) );
}

struct Array_376 {
    uint32_t _arr [5];
};

struct ArrayIter_378 {
    struct Array_376  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_378   into_dash_iter379 (    struct Array_376  self2166 ) {
    return ( (struct ArrayIter_378) { .f_backing = (  self2166 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr383 (    struct Array_376 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr382 (    struct Array_376 *  arr2094 ,    size_t  i2097 ) {
    if ( ( (  cmp52 ( (  i2097 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2097 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2097 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2098 = ( ( (  cast_dash_ptr383 ) ( (  arr2094 ) ) ) );
    return ( (  offset_dash_ptr366 ) ( (  p2098 ) ,  ( (int64_t ) (  i2097 ) ) ) );
}

static  uint32_t   get381 (    struct Array_376 *  arr2101 ,    size_t  i2104 ) {
    return ( * ( (  get_dash_ptr382 ) ( (  arr2101 ) ,  (  i2104 ) ) ) );
}

static  struct Maybe_351   next380 (    struct ArrayIter_378 *  self2173 ) {
    if ( (  cmp52 ( ( ( * (  self2173 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  e2175 = ( (  get381 ) ( ( & ( ( * (  self2173 ) ) .f_backing ) ) ,  ( ( * (  self2173 ) ) .f_cur ) ) );
    (*  self2173 ) .f_cur = (  op_dash_add75 ( ( ( * (  self2173 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_351_Just ) ( (  e2175 ) ) );
}

static  uint32_t   reduce377 (    struct Array_376  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct ArrayIter_378  it1049 = ( (  into_dash_iter379 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1050 = ( (  next380 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_351_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_351_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    uint32_t  temp384;
    return (  temp384 );
}

static  uint32_t   u32_dash_ors375 (    struct Array_376  vals2626 ) {
    return ( (  reduce377 ) ( (  vals2626 ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  u32_dash_or369 ) ) );
}

static  struct Array_376   from_dash_listlike385 (    struct Array_376  self330 ) {
    return (  self330 );
}

static  uint32_t   brkint386 (  ) {
    return (  from_dash_integral107 ( 2 ) );
}

static  uint32_t   icrnl387 (  ) {
    return (  from_dash_integral107 ( 256 ) );
}

static  uint32_t   inpck388 (  ) {
    return (  from_dash_integral107 ( 16 ) );
}

static  uint32_t   istrip389 (  ) {
    return (  from_dash_integral107 ( 32 ) );
}

static  uint32_t   ixon390 (  ) {
    return (  from_dash_integral107 ( 1024 ) );
}

struct Array_392 {
    uint32_t _arr [1];
};

struct ArrayIter_394 {
    struct Array_392  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_394   into_dash_iter395 (    struct Array_392  self2166 ) {
    return ( (struct ArrayIter_394) { .f_backing = (  self2166 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr399 (    struct Array_392 *  p359 ) {
    return ( (uint32_t * ) (  p359 ) );
}

static  uint32_t *   get_dash_ptr398 (    struct Array_392 *  arr2094 ,    size_t  i2097 ) {
    if ( ( (  cmp52 ( (  i2097 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2097 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2097 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2098 = ( ( (  cast_dash_ptr399 ) ( (  arr2094 ) ) ) );
    return ( (  offset_dash_ptr366 ) ( (  p2098 ) ,  ( (int64_t ) (  i2097 ) ) ) );
}

static  uint32_t   get397 (    struct Array_392 *  arr2101 ,    size_t  i2104 ) {
    return ( * ( (  get_dash_ptr398 ) ( (  arr2101 ) ,  (  i2104 ) ) ) );
}

static  struct Maybe_351   next396 (    struct ArrayIter_394 *  self2173 ) {
    if ( (  cmp52 ( ( ( * (  self2173 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  e2175 = ( (  get397 ) ( ( & ( ( * (  self2173 ) ) .f_backing ) ) ,  ( ( * (  self2173 ) ) .f_cur ) ) );
    (*  self2173 ) .f_cur = (  op_dash_add75 ( ( ( * (  self2173 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_351_Just ) ( (  e2175 ) ) );
}

static  uint32_t   reduce393 (    struct Array_392  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct ArrayIter_394  it1049 = ( (  into_dash_iter395 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1050 = ( (  next396 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_351_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_351_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    uint32_t  temp400;
    return (  temp400 );
}

static  uint32_t   u32_dash_ors391 (    struct Array_392  vals2626 ) {
    return ( (  reduce393 ) ( (  vals2626 ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  u32_dash_or369 ) ) );
}

static  struct Array_392   from_dash_listlike401 (    struct Array_392  self330 ) {
    return (  self330 );
}

static  uint32_t   opost402 (  ) {
    return (  from_dash_integral107 ( 1 ) );
}

static  uint32_t   cs8403 (  ) {
    return (  from_dash_integral107 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr406 (    struct Array_33 *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  uint8_t *   get_dash_ptr405 (    struct Array_33 *  arr2094 ,    size_t  i2097 ) {
    if ( ( (  cmp52 ( (  i2097 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2097 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2097 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2098 = ( ( (  cast_dash_ptr406 ) ( (  arr2094 ) ) ) );
    return ( (  offset_dash_ptr120 ) ( (  p2098 ) ,  ( (int64_t ) (  i2097 ) ) ) );
}

static  enum Unit_4   set404 (    struct Array_33 *  arr2107 ,    size_t  i2110 ,    uint8_t  e2112 ) {
    uint8_t *  p2113 = ( (  get_dash_ptr405 ) ( (  arr2107 ) ,  (  i2110 ) ) );
    (*  p2113 ) = (  e2112 );
    return ( Unit_4_Unit );
}

static  size_t   vmin407 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime408 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush409 (  ) {
    return (  from_dash_integral49 ( 2 ) );
}

static  struct Termios_32   enable_dash_raw_dash_mode338 (  ) {
    struct Termios_32  temp339 = ( (  undefined340 ) ( ) );
    struct Termios_32 *  orig_dash_termios3074 = ( &temp339 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  cast_dash_ptr343 ) ( (  orig_dash_termios3074 ) ) ) ) );
    struct Termios_32  raw3075 = ( * (  orig_dash_termios3074 ) );
    raw3075 .f_c_dash_lflag = ( (  u32_dash_and344 ) ( ( (  raw3075 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg345 ) ( ( (  u32_dash_ors346 ) ( ( (  from_dash_listlike370 ) ( ( (struct Array_347) { ._arr = { ( (  echo371 ) ( ) ) , ( (  icanon372 ) ( ) ) , ( (  isig373 ) ( ) ) , ( ( (  iexten374 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3075 .f_c_dash_iflag = ( (  u32_dash_and344 ) ( ( (  raw3075 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg345 ) ( ( (  u32_dash_ors375 ) ( ( (  from_dash_listlike385 ) ( ( (struct Array_376) { ._arr = { ( (  brkint386 ) ( ) ) , ( (  icrnl387 ) ( ) ) , ( (  inpck388 ) ( ) ) , ( (  istrip389 ) ( ) ) , ( ( (  ixon390 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3075 .f_c_dash_oflag = ( (  u32_dash_and344 ) ( ( (  raw3075 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg345 ) ( ( (  u32_dash_ors391 ) ( ( (  from_dash_listlike401 ) ( ( (struct Array_392) { ._arr = { ( ( (  opost402 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3075 .f_c_dash_cflag = ( (  u32_dash_or369 ) ( ( (  raw3075 ) .f_c_dash_cflag ) ,  ( (  cs8403 ) ( ) ) ) );
    ( (  set404 ) ( ( & ( (  raw3075 ) .f_c_dash_cc ) ) ,  ( (  vmin407 ) ( ) ) ,  (  from_dash_integral103 ( 0 ) ) ) );
    ( (  set404 ) ( ( & ( (  raw3075 ) .f_c_dash_cc ) ) ,  ( (  vtime408 ) ( ) ) ,  (  from_dash_integral103 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  tcsa_dash_flush409 ) ( ) ) ,  ( (  cast_dash_ptr343 ) ( ( & (  raw3075 ) ) ) ) ) );
    return ( * (  orig_dash_termios3074 ) );
}

static  enum Unit_4   print411 (    struct StrView_24  s2377 ) {
    ( (  for_dash_each311 ) ( ( (  chars135 ) ( (  s2377 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   hide_dash_cursor410 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   reset_dash_colors412 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   clear_dash_screen413 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   enable_dash_mouse414 (  ) {
    ( (  print_dash_str88 ) ( ( (  from_dash_string111 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   flush_dash_stdout415 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr62 ) ( ) ) ) );
    return ( Unit_4_Unit );
}

static  bool   ptr_dash_eq419 (    enum Unit_4 *  l575 ,    enum Unit_4 *  r577 ) {
    return ( (  l575 ) == (  r577 ) );
}

static  enum Unit_4 *   cast420 (    const char*  x356 ) {
    return ( (enum Unit_4 * ) (  x356 ) );
}

static  void *   cast_dash_ptr424 (    enum Unit_4 * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of425 (    enum Unit_4 *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  enum Unit_4 *   zeroed422 (  ) {
    enum Unit_4 *  temp423;
    enum Unit_4 *  x559 = (  temp423 );
    ( ( memset ) ( ( (  cast_dash_ptr424 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of425 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  enum Unit_4 *   null_dash_ptr421 (  ) {
    return ( (  zeroed422 ) ( ) );
}

static  struct Maybe_50   from_dash_nullable_dash_c_dash_str418 (    const char*  s580 ) {
    if ( ( (  ptr_dash_eq419 ) ( ( (  cast420 ) ( (  s580 ) ) ) ,  ( ( (  null_dash_ptr421 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    } else {
        return ( ( Maybe_50_Just ) ( (  s580 ) ) );
    }
}

static  struct Maybe_50   get417 (    const char*  s2407 ) {
    return ( (  from_dash_nullable_dash_c_dash_str418 ) ( ( ( getenv ) ( (  s2407 ) ) ) ) );
}

static  enum ColorPalette_31   query_dash_palette416 (  ) {
    struct Maybe_50  colorterm2408 = ( (  get417 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_50  dref2409 = (  colorterm2408 );
    if ( dref2409.tag == Maybe_50_Just_t ) {
        if ( ( (  eq55 ( ( dref2409 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq55 ( ( dref2409 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_31_PaletteRGB );
        }
    }
    else {
        if ( dref2409.tag == Maybe_50_None_t ) {
        }
    }
    struct Maybe_50  dref2411 = ( (  get417 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2411.tag == Maybe_50_Just_t ) {
        if ( (  eq55 ( ( dref2411 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_31_Palette8 );
        }
    }
    else {
        if ( dref2411.tag == Maybe_50_None_t ) {
        }
    }
    return ( ColorPalette_31_Palette16 );
}

struct Tuple2_426 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_426 Tuple2_426_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_426 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_428 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr432 (    struct Winsize_428 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of433 (    struct Winsize_428  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Winsize_428   zeroed430 (  ) {
    struct Winsize_428  temp431;
    struct Winsize_428  x559 = (  temp431 );
    ( ( memset ) ( ( (  cast_dash_ptr432 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of433 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  int32_t   stdout_dash_fileno434 (  ) {
    return (  from_dash_integral49 ( 1 ) );
}

static  uint64_t   from_dash_integral436 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz435 (  ) {
    return (  from_dash_integral436 ( 21523 ) );
}

static  int32_t   op_dash_neg437 (    int32_t  x227 ) {
    return ( (  from_dash_integral49 ( 0 ) ) - (  x227 ) );
}

static  bool   eq438 (    uint16_t  l121 ,    uint16_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

static  uint16_t   from_dash_integral439 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr445 (    uint32_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of446 (    uint32_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  uint32_t   zeroed443 (  ) {
    uint32_t  temp444;
    uint32_t  x559 = (  temp444 );
    ( ( memset ) ( ( (  cast_dash_ptr445 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of446 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  uint16_t *   cast447 (    uint32_t *  x356 ) {
    return ( (uint16_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed441 (    uint16_t  x562 ) {
    uint32_t  temp442 = ( (  zeroed443 ) ( ) );
    uint32_t *  y563 = ( &temp442 );
    uint16_t *  yp564 = ( (  cast447 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  uint32_t   u16_dash_u32440 (    uint16_t  x625 ) {
    return ( (  cast_dash_on_dash_zeroed441 ) ( (  x625 ) ) );
}

static  struct Tuple2_426   get_dash_dimensions427 (  ) {
    struct Winsize_428  temp429 = ( ( (  zeroed430 ) ( ) ) );
    struct Winsize_428 *  ws2396 = ( &temp429 );
    if ( ( (  eq56 ( ( ( ioctl ) ( ( (  stdout_dash_fileno434 ) ( ) ) ,  ( (  tiocgwinsz435 ) ( ) ) ,  (  ws2396 ) ) ) , (  op_dash_neg437 ( (  from_dash_integral49 ( 1 ) ) ) ) ) ) || (  eq438 ( ( ( * (  ws2396 ) ) .f_ws_dash_col ) , (  from_dash_integral439 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_426_Tuple2 ) ( (  from_dash_integral107 ( 80 ) ) ,  (  from_dash_integral107 ( 24 ) ) ) );
    }
    return ( ( Tuple2_426_Tuple2 ) ( ( (  u16_dash_u32440 ) ( ( ( * (  ws2396 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32440 ) ( ( ( * (  ws2396 ) ) .f_ws_dash_row ) ) ) ) );
}

struct env448 {
    bool *  should_dash_resize3088;
};

struct envunion449 {
    enum Unit_4  (*fun) (  struct env448*  ,    int32_t  );
    struct env448 env;
};

struct envunion449  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig450 ) {
    struct envunion449  temp451 = _intr_sigarr [  __intr__sig450 ];
    temp451.fun ( &temp451.env ,  __intr__sig450 );
}

static  enum Unit_4  _intr_register_signal (    int32_t  __intr__sig452 ,   struct envunion449  __intr__fun453 ) {
    _intr_sigarr [  __intr__sig452 ] =  __intr__fun453;
    signal(  __intr__sig452 , _intr_sighandle );
    return Unit_4_Unit;
}

static  enum Unit_4   lam454 (   struct env448* env ,    int32_t  dref3095 ) {
    (* env->should_dash_resize3088 ) = ( true );
    return ( Unit_4_Unit );
}

static  uint32_t   fst455 (    struct Tuple2_426  dref1200 ) {
    return ( dref1200 .field0 );
}

static  uint32_t   snd456 (    struct Tuple2_426  dref1203 ) {
    return ( dref1203 .field1 );
}

static  struct Tui_30   mk337 (   struct env26* env ) {
    struct Termios_32  og_dash_termios3090 = ( (  enable_dash_raw_dash_mode338 ) ( ) );
    ( (  hide_dash_cursor410 ) ( ) );
    ( (  reset_dash_colors412 ) ( ) );
    ( (  clear_dash_screen413 ) ( ) );
    ( (  enable_dash_mouse414 ) ( ) );
    ( (  flush_dash_stdout415 ) ( ) );
    enum ColorPalette_31  palette3091 = ( (  query_dash_palette416 ) ( ) );
    struct Tuple2_426  dims3092 = ( (  get_dash_dimensions427 ) ( ) );
    uint32_t  fps3093 = (  from_dash_integral107 ( 60 ) );
    struct timespec  last_dash_sync3094 = ( (  now44 ) ( ) );
    struct env448 envinst448 = {
        .should_dash_resize3088 = env->should_dash_resize3088 ,
    };
    ( _intr_register_signal ( (  from_dash_integral49 ( 28 ) ) , ( (struct envunion449){ .fun = (  enum Unit_4  (*) (  struct env448*  ,    int32_t  ) )lam454 , .env =  envinst448 } ) ) );
    return ( (struct Tui_30) { .f_width = ( (  fst455 ) ( (  dims3092 ) ) ) , .f_height = ( (  snd456 ) ( (  dims3092 ) ) ) , .f_target_dash_fps = (  fps3093 ) , .f_actual_dash_fps = (  from_dash_integral107 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3094 ) , .f_fps_dash_ts = (  last_dash_sync3094 ) , .f_fps_dash_count = (  from_dash_integral107 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3090 ) , .f_palette = (  palette3091 ) , .f_should_dash_redraw = ( true ) } );
}

enum Color8_461 {
    Color8_461_Black8,
    Color8_461_Red8,
    Color8_461_Green8,
    Color8_461_Yellow8,
    Color8_461_Blue8,
    Color8_461_Magenta8,
    Color8_461_Cyan8,
    Color8_461_White8,
};

enum Color16_462 {
    Color16_462_Black16,
    Color16_462_Red16,
    Color16_462_Green16,
    Color16_462_Yellow16,
    Color16_462_Blue16,
    Color16_462_Magenta16,
    Color16_462_Cyan16,
    Color16_462_White16,
    Color16_462_BrightBlack16,
    Color16_462_BrightRed16,
    Color16_462_BrightGreen16,
    Color16_462_BrightYellow16,
    Color16_462_BrightBlue16,
    Color16_462_BrightMagenta16,
    Color16_462_BrightCyan16,
    Color16_462_BrightWhite16,
};

struct RGB_463 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_460 {
    enum {
        Color_460_ColorDefault_t,
        Color_460_Color8_t,
        Color_460_Color16_t,
        Color_460_Color256_t,
        Color_460_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_461  field0;
        } Color_460_Color8_s;
        struct {
            enum Color16_462  field0;
        } Color_460_Color16_s;
        struct {
            uint8_t  field0;
        } Color_460_Color256_s;
        struct {
            struct RGB_463  field0;
        } Color_460_ColorRGB_s;
    } stuff;
};

static struct Color_460 Color_460_Color8 (  enum Color8_461  field0 ) {
    return ( struct Color_460 ) { .tag = Color_460_Color8_t, .stuff = { .Color_460_Color8_s = { .field0 = field0 } } };
};

static struct Color_460 Color_460_Color16 (  enum Color16_462  field0 ) {
    return ( struct Color_460 ) { .tag = Color_460_Color16_t, .stuff = { .Color_460_Color16_s = { .field0 = field0 } } };
};

static struct Color_460 Color_460_Color256 (  uint8_t  field0 ) {
    return ( struct Color_460 ) { .tag = Color_460_Color256_t, .stuff = { .Color_460_Color256_s = { .field0 = field0 } } };
};

static struct Color_460 Color_460_ColorRGB (  struct RGB_463  field0 ) {
    return ( struct Color_460 ) { .tag = Color_460_ColorRGB_t, .stuff = { .Color_460_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_459 {
    struct Char_17  f_c;
    struct Color_460  f_fg;
    struct Color_460  f_bg;
};

struct Slice_458 {
    struct Cell_459 *  f_ptr;
    size_t  f_count;
};

struct Screen_457 {
    enum CAllocator_6  f_al;
    struct Tui_30 *  f_tui;
    struct Slice_458  f_current;
    struct Slice_458  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_460  f_default_dash_fg;
    struct Color_460  f_default_dash_bg;
};

struct TypeSize_468 {
    size_t  f_size;
};

static  struct TypeSize_468   get_dash_typesize467 (  ) {
    struct Cell_459  temp469;
    return ( (struct TypeSize_468) { .f_size = ( sizeof( ( (  temp469 ) ) ) ) } );
}

static  struct Cell_459 *   cast_dash_ptr470 (    void *  p359 ) {
    return ( (struct Cell_459 * ) (  p359 ) );
}

static  struct Slice_458   allocate466 (    enum CAllocator_6  dref1867 ,    size_t  count1869 ) {
    if (!(  dref1867 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1870 = ( ( ( (  get_dash_typesize467 ) ( ) ) ) .f_size );
    struct Cell_459 *  ptr1871 = ( (  cast_dash_ptr470 ) ( ( ( malloc ) ( (  op_dash_mul74 ( (  size1870 ) , (  count1869 ) ) ) ) ) ) );
    return ( (struct Slice_458) { .f_ptr = (  ptr1871 ) , .f_count = (  count1869 ) } );
}

static  uint32_t *   cast474 (    size_t *  x356 ) {
    return ( (uint32_t * ) (  x356 ) );
}

static  size_t   cast_dash_on_dash_zeroed472 (    uint32_t  x562 ) {
    size_t  temp473 = ( (  zeroed232 ) ( ) );
    size_t *  y563 = ( &temp473 );
    uint32_t *  yp564 = ( (  cast474 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  size_t   u32_dash_size471 (    uint32_t  x631 ) {
    return ( (  cast_dash_on_dash_zeroed472 ) ( (  x631 ) ) );
}

static  uint32_t   op_dash_mul475 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) * (  r242 ) );
}

struct env478 {
    struct Slice_458  s1825;
    ;
    ;
    struct Cell_459 (*  fun1827 )(    struct Cell_459  );
    ;
};

struct envunion479 {
    enum Unit_4  (*fun) (  struct env478*  ,    int32_t  );
    struct env478 env;
};

static  enum Unit_4   for_dash_each477 (    struct Range_212  iterable1024 ,   struct envunion479  fun1026 ) {
    struct RangeIter_215  temp480 = ( (  into_dash_iter216 ) ( (  iterable1024 ) ) );
    struct RangeIter_215 *  it1027 = ( &temp480 );
    while ( ( true ) ) {
        struct Maybe_145  dref1028 = ( (  next217 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_145_Just_t ) {
                struct envunion479  temp481 = (  fun1026 );
                ( temp481.fun ( &temp481.env ,  ( dref1028 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct Cell_459 *   offset_dash_ptr485 (    struct Cell_459 *  x338 ,    int64_t  count340 ) {
    struct Cell_459  temp486;
    return ( (struct Cell_459 * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul40 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp486 ) ) ) ) ) ) ) ) );
}

static  struct Cell_459 *   get_dash_ptr484 (    struct Slice_458  slice1677 ,    size_t  i1679 ) {
    if ( ( (  cmp52 ( (  i1679 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1679 ) , ( (  slice1677 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic79 ) ( ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1679 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1677 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_459 *  elem_dash_ptr1680 = ( (  offset_dash_ptr485 ) ( ( (  slice1677 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1679 ) ) ) ) );
    return (  elem_dash_ptr1680 );
}

static  enum Unit_4   set483 (    struct Slice_458  slice1694 ,    size_t  i1696 ,    struct Cell_459  x1698 ) {
    struct Cell_459 *  ep1699 = ( (  get_dash_ptr484 ) ( (  slice1694 ) ,  (  i1696 ) ) );
    (*  ep1699 ) = (  x1698 );
    return ( Unit_4_Unit );
}

struct Maybe_490 {
    enum {
        Maybe_490_None_t,
        Maybe_490_Just_t,
    } tag;
    union {
        struct {
            struct Cell_459  field0;
        } Maybe_490_Just_s;
    } stuff;
};

static struct Maybe_490 Maybe_490_Just (  struct Cell_459  field0 ) {
    return ( struct Maybe_490 ) { .tag = Maybe_490_Just_t, .stuff = { .Maybe_490_Just_s = { .field0 = field0 } } };
};

static  struct Cell_459   undefined491 (  ) {
    struct Cell_459  temp492;
    return (  temp492 );
}

static  struct Cell_459   or_dash_fail489 (    struct Maybe_490  x1645 ,    struct StrConcat_80  errmsg1647 ) {
    struct Maybe_490  dref1648 = (  x1645 );
    if ( dref1648.tag == Maybe_490_None_t ) {
        ( (  panic79 ) ( (  errmsg1647 ) ) );
        return ( (  undefined491 ) ( ) );
    }
    else {
        if ( dref1648.tag == Maybe_490_Just_t ) {
            return ( dref1648 .stuff .Maybe_490_Just_s .field0 );
        }
    }
}

static  struct Maybe_490   try_dash_get493 (    struct Slice_458  slice1683 ,    size_t  i1685 ) {
    if ( ( (  cmp52 ( (  i1685 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1685 ) , ( (  slice1683 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_490) { .tag = Maybe_490_None_t } );
    }
    struct Cell_459 *  elem_dash_ptr1686 = ( (  offset_dash_ptr485 ) ( ( (  slice1683 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1685 ) ) ) ) );
    return ( ( Maybe_490_Just ) ( ( * (  elem_dash_ptr1686 ) ) ) );
}

static  struct Cell_459   get488 (    struct Slice_458  slice1689 ,    size_t  i1691 ) {
    return ( (  or_dash_fail489 ) ( ( (  try_dash_get493 ) ( (  slice1689 ) ,  (  i1691 ) ) ) ,  ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1691 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1689 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_459   elem_dash_get487 (    struct Slice_458  self1787 ,    size_t  idx1789 ) {
    return ( (  get488 ) ( (  self1787 ) ,  (  idx1789 ) ) );
}

static  enum Unit_4   lam482 (   struct env478* env ,    int32_t  i1829 ) {
    return ( (  set483 ) ( ( env->s1825 ) ,  ( (  i32_dash_size76 ) ( (  i1829 ) ) ) ,  ( ( env->fun1827 ) ( (  elem_dash_get487 ( ( env->s1825 ) , ( (  i32_dash_size76 ) ( (  i1829 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map476 (    struct Slice_458  s1825 ,    struct Cell_459 (*  fun1827 )(    struct Cell_459  ) ) {
    struct env478 envinst478 = {
        .s1825 =  s1825 ,
        .fun1827 =  fun1827 ,
    };
    ( (  for_dash_each477 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_i3289 ) ( (  op_dash_sub43 ( ( (  s1825 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion479){ .fun = (  enum Unit_4  (*) (  struct env478*  ,    int32_t  ) )lam482 , .env =  envinst478 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_459   lam494 (    struct Cell_459  dref3197 ) {
    return ( (struct Cell_459) { .f_c = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

struct env497 {
    struct Slice_458  s1825;
    ;
    ;
    struct Cell_459 (*  fun1827 )(    struct Cell_459  );
    ;
};

struct envunion498 {
    enum Unit_4  (*fun) (  struct env497*  ,    int32_t  );
    struct env497 env;
};

static  enum Unit_4   for_dash_each496 (    struct Range_212  iterable1024 ,   struct envunion498  fun1026 ) {
    struct RangeIter_215  temp499 = ( (  into_dash_iter216 ) ( (  iterable1024 ) ) );
    struct RangeIter_215 *  it1027 = ( &temp499 );
    while ( ( true ) ) {
        struct Maybe_145  dref1028 = ( (  next217 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_145_Just_t ) {
                struct envunion498  temp500 = (  fun1026 );
                ( temp500.fun ( &temp500.env ,  ( dref1028 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam501 (   struct env497* env ,    int32_t  i1829 ) {
    return ( (  set483 ) ( ( env->s1825 ) ,  ( (  i32_dash_size76 ) ( (  i1829 ) ) ) ,  ( ( env->fun1827 ) ( (  elem_dash_get487 ( ( env->s1825 ) , ( (  i32_dash_size76 ) ( (  i1829 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map495 (    struct Slice_458  s1825 ,    struct Cell_459 (*  fun1827 )(    struct Cell_459  ) ) {
    struct env497 envinst497 = {
        .s1825 =  s1825 ,
        .fun1827 =  fun1827 ,
    };
    ( (  for_dash_each496 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_i3289 ) ( (  op_dash_sub43 ( ( (  s1825 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion498){ .fun = (  enum Unit_4  (*) (  struct env497*  ,    int32_t  ) )lam501 , .env =  envinst497 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_459   lam502 (    struct Cell_459  dref3199 ) {
    return ( (struct Cell_459) { .f_c = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

static  struct Screen_457   mk_dash_screen465 (    struct Tui_30 *  tui3193 ,    enum CAllocator_6  al3195 ) {
    struct Slice_458  cur3196 = ( (  allocate466 ) ( (  al3195 ) ,  ( (  u32_dash_size471 ) ( (  op_dash_mul475 ( ( ( * (  tui3193 ) ) .f_width ) , ( ( * (  tui3193 ) ) .f_height ) ) ) ) ) ) );
    ( (  map476 ) ( (  cur3196 ) ,  (  lam494 ) ) );
    struct Slice_458  prev3198 = ( (  allocate466 ) ( (  al3195 ) ,  ( (  u32_dash_size471 ) ( (  op_dash_mul475 ( ( ( * (  tui3193 ) ) .f_width ) , ( ( * (  tui3193 ) ) .f_height ) ) ) ) ) ) );
    ( (  map495 ) ( (  prev3198 ) ,  (  lam502 ) ) );
    return ( (struct Screen_457) { .f_current = (  cur3196 ) , .f_previous = (  prev3198 ) , .f_al = (  al3195 ) , .f_tui = (  tui3193 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

struct Duration_503 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  struct Duration_503   diff504 (    struct timespec  l3051 ,    struct timespec  r3053 ) {
    int64_t  secdiff3054 = (  op_dash_sub226 ( ( (  l3051 ) .tv_sec ) , ( (  r3053 ) .tv_sec ) ) );
    int64_t  nsdiff3055 = (  op_dash_sub226 ( ( (  l3051 ) .tv_nsec ) , ( (  r3053 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs3056 = (  from_dash_integral42 ( 1000000000 ) );
    if ( (  cmp245 ( (  nsdiff3055 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp245 ( (  secdiff3054 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_503) { .f_secs = (  secdiff3054 ) , .f_nsecs = (  op_dash_neg246 ( (  nsdiff3055 ) ) ) } );
        } else {
            if ( (  eq248 ( (  secdiff3054 ) , (  from_dash_integral42 ( 0 ) ) ) ) ) {
                return ( (struct Duration_503) { .f_secs = (  from_dash_integral42 ( 0 ) ) , .f_nsecs = (  nsdiff3055 ) } );
            } else {
                return ( (struct Duration_503) { .f_secs = (  op_dash_sub226 ( (  secdiff3054 ) , (  from_dash_integral42 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add157 ( (  ns_dash_in_dash_secs3056 ) , (  nsdiff3055 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp245 ( (  secdiff3054 ) , (  from_dash_integral42 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_503) { .f_secs = (  secdiff3054 ) , .f_nsecs = (  nsdiff3055 ) } );
        } else {
            return ( (struct Duration_503) { .f_secs = (  op_dash_sub226 ( (  secdiff3054 ) , (  from_dash_integral42 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub226 ( (  ns_dash_in_dash_secs3056 ) , (  nsdiff3055 ) ) ) } );
        }
    }
}

static  enum Unit_4   set_dash_screen_dash_fg505 (    struct Screen_457 *  screen3243 ,    struct Color_460  c3245 ) {
    (*  screen3243 ) .f_default_dash_fg = (  c3245 );
    return ( Unit_4_Unit );
}

struct Key_512 {
    enum {
        Key_512_Escape_t,
        Key_512_Enter_t,
        Key_512_Tab_t,
        Key_512_Backspace_t,
        Key_512_Char_t,
        Key_512_Ctrl_t,
        Key_512_Up_t,
        Key_512_Down_t,
        Key_512_Left_t,
        Key_512_Right_t,
        Key_512_Home_t,
        Key_512_End_t,
        Key_512_PageUp_t,
        Key_512_PageDown_t,
        Key_512_Delete_t,
        Key_512_Insert_t,
        Key_512_F1_t,
        Key_512_F2_t,
        Key_512_F3_t,
        Key_512_F4_t,
        Key_512_F5_t,
        Key_512_F6_t,
        Key_512_F7_t,
        Key_512_F8_t,
        Key_512_F9_t,
        Key_512_F10_t,
        Key_512_F11_t,
        Key_512_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_512_Char_s;
        struct {
            char  field0;
        } Key_512_Ctrl_s;
    } stuff;
};

static struct Key_512 Key_512_Char (  char  field0 ) {
    return ( struct Key_512 ) { .tag = Key_512_Char_t, .stuff = { .Key_512_Char_s = { .field0 = field0 } } };
};

static struct Key_512 Key_512_Ctrl (  char  field0 ) {
    return ( struct Key_512 ) { .tag = Key_512_Ctrl_t, .stuff = { .Key_512_Ctrl_s = { .field0 = field0 } } };
};

enum MouseButton_514 {
    MouseButton_514_MouseLeft,
    MouseButton_514_MouseMiddle,
    MouseButton_514_MouseRight,
    MouseButton_514_ScrollUp,
    MouseButton_514_ScrollDown,
};

struct MouseEvent_513 {
    enum MouseButton_514  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_511 {
    enum {
        InputEvent_511_Key_t,
        InputEvent_511_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_512  field0;
        } InputEvent_511_Key_s;
        struct {
            struct MouseEvent_513  field0;
        } InputEvent_511_Mouse_s;
    } stuff;
};

static struct InputEvent_511 InputEvent_511_Key (  struct Key_512  field0 ) {
    return ( struct InputEvent_511 ) { .tag = InputEvent_511_Key_t, .stuff = { .InputEvent_511_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_511 InputEvent_511_Mouse (  struct MouseEvent_513  field0 ) {
    return ( struct InputEvent_511 ) { .tag = InputEvent_511_Mouse_t, .stuff = { .InputEvent_511_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_510 {
    enum {
        Maybe_510_None_t,
        Maybe_510_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_511  field0;
        } Maybe_510_Just_s;
    } stuff;
};

static struct Maybe_510 Maybe_510_Just (  struct InputEvent_511  field0 ) {
    return ( struct Maybe_510 ) { .tag = Maybe_510_Just_t, .stuff = { .Maybe_510_Just_s = { .field0 = field0 } } };
};

struct envunion509 {
    struct Maybe_510  (*fun) (  struct env28*  ,    struct Tui_30 *  );
    struct env28 env;
};

struct env508 {
    struct env28 envinst28;
    struct Tui_30 *  tui3375;
};

struct envunion515 {
    struct Maybe_510  (*fun) (  struct env508*  );
    struct env508 env;
};

struct FunIter_507 {
    struct envunion515  f_fun;
    bool  f_finished;
};

static  struct FunIter_507   into_dash_iter516 (    struct FunIter_507  self991 ) {
    return (  self991 );
}

static  struct FunIter_507   from_dash_function517 (   struct envunion515  fun999 ) {
    return ( (struct FunIter_507) { .f_fun = (  fun999 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions522 (   struct env27* env ,    struct Tui_30 *  tui3160 ) {
    if ( ( ! ( * ( env->should_dash_resize3088 ) ) ) ) {
        return ( false );
    }
    (*  tui3160 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3088 ) = ( false );
    struct Tuple2_426  dim3161 = ( (  get_dash_dimensions427 ) ( ) );
    uint32_t  w3162 = ( (  fst455 ) ( (  dim3161 ) ) );
    uint32_t  h3163 = ( (  snd456 ) ( (  dim3161 ) ) );
    (*  tui3160 ) .f_width = (  w3162 );
    (*  tui3160 ) .f_height = (  h3163 );
    return ( true );
}

static  char   undefined525 (  ) {
    char  temp526;
    return (  temp526 );
}

struct Maybe_527 {
    enum {
        Maybe_527_None_t,
        Maybe_527_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_527_Just_s;
    } stuff;
};

static struct Maybe_527 Maybe_527_Just (  char  field0 ) {
    return ( struct Maybe_527 ) { .tag = Maybe_527_Just_t, .stuff = { .Maybe_527_Just_s = { .field0 = field0 } } };
};

struct Pollfd_529 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr530 (    struct Pollfd_529 *  p359 ) {
    return ( (struct pollfd * ) (  p359 ) );
}

static  void *   cast_dash_ptr533 (    char *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of534 (    char  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  char   zeroed531 (  ) {
    char  temp532;
    char  x559 = (  temp532 );
    ( ( memset ) ( ( (  cast_dash_ptr533 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of534 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  struct Maybe_527   read_dash_byte528 (    int32_t  timeout_dash_ms3082 ) {
    struct Pollfd_529  pfd3083 = ( (struct Pollfd_529) { .f_fd = (  from_dash_integral49 ( 0 ) ) , .f_events = (  from_dash_integral439 ( 1 ) ) , .f_revents = (  from_dash_integral439 ( 0 ) ) } );
    if ( (  cmp209 ( ( ( poll ) ( ( (  cast_dash_ptr530 ) ( ( & (  pfd3083 ) ) ) ) ,  (  from_dash_integral49 ( 1 ) ) ,  (  timeout_dash_ms3082 ) ) ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_527) { .tag = Maybe_527_None_t } );
    }
    char  c3084 = ( ( (  zeroed531 ) ( ) ) );
    if ( (  cmp209 ( ( ( read ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  cast_dash_ptr533 ) ( ( & (  c3084 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_527) { .tag = Maybe_527_None_t } );
    }
    return ( ( Maybe_527_Just ) ( (  c3084 ) ) );
}

static  uint8_t   ascii_dash_u8535 (    char  c742 ) {
    return ( ( (uint8_t ) (  c742 ) ) );
}

static  char   u8_dash_ascii536 (    uint8_t  b745 ) {
    return ( ( (char ) (  b745 ) ) );
}

static  uint8_t *   cast540 (    uint32_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed538 (    uint8_t  x562 ) {
    uint32_t  temp539 = ( (  zeroed443 ) ( ) );
    uint32_t *  y563 = ( &temp539 );
    uint8_t *  yp564 = ( (  cast540 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  uint32_t   u8_dash_u32537 (    uint8_t  x652 ) {
    return ( (  cast_dash_on_dash_zeroed538 ) ( (  x652 ) ) );
}

struct Map_543 {
    struct StrViewIter_134  field0;
    uint32_t (*  field1 )(    struct Char_17  );
};

static struct Map_543 Map_543_Map (  struct StrViewIter_134  field0 ,  uint32_t (*  field1 )(    struct Char_17  ) ) {
    return ( struct Map_543 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_543   into_dash_iter544 (    struct Map_543  self759 ) {
    return (  self759 );
}

static  struct Maybe_351   next545 (    struct Map_543 *  dref761 ) {
    struct Maybe_137  dref764 = ( (  next139 ) ( ( & ( (* dref761 ) .field0 ) ) ) );
    if ( dref764.tag == Maybe_137_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref764.tag == Maybe_137_Just_t ) {
            return ( ( Maybe_351_Just ) ( ( ( (* dref761 ) .field1 ) ( ( dref764 .stuff .Maybe_137_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce542 (    struct Map_543  iterable1043 ,    uint32_t  base1045 ,    uint32_t (*  fun1047 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1048 = (  base1045 );
    struct Map_543  it1049 = ( (  into_dash_iter544 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1050 = ( (  next545 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_351_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_351_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    uint32_t  temp546;
    return (  temp546 );
}

static  struct Map_543   map547 (    struct StrView_24  iterable768 ,    uint32_t (*  fun770 )(    struct Char_17  ) ) {
    struct StrViewIter_134  it771 = ( (  into_dash_iter136 ) ( (  iterable768 ) ) );
    return ( ( Map_543_Map ) ( (  it771 ) ,  (  fun770 ) ) );
}

static  void *   cast_dash_ptr554 (    int64_t *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of555 (    int64_t  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  int64_t   zeroed552 (  ) {
    int64_t  temp553;
    int64_t  x559 = (  temp553 );
    ( ( memset ) ( ( (  cast_dash_ptr554 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of555 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  uint8_t *   cast556 (    int64_t *  x356 ) {
    return ( (uint8_t * ) (  x356 ) );
}

static  int64_t   cast_dash_on_dash_zeroed550 (    uint8_t  x562 ) {
    int64_t  temp551 = ( (  zeroed552 ) ( ) );
    int64_t *  y563 = ( &temp551 );
    uint8_t *  yp564 = ( (  cast556 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  int64_t   u8_dash_i64549 (    uint8_t  x646 ) {
    return ( (  cast_dash_on_dash_zeroed550 ) ( (  x646 ) ) );
}

struct StrConcat_559 {
    struct Char_17  field0;
    struct Char_17  field1;
};

static struct StrConcat_559 StrConcat_559_StrConcat (  struct Char_17  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_559 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_558 {
    struct StrConcat_559  field0;
    struct StrView_24  field1;
};

static struct StrConcat_558 StrConcat_558_StrConcat (  struct StrConcat_559  field0 ,  struct StrView_24  field1 ) {
    return ( struct StrConcat_558 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_563 {
    struct StrView_24  field0;
    struct StrConcat_558  field1;
};

static struct StrConcat_563 StrConcat_563_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_558  field1 ) {
    return ( struct StrConcat_563 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_562 {
    struct StrConcat_563  field0;
    struct Char_17  field1;
};

static struct StrConcat_562 StrConcat_562_StrConcat (  struct StrConcat_563  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_562 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str566 (    struct StrConcat_559  self1428 ) {
    struct StrConcat_559  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str95 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str565 (    struct StrConcat_558  self1428 ) {
    struct StrConcat_558  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str566 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str88 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str564 (    struct StrConcat_563  self1428 ) {
    struct StrConcat_563  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str565 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str561 (    struct StrConcat_562  self1428 ) {
    struct StrConcat_562  dref1429 = (  self1428 );
    if ( true ) {
        ( (  print_dash_str564 ) ( ( dref1429 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1429 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic560 (    struct StrConcat_558  errmsg1632 ) {
    ( (  print_dash_str561 ) ( ( ( StrConcat_562_StrConcat ) ( ( ( StrConcat_563_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1632 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint8_t   or_dash_fail557 (    struct Maybe_168  x1645 ,    struct StrConcat_558  errmsg1647 ) {
    struct Maybe_168  dref1648 = (  x1645 );
    if ( dref1648.tag == Maybe_168_None_t ) {
        ( (  panic560 ) ( (  errmsg1647 ) ) );
        return ( (  undefined169 ) ( ) );
    }
    else {
        if ( dref1648.tag == Maybe_168_Just_t ) {
            return ( dref1648 .stuff .Maybe_168_Just_s .field0 );
        }
    }
}

static  enum Ordering_53   cmp568 (    struct Char_17  l722 ,    struct Char_17  r724 ) {
    if ( ( ( !  eq275 ( ( (  l722 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq275 ( ( (  r724 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp569 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp569);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( (  cmp116 ) ( ( (  char_dash_u8122 ) ( (  l722 ) ) ) ,  ( (  char_dash_u8122 ) ( (  r724 ) ) ) ) );
}

static  struct Maybe_168   hex_dash_digit567 (    struct Char_17  c2359 ) {
    if ( ( (  cmp568 ( (  c2359 ) , ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp568 ( (  c2359 ) , ( (  from_dash_charlike112 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_168_Just ) ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2359 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp568 ( (  c2359 ) , ( (  from_dash_charlike112 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp568 ( (  c2359 ) , ( (  from_dash_charlike112 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_168_Just ) ( (  op_dash_add117 ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2359 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral103 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp568 ( (  c2359 ) , ( (  from_dash_charlike112 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp568 ( (  c2359 ) , ( (  from_dash_charlike112 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_168_Just ) ( (  op_dash_add117 ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2359 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral103 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_168) { .tag = Maybe_168_None_t } );
}

static  uint32_t   lam548 (    struct Char_17  c2364 ) {
    return ( (  from_dash_integral107 ) ( ( (  u8_dash_i64549 ) ( ( (  or_dash_fail557 ) ( ( (  hex_dash_digit567 ) ( (  c2364 ) ) ) ,  ( ( StrConcat_558_StrConcat ) ( ( ( StrConcat_559_StrConcat ) ( ( (  from_dash_charlike112 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2364 ) ) ) ,  ( (  from_dash_string111 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add571 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) + (  r232 ) );
}

static  uint32_t   lam570 (    uint32_t  elem2366 ,    uint32_t  b2368 ) {
    return (  op_dash_add571 ( (  op_dash_mul475 ( (  b2368 ) , (  from_dash_integral107 ( 16 ) ) ) ) , (  elem2366 ) ) );
}

static  uint32_t   from_dash_hex541 (    struct StrView_24  arr2362 ) {
    return ( (  reduce542 ) ( ( (  map547 ) ( (  arr2362 ) ,  (  lam548 ) ) ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  lam570 ) ) );
}

static  bool   eq573 (    char  l373 ,    char  r375 ) {
    return ( (  l373 ) == (  r375 ) );
}

static  char   from_dash_charlike574 (    uint8_t *  ptr368 ,    size_t  num_dash_bytes370 ) {
    if ( ( !  eq275 ( (  num_dash_bytes370 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp575 = ( (  from_dash_string57 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp575);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( ( (char ) ( * (  ptr368 ) ) ) );
}

struct Array_576 {
    char _arr [32];
};

static  void *   cast_dash_ptr580 (    struct Array_576 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of581 (    struct Array_576  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct Array_576   zeroed578 (  ) {
    struct Array_576  temp579;
    struct Array_576  x559 = (  temp579 );
    ( ( memset ) ( ( (  cast_dash_ptr580 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of581 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  char *   cast_dash_ptr585 (    struct Array_576 *  p359 ) {
    return ( (char * ) (  p359 ) );
}

static  char *   offset_dash_ptr586 (    char *  x338 ,    int64_t  count340 ) {
    char  temp587;
    return ( (char * ) ( ( (void*) (  x338 ) ) + (  op_dash_mul40 ( (  count340 ) , ( (int64_t ) ( sizeof( ( (  temp587 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr584 (    struct Array_576 *  arr2094 ,    size_t  i2097 ) {
    if ( ( (  cmp52 ( (  i2097 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2097 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2097 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2098 = ( ( (  cast_dash_ptr585 ) ( (  arr2094 ) ) ) );
    return ( (  offset_dash_ptr586 ) ( (  p2098 ) ,  ( (int64_t ) (  i2097 ) ) ) );
}

static  enum Unit_4   set583 (    struct Array_576 *  arr2107 ,    size_t  i2110 ,    char  e2112 ) {
    char *  p2113 = ( (  get_dash_ptr584 ) ( (  arr2107 ) ,  (  i2110 ) ) );
    (*  p2113 ) = (  e2112 );
    return ( Unit_4_Unit );
}

struct Slice_589 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail592 (    struct Maybe_527  x1645 ,    struct StrConcat_80  errmsg1647 ) {
    struct Maybe_527  dref1648 = (  x1645 );
    if ( dref1648.tag == Maybe_527_None_t ) {
        ( (  panic79 ) ( (  errmsg1647 ) ) );
        return ( (  undefined525 ) ( ) );
    }
    else {
        if ( dref1648.tag == Maybe_527_Just_t ) {
            return ( dref1648 .stuff .Maybe_527_Just_s .field0 );
        }
    }
}

static  struct Maybe_527   try_dash_get593 (    struct Slice_589  slice1683 ,    size_t  i1685 ) {
    if ( ( (  cmp52 ( (  i1685 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1685 ) , ( (  slice1683 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_527) { .tag = Maybe_527_None_t } );
    }
    char *  elem_dash_ptr1686 = ( (  offset_dash_ptr586 ) ( ( (  slice1683 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1685 ) ) ) ) );
    return ( ( Maybe_527_Just ) ( ( * (  elem_dash_ptr1686 ) ) ) );
}

static  char   get591 (    struct Slice_589  slice1689 ,    size_t  i1691 ) {
    return ( (  or_dash_fail592 ) ( ( (  try_dash_get593 ) ( (  slice1689 ) ,  (  i1691 ) ) ) ,  ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1691 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1689 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get590 (    struct Slice_589  self1787 ,    size_t  idx1789 ) {
    return ( (  get591 ) ( (  self1787 ) ,  (  idx1789 ) ) );
}

struct Scanner_594 {
    struct StrViewIter_134  f_s;
};

static  struct Scanner_594   mk_dash_from_dash_str596 (    struct StrView_24  s2966 ) {
    return ( (struct Scanner_594) { .f_s = ( (  chars135 ) ( (  s2966 ) ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_600 (    uint8_t *  x343 ,    size_t  count345 ) {
    return ( (  offset_dash_ptr120 ) ( (  x343 ) ,  ( (int64_t ) (  count345 ) ) ) );
}

static  struct StrView_24   substr597 (    struct StrView_24  s2063 ,    size_t  from2065 ,    size_t  to2067 ) {
    size_t  from_dash_bs2068 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_215  temp598 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( ( (  size_dash_i3289 ) ( (  from2065 ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_145  __cond599 =  next217 (&temp598);
        if (  __cond599 .tag == 0 ) {
            break;
        }
        int32_t  dref2069 =  __cond599 .stuff .Maybe_145_Just_s .field0;
        if ( (  cmp52 ( (  from_dash_bs2068 ) , ( ( (  s2063 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2068 = (  op_dash_add75 ( (  from_dash_bs2068 ) , ( (  next_dash_char115 ) ( ( (  offset_dash_ptr_prime_600 ) ( ( ( (  s2063 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2068 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2070 = (  from_dash_bs2068 );
    struct RangeIter_215  temp601 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  op_dash_sub222 ( ( (  size_dash_i3289 ) ( (  to2067 ) ) ) , ( (  size_dash_i3289 ) ( (  from2065 ) ) ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_145  __cond602 =  next217 (&temp601);
        if (  __cond602 .tag == 0 ) {
            break;
        }
        int32_t  dref2071 =  __cond602 .stuff .Maybe_145_Just_s .field0;
        if ( (  cmp52 ( (  to_dash_bs2070 ) , ( ( (  s2063 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2070 = (  op_dash_add75 ( (  to_dash_bs2070 ) , ( (  next_dash_char115 ) ( ( (  offset_dash_ptr_prime_600 ) ( ( ( (  s2063 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2070 ) ) ) ) ) ) );
    }
    return ( (struct StrView_24) { .f_contents = ( (  subslice173 ) ( ( (  s2063 ) .f_contents ) ,  (  from_dash_bs2068 ) ,  (  to_dash_bs2070 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr605 (    char *  p359 ) {
    return ( (uint8_t * ) (  p359 ) );
}

static  struct Slice_7   cast_dash_slice604 (    struct Slice_589  s1852 ) {
    return ( (struct Slice_7) { .f_ptr = ( (  cast_dash_ptr605 ) ( ( (  s1852 ) .f_ptr ) ) ) , .f_count = ( (  s1852 ) .f_count ) } );
}

static  struct StrView_24   from_dash_ascii_dash_slice603 (    struct Slice_589  sl2043 ) {
    return ( (struct StrView_24) { .f_contents = ( (  cast_dash_slice604 ) ( (  sl2043 ) ) ) } );
}

struct TakeWhile_607 {
    struct Scanner_594  f_it;
    bool (*  f_pred )(    struct Char_17  );
};

static  struct Scanner_594   into_dash_iter610 (    struct Scanner_594  self2960 ) {
    return (  self2960 );
}

static  struct Scanner_594   into_dash_iter609 (    struct Scanner_594 *  self748 ) {
    return ( (  into_dash_iter610 ) ( ( * (  self748 ) ) ) );
}

static  struct TakeWhile_607   take_dash_while608 (    struct Scanner_594 *  it933 ,    bool (*  pred935 )(    struct Char_17  ) ) {
    return ( (struct TakeWhile_607) { .f_it = ( (  into_dash_iter609 ) ( (  it933 ) ) ) , .f_pred = (  pred935 ) } );
}

static  struct Maybe_137   next614 (    struct Scanner_594 *  self2957 ) {
    return ( (  next139 ) ( ( & ( ( * (  self2957 ) ) .f_s ) ) ) );
}

static  struct Maybe_137   next613 (    struct TakeWhile_607 *  self927 ) {
    struct Maybe_137  mx928 = ( (  next614 ) ( ( & ( ( * (  self927 ) ) .f_it ) ) ) );
    struct Maybe_137  dref929 = (  mx928 );
    if ( dref929.tag == Maybe_137_None_t ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    else {
        if ( dref929.tag == Maybe_137_Just_t ) {
            if ( ( ( ( * (  self927 ) ) .f_pred ) ( ( dref929 .stuff .Maybe_137_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_137_Just ) ( ( dref929 .stuff .Maybe_137_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
            }
        }
    }
}

static  struct TakeWhile_607   into_dash_iter616 (    struct TakeWhile_607  self924 ) {
    return (  self924 );
}

static  struct Maybe_137   head612 (    struct TakeWhile_607  it1092 ) {
    struct TakeWhile_607  temp615 = ( (  into_dash_iter616 ) ( (  it1092 ) ) );
    return ( (  next613 ) ( ( &temp615 ) ) );
}

static  bool   null611 (    struct TakeWhile_607  it1101 ) {
    struct Maybe_137  dref1102 = ( (  head612 ) ( (  it1101 ) ) );
    if ( dref1102.tag == Maybe_137_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env619 {
    struct Scanner_594 *  it1136;
    ;
};

struct envunion620 {
    struct Maybe_137  (*fun) (  struct env619*  ,    int32_t  );
    struct env619 env;
};

static  enum Unit_4   for_dash_each618 (    struct Range_212  iterable1024 ,   struct envunion620  fun1026 ) {
    struct RangeIter_215  temp621 = ( (  into_dash_iter216 ) ( (  iterable1024 ) ) );
    struct RangeIter_215 *  it1027 = ( &temp621 );
    while ( ( true ) ) {
        struct Maybe_145  dref1028 = ( (  next217 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_145_Just_t ) {
                struct envunion620  temp622 = (  fun1026 );
                ( temp622.fun ( &temp622.env ,  ( dref1028 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct Maybe_137   lam623 (   struct env619* env ,    int32_t  dref1139 ) {
    return ( (  next614 ) ( ( env->it1136 ) ) );
}

static  enum Unit_4   drop_prime_617 (    struct Scanner_594 *  it1136 ,    size_t  n1138 ) {
    struct env619 envinst619 = {
        .it1136 =  it1136 ,
    };
    ( (  for_dash_each618 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 1 ) ) ,  ( (  size_dash_i3289 ) ( (  n1138 ) ) ) ) ) ,  ( (struct envunion620){ .fun = (  struct Maybe_137  (*) (  struct env619*  ,    int32_t  ) )lam623 , .env =  envinst619 } ) ) );
    return ( Unit_4_Unit );
}

static  size_t   reduce625 (    struct TakeWhile_607  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_17  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct TakeWhile_607  it1049 = ( (  into_dash_iter616 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1050 = ( (  next613 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_137_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_137_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    size_t  temp626;
    return (  temp626 );
}

static  size_t   lam627 (    struct Char_17  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add75 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count624 (    struct TakeWhile_607  it1054 ) {
    return ( (  reduce625 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam627 ) ) );
}

static  struct TakeWhile_607   chars629 (    struct TakeWhile_607  self1576 ) {
    return (  self1576 );
}

static  struct Maybe_125   reduce630 (    struct TakeWhile_607  iterable1043 ,    struct Maybe_125  base1045 ,    struct Maybe_125 (*  fun1047 )(    struct Char_17  ,    struct Maybe_125  ) ) {
    struct Maybe_125  x1048 = (  base1045 );
    struct TakeWhile_607  it1049 = ( (  into_dash_iter616 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1050 = ( (  next613 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_137_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_137_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    struct Maybe_125  temp631;
    return (  temp631 );
}

static  struct Maybe_125   sequence_dash_maybe632 (    struct Char_17  e2280 ,    struct Maybe_125  b2282 ) {
    struct Maybe_125  dref2283 = (  b2282 );
    if ( dref2283.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref2283.tag == Maybe_125_Just_t ) {
            struct Maybe_145  dref2285 = ( (  parse_dash_digit146 ) ( (  e2280 ) ) );
            if ( dref2285.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
            }
            else {
                if ( dref2285.tag == Maybe_145_Just_t ) {
                    return ( ( Maybe_125_Just ) ( (  op_dash_add157 ( (  op_dash_mul40 ( ( dref2283 .stuff .Maybe_125_Just_s .field0 ) , (  from_dash_integral42 ( 10 ) ) ) ) , ( (  i32_dash_i64158 ) ( ( dref2285 .stuff .Maybe_145_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_125   parse_dash_int628 (    struct TakeWhile_607  s2277 ) {
    struct TakeWhile_607  cs2287 = ( (  chars629 ) ( (  s2277 ) ) );
    struct Maybe_137  dref2288 = ( (  head612 ) ( (  cs2287 ) ) );
    if ( dref2288.tag == Maybe_137_Just_t ) {
        return ( (  reduce630 ) ( (  cs2287 ) ,  ( ( Maybe_125_Just ) ( (  from_dash_integral42 ( 0 ) ) ) ) ,  (  sequence_dash_maybe632 ) ) );
    }
    else {
        if ( dref2288.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
}

static  struct Maybe_125   scan_dash_int606 (    struct Scanner_594 *  sc2969 ) {
    struct TakeWhile_607  digit_dash_chars2970 = ( (  take_dash_while608 ) ( (  sc2969 ) ,  (  is_dash_digit147 ) ) );
    if ( ( (  null611 ) ( (  digit_dash_chars2970 ) ) ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    ( (  drop_prime_617 ) ( (  sc2969 ) ,  ( (  count624 ) ( (  digit_dash_chars2970 ) ) ) ) );
    return ( (  parse_dash_int628 ) ( (  digit_dash_chars2970 ) ) );
}

static  int32_t   i64_dash_i32634 (    int64_t  x601 ) {
    return ( (int32_t ) (  x601 ) );
}

struct StrConcat_636 {
    struct StrView_24  field0;
    int64_t  field1;
};

static struct StrConcat_636 StrConcat_636_StrConcat (  struct StrView_24  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_636 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_639 {
    struct StrView_24  field0;
    struct StrConcat_636  field1;
};

static struct StrConcat_639 StrConcat_639_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_636  field1 ) {
    return ( struct StrConcat_639 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_638 {
    struct StrConcat_639  field0;
    struct Char_17  field1;
};

static struct StrConcat_638 StrConcat_638_StrConcat (  struct StrConcat_639  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_638 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_643 {
    struct StrViewIter_134  f_left;
    struct IntStrIter_200  f_right;
};

struct StrConcatIter_642 {
    struct StrViewIter_134  f_left;
    struct StrConcatIter_643  f_right;
};

struct StrConcatIter_641 {
    struct StrConcatIter_642  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_641   into_dash_iter645 (    struct StrConcatIter_641  self1416 ) {
    return (  self1416 );
}

static  struct Maybe_137   next648 (    struct StrConcatIter_643 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next139 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next208 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next647 (    struct StrConcatIter_642 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next139 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next648 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next646 (    struct StrConcatIter_641 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next647 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each640 (    struct StrConcatIter_641  iterable1024 ,    enum Unit_4 (*  fun1026 )(    struct Char_17  ) ) {
    struct StrConcatIter_641  temp644 = ( (  into_dash_iter645 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_641 *  it1027 = ( &temp644 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next646 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrConcatIter_643   into_dash_iter654 (    struct StrConcat_636  dref1423 ) {
    return ( (struct StrConcatIter_643) { .f_left = ( (  chars135 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars243 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_643   chars653 (    struct StrConcat_636  self1434 ) {
    return ( (  into_dash_iter654 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_642   into_dash_iter652 (    struct StrConcat_639  dref1423 ) {
    return ( (struct StrConcatIter_642) { .f_left = ( (  chars135 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars653 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_642   chars651 (    struct StrConcat_639  self1434 ) {
    return ( (  into_dash_iter652 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_641   into_dash_iter650 (    struct StrConcat_638  dref1423 ) {
    return ( (struct StrConcatIter_641) { .f_left = ( (  chars651 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_641   chars649 (    struct StrConcat_638  self1434 ) {
    return ( (  into_dash_iter650 ) ( (  self1434 ) ) );
}

static  enum Unit_4   print637 (    struct StrConcat_638  s1621 ) {
    ( (  for_dash_each640 ) ( ( (  chars649 ) ( (  s1621 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum MouseButton_514   undefined655 (  ) {
    enum MouseButton_514  temp656;
    return (  temp656 );
}

static  enum MouseButton_514   panic_prime_635 (    struct StrConcat_636  errmsg1635 ) {
    ( (  print637 ) ( ( ( StrConcat_638_StrConcat ) ( ( ( StrConcat_639_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1635 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( (  undefined655 ) ( ) );
}

static  enum MouseButton_514   btn_dash_to_dash_mouse_dash_button633 (    int64_t  btn3120 ) {
    return ( {  int32_t  dref3121 = ( (  i64_dash_i32634 ) ( (  btn3120 ) ) ) ;  dref3121 == 0 ? ( MouseButton_514_MouseLeft ) :  dref3121 == 1 ? ( MouseButton_514_MouseMiddle ) :  dref3121 == 2 ? ( MouseButton_514_MouseRight ) :  dref3121 == 64 ? ( MouseButton_514_ScrollUp ) :  dref3121 == 65 ? ( MouseButton_514_ScrollDown ) : ( (  panic_prime_635 ) ( ( ( StrConcat_636_StrConcat ) ( ( (  from_dash_string111 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3120 ) ) ) ) ) ; } );
}

static  struct Scanner_594   mk658 (    struct StrView_24  s2963 ) {
    return ( (struct Scanner_594) { .f_s = ( (  into_dash_iter136 ) ( (  s2963 ) ) ) } );
}

static  struct Maybe_510   parse_dash_csi588 (    struct Slice_589  seq3127 ) {
    if ( (  eq275 ( ( (  seq3127 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    char  last3128 = (  elem_dash_get590 ( (  seq3127 ) , (  op_dash_sub43 ( ( (  seq3127 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq573 ( (  elem_dash_get590 ( (  seq3127 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike574 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_594  temp595 = ( (  mk_dash_from_dash_str596 ) ( ( (  substr597 ) ( ( (  from_dash_ascii_dash_slice603 ) ( (  seq3127 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3127 ) .f_count ) ) ) ) );
        struct Scanner_594 *  sc3129 = ( &temp595 );
        struct Maybe_125  dref3130 = ( (  scan_dash_int606 ) ( (  sc3129 ) ) );
        if ( dref3130.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
        else {
            if ( dref3130.tag == Maybe_125_Just_t ) {
                ( (  next614 ) ( (  sc3129 ) ) );
                struct Maybe_125  dref3132 = ( (  scan_dash_int606 ) ( (  sc3129 ) ) );
                if ( dref3132.tag == Maybe_125_None_t ) {
                    return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
                }
                else {
                    if ( dref3132.tag == Maybe_125_Just_t ) {
                        ( (  next614 ) ( (  sc3129 ) ) );
                        struct Maybe_125  dref3134 = ( (  scan_dash_int606 ) ( (  sc3129 ) ) );
                        if ( dref3134.tag == Maybe_125_None_t ) {
                            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
                        }
                        else {
                            if ( dref3134.tag == Maybe_125_Just_t ) {
                                return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Mouse ) ( ( (struct MouseEvent_513) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button633 ) ( ( dref3130 .stuff .Maybe_125_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub222 ( ( (  i64_dash_i32634 ) ( ( dref3132 .stuff .Maybe_125_Just_s .field0 ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) , .f_y = (  op_dash_sub222 ( ( (  i64_dash_i32634 ) ( ( dref3134 .stuff .Maybe_125_Just_s .field0 ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) , .f_pressed = (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq275 ( ( (  seq3127 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Up_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Down_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Right_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Left_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Home_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    if ( (  eq573 ( (  last3128 ) , ( (  from_dash_charlike574 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_594  temp657 = ( (  mk658 ) ( ( (  from_dash_ascii_dash_slice603 ) ( (  seq3127 ) ) ) ) );
        struct Scanner_594 *  sc3136 = ( &temp657 );
        struct Maybe_125  dref3137 = ( (  scan_dash_int606 ) ( (  sc3136 ) ) );
        if ( dref3137.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
        else {
            if ( dref3137.tag == Maybe_125_Just_t ) {
                return ( {  int32_t  dref3139 = ( (  i64_dash_i32634 ) ( ( dref3137 .stuff .Maybe_125_Just_s .field0 ) ) ) ;  dref3139 == 1 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Home_t } ) ) ) ) ) :  dref3139 == 2 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Insert_t } ) ) ) ) ) :  dref3139 == 3 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Delete_t } ) ) ) ) ) :  dref3139 == 4 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_End_t } ) ) ) ) ) :  dref3139 == 5 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_PageUp_t } ) ) ) ) ) :  dref3139 == 6 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_PageDown_t } ) ) ) ) ) :  dref3139 == 15 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F5_t } ) ) ) ) ) :  dref3139 == 17 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F6_t } ) ) ) ) ) :  dref3139 == 18 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F7_t } ) ) ) ) ) :  dref3139 == 19 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F8_t } ) ) ) ) ) :  dref3139 == 20 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F9_t } ) ) ) ) ) :  dref3139 == 21 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F10_t } ) ) ) ) ) :  dref3139 == 23 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F11_t } ) ) ) ) ) :  dref3139 == 24 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F12_t } ) ) ) ) ) : ( (struct Maybe_510) { .tag = Maybe_510_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
}

static  struct Slice_589   subslice659 (    struct Slice_589  slice1702 ,    size_t  from1704 ,    size_t  to1706 ) {
    char *  begin_dash_ptr1707 = ( (  offset_dash_ptr586 ) ( ( (  slice1702 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  from1704 ) ) ) ) );
    if ( ( (  cmp52 ( (  from1704 ) , (  to1706 ) ) != 0 ) || (  cmp52 ( (  from1704 ) , ( (  slice1702 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_589) { .f_ptr = (  begin_dash_ptr1707 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1708 = (  op_dash_sub43 ( ( (  min174 ) ( (  to1706 ) ,  ( (  slice1702 ) .f_count ) ) ) , (  from1704 ) ) );
    return ( (struct Slice_589) { .f_ptr = (  begin_dash_ptr1707 ) , .f_count = (  count1708 ) } );
}

static  char *   cast661 (    struct Array_576 *  x356 ) {
    return ( (char * ) (  x356 ) );
}

static  struct Slice_589   as_dash_slice660 (    struct Array_576 *  arr2116 ) {
    return ( (struct Slice_589) { .f_ptr = ( (  cast661 ) ( (  arr2116 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_663 {
    enum {
        Maybe_663_None_t,
        Maybe_663_Just_t,
    } tag;
    union {
        struct {
            struct Key_512  field0;
        } Maybe_663_Just_s;
    } stuff;
};

static struct Maybe_663 Maybe_663_Just (  struct Key_512  field0 ) {
    return ( struct Maybe_663 ) { .tag = Maybe_663_Just_t, .stuff = { .Maybe_663_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_663   parse_dash_ss3664 (    char  c3124 ) {
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Up_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Down_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Right_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Left_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Home_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_End_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F1_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F2_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F3_t } ) ) );
    }
    if ( (  eq573 ( (  c3124 ) , ( (  from_dash_charlike574 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F4_t } ) ) );
    }
    return ( (struct Maybe_663) { .tag = Maybe_663_None_t } );
}

static  struct Maybe_510   read_dash_key523 (  ) {
    char  temp524 = ( (  undefined525 ) ( ) );
    char *  ch3141 = ( &temp524 );
    struct Maybe_527  dref3142 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 0 ) ) ) );
    if ( dref3142.tag == Maybe_527_None_t ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    else {
        if ( dref3142.tag == Maybe_527_Just_t ) {
            (*  ch3141 ) = ( dref3142 .stuff .Maybe_527_Just_s .field0 );
        }
    }
    if ( (  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) , (  from_dash_integral103 ( 13 ) ) ) ) ) {
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Enter_t } ) ) ) ) );
    }
    if ( (  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) , (  from_dash_integral103 ( 127 ) ) ) ) ) {
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) , (  from_dash_integral103 ( 27 ) ) ) == 0 ) && ( !  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) , (  from_dash_integral103 ( 9 ) ) ) ) ) ) {
        char  letter3144 = ( (  u8_dash_ascii536 ) ( ( (  u32_dash_u8109 ) ( ( (  u32_dash_or369 ) ( ( (  u8_dash_u32537 ) ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) ) ) ,  ( (  from_dash_hex541 ) ( ( (  from_dash_string111 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( ( Key_512_Ctrl ) ( (  letter3144 ) ) ) ) ) ) );
    }
    if ( ( !  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) , (  from_dash_integral103 ( 27 ) ) ) ) ) {
        if ( (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3141 ) ) ) ) , (  from_dash_integral103 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key523 ) ( ) );
        } else {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( ( Key_512_Char ) ( ( * (  ch3141 ) ) ) ) ) ) ) );
        }
    }
    char  temp572 = ( (  undefined525 ) ( ) );
    char *  ch23145 = ( &temp572 );
    struct Maybe_527  dref3146 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 50 ) ) ) );
    if ( dref3146.tag == Maybe_527_None_t ) {
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3146.tag == Maybe_527_Just_t ) {
            (*  ch23145 ) = ( dref3146 .stuff .Maybe_527_Just_s .field0 );
        }
    }
    if ( (  eq573 ( ( * (  ch23145 ) ) , ( (  from_dash_charlike574 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_576  temp577 = ( ( (  zeroed578 ) ( ) ) );
        struct Array_576 *  seq3148 = ( &temp577 );
        int32_t  slen3149 = (  from_dash_integral49 ( 0 ) );
        while ( (  cmp209 ( (  slen3149 ) , (  from_dash_integral49 ( 31 ) ) ) == 0 ) ) {
            char  temp582 = ( (  undefined525 ) ( ) );
            char *  sc3150 = ( &temp582 );
            struct Maybe_527  dref3151 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 50 ) ) ) );
            if ( dref3151.tag == Maybe_527_None_t ) {
                break;
            }
            else {
                if ( dref3151.tag == Maybe_527_Just_t ) {
                    (*  sc3150 ) = ( dref3151 .stuff .Maybe_527_Just_s .field0 );
                }
            }
            ( (  set583 ) ( (  seq3148 ) ,  ( (  i32_dash_size76 ) ( (  slen3149 ) ) ) ,  ( * (  sc3150 ) ) ) );
            slen3149 = (  op_dash_add218 ( (  slen3149 ) , (  from_dash_integral49 ( 1 ) ) ) );
            if ( ( (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  sc3150 ) ) ) ) , (  from_dash_integral103 ( 64 ) ) ) != 0 ) && (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  sc3150 ) ) ) ) , (  from_dash_integral103 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi588 ) ( ( (  subslice659 ) ( ( (  as_dash_slice660 ) ( (  seq3148 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size76 ) ( (  slen3149 ) ) ) ) ) ) );
    }
    if ( (  eq573 ( ( * (  ch23145 ) ) , ( (  from_dash_charlike574 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp662 = ( (  undefined525 ) ( ) );
        char *  sc3153 = ( &temp662 );
        struct Maybe_527  dref3154 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 50 ) ) ) );
        if ( dref3154.tag == Maybe_527_None_t ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3154.tag == Maybe_527_Just_t ) {
                (*  sc3153 ) = ( dref3154 .stuff .Maybe_527_Just_s .field0 );
            }
        }
        struct Maybe_663  dref3156 = ( (  parse_dash_ss3664 ) ( ( * (  sc3153 ) ) ) );
        if ( dref3156.tag == Maybe_663_None_t ) {
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
        else {
            if ( dref3156.tag == Maybe_663_Just_t ) {
                return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( dref3156 .stuff .Maybe_663_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Escape_t } ) ) ) ) );
}

static  struct Maybe_510   read_dash_event520 (   struct env28* env ,    struct Tui_30 *  tui3166 ) {
    struct envunion29  temp521 = ( (struct envunion29){ .fun = (  bool  (*) (  struct env27*  ,    struct Tui_30 *  ) )update_dash_dimensions522 , .env =  env->envinst27 } );
    ( temp521.fun ( &temp521.env ,  (  tui3166 ) ) );
    struct Maybe_510  dref3167 = ( (  read_dash_key523 ) ( ) );
    if ( dref3167.tag == Maybe_510_None_t ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    else {
        if ( dref3167.tag == Maybe_510_Just_t ) {
            (*  tui3166 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_510_Just ) ( ( dref3167 .stuff .Maybe_510_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_510   lam518 (   struct env508* env ) {
    struct envunion509  temp519 = ( (struct envunion509){ .fun = (  struct Maybe_510  (*) (  struct env28*  ,    struct Tui_30 *  ) )read_dash_event520 , .env =  env->envinst28 } );
    return ( temp519.fun ( &temp519.env ,  ( env->tui3375 ) ) );
}

static  struct Maybe_510   next666 (    struct FunIter_507 *  self994 ) {
    if ( ( ( * (  self994 ) ) .f_finished ) ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    struct envunion515  temp667 = ( ( * (  self994 ) ) .f_fun );
    struct Maybe_510  dref995 = ( temp667.fun ( &temp667.env ) );
    if ( dref995.tag == Maybe_510_Just_t ) {
        return ( ( Maybe_510_Just ) ( ( dref995 .stuff .Maybe_510_Just_s .field0 ) ) );
    }
    else {
        if ( dref995.tag == Maybe_510_None_t ) {
            (*  self994 ) .f_finished = ( true );
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
    }
}

struct envunion669 {
    bool  (*fun) (  struct env34*  ,    struct Screen_457 *  );
    struct env34 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed670 (   struct env34* env ,    struct Screen_457 *  screen3235 ) {
    struct Tui_30 *  tui3236 = ( ( * (  screen3235 ) ) .f_tui );
    struct envunion35  temp671 = ( (struct envunion35){ .fun = (  bool  (*) (  struct env27*  ,    struct Tui_30 *  ) )update_dash_dimensions522 , .env =  env->envinst27 } );
    ( temp671.fun ( &temp671.env ,  (  tui3236 ) ) );
    if ( ( ! ( ( * (  tui3236 ) ) .f_should_dash_redraw ) ) ) {
        return ( false );
    }
    (*  screen3235 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3237 = ( ( * ( ( * (  screen3235 ) ) .f_tui ) ) .f_width );
    uint32_t  h3238 = ( ( * ( ( * (  screen3235 ) ) .f_tui ) ) .f_height );
    size_t  nusz3239 = ( (  u32_dash_size471 ) ( (  op_dash_mul475 ( (  w3237 ) , (  h3238 ) ) ) ) );
    if ( (  cmp52 ( (  nusz3239 ) , ( ( ( * (  screen3235 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_457  nuscreen3240 = ( (  mk_dash_screen465 ) ( (  tui3236 ) ,  ( ( * (  screen3235 ) ) .f_al ) ) );
    (*  screen3235 ) .f_current = ( (  nuscreen3240 ) .f_current );
    (*  screen3235 ) .f_previous = ( (  nuscreen3240 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw672 (    struct Tui_30 *  tui3171 ) {
    bool  redraw3172 = ( ( * (  tui3171 ) ) .f_should_dash_redraw );
    (*  tui3171 ) .f_should_dash_redraw = ( false );
    return (  redraw3172 );
}

struct env676 {
    struct Slice_458  s1825;
    ;
    ;
    struct Cell_459 (*  fun1827 )(    struct Cell_459  );
    ;
};

struct envunion677 {
    enum Unit_4  (*fun) (  struct env676*  ,    int32_t  );
    struct env676 env;
};

static  enum Unit_4   for_dash_each675 (    struct Range_212  iterable1024 ,   struct envunion677  fun1026 ) {
    struct RangeIter_215  temp678 = ( (  into_dash_iter216 ) ( (  iterable1024 ) ) );
    struct RangeIter_215 *  it1027 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_145  dref1028 = ( (  next217 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_145_Just_t ) {
                struct envunion677  temp679 = (  fun1026 );
                ( temp679.fun ( &temp679.env ,  ( dref1028 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam680 (   struct env676* env ,    int32_t  i1829 ) {
    return ( (  set483 ) ( ( env->s1825 ) ,  ( (  i32_dash_size76 ) ( (  i1829 ) ) ) ,  ( ( env->fun1827 ) ( (  elem_dash_get487 ( ( env->s1825 ) , ( (  i32_dash_size76 ) ( (  i1829 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map674 (    struct Slice_458  s1825 ,    struct Cell_459 (*  fun1827 )(    struct Cell_459  ) ) {
    struct env676 envinst676 = {
        .s1825 =  s1825 ,
        .fun1827 =  fun1827 ,
    };
    ( (  for_dash_each675 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_i3289 ) ( (  op_dash_sub43 ( ( (  s1825 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion677){ .fun = (  enum Unit_4  (*) (  struct env676*  ,    int32_t  ) )lam680 , .env =  envinst676 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_459   lam681 (    struct Cell_459  dref3207 ) {
    return ( (struct Cell_459) { .f_c = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

static  enum Unit_4   clear_dash_screen673 (    struct Screen_457 *  screen3206 ) {
    ( (  map674 ) ( ( ( * (  screen3206 ) ) .f_current ) ,  (  lam681 ) ) );
    return ( Unit_4_Unit );
}

struct ClockTime_682 {
    uint32_t  f_h;
    uint8_t  f_m;
    uint8_t  f_s;
    bool  f_neg;
};

static  uint8_t   i64_dash_u8684 (    int64_t  x598 ) {
    return ( (uint8_t ) (  x598 ) );
}

static  int64_t   mod685 (    int64_t  l1179 ,    int64_t  d1181 ) {
    int64_t  r1182 = (  op_dash_div224 ( (  l1179 ) , (  d1181 ) ) );
    int64_t  m1183 = (  op_dash_sub226 ( (  l1179 ) , (  op_dash_mul40 ( (  r1182 ) , (  d1181 ) ) ) ) );
    if ( (  cmp245 ( (  m1183 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add157 ( (  d1181 ) , (  m1183 ) ) );
    } else {
        return (  m1183 );
    }
}

static  uint32_t   i64_dash_u32686 (    int64_t  x604 ) {
    return ( (uint32_t ) (  x604 ) );
}

static  struct ClockTime_682   clock_dash_time_dash_from_dash_secs683 (    int64_t  secs3335 ) {
    bool  neg3336 = ( false );
    if ( (  cmp245 ( (  secs3335 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        neg3336 = ( true );
        secs3335 = (  op_dash_neg246 ( (  secs3335 ) ) );
    }
    uint8_t  s3337 = ( (  i64_dash_u8684 ) ( ( (  mod685 ) ( (  secs3335 ) ,  (  from_dash_integral42 ( 60 ) ) ) ) ) );
    uint8_t  m3338 = ( (  i64_dash_u8684 ) ( ( (  mod685 ) ( (  op_dash_div224 ( (  secs3335 ) , (  from_dash_integral42 ( 60 ) ) ) ) ,  (  from_dash_integral42 ( 60 ) ) ) ) ) );
    uint32_t  h3339 = ( (  i64_dash_u32686 ) ( (  op_dash_div224 ( (  secs3335 ) , (  op_dash_mul40 ( (  from_dash_integral42 ( 60 ) ) , (  from_dash_integral42 ( 60 ) ) ) ) ) ) ) );
    return ( (struct ClockTime_682) { .f_h = (  h3339 ) , .f_m = (  m3338 ) , .f_s = (  s3337 ) , .f_neg = (  neg3336 ) } );
}

static  struct StrView_24   from_dash_charlike687 (    uint8_t *  ptr77 ,    size_t  count79 ) {
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = (  ptr77 ) , .f_count = (  count79 ) } ) } );
}

struct PadZeroes_688 {
    int32_t  f_x;
    uint8_t  f_len;
};

static  uint8_t   max690 (    uint8_t  l1251 ,    uint8_t  r1253 ) {
    if ( (  cmp116 ( (  l1251 ) , (  r1253 ) ) == 2 ) ) {
        return (  l1251 );
    } else {
        return (  r1253 );
    }
}

static  uint8_t   i32_dash_u8691 (    int32_t  x586 ) {
    return ( (uint8_t ) (  x586 ) );
}

static  int32_t   op_dash_div693 (    int32_t  l222 ,    int32_t  r224 ) {
    return ( (  l222 ) / (  r224 ) );
}

static  int32_t   count_dash_digits692 (    int32_t  self1355 ) {
    if ( (  eq56 ( (  self1355 ) , (  from_dash_integral49 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1356 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp209 ( (  self1355 ) , (  from_dash_integral49 ( 0 ) ) ) == 2 ) ) {
        self1355 = (  op_dash_div693 ( (  self1355 ) , (  from_dash_integral49 ( 10 ) ) ) );
        digits1356 = (  op_dash_add218 ( (  digits1356 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1356 );
}

static  struct PadZeroes_688   pad_dash_zeroes689 (    int32_t  x1554 ,    uint8_t  num_dash_zeroes1556 ,    bool  trim_dash_larger1558 ) {
    return ( (struct PadZeroes_688) { .f_x = (  x1554 ) , .f_len = ( ( ! (  trim_dash_larger1558 ) ) ? (  num_dash_zeroes1556 ) : ( (  max690 ) ( (  num_dash_zeroes1556 ) ,  ( (  i32_dash_u8691 ) ( ( (  count_dash_digits692 ) ( (  x1554 ) ) ) ) ) ) ) ) } );
}

static  int32_t   cast695 (    uint32_t  x356 ) {
    return ( (int32_t ) (  x356 ) );
}

static  int32_t   u32_dash_i32694 (    uint32_t  x640 ) {
    return ( (  cast695 ) ( (  x640 ) ) );
}

struct StrConcat_700 {
    struct StrView_24  field0;
    struct PadZeroes_688  field1;
};

static struct StrConcat_700 StrConcat_700_StrConcat (  struct StrView_24  field0 ,  struct PadZeroes_688  field1 ) {
    return ( struct StrConcat_700 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_699 {
    struct StrConcat_700  field0;
    struct Char_17  field1;
};

static struct StrConcat_699 StrConcat_699_StrConcat (  struct StrConcat_700  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_699 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_698 {
    struct StrConcat_699  field0;
    struct PadZeroes_688  field1;
};

static struct StrConcat_698 StrConcat_698_StrConcat (  struct StrConcat_699  field0 ,  struct PadZeroes_688  field1 ) {
    return ( struct StrConcat_698 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_697 {
    struct StrConcat_698  field0;
    struct Char_17  field1;
};

static struct StrConcat_697 StrConcat_697_StrConcat (  struct StrConcat_698  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_697 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_696 {
    struct StrConcat_697  field0;
    struct PadZeroes_688  field1;
};

static struct StrConcat_696 StrConcat_696_StrConcat (  struct StrConcat_697  field0 ,  struct PadZeroes_688  field1 ) {
    return ( struct StrConcat_696 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_707 {
    struct StrViewIter_134  f_left;
    struct PadZeroes_688  f_right;
};

struct StrConcatIter_706 {
    struct StrConcatIter_707  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_705 {
    struct StrConcatIter_706  f_left;
    struct PadZeroes_688  f_right;
};

struct StrConcatIter_704 {
    struct StrConcatIter_705  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_703 {
    struct StrConcatIter_704  f_left;
    struct PadZeroes_688  f_right;
};

static  struct PadZeroes_688   chars717 (    struct PadZeroes_688  self1551 ) {
    return (  self1551 );
}

static  struct StrConcatIter_707   into_dash_iter716 (    struct StrConcat_700  dref1423 ) {
    return ( (struct StrConcatIter_707) { .f_left = ( (  chars135 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars717 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_707   chars715 (    struct StrConcat_700  self1434 ) {
    return ( (  into_dash_iter716 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_706   into_dash_iter714 (    struct StrConcat_699  dref1423 ) {
    return ( (struct StrConcatIter_706) { .f_left = ( (  chars715 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_706   chars713 (    struct StrConcat_699  self1434 ) {
    return ( (  into_dash_iter714 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_705   into_dash_iter712 (    struct StrConcat_698  dref1423 ) {
    return ( (struct StrConcatIter_705) { .f_left = ( (  chars713 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars717 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_705   chars711 (    struct StrConcat_698  self1434 ) {
    return ( (  into_dash_iter712 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_704   into_dash_iter710 (    struct StrConcat_697  dref1423 ) {
    return ( (struct StrConcatIter_704) { .f_left = ( (  chars711 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_704   chars709 (    struct StrConcat_697  self1434 ) {
    return ( (  into_dash_iter710 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_703   into_dash_iter708 (    struct StrConcat_696  dref1423 ) {
    return ( (struct StrConcatIter_703) { .f_left = ( (  chars709 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars717 ) ( ( dref1423 .field1 ) ) ) } );
}

struct env726 {
    int32_t  base1160;
    ;
};

struct envunion727 {
    int32_t  (*fun) (  struct env726*  ,    int32_t  ,    int32_t  );
    struct env726 env;
};

static  int32_t   reduce725 (    struct Range_212  iterable1043 ,    int32_t  base1045 ,   struct envunion727  fun1047 ) {
    int32_t  x1048 = (  base1045 );
    struct RangeIter_215  it1049 = ( (  into_dash_iter216 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1050 = ( (  next217 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_145_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_145_Just_t ) {
                struct envunion727  temp728 = (  fun1047 );
                x1048 = ( temp728.fun ( &temp728.env ,  ( dref1050 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    int32_t  temp729;
    return (  temp729 );
}

static  int32_t   op_dash_mul731 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) * (  r219 ) );
}

static  int32_t   lam730 (   struct env726* env ,    int32_t  item1164 ,    int32_t  x1166 ) {
    return (  op_dash_mul731 ( (  x1166 ) , ( env->base1160 ) ) );
}

static  int32_t   pow724 (    int32_t  base1160 ,    int32_t  p1162 ) {
    struct env726 envinst726 = {
        .base1160 =  base1160 ,
    };
    return ( (  reduce725 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1162 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral49 ( 1 ) ) ,  ( (struct envunion727){ .fun = (  int32_t  (*) (  struct env726*  ,    int32_t  ,    int32_t  ) )lam730 , .env =  envinst726 } ) ) );
}

static  struct Maybe_137   next723 (    struct PadZeroes_688 *  self1540 ) {
    if ( (  cmp116 ( ( ( * (  self1540 ) ) .f_len ) , (  from_dash_integral103 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    int32_t  trim_dash_down1541 = ( (  pow724 ) ( (  from_dash_integral49 ( 10 ) ) ,  (  op_dash_sub222 ( ( (  u8_dash_i32148 ) ( ( ( * (  self1540 ) ) .f_len ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    int32_t  upper1542 = (  op_dash_div693 ( ( ( * (  self1540 ) ) .f_x ) , (  trim_dash_down1541 ) ) );
    int32_t  upper_dash_mask1543 = (  op_dash_mul731 ( (  op_dash_div693 ( (  upper1542 ) , (  from_dash_integral49 ( 10 ) ) ) ) , (  from_dash_integral49 ( 10 ) ) ) );
    uint8_t  digit1544 = ( (  i32_dash_u8691 ) ( (  op_dash_sub222 ( (  upper1542 ) , (  upper_dash_mask1543 ) ) ) ) );
    (*  self1540 ) .f_len = (  op_dash_sub156 ( ( ( * (  self1540 ) ) .f_len ) , (  from_dash_integral103 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1545 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1544 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1545 ) ) );
}

static  struct Maybe_137   next722 (    struct StrConcatIter_707 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next139 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next723 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next721 (    struct StrConcatIter_706 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next722 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next720 (    struct StrConcatIter_705 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next721 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next723 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next719 (    struct StrConcatIter_704 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next720 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next718 (    struct StrConcatIter_703 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next719 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next723 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce702 (    struct StrConcat_696  iterable1043 ,    size_t  base1045 ,    size_t (*  fun1047 )(    struct Char_17  ,    size_t  ) ) {
    size_t  x1048 = (  base1045 );
    struct StrConcatIter_703  it1049 = ( (  into_dash_iter708 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1050 = ( (  next718 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_137_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_137_Just_t ) {
                x1048 = ( (  fun1047 ) ( ( dref1050 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    size_t  temp732;
    return (  temp732 );
}

static  size_t   lam733 (    struct Char_17  dref1055 ,    size_t  x1057 ) {
    return (  op_dash_add75 ( (  x1057 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count701 (    struct StrConcat_696  it1054 ) {
    return ( (  reduce702 ) ( (  it1054 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam733 ) ) );
}

struct Zip_735 {
    struct StrConcatIter_703  f_left_dash_it;
    struct FromIter_282  f_right_dash_it;
};

static  struct Zip_735   into_dash_iter736 (    struct Zip_735  self874 ) {
    return (  self874 );
}

static  struct StrConcatIter_703   into_dash_iter738 (    struct StrConcatIter_703  self1416 ) {
    return (  self1416 );
}

static  struct Zip_735   zip737 (    struct StrConcatIter_703  left885 ,    struct FromIter_282  right887 ) {
    struct StrConcatIter_703  left_dash_it888 = ( (  into_dash_iter738 ) ( (  left885 ) ) );
    struct FromIter_282  right_dash_it889 = ( (  into_dash_iter290 ) ( (  right887 ) ) );
    return ( (struct Zip_735) { .f_left_dash_it = (  left_dash_it888 ) , .f_right_dash_it = (  right_dash_it889 ) } );
}

static  struct StrConcatIter_703   chars739 (    struct StrConcat_696  self1434 ) {
    return ( (  into_dash_iter708 ) ( (  self1434 ) ) );
}

struct Tuple2_742 {
    struct Char_17  field0;
    int32_t  field1;
};

static struct Tuple2_742 Tuple2_742_Tuple2 (  struct Char_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_742 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_741 {
    enum {
        Maybe_741_None_t,
        Maybe_741_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_742  field0;
        } Maybe_741_Just_s;
    } stuff;
};

static struct Maybe_741 Maybe_741_Just (  struct Tuple2_742  field0 ) {
    return ( struct Maybe_741 ) { .tag = Maybe_741_Just_t, .stuff = { .Maybe_741_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_741   next743 (    struct Zip_735 *  self877 ) {
    struct Zip_735  copy878 = ( * (  self877 ) );
    while ( ( true ) ) {
        struct Maybe_137  dref879 = ( (  next718 ) ( ( & ( (  copy878 ) .f_left_dash_it ) ) ) );
        if ( dref879.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
        }
        else {
            if ( dref879.tag == Maybe_137_Just_t ) {
                struct Maybe_145  dref881 = ( (  next287 ) ( ( & ( (  copy878 ) .f_right_dash_it ) ) ) );
                if ( dref881.tag == Maybe_145_None_t ) {
                    return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
                }
                else {
                    if ( dref881.tag == Maybe_145_Just_t ) {
                        ( (  next718 ) ( ( & ( ( * (  self877 ) ) .f_left_dash_it ) ) ) );
                        ( (  next287 ) ( ( & ( ( * (  self877 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_741_Just ) ( ( ( Tuple2_742_Tuple2 ) ( ( dref879 .stuff .Maybe_137_Just_s .field0 ) ,  ( dref881 .stuff .Maybe_145_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct Tuple2_746 {
    struct CharDestructured_97  field0;
    struct CharDestructured_97  field1;
};

static struct Tuple2_746 Tuple2_746_Tuple2 (  struct CharDestructured_97  field0 ,  struct CharDestructured_97  field1 ) {
    return ( struct Tuple2_746 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq747 (    uint32_t  l111 ,    uint32_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  bool   eq745 (    struct Char_17  l707 ,    struct Char_17  r709 ) {
    if ( ( !  eq275 ( ( (  l707 ) .f_num_dash_bytes ) , ( (  r709 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_746  dref710 = ( ( Tuple2_746_Tuple2 ) ( ( (  destructure98 ) ( (  l707 ) ) ) ,  ( (  destructure98 ) ( (  r709 ) ) ) ) );
    if ( dref710 .field0.tag == CharDestructured_97_Ref_t && dref710 .field1.tag == CharDestructured_97_Ref_t ) {
        size_t  i713 = (  from_dash_integral0 ( 0 ) );
        while ( (  cmp52 ( (  i713 ) , ( ( dref710 .field0 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq99 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref710 .field0 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i713 ) ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref710 .field1 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i713 ) ) ) ) ) ) ) ) {
                return ( false );
            }
            i713 = (  op_dash_add75 ( (  i713 ) , (  from_dash_integral0 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref710 .field0.tag == CharDestructured_97_Scalar_t && dref710 .field1.tag == CharDestructured_97_Scalar_t ) {
            return (  eq747 ( ( dref710 .field0 .stuff .CharDestructured_97_Scalar_s .field0 ) , ( dref710 .field1 .stuff .CharDestructured_97_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref710 .field0.tag == CharDestructured_97_Scalar_t && dref710 .field1.tag == CharDestructured_97_Ref_t ) {
                return (  eq99 ( ( (  u32_dash_u8109 ) ( ( dref710 .field0 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) , ( * ( ( dref710 .field1 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref710 .field0.tag == CharDestructured_97_Ref_t && dref710 .field1.tag == CharDestructured_97_Scalar_t ) {
                    return (  eq99 ( ( (  u32_dash_u8109 ) ( ( dref710 .field1 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) , ( * ( ( dref710 .field0 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

struct Zip_750 {
    struct StrViewIter_134  f_left_dash_it;
    struct FromIter_282  f_right_dash_it;
};

static  struct Zip_750   into_dash_iter751 (    struct Zip_750  self874 ) {
    return (  self874 );
}

static  struct Zip_750   zip752 (    struct StrViewIter_134  left885 ,    struct FromIter_282  right887 ) {
    struct StrViewIter_134  left_dash_it888 = ( (  into_dash_iter141 ) ( (  left885 ) ) );
    struct FromIter_282  right_dash_it889 = ( (  into_dash_iter290 ) ( (  right887 ) ) );
    return ( (struct Zip_750) { .f_left_dash_it = (  left_dash_it888 ) , .f_right_dash_it = (  right_dash_it889 ) } );
}

static  struct Maybe_741   next754 (    struct Zip_750 *  self877 ) {
    struct Zip_750  copy878 = ( * (  self877 ) );
    while ( ( true ) ) {
        struct Maybe_137  dref879 = ( (  next139 ) ( ( & ( (  copy878 ) .f_left_dash_it ) ) ) );
        if ( dref879.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
        }
        else {
            if ( dref879.tag == Maybe_137_Just_t ) {
                struct Maybe_145  dref881 = ( (  next287 ) ( ( & ( (  copy878 ) .f_right_dash_it ) ) ) );
                if ( dref881.tag == Maybe_145_None_t ) {
                    return ( (struct Maybe_741) { .tag = Maybe_741_None_t } );
                }
                else {
                    if ( dref881.tag == Maybe_145_Just_t ) {
                        ( (  next139 ) ( ( & ( ( * (  self877 ) ) .f_left_dash_it ) ) ) );
                        ( (  next287 ) ( ( & ( ( * (  self877 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_741_Just ) ( ( ( Tuple2_742_Tuple2 ) ( ( dref879 .stuff .Maybe_137_Just_s .field0 ) ,  ( dref881 .stuff .Maybe_145_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   is_dash_whitespace755 (    struct Char_17  c2223 ) {
    return ( ( (  eq745 ( (  c2223 ) , ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq745 ( (  c2223 ) , ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq745 ( (  c2223 ) , ( (  from_dash_charlike112 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum Unit_4   set_dash_screen_dash_bg756 (    struct Screen_457 *  screen3248 ,    struct Color_460  c3250 ) {
    (*  screen3248 ) .f_default_dash_bg = (  c3250 );
    return ( Unit_4_Unit );
}

static  enum Unit_4   put_dash_char757 (    struct Screen_457 *  screen3281 ,    struct Char_17  c3283 ,    int32_t  x3285 ,    int32_t  y3287 ) {
    int32_t  w3288 = ( (  u32_dash_i32694 ) ( ( ( * ( ( * (  screen3281 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp209 ( (  x3285 ) , (  w3288 ) ) != 0 ) || (  cmp209 ( (  y3287 ) , ( (  u32_dash_i32694 ) ( ( ( * ( ( * (  screen3281 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp209 ( (  x3285 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) ) || (  cmp209 ( (  y3287 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_4_Unit );
    }
    size_t  i3289 = ( (  i32_dash_size76 ) ( (  op_dash_add218 ( (  op_dash_mul731 ( (  y3287 ) , (  w3288 ) ) ) , (  x3285 ) ) ) ) );
    struct Color_460  fg3290 = ( ( * (  screen3281 ) ) .f_default_dash_fg );
    struct Color_460  bg3291 = ( ( * (  screen3281 ) ) .f_default_dash_bg );
    struct Char_17  c3292 = (  c3283 );
    ( (  set483 ) ( ( ( * (  screen3281 ) ) .f_current ) ,  (  i3289 ) ,  ( (struct Cell_459) { .f_c = (  c3292 ) , .f_fg = (  fg3290 ) , .f_bg = (  bg3291 ) } ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   cb748 (    struct Screen_457 *  screen3342 ,    struct StrView_24  s3344 ,    int32_t  x3346 ,    int32_t  y3348 ) {
    struct Color_460  og_dash_bg3349 = ( ( * (  screen3342 ) ) .f_default_dash_bg );
    struct Zip_750  temp749 =  into_dash_iter751 ( ( (  zip752 ) ( ( (  chars135 ) ( (  s3344 ) ) ) ,  ( (  from291 ) ( (  x3346 ) ) ) ) ) );
    while (true) {
        struct Maybe_741  __cond753 =  next754 (&temp749);
        if (  __cond753 .tag == 0 ) {
            break;
        }
        struct Tuple2_742  dref3350 =  __cond753 .stuff .Maybe_741_Just_s .field0;
        if ( ( (  is_dash_whitespace755 ) ( ( dref3350 .field0 ) ) ) ) {
            ( (  set_dash_screen_dash_bg756 ) ( (  screen3342 ) ,  (  og_dash_bg3349 ) ) );
            ( (  put_dash_char757 ) ( (  screen3342 ) ,  ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) ,  ( dref3350 .field1 ) ,  (  y3348 ) ) );
        } else {
            ( (  set_dash_screen_dash_bg756 ) ( (  screen3342 ) ,  ( ( * (  screen3342 ) ) .f_default_dash_fg ) ) );
            ( (  put_dash_char757 ) ( (  screen3342 ) ,  ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) ,  ( dref3350 .field1 ) ,  (  y3348 ) ) );
        }
    }
    ( (  set_dash_screen_dash_bg756 ) ( (  screen3342 ) ,  (  og_dash_bg3349 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   undefined759 (  ) {
    enum Unit_4  temp760;
    return (  temp760 );
}

static  enum Unit_4   unreachable758 (  ) {
    ( (  print310 ) ( ( (  from_dash_string111 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( (  undefined759 ) ( ) );
}

static  enum Unit_4   draw_dash_digit744 (    struct Screen_457 *  screen3355 ,    struct Char_17  digit3357 ,    int32_t  x3359 ,    int32_t  y3361 ) {
    if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) {
        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 0000 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 0000 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
    } else {
        if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) {
            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "1111  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "111111" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
        } else {
            if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "2" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 2222 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "22  22" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "   22 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  22  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "222222" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
            } else {
                if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "3" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 3333 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "33  33" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "   333" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "33  33" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 3333 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                } else {
                    if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "4" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "44  44" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "44  44" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "444444" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "    44" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "    44" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                    } else {
                        if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "5" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "555555" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "55    " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "55555 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "    55" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "55555 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                        } else {
                            if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "6" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 6666 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "66    " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "66666 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "66  66" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 6666 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                            } else {
                                if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "777777" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "   77 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  77  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 77   " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "77    " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                } else {
                                    if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "8" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "88  88" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "88  88" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                        ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                    } else {
                                        if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 9999 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "99  99" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 99999" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "    99" ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                            ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " 9999 " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                        } else {
                                            if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  ::  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "  ::  " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                                ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                            } else {
                                                if ( (  eq745 ( (  digit3357 ) , ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) ) ) {
                                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  y3361 ) ) );
                                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( " ---- " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                                    ( (  cb748 ) ( (  screen3355 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3359 ) ,  (  op_dash_add218 ( (  y3361 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                                } else {
                                                    ( (  unreachable758 ) ( ) );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   min762 (    int32_t  l1186 ,    int32_t  r1188 ) {
    if ( (  cmp209 ( (  l1186 ) , (  r1188 ) ) == 0 ) ) {
        return (  l1186 );
    } else {
        return (  r1188 );
    }
}

struct env764 {
    int32_t  x3304;
    struct Screen_457 *  screen3295;
    ;
    int32_t  y3301;
    ;
};

struct envunion765 {
    enum Unit_4  (*fun) (  struct env764*  ,    struct Tuple2_742  );
    struct env764 env;
};

static  enum Unit_4   for_dash_each763 (    struct Zip_735  iterable1024 ,   struct envunion765  fun1026 ) {
    struct Zip_735  temp766 = ( (  into_dash_iter736 ) ( (  iterable1024 ) ) );
    struct Zip_735 *  it1027 = ( &temp766 );
    while ( ( true ) ) {
        struct Maybe_741  dref1028 = ( (  next743 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_741_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_741_Just_t ) {
                struct envunion765  temp767 = (  fun1026 );
                ( temp767.fun ( &temp767.env ,  ( dref1028 .stuff .Maybe_741_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam768 (   struct env764* env ,    struct Tuple2_742  dref3306 ) {
    ( (  put_dash_char757 ) ( ( env->screen3295 ) ,  ( dref3306 .field0 ) ,  (  op_dash_add218 ( ( env->x3304 ) , ( dref3306 .field1 ) ) ) ,  ( env->y3301 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   draw_dash_str761 (    struct Screen_457 *  screen3295 ,    struct StrConcat_696  s3297 ,    int32_t  x3299 ,    int32_t  y3301 ) {
    int32_t  w3302 = ( (  u32_dash_i32694 ) ( ( ( * ( ( * (  screen3295 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp209 ( (  y3301 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) || (  cmp209 ( (  y3301 ) , ( (  u32_dash_i32694 ) ( ( ( * ( ( * (  screen3295 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_4_Unit );
    }
    int32_t  i3303 = (  op_dash_add218 ( (  op_dash_mul731 ( (  y3301 ) , (  w3302 ) ) ) , (  x3299 ) ) );
    int32_t  x3304 = ( (  min762 ) ( (  x3299 ) ,  (  w3302 ) ) );
    size_t  max_dash_len3305 = ( (  i32_dash_size76 ) ( (  op_dash_sub222 ( (  w3302 ) , (  x3304 ) ) ) ) );
    struct env764 envinst764 = {
        .x3304 =  x3304 ,
        .screen3295 =  screen3295 ,
        .y3301 =  y3301 ,
    };
    ( (  for_dash_each763 ) ( ( (  zip737 ) ( ( (  chars739 ) ( (  s3297 ) ) ) ,  ( (  from291 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) ,  ( (struct envunion765){ .fun = (  enum Unit_4  (*) (  struct env764*  ,    struct Tuple2_742  ) )lam768 , .env =  envinst764 } ) ) );
    return ( Unit_4_Unit );
}

struct RenderState_770 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_460  f_fg;
    struct Color_460  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_777 {
    struct StrView_24  field0;
    uint32_t  field1;
};

static struct StrConcat_777 StrConcat_777_StrConcat (  struct StrView_24  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_777 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_776 {
    struct StrConcat_777  field0;
    struct Char_17  field1;
};

static struct StrConcat_776 StrConcat_776_StrConcat (  struct StrConcat_777  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_776 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_775 {
    struct StrConcat_776  field0;
    uint32_t  field1;
};

static struct StrConcat_775 StrConcat_775_StrConcat (  struct StrConcat_776  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_775 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_774 {
    struct StrConcat_775  field0;
    struct Char_17  field1;
};

static struct StrConcat_774 StrConcat_774_StrConcat (  struct StrConcat_775  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_774 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_783 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_782 {
    struct StrViewIter_134  f_left;
    struct IntStrIter_783  f_right;
};

struct StrConcatIter_781 {
    struct StrConcatIter_782  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_780 {
    struct StrConcatIter_781  f_left;
    struct IntStrIter_783  f_right;
};

struct StrConcatIter_779 {
    struct StrConcatIter_780  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_779   into_dash_iter785 (    struct StrConcatIter_779  self1416 ) {
    return (  self1416 );
}

struct env793 {
    uint32_t  base1160;
    ;
};

struct envunion794 {
    uint32_t  (*fun) (  struct env793*  ,    int32_t  ,    uint32_t  );
    struct env793 env;
};

static  uint32_t   reduce792 (    struct Range_212  iterable1043 ,    uint32_t  base1045 ,   struct envunion794  fun1047 ) {
    uint32_t  x1048 = (  base1045 );
    struct RangeIter_215  it1049 = ( (  into_dash_iter216 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1050 = ( (  next217 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_145_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_145_Just_t ) {
                struct envunion794  temp795 = (  fun1047 );
                x1048 = ( temp795.fun ( &temp795.env ,  ( dref1050 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    uint32_t  temp796;
    return (  temp796 );
}

static  uint32_t   lam797 (   struct env793* env ,    int32_t  item1164 ,    uint32_t  x1166 ) {
    return (  op_dash_mul475 ( (  x1166 ) , ( env->base1160 ) ) );
}

static  uint32_t   pow791 (    uint32_t  base1160 ,    int32_t  p1162 ) {
    struct env793 envinst793 = {
        .base1160 =  base1160 ,
    };
    return ( (  reduce792 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1162 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral107 ( 1 ) ) ,  ( (struct envunion794){ .fun = (  uint32_t  (*) (  struct env793*  ,    int32_t  ,    uint32_t  ) )lam797 , .env =  envinst793 } ) ) );
}

static  uint32_t   op_dash_div798 (    uint32_t  l245 ,    uint32_t  r247 ) {
    return ( (  l245 ) / (  r247 ) );
}

static  uint32_t   op_dash_sub799 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) - (  r237 ) );
}

static  struct Maybe_137   next790 (    struct IntStrIter_783 *  self1347 ) {
    if ( ( ( * (  self1347 ) ) .f_negative ) ) {
        (*  self1347 ) .f_negative = ( false );
        return ( ( Maybe_137_Just ) ( ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp209 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    uint32_t  trim_dash_down1348 = ( (  pow791 ) ( (  from_dash_integral107 ( 10 ) ) ,  (  op_dash_sub222 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    uint32_t  upper1349 = (  op_dash_div798 ( ( ( * (  self1347 ) ) .f_int ) , (  trim_dash_down1348 ) ) );
    uint32_t  upper_dash_mask1350 = (  op_dash_mul475 ( (  op_dash_div798 ( (  upper1349 ) , (  from_dash_integral107 ( 10 ) ) ) ) , (  from_dash_integral107 ( 10 ) ) ) );
    uint8_t  digit1351 = ( ( (  cast110 ) ( (  op_dash_sub799 ( (  upper1349 ) , (  upper_dash_mask1350 ) ) ) ) ) );
    (*  self1347 ) .f_len = (  op_dash_sub222 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1352 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1351 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1352 ) ) );
}

static  struct Maybe_137   next789 (    struct StrConcatIter_782 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next139 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next790 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next788 (    struct StrConcatIter_781 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next789 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next787 (    struct StrConcatIter_780 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next788 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next790 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next786 (    struct StrConcatIter_779 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next787 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each778 (    struct StrConcatIter_779  iterable1024 ,    enum Unit_4 (*  fun1026 )(    struct Char_17  ) ) {
    struct StrConcatIter_779  temp784 = ( (  into_dash_iter785 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_779 *  it1027 = ( &temp784 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next786 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   count_dash_digits810 (    uint32_t  self1355 ) {
    if ( (  eq747 ( (  self1355 ) , (  from_dash_integral107 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1356 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp106 ( (  self1355 ) , (  from_dash_integral107 ( 0 ) ) ) == 2 ) ) {
        self1355 = (  op_dash_div798 ( (  self1355 ) , (  from_dash_integral107 ( 10 ) ) ) );
        digits1356 = (  op_dash_add218 ( (  digits1356 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1356 );
}

static  struct IntStrIter_783   uint_dash_iter809 (    uint32_t  int1362 ) {
    return ( (struct IntStrIter_783) { .f_int = (  int1362 ) , .f_len = ( (  count_dash_digits810 ) ( (  int1362 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_783   chars808 (    uint32_t  self1374 ) {
    return ( (  uint_dash_iter809 ) ( (  self1374 ) ) );
}

static  struct StrConcatIter_782   into_dash_iter807 (    struct StrConcat_777  dref1423 ) {
    return ( (struct StrConcatIter_782) { .f_left = ( (  chars135 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars808 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_782   chars806 (    struct StrConcat_777  self1434 ) {
    return ( (  into_dash_iter807 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_781   into_dash_iter805 (    struct StrConcat_776  dref1423 ) {
    return ( (struct StrConcatIter_781) { .f_left = ( (  chars806 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_781   chars804 (    struct StrConcat_776  self1434 ) {
    return ( (  into_dash_iter805 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_780   into_dash_iter803 (    struct StrConcat_775  dref1423 ) {
    return ( (struct StrConcatIter_780) { .f_left = ( (  chars804 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars808 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_780   chars802 (    struct StrConcat_775  self1434 ) {
    return ( (  into_dash_iter803 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_779   into_dash_iter801 (    struct StrConcat_774  dref1423 ) {
    return ( (struct StrConcatIter_779) { .f_left = ( (  chars802 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_779   chars800 (    struct StrConcat_774  self1434 ) {
    return ( (  into_dash_iter801 ) ( (  self1434 ) ) );
}

static  enum Unit_4   print773 (    struct StrConcat_774  s2377 ) {
    ( (  for_dash_each778 ) ( ( (  chars800 ) ( (  s2377 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   move_dash_cursor_dash_to772 (    uint32_t  x2388 ,    uint32_t  y2390 ) {
    uint32_t  x2391 = (  op_dash_add571 ( (  x2388 ) , (  from_dash_integral107 ( 1 ) ) ) );
    uint32_t  y2392 = (  op_dash_add571 ( (  y2390 ) , (  from_dash_integral107 ( 1 ) ) ) );
    ( (  print773 ) ( ( ( StrConcat_774_StrConcat ) ( ( ( StrConcat_775_StrConcat ) ( ( ( StrConcat_776_StrConcat ) ( ( ( StrConcat_777_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2392 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2391 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

struct Tuple2_818 {
    struct Color_460  field0;
    struct Color_460  field1;
};

static struct Tuple2_818 Tuple2_818_Tuple2 (  struct Color_460  field0 ,  struct Color_460  field1 ) {
    return ( struct Tuple2_818 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_461 *   cast822 (    int32_t *  x356 ) {
    return ( (enum Color8_461 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed820 (    enum Color8_461  x562 ) {
    int32_t  temp821 = ( (  zeroed151 ) ( ) );
    int32_t *  y563 = ( &temp821 );
    enum Color8_461 *  yp564 = ( (  cast822 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  bool   eq819 (    enum Color8_461  l2416 ,    enum Color8_461  r2418 ) {
    return (  eq56 ( ( ( (  cast_dash_on_dash_zeroed820 ) ( (  l2416 ) ) ) ) , ( (  cast_dash_on_dash_zeroed820 ) ( (  r2418 ) ) ) ) );
}

static  enum Color16_462 *   cast826 (    int32_t *  x356 ) {
    return ( (enum Color16_462 * ) (  x356 ) );
}

static  int32_t   cast_dash_on_dash_zeroed824 (    enum Color16_462  x562 ) {
    int32_t  temp825 = ( (  zeroed151 ) ( ) );
    int32_t *  y563 = ( &temp825 );
    enum Color16_462 *  yp564 = ( (  cast826 ) ( (  y563 ) ) );
    (*  yp564 ) = (  x562 );
    return ( * (  y563 ) );
}

static  bool   eq823 (    enum Color16_462  l2422 ,    enum Color16_462  r2424 ) {
    return (  eq56 ( ( ( (  cast_dash_on_dash_zeroed824 ) ( (  l2422 ) ) ) ) , ( (  cast_dash_on_dash_zeroed824 ) ( (  r2424 ) ) ) ) );
}

static  bool   eq827 (    struct RGB_463  l2452 ,    struct RGB_463  r2454 ) {
    return ( ( (  eq99 ( ( (  l2452 ) .f_r ) , ( (  r2454 ) .f_r ) ) ) && (  eq99 ( ( (  l2452 ) .f_g ) , ( (  r2454 ) .f_g ) ) ) ) && (  eq99 ( ( (  l2452 ) .f_b ) , ( (  r2454 ) .f_b ) ) ) );
}

static  bool   eq817 (    struct Color_460  l2475 ,    struct Color_460  r2477 ) {
    return ( {  struct Tuple2_818  dref2478 = ( ( Tuple2_818_Tuple2 ) ( (  l2475 ) ,  (  r2477 ) ) ) ; dref2478 .field0.tag == Color_460_ColorDefault_t && dref2478 .field1.tag == Color_460_ColorDefault_t ? ( true ) : dref2478 .field0.tag == Color_460_Color8_t && dref2478 .field1.tag == Color_460_Color8_t ? (  eq819 ( ( dref2478 .field0 .stuff .Color_460_Color8_s .field0 ) , ( dref2478 .field1 .stuff .Color_460_Color8_s .field0 ) ) ) : dref2478 .field0.tag == Color_460_Color16_t && dref2478 .field1.tag == Color_460_Color16_t ? (  eq823 ( ( dref2478 .field0 .stuff .Color_460_Color16_s .field0 ) , ( dref2478 .field1 .stuff .Color_460_Color16_s .field0 ) ) ) : dref2478 .field0.tag == Color_460_Color256_t && dref2478 .field1.tag == Color_460_Color256_t ? (  eq99 ( ( dref2478 .field0 .stuff .Color_460_Color256_s .field0 ) , ( dref2478 .field1 .stuff .Color_460_Color256_s .field0 ) ) ) : dref2478 .field0.tag == Color_460_ColorRGB_t && dref2478 .field1.tag == Color_460_ColorRGB_t ? (  eq827 ( ( dref2478 .field0 .stuff .Color_460_ColorRGB_s .field0 ) , ( dref2478 .field1 .stuff .Color_460_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq816 (    struct Cell_459  l3183 ,    struct Cell_459  r3185 ) {
    if ( ( !  eq745 ( ( (  l3183 ) .f_c ) , ( (  r3185 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq817 ( ( (  l3183 ) .f_fg ) , ( (  r3185 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq817 ( ( (  l3183 ) .f_bg ) , ( (  r3185 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq815 (    struct Cell_459 *  dref148 ,    struct Cell_459 *  dref150 ) {
    return (  eq816 ( ( (* dref148 ) ) , ( (* dref150 ) ) ) );
}

static  enum Unit_4   set_dash_default_dash_fg830 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg8831 (    enum Color8_461  color2427 ) {
    enum Color8_461  dref2428 = (  color2427 );
    switch (  dref2428 ) {
        case Color8_461_Black8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Red8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Green8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Yellow8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Blue8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Magenta8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Cyan8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_White8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg16832 (    enum Color16_462  color2431 ) {
    enum Color16_462  dref2432 = (  color2431 );
    switch (  dref2432 ) {
        case Color16_462_Black16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Red16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Green16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Yellow16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Blue16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Magenta16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Cyan16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_White16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightBlack16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightRed16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightGreen16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightYellow16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightBlue16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightMagenta16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightCyan16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightWhite16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

struct StrConcat_836 {
    struct StrView_24  field0;
    uint8_t  field1;
};

static struct StrConcat_836 StrConcat_836_StrConcat (  struct StrView_24  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_836 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_835 {
    struct StrConcat_836  field0;
    struct Char_17  field1;
};

static struct StrConcat_835 StrConcat_835_StrConcat (  struct StrConcat_836  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_835 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_840 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_839 {
    struct StrViewIter_134  f_left;
    struct IntStrIter_840  f_right;
};

struct StrConcatIter_838 {
    struct StrConcatIter_839  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_838   into_dash_iter842 (    struct StrConcatIter_838  self1416 ) {
    return (  self1416 );
}

struct env848 {
    uint8_t  base1160;
    ;
};

struct envunion849 {
    uint8_t  (*fun) (  struct env848*  ,    int32_t  ,    uint8_t  );
    struct env848 env;
};

static  uint8_t   reduce847 (    struct Range_212  iterable1043 ,    uint8_t  base1045 ,   struct envunion849  fun1047 ) {
    uint8_t  x1048 = (  base1045 );
    struct RangeIter_215  it1049 = ( (  into_dash_iter216 ) ( (  iterable1043 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1050 = ( (  next217 ) ( ( & (  it1049 ) ) ) );
        if ( dref1050.tag == Maybe_145_None_t ) {
            return (  x1048 );
        }
        else {
            if ( dref1050.tag == Maybe_145_Just_t ) {
                struct envunion849  temp850 = (  fun1047 );
                x1048 = ( temp850.fun ( &temp850.env ,  ( dref1050 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1048 ) ) );
            }
        }
    }
    uint8_t  temp851;
    return (  temp851 );
}

static  uint8_t   op_dash_mul853 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) * (  r262 ) );
}

static  uint8_t   lam852 (   struct env848* env ,    int32_t  item1164 ,    uint8_t  x1166 ) {
    return (  op_dash_mul853 ( (  x1166 ) , ( env->base1160 ) ) );
}

static  uint8_t   pow846 (    uint8_t  base1160 ,    int32_t  p1162 ) {
    struct env848 envinst848 = {
        .base1160 =  base1160 ,
    };
    return ( (  reduce847 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1162 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral103 ( 1 ) ) ,  ( (struct envunion849){ .fun = (  uint8_t  (*) (  struct env848*  ,    int32_t  ,    uint8_t  ) )lam852 , .env =  envinst848 } ) ) );
}

static  uint8_t   op_dash_div854 (    uint8_t  l265 ,    uint8_t  r267 ) {
    return ( (  l265 ) / (  r267 ) );
}

static  uint8_t   cast855 (    uint8_t  x356 ) {
    return ( (uint8_t ) (  x356 ) );
}

static  struct Maybe_137   next845 (    struct IntStrIter_840 *  self1347 ) {
    if ( ( ( * (  self1347 ) ) .f_negative ) ) {
        (*  self1347 ) .f_negative = ( false );
        return ( ( Maybe_137_Just ) ( ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp209 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    uint8_t  trim_dash_down1348 = ( (  pow846 ) ( (  from_dash_integral103 ( 10 ) ) ,  (  op_dash_sub222 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    uint8_t  upper1349 = (  op_dash_div854 ( ( ( * (  self1347 ) ) .f_int ) , (  trim_dash_down1348 ) ) );
    uint8_t  upper_dash_mask1350 = (  op_dash_mul853 ( (  op_dash_div854 ( (  upper1349 ) , (  from_dash_integral103 ( 10 ) ) ) ) , (  from_dash_integral103 ( 10 ) ) ) );
    uint8_t  digit1351 = ( ( (  cast855 ) ( (  op_dash_sub156 ( (  upper1349 ) , (  upper_dash_mask1350 ) ) ) ) ) );
    (*  self1347 ) .f_len = (  op_dash_sub222 ( ( ( * (  self1347 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1352 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1351 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1352 ) ) );
}

static  struct Maybe_137   next844 (    struct StrConcatIter_839 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next139 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next845 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next843 (    struct StrConcatIter_838 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next844 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each837 (    struct StrConcatIter_838  iterable1024 ,    enum Unit_4 (*  fun1026 )(    struct Char_17  ) ) {
    struct StrConcatIter_838  temp841 = ( (  into_dash_iter842 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_838 *  it1027 = ( &temp841 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next843 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   count_dash_digits862 (    uint8_t  self1355 ) {
    if ( (  eq99 ( (  self1355 ) , (  from_dash_integral103 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1356 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp116 ( (  self1355 ) , (  from_dash_integral103 ( 0 ) ) ) == 2 ) ) {
        self1355 = (  op_dash_div854 ( (  self1355 ) , (  from_dash_integral103 ( 10 ) ) ) );
        digits1356 = (  op_dash_add218 ( (  digits1356 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1356 );
}

static  struct IntStrIter_840   uint_dash_iter861 (    uint8_t  int1362 ) {
    return ( (struct IntStrIter_840) { .f_int = (  int1362 ) , .f_len = ( (  count_dash_digits862 ) ( (  int1362 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_840   chars860 (    uint8_t  self1380 ) {
    return ( (  uint_dash_iter861 ) ( (  self1380 ) ) );
}

static  struct StrConcatIter_839   into_dash_iter859 (    struct StrConcat_836  dref1423 ) {
    return ( (struct StrConcatIter_839) { .f_left = ( (  chars135 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars860 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_839   chars858 (    struct StrConcat_836  self1434 ) {
    return ( (  into_dash_iter859 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_838   into_dash_iter857 (    struct StrConcat_835  dref1423 ) {
    return ( (struct StrConcatIter_838) { .f_left = ( (  chars858 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_838   chars856 (    struct StrConcat_835  self1434 ) {
    return ( (  into_dash_iter857 ) ( (  self1434 ) ) );
}

static  enum Unit_4   print834 (    struct StrConcat_835  s2377 ) {
    ( (  for_dash_each837 ) ( ( (  chars856 ) ( (  s2377 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg256833 (    uint8_t  color2445 ) {
    ( (  print834 ) ( ( ( StrConcat_835_StrConcat ) ( ( ( StrConcat_836_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2445 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

struct StrConcat_868 {
    struct StrConcat_835  field0;
    uint8_t  field1;
};

static struct StrConcat_868 StrConcat_868_StrConcat (  struct StrConcat_835  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_868 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_867 {
    struct StrConcat_868  field0;
    struct Char_17  field1;
};

static struct StrConcat_867 StrConcat_867_StrConcat (  struct StrConcat_868  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_867 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_866 {
    struct StrConcat_867  field0;
    uint8_t  field1;
};

static struct StrConcat_866 StrConcat_866_StrConcat (  struct StrConcat_867  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_866 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_865 {
    struct StrConcat_866  field0;
    struct Char_17  field1;
};

static struct StrConcat_865 StrConcat_865_StrConcat (  struct StrConcat_866  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_865 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_873 {
    struct StrConcatIter_838  f_left;
    struct IntStrIter_840  f_right;
};

struct StrConcatIter_872 {
    struct StrConcatIter_873  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_871 {
    struct StrConcatIter_872  f_left;
    struct IntStrIter_840  f_right;
};

struct StrConcatIter_870 {
    struct StrConcatIter_871  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_870   into_dash_iter875 (    struct StrConcatIter_870  self1416 ) {
    return (  self1416 );
}

static  struct Maybe_137   next879 (    struct StrConcatIter_873 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next843 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next845 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next878 (    struct StrConcatIter_872 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next879 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next877 (    struct StrConcatIter_871 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next878 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next845 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next876 (    struct StrConcatIter_870 *  self1419 ) {
    struct Maybe_137  dref1420 = ( (  next877 ) ( ( & ( ( * (  self1419 ) ) .f_left ) ) ) );
    if ( dref1420.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1420 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1420.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1419 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each869 (    struct StrConcatIter_870  iterable1024 ,    enum Unit_4 (*  fun1026 )(    struct Char_17  ) ) {
    struct StrConcatIter_870  temp874 = ( (  into_dash_iter875 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_870 *  it1027 = ( &temp874 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next876 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrConcatIter_873   into_dash_iter887 (    struct StrConcat_868  dref1423 ) {
    return ( (struct StrConcatIter_873) { .f_left = ( (  chars856 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars860 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_873   chars886 (    struct StrConcat_868  self1434 ) {
    return ( (  into_dash_iter887 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_872   into_dash_iter885 (    struct StrConcat_867  dref1423 ) {
    return ( (struct StrConcatIter_872) { .f_left = ( (  chars886 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_872   chars884 (    struct StrConcat_867  self1434 ) {
    return ( (  into_dash_iter885 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_871   into_dash_iter883 (    struct StrConcat_866  dref1423 ) {
    return ( (struct StrConcatIter_871) { .f_left = ( (  chars884 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars860 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_871   chars882 (    struct StrConcat_866  self1434 ) {
    return ( (  into_dash_iter883 ) ( (  self1434 ) ) );
}

static  struct StrConcatIter_870   into_dash_iter881 (    struct StrConcat_865  dref1423 ) {
    return ( (struct StrConcatIter_870) { .f_left = ( (  chars882 ) ( ( dref1423 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1423 .field1 ) ) ) } );
}

static  struct StrConcatIter_870   chars880 (    struct StrConcat_865  self1434 ) {
    return ( (  into_dash_iter881 ) ( (  self1434 ) ) );
}

static  enum Unit_4   print864 (    struct StrConcat_865  s2377 ) {
    ( (  for_dash_each869 ) ( ( (  chars880 ) ( (  s2377 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg_dash_rgb863 (    struct RGB_463  c2468 ) {
    ( (  print864 ) ( ( ( StrConcat_865_StrConcat ) ( ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( ( StrConcat_835_StrConcat ) ( ( ( StrConcat_836_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2468 ) .f_r ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2468 ) .f_g ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2468 ) .f_b ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg829 (    struct Color_460  c2489 ) {
    struct Color_460  dref2490 = (  c2489 );
    if ( dref2490.tag == Color_460_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg830 ) ( ) );
    }
    else {
        if ( dref2490.tag == Color_460_Color8_t ) {
            ( (  set_dash_fg8831 ) ( ( dref2490 .stuff .Color_460_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2490.tag == Color_460_Color16_t ) {
                ( (  set_dash_fg16832 ) ( ( dref2490 .stuff .Color_460_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2490.tag == Color_460_Color256_t ) {
                    ( (  set_dash_fg256833 ) ( ( dref2490 .stuff .Color_460_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2490.tag == Color_460_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb863 ) ( ( dref2490 .stuff .Color_460_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_default_dash_bg889 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg8890 (    enum Color8_461  color2435 ) {
    enum Color8_461  dref2436 = (  color2435 );
    switch (  dref2436 ) {
        case Color8_461_Black8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Red8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Green8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Yellow8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Blue8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Magenta8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_Cyan8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_461_White8 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg16891 (    enum Color16_462  color2439 ) {
    enum Color16_462  dref2440 = (  color2439 );
    switch (  dref2440 ) {
        case Color16_462_Black16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Red16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Green16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Yellow16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Blue16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Magenta16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_Cyan16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_White16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_462_BrightBlack16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightRed16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightGreen16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightYellow16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightBlue16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightMagenta16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightCyan16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_462_BrightWhite16 : {
            ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg256892 (    uint8_t  color2448 ) {
    ( (  print834 ) ( ( ( StrConcat_835_StrConcat ) ( ( ( StrConcat_836_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2448 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg_dash_rgb893 (    struct RGB_463  c2471 ) {
    ( (  print864 ) ( ( ( StrConcat_865_StrConcat ) ( ( ( StrConcat_866_StrConcat ) ( ( ( StrConcat_867_StrConcat ) ( ( ( StrConcat_868_StrConcat ) ( ( ( StrConcat_835_StrConcat ) ( ( ( StrConcat_836_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2471 ) .f_r ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2471 ) .f_g ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2471 ) .f_b ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg888 (    struct Color_460  c2497 ) {
    struct Color_460  dref2498 = (  c2497 );
    if ( dref2498.tag == Color_460_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg889 ) ( ) );
    }
    else {
        if ( dref2498.tag == Color_460_Color8_t ) {
            ( (  set_dash_bg8890 ) ( ( dref2498 .stuff .Color_460_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2498.tag == Color_460_Color16_t ) {
                ( (  set_dash_bg16891 ) ( ( dref2498 .stuff .Color_460_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2498.tag == Color_460_Color256_t ) {
                    ( (  set_dash_bg256892 ) ( ( dref2498 .stuff .Color_460_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2498.tag == Color_460_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb893 ) ( ( dref2498 .stuff .Color_460_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   emit_dash_cell828 (    struct RenderState_770 *  rs3211 ,    struct Cell_459 *  c3213 ,    uint32_t  x3215 ,    uint32_t  y3217 ) {
    if ( ( ( !  eq747 ( (  x3215 ) , ( ( * (  rs3211 ) ) .f_x ) ) ) || ( !  eq747 ( (  y3217 ) , ( ( * (  rs3211 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to772 ) ( (  x3215 ) ,  (  y3217 ) ) );
        (*  rs3211 ) .f_x = (  x3215 );
        (*  rs3211 ) .f_y = (  y3217 );
    }
    struct Char_17  char3218 = ( ( * (  c3213 ) ) .f_c );
    struct Color_460  bg3219 = ( ( * (  c3213 ) ) .f_bg );
    if ( ( ( (  eq745 ( (  char3218 ) , ( (  from_dash_charlike112 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) || (  eq745 ( (  char3218 ) , ( (  from_dash_charlike112 ) ( ( "\r" ) ,  ( 1 ) ) ) ) ) ) || (  eq745 ( (  char3218 ) , ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) {
        char3218 = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) );
        bg3219 = ( ( Color_460_Color8 ) ( ( Color8_461_Red8 ) ) );
    }
    if ( ( !  eq817 ( ( ( * (  rs3211 ) ) .f_fg ) , ( ( * (  c3213 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg829 ) ( ( ( * (  c3213 ) ) .f_fg ) ) );
        (*  rs3211 ) .f_fg = ( ( * (  c3213 ) ) .f_fg );
    }
    if ( ( !  eq817 ( ( ( * (  rs3211 ) ) .f_bg ) , (  bg3219 ) ) ) ) {
        ( (  set_dash_bg888 ) ( (  bg3219 ) ) );
        (*  rs3211 ) .f_bg = (  bg3219 );
    }
    ( (  print_dash_str95 ) ( (  char3218 ) ) );
    (*  rs3211 ) .f_x = (  op_dash_add571 ( ( ( * (  rs3211 ) ) .f_x ) , (  from_dash_integral107 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint32_t   i32_dash_u32894 (    int32_t  x589 ) {
    return ( (uint32_t ) (  x589 ) );
}

static  uint32_t   render_dash_screen769 (    struct Screen_457 *  screen3222 ) {
    int32_t  w3223 = ( (  u32_dash_i32694 ) ( ( ( * ( ( * (  screen3222 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3224 = ( (  u32_dash_i32694 ) ( ( ( * ( ( * (  screen3222 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_770  temp771 = ( (struct RenderState_770) { .f_x = (  from_dash_integral107 ( 0 ) ) , .f_y = (  from_dash_integral107 ( 0 ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_changes = (  from_dash_integral107 ( 0 ) ) } );
    struct RenderState_770 *  rs3225 = ( &temp771 );
    ( (  move_dash_cursor_dash_to772 ) ( (  from_dash_integral107 ( 0 ) ) ,  (  from_dash_integral107 ( 0 ) ) ) );
    struct RangeIter_215  temp811 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  h3224 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_145  __cond812 =  next217 (&temp811);
        if (  __cond812 .tag == 0 ) {
            break;
        }
        int32_t  y3227 =  __cond812 .stuff .Maybe_145_Just_s .field0;
        struct RangeIter_215  temp813 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  w3223 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_145  __cond814 =  next217 (&temp813);
            if (  __cond814 .tag == 0 ) {
                break;
            }
            int32_t  x3229 =  __cond814 .stuff .Maybe_145_Just_s .field0;
            size_t  i3230 = ( (  i32_dash_size76 ) ( (  op_dash_add218 ( (  op_dash_mul731 ( (  y3227 ) , (  w3223 ) ) ) , (  x3229 ) ) ) ) );
            struct Cell_459 *  cur3231 = ( (  get_dash_ptr484 ) ( ( ( * (  screen3222 ) ) .f_current ) ,  (  i3230 ) ) );
            struct Cell_459 *  prev3232 = ( (  get_dash_ptr484 ) ( ( ( * (  screen3222 ) ) .f_previous ) ,  (  i3230 ) ) );
            if ( ( ( !  eq815 ( (  cur3231 ) , (  prev3232 ) ) ) || ( ( * (  screen3222 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs3225 ) .f_changes = (  op_dash_add571 ( ( ( * (  rs3225 ) ) .f_changes ) , (  from_dash_integral107 ( 1 ) ) ) );
                ( (  emit_dash_cell828 ) ( (  rs3225 ) ,  (  cur3231 ) ,  ( (  i32_dash_u32894 ) ( (  x3229 ) ) ) ,  ( (  i32_dash_u32894 ) ( (  y3227 ) ) ) ) );
                (*  prev3232 ) = ( * (  cur3231 ) );
            }
        }
    }
    (*  screen3222 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors412 ) ( ) );
    ( (  flush_dash_stdout415 ) ( ) );
    return ( ( * (  rs3225 ) ) .f_changes );
}

static  void *   cast_dash_ptr901 (    struct timespec * *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  size_t   size_dash_of902 (    struct timespec *  x350 ) {
    return ( sizeof( (  x350 ) ) );
}

static  struct timespec *   zeroed899 (  ) {
    struct timespec *  temp900;
    struct timespec *  x559 = (  temp900 );
    ( ( memset ) ( ( (  cast_dash_ptr901 ) ( ( & (  x559 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of902 ) ( (  x559 ) ) ) ) );
    return (  x559 );
}

static  struct timespec *   null_dash_ptr898 (  ) {
    return ( (  zeroed899 ) ( ) );
}

static  enum Unit_4   sync895 (    struct Tui_30 *  tui3098 ) {
    if ( (  eq747 ( ( ( * (  tui3098 ) ) .f_target_dash_fps ) , (  from_dash_integral107 ( 0 ) ) ) ) ) {
        return ( Unit_4_Unit );
    }
    int64_t  frame_dash_ns3099 = (  op_dash_div224 ( (  from_dash_integral42 ( 1000000000 ) ) , ( (  size_dash_i6454 ) ( ( (  u32_dash_size471 ) ( ( ( * (  tui3098 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp896 = ( (  undefined46 ) ( ) );
    struct timespec *  now3100 = ( &temp896 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic48 ) ( ) ) ,  (  now3100 ) ) );
    int64_t  elapsed_dash_ns3101 = (  op_dash_add157 ( (  op_dash_mul40 ( (  op_dash_sub226 ( ( ( * (  now3100 ) ) .tv_sec ) , ( ( ( * (  tui3098 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral42 ( 1000000000 ) ) ) ) , (  op_dash_sub226 ( ( ( * (  now3100 ) ) .tv_nsec ) , ( ( ( * (  tui3098 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3102 = (  op_dash_sub226 ( (  frame_dash_ns3099 ) , (  elapsed_dash_ns3101 ) ) );
    if ( (  cmp245 ( (  sleep_dash_ns3102 ) , (  from_dash_integral42 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp897 = ( (struct timespec) { .tv_sec = (  from_dash_integral42 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3102 ) } );
        struct timespec *  ts3103 = ( &temp897 );
        ( ( nanosleep ) ( (  ts3103 ) ,  ( (  null_dash_ptr898 ) ( ) ) ) );
    }
    struct timespec  temp903 = ( (  undefined46 ) ( ) );
    struct timespec *  last_dash_sync3104 = ( &temp903 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic48 ) ( ) ) ,  (  last_dash_sync3104 ) ) );
    (*  tui3098 ) .f_last_dash_sync = ( * (  last_dash_sync3104 ) );
    (*  tui3098 ) .f_fps_dash_count = (  op_dash_add571 ( ( ( * (  tui3098 ) ) .f_fps_dash_count ) , (  from_dash_integral107 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3105 = (  op_dash_add157 ( (  op_dash_mul40 ( (  op_dash_sub226 ( ( ( ( * (  tui3098 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3098 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral42 ( 1000 ) ) ) ) , (  op_dash_div224 ( (  op_dash_sub226 ( ( ( ( * (  tui3098 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3098 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral42 ( 1000000 ) ) ) ) ) );
    if ( (  cmp245 ( (  fps_dash_elapsed_dash_ms3105 ) , (  from_dash_integral42 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3098 ) .f_actual_dash_fps = ( ( * (  tui3098 ) ) .f_fps_dash_count );
        (*  tui3098 ) .f_fps_dash_count = (  from_dash_integral107 ( 0 ) );
        (*  tui3098 ) .f_fps_dash_ts = ( ( * (  tui3098 ) ) .f_last_dash_sync );
    }
    return ( Unit_4_Unit );
}

static  void *   cast_dash_ptr906 (    struct Cell_459 *  p359 ) {
    return ( (void * ) (  p359 ) );
}

static  enum Unit_4   free905 (    enum CAllocator_6  dref1873 ,    struct Slice_458  slice1875 ) {
    if (!(  dref1873 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr906 ) ( ( (  slice1875 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free_dash_screen904 (    struct Screen_457 *  screen3202 ) {
    enum CAllocator_6  al3203 = ( ( * (  screen3202 ) ) .f_al );
    ( (  free905 ) ( (  al3203 ) ,  ( ( * (  screen3202 ) ) .f_current ) ) );
    ( (  free905 ) ( (  al3203 ) ,  ( ( * (  screen3202 ) ) .f_previous ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   disable_dash_mouse908 (  ) {
    ( (  print_dash_str88 ) ( ( (  from_dash_string111 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   show_dash_cursor909 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   reset_dash_cursor_dash_position910 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   disable_dash_raw_dash_mode911 (    struct Termios_32 *  og_dash_termios3078 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  tcsa_dash_flush409 ) ( ) ) ,  ( (  cast_dash_ptr343 ) ( (  og_dash_termios3078 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   deinit907 (    struct Tui_30 *  tui3108 ) {
    ( (  disable_dash_mouse908 ) ( ) );
    ( (  show_dash_cursor909 ) ( ) );
    ( (  reset_dash_colors412 ) ( ) );
    ( (  clear_dash_screen413 ) ( ) );
    ( (  reset_dash_cursor_dash_position910 ) ( ) );
    ( (  disable_dash_raw_dash_mode911 ) ( ( & ( ( * (  tui3108 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout415 ) ( ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   for_dash_each914 (    struct StrConcatIter_199  iterable1024 ,    enum Unit_4 (*  fun1026 )(    struct Char_17  ) ) {
    struct StrConcatIter_199  temp915 = ( (  into_dash_iter206 ) ( (  iterable1024 ) ) );
    struct StrConcatIter_199 *  it1027 = ( &temp915 );
    while ( ( true ) ) {
        struct Maybe_137  dref1028 = ( (  next207 ) ( (  it1027 ) ) );
        if ( dref1028.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1028.tag == Maybe_137_Just_t ) {
                ( (  fun1026 ) ( ( dref1028 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print913 (    struct StrConcat_20  s2377 ) {
    ( (  for_dash_each914 ) ( ( (  chars241 ) ( (  s2377 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   println912 (    int64_t  s2380 ) {
    ( (  print913 ) ( ( ( StrConcat_20_StrConcat ) ( (  s2380 ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1950 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor1951 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor1952 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor1951 =  growth_dash_factor1951 ,
        .starting_dash_size1950 =  starting_dash_size1950 ,
    };
    struct env2 envinst2 = {
        .envinst1 = envinst1 ,
    };
    struct env8 envinst8 = {
        .envinst2 = envinst2 ,
    };
    struct env10 envinst10 = {
        .envinst8 = envinst8 ,
    };
    struct env12 envinst12 = {
        .envinst10 = envinst10 ,
    };
    struct env15 envinst15 = {
        .envinst12 = envinst12 ,
    };
    struct env18 envinst18 = {
        .envinst15 = envinst15 ,
        .envinst12 = envinst12 ,
    };
    struct env22 envinst22 = {
        .envinst18 = envinst18 ,
    };
    bool  temp25 = ( false );
    bool *  should_dash_resize3088 = ( &temp25 );
    struct env26 envinst26 = {
        .should_dash_resize3088 =  should_dash_resize3088 ,
    };
    struct env27 envinst27 = {
        .should_dash_resize3088 =  should_dash_resize3088 ,
    };
    struct env28 envinst28 = {
        .envinst27 = envinst27 ,
    };
    struct env34 envinst34 = {
        .envinst27 = envinst27 ,
    };
    enum CAllocator_6  al3362 = ( (  idc36 ) ( ) );
    struct Slice_37  args3365 = ( (  get38 ) ( ) );
    struct timespec  start_dash_time3366 = ( (  now44 ) ( ) );
    struct Maybe_50  dref3367 = ( (  try_dash_get51 ) ( (  args3365 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    if ( dref3367.tag == Maybe_50_Just_t ) {
        if ( (  eq55 ( ( dref3367 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "-p" ) ,  ( 2 ) ) ) ) ) ) {
            const char*  filename3369 = ( (  from_dash_string57 ) ( ( "timer-start" ) ,  ( 11 ) ) );
            struct Maybe_58  dref3370 = ( (  try_dash_read_dash_contents59 ) ( (  filename3369 ) ,  (  al3362 ) ) );
            if ( dref3370.tag == Maybe_58_Just_t ) {
                int64_t  num3372 = ( (  or_dash_fail124 ) ( ( (  parse_dash_int133 ) ( ( (  or_dash_fail159 ) ( ( (  head162 ) ( ( (  lines177 ) ( ( dref3370 .stuff .Maybe_58_Just_s .field0 ) ) ) ) ) ,  ( (  from_dash_string111 ) ( ( "empty timer file" ) ,  ( 16 ) ) ) ) ) ) ) ,  ( (  from_dash_string111 ) ( ( "could not parse first timestamp" ) ,  ( 31 ) ) ) ) );
                start_dash_time3366 = ( (struct timespec) { .tv_sec = (  num3372 ) , .tv_nsec = (  from_dash_integral42 ( 0 ) ) } );
                ( (  free178 ) ( ( dref3370 .stuff .Maybe_58_Just_s .field0 ) ,  (  al3362 ) ) );
            }
            else {
                if ( dref3370.tag == Maybe_58_None_t ) {
                    struct envunion182  temp181 = ( (struct envunion182){ .fun = (  const char*  (*) (  struct env22*  ,    struct StrConcat_20  ,    enum CAllocator_6  ) )mk_dash_const_dash_str183 , .env =  envinst22 } );
                    const char*  s3373 = ( temp181.fun ( &temp181.env ,  ( ( StrConcat_20_StrConcat ) ( ( (  start_dash_time3366 ) .tv_sec ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  al3362 ) ) );
                    ( (  write_dash_contents299 ) ( (  filename3369 ) ,  (  s3373 ) ) );
                    ( (  free_dash_const_dash_str323 ) ( (  s3373 ) ,  (  al3362 ) ) );
                }
            }
        } else {
            int64_t  num3374 = ( (  or_dash_fail124 ) ( ( (  parse_dash_int327 ) ( ( dref3367 .stuff .Maybe_50_Just_s .field0 ) ) ) ,  ( (  from_dash_string111 ) ( ( "could not parse first timestamp" ) ,  ( 31 ) ) ) ) );
            start_dash_time3366 = ( (struct timespec) { .tv_sec = (  num3374 ) , .tv_nsec = (  from_dash_integral42 ( 0 ) ) } );
        }
    }
    else {
        if ( dref3367.tag == Maybe_50_None_t ) {
        }
    }
    struct envunion336  temp335 = ( (struct envunion336){ .fun = (  struct Tui_30  (*) (  struct env26*  ) )mk337 , .env =  envinst26 } );
    struct Tui_30  temp334 = ( temp335.fun ( &temp335.env ) );
    struct Tui_30 *  tui3375 = ( &temp334 );
    struct Screen_457  temp464 = ( (  mk_dash_screen465 ) ( (  tui3375 ) ,  (  al3362 ) ) );
    struct Screen_457 *  screen3376 = ( &temp464 );
    struct Duration_503  last_dash_diff3377 = ( (  diff504 ) ( (  start_dash_time3366 ) ,  (  start_dash_time3366 ) ) );
    ( (  set_dash_screen_dash_fg505 ) ( (  screen3376 ) ,  ( ( Color_460_Color8 ) ( ( Color8_461_White8 ) ) ) ) );
    bool  running3378 = ( true );
    while ( (  running3378 ) ) {
        struct env508 envinst508 = {
            .envinst28 = envinst28 ,
            .tui3375 =  tui3375 ,
        };
        struct FunIter_507  temp506 =  into_dash_iter516 ( ( (  from_dash_function517 ) ( ( (struct envunion515){ .fun = (  struct Maybe_510  (*) (  struct env508*  ) )lam518 , .env =  envinst508 } ) ) ) );
        while (true) {
            struct Maybe_510  __cond665 =  next666 (&temp506);
            if (  __cond665 .tag == 0 ) {
                break;
            }
            struct InputEvent_511  ev3380 =  __cond665 .stuff .Maybe_510_Just_s .field0;
            struct InputEvent_511  dref3381 = (  ev3380 );
            if ( dref3381.tag == InputEvent_511_Key_t && dref3381 .stuff .InputEvent_511_Key_s .field0.tag == Key_512_Char_t ) {
                if ( (  eq573 ( ( dref3381 .stuff .InputEvent_511_Key_s .field0 .stuff .Key_512_Char_s .field0 ) , ( (  from_dash_charlike574 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
                    running3378 = ( false );
                }
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion669  temp668 = ( (struct envunion669){ .fun = (  bool  (*) (  struct env34*  ,    struct Screen_457 *  ) )resize_dash_screen_dash_if_dash_needed670 , .env =  envinst34 } );
        ( temp668.fun ( &temp668.env ,  (  screen3376 ) ) );
        struct Duration_503  diff3383 = ( (  diff504 ) ( ( (  now44 ) ( ) ) ,  (  start_dash_time3366 ) ) );
        if ( ( ( (  should_dash_redraw672 ) ( (  tui3375 ) ) ) || ( !  eq248 ( ( (  diff3383 ) .f_secs ) , ( (  last_dash_diff3377 ) .f_secs ) ) ) ) ) {
            last_dash_diff3377 = (  diff3383 );
            ( (  clear_dash_screen673 ) ( (  screen3376 ) ) );
            struct ClockTime_682  ct3384 = ( (  clock_dash_time_dash_from_dash_secs683 ) ( ( (  diff3383 ) .f_secs ) ) );
            struct StrView_24  neg3385 = ( ( (  ct3384 ) .f_neg ) ? ( (  from_dash_charlike687 ) ( ( "-" ) ,  ( 1 ) ) ) : ( ( (  from_dash_string111 ) ( ( "" ) ,  ( 0 ) ) ) ) );
            struct PadZeroes_688  s3386 = ( (  pad_dash_zeroes689 ) ( ( (  u8_dash_i32148 ) ( ( (  ct3384 ) .f_s ) ) ) ,  (  from_dash_integral103 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_688  m3387 = ( (  pad_dash_zeroes689 ) ( ( (  u8_dash_i32148 ) ( ( (  ct3384 ) .f_m ) ) ) ,  (  from_dash_integral103 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_688  h3388 = ( (  pad_dash_zeroes689 ) ( ( (  u32_dash_i32694 ) ( ( (  ct3384 ) .f_h ) ) ) ,  (  from_dash_integral103 ( 2 ) ) ,  ( true ) ) );
            struct StrConcat_696  timer_dash_str3389 = ( ( StrConcat_696_StrConcat ) ( ( ( StrConcat_697_StrConcat ) ( ( ( StrConcat_698_StrConcat ) ( ( ( StrConcat_699_StrConcat ) ( ( ( StrConcat_700_StrConcat ) ( (  neg3385 ) ,  (  h3388 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  m3387 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  s3386 ) ) );
            size_t  timer_dash_sz3390 = (  op_dash_sub43 ( (  op_dash_mul74 ( ( (  count701 ) ( (  timer_dash_str3389 ) ) ) , (  from_dash_integral0 ( 7 ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
            int32_t  timer_dash_h3391 = (  from_dash_integral49 ( 6 ) );
            int32_t  begin_dash_x3392 = (  op_dash_div693 ( (  op_dash_sub222 ( ( (  u32_dash_i32694 ) ( ( ( * (  tui3375 ) ) .f_width ) ) ) , ( (  size_dash_i3289 ) ( (  timer_dash_sz3390 ) ) ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
            int32_t  begin_dash_y3393 = (  op_dash_div693 ( (  op_dash_sub222 ( ( (  u32_dash_i32694 ) ( ( ( * (  tui3375 ) ) .f_height ) ) ) , (  timer_dash_h3391 ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
            if ( ( (  cmp209 ( (  begin_dash_x3392 ) , (  from_dash_integral49 ( 0 ) ) ) != 0 ) && (  cmp209 ( (  begin_dash_y3393 ) , (  from_dash_integral49 ( 0 ) ) ) != 0 ) ) ) {
                struct Zip_735  temp734 =  into_dash_iter736 ( ( (  zip737 ) ( ( (  chars739 ) ( (  timer_dash_str3389 ) ) ) ,  ( (  from291 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_741  __cond740 =  next743 (&temp734);
                    if (  __cond740 .tag == 0 ) {
                        break;
                    }
                    struct Tuple2_742  dref3394 =  __cond740 .stuff .Maybe_741_Just_s .field0;
                    ( (  draw_dash_digit744 ) ( (  screen3376 ) ,  ( dref3394 .field0 ) ,  (  op_dash_add218 ( (  begin_dash_x3392 ) , (  op_dash_mul731 ( ( dref3394 .field1 ) , (  from_dash_integral49 ( 7 ) ) ) ) ) ) ,  (  begin_dash_y3393 ) ) );
                }
            } else {
                size_t  timer_dash_sz3397 = ( (  count701 ) ( (  timer_dash_str3389 ) ) );
                int32_t  timer_dash_h3398 = (  from_dash_integral49 ( 1 ) );
                int32_t  begin_dash_x3399 = (  op_dash_div693 ( (  op_dash_sub222 ( ( (  u32_dash_i32694 ) ( ( ( * (  tui3375 ) ) .f_width ) ) ) , ( (  size_dash_i3289 ) ( (  timer_dash_sz3397 ) ) ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
                int32_t  begin_dash_y3400 = (  op_dash_div693 ( (  op_dash_sub222 ( ( (  u32_dash_i32694 ) ( ( ( * (  tui3375 ) ) .f_height ) ) ) , (  timer_dash_h3398 ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
                ( (  draw_dash_str761 ) ( (  screen3376 ) ,  (  timer_dash_str3389 ) ,  (  begin_dash_x3399 ) ,  (  begin_dash_y3400 ) ) );
            }
            ( (  render_dash_screen769 ) ( (  screen3376 ) ) );
        }
        ( (  sync895 ) ( (  tui3375 ) ) );
    }
    ( (  free_dash_screen904 ) ( (  screen3376 ) ) );
    ( (  deinit907 ) ( (  tui3375 ) ) );
    ( (  println912 ) ( ( (  start_dash_time3366 ) .tv_sec ) ) );
}
