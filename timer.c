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
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1946;
    ;
    ;
    ;
    ;
    size_t  starting_dash_size1945;
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
    ;
    struct env1 envinst1;
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
    ;
    struct env2 envinst2;
    ;
    ;
};

struct envunion11 {
    enum Unit_4  (*fun) (  struct env8*  ,    struct List_5 *  ,    struct Slice_7  );
    struct env8 env;
};

struct env10 {
    struct env8 envinst8;
    ;
    ;
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
    ;
    struct env10 envinst10;
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
    ;
    struct env15 envinst15;
    ;
    struct env12 envinst12;
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
    struct env18 envinst18;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env26 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3083;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env27 {
    ;
    bool *  should_dash_resize3083;
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
    ;
    struct env27 envinst27;
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

static  int64_t   op_dash_mul40 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) * (  r191 ) );
}

static  const char* *   offset_dash_ptr39 (    const char* *  x333 ,    int64_t  count335 ) {
    const char*  temp41;
    return ( (const char* * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul40 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp41 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral42 (    int64_t  x46 ) {
    return (  x46 );
}

static  size_t   op_dash_sub43 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) - (  r272 ) );
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
    struct timespec *  t3031 = ( &temp45 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic48 ) ( ) ) ,  (  t3031 ) ) );
    return ( * (  t3031 ) );
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

static  enum Ordering_53   cmp52 (    size_t  l174 ,    size_t  r176 ) {
    return ( builtin_size_tcmp( (  l174 ) , (  r176 ) ) );
}

static  int64_t   size_dash_i6454 (    size_t  x578 ) {
    return ( (int64_t ) (  x578 ) );
}

static  struct Maybe_50   try_dash_get51 (    struct Slice_37  slice1678 ,    size_t  i1680 ) {
    if ( ( (  cmp52 ( (  i1680 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1680 ) , ( (  slice1678 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    }
    const char* *  elem_dash_ptr1681 = ( (  offset_dash_ptr39 ) ( ( (  slice1678 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1680 ) ) ) ) );
    return ( ( Maybe_50_Just ) ( ( * (  elem_dash_ptr1681 ) ) ) );
}

static  bool   eq56 (    int32_t  l101 ,    int32_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  bool   eq55 (    const char*  l1611 ,    const char*  r1613 ) {
    return (  eq56 ( ( ( strcmp ) ( (  l1611 ) ,  (  r1613 ) ) ) , (  from_dash_integral49 ( 0 ) ) ) );
}

static  const char*   from_dash_string57 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
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

static  void *   cast_dash_ptr65 (    FILE * *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of66 (    FILE *  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  FILE *   zeroed63 (  ) {
    FILE *  temp64;
    FILE *  x554 = (  temp64 );
    ( ( memset ) ( ( (  cast_dash_ptr65 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of66 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  FILE *   null_dash_ptr62 (  ) {
    return ( (  zeroed63 ) ( ) );
}

static  bool   is_dash_ptr_dash_null61 (    FILE *  p564 ) {
    return ( (  p564 ) == ( (  null_dash_ptr62 ) ( ) ) );
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

static  uint8_t *   cast_dash_ptr73 (    void *  p354 ) {
    return ( (uint8_t * ) (  p354 ) );
}

static  size_t   op_dash_mul74 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) * (  r277 ) );
}

static  struct Slice_7   allocate69 (    enum CAllocator_6  dref1862 ,    size_t  count1864 ) {
    if (!(  dref1862 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1865 = ( ( ( (  get_dash_typesize70 ) ( ) ) ) .f_size );
    uint8_t *  ptr1866 = ( (  cast_dash_ptr73 ) ( ( ( malloc ) ( (  op_dash_mul74 ( (  size1865 ) , (  count1864 ) ) ) ) ) ) );
    return ( (struct Slice_7) { .f_ptr = (  ptr1866 ) , .f_count = (  count1864 ) } );
}

static  size_t   op_dash_add75 (    size_t  l265 ,    size_t  r267 ) {
    return ( (  l265 ) + (  r267 ) );
}

static  size_t   i32_dash_size76 (    int32_t  x590 ) {
    return ( (size_t ) ( (int64_t ) (  x590 ) ) );
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

static  int32_t   size_dash_i3289 (    size_t  x608 ) {
    return ( (int32_t ) (  x608 ) );
}

static  enum Unit_4   print_dash_str88 (    struct StrView_24  self1299 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3289 ) ( ( ( (  self1299 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1299 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str94 (    size_t  self1384 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1384 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str93 (    struct StrConcat_83  self1423 ) {
    struct StrConcat_83  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str94 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str92 (    struct StrConcat_82  self1423 ) {
    struct StrConcat_82  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str93 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str88 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str91 (    struct StrConcat_81  self1423 ) {
    struct StrConcat_81  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str92 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str94 ) ( ( dref1424 .field1 ) ) );
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

static  bool   eq99 (    uint8_t  l111 ,    uint8_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  uint8_t   size_dash_u8101 (    size_t  x617 ) {
    return ( (uint8_t ) (  x617 ) );
}

static  size_t   op_dash_div102 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) / (  r282 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer100 (    uint8_t *  ptr653 ) {
    return ( (  size_dash_u8101 ) ( (  op_dash_div102 ( ( ( (size_t ) (  ptr653 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral103 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u32104 (    size_t  x611 ) {
    return ( (uint32_t ) (  x611 ) );
}

static  size_t   cast105 (    uint8_t *  x351 ) {
    return ( (size_t ) (  x351 ) );
}

static  struct CharDestructured_97   destructure98 (    struct Char_17  c690 ) {
    if ( (  eq99 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer100 ) ( ( (  c690 ) .f_ptr ) ) ) , (  from_dash_integral103 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_97_Scalar ) ( ( (  size_dash_u32104 ) ( ( ( (  cast105 ) ( ( (  c690 ) .f_ptr ) ) ) ) ) ) ) );
    } else {
        return ( ( CharDestructured_97_Ref ) ( (  c690 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp106 (    uint32_t  l159 ,    uint32_t  r161 ) {
    return ( builtin_uint32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  uint32_t   from_dash_integral107 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast110 (    uint32_t  x351 ) {
    return ( (uint8_t ) (  x351 ) );
}

static  uint8_t   u32_dash_u8109 (    uint32_t  x632 ) {
    return ( (  cast110 ) ( (  x632 ) ) );
}

static  enum Unit_4   printf_dash_char96 (    struct Char_17  c723 ) {
    struct CharDestructured_97  dref724 = ( (  destructure98 ) ( (  c723 ) ) );
    if ( dref724.tag == CharDestructured_97_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3289 ) ( ( ( dref724 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref724 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref724.tag == CharDestructured_97_Scalar_t ) {
            if ( (  cmp106 ( ( dref724 .stuff .CharDestructured_97_Scalar_s .field0 ) , (  from_dash_integral107 ( 127 ) ) ) == 2 ) ) {
                const char*  temp108 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp108);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8109 ) ( ( dref724 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) ) );
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str95 (    struct Char_17  self1324 ) {
    ( (  printf_dash_char96 ) ( (  self1324 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str90 (    struct StrConcat_80  self1423 ) {
    struct StrConcat_80  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str91 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str87 (    struct StrConcat_86  self1423 ) {
    struct StrConcat_86  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str90 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str84 (    struct StrConcat_85  self1423 ) {
    struct StrConcat_85  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str87 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  struct StrView_24   from_dash_string111 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

static  uint8_t *   cast113 (    uint8_t *  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp116 (    uint8_t  l164 ,    uint8_t  r166 ) {
    return ( builtin_uint8_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint8_t   op_dash_add117 (    uint8_t  l245 ,    uint8_t  r247 ) {
    return ( (  l245 ) + (  r247 ) );
}

static  size_t   next_dash_char115 (    uint8_t *  p663 ) {
    uint8_t  pb664 = ( * (  p663 ) );
    if ( (  cmp116 ( (  pb664 ) , (  from_dash_integral103 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp116 ( (  pb664 ) , (  op_dash_add117 ( (  op_dash_add117 ( (  op_dash_add117 ( (  from_dash_integral103 ( 128 ) ) , (  from_dash_integral103 ( 64 ) ) ) ) , (  from_dash_integral103 ( 32 ) ) ) ) , (  from_dash_integral103 ( 16 ) ) ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp116 ( (  pb664 ) , (  op_dash_add117 ( (  op_dash_add117 ( (  from_dash_integral103 ( 128 ) ) , (  from_dash_integral103 ( 64 ) ) ) ) , (  from_dash_integral103 ( 32 ) ) ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp116 ( (  pb664 ) , (  op_dash_add117 ( (  from_dash_integral103 ( 128 ) ) , (  from_dash_integral103 ( 64 ) ) ) ) ) != 0 ) ) {
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

static  struct Char_17   scan_dash_from_dash_mem114 (    uint8_t *  p675 ) {
    size_t  clen676 = ( (  next_dash_char115 ) ( (  p675 ) ) );
    if ( (  cmp52 ( (  clen676 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp119 = ( (  from_dash_string57 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp119);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( (struct Char_17) { .f_ptr = (  p675 ) , .f_num_dash_bytes = (  clen676 ) } );
}

static  struct Char_17   from_dash_charlike112 (    uint8_t *  ptr679 ,    size_t  num_dash_bytes681 ) {
    uint8_t *  ptr682 = ( ( (  cast113 ) ( (  ptr679 ) ) ) );
    return ( (  scan_dash_from_dash_mem114 ) ( (  ptr682 ) ) );
}

static  enum Unit_4   panic79 (    struct StrConcat_80  errmsg1627 ) {
    ( (  print_dash_str84 ) ( ( ( StrConcat_85_StrConcat ) ( ( ( StrConcat_86_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1627 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint8_t *   offset_dash_ptr120 (    uint8_t *  x333 ,    int64_t  count335 ) {
    uint8_t  temp121;
    return ( (uint8_t * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul40 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp121 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   get_dash_ptr78 (    struct Slice_7  slice1672 ,    size_t  i1674 ) {
    if ( ( (  cmp52 ( (  i1674 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1674 ) , ( (  slice1672 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic79 ) ( ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1674 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1672 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1675 = ( (  offset_dash_ptr120 ) ( ( (  slice1672 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1674 ) ) ) ) );
    return (  elem_dash_ptr1675 );
}

static  enum Unit_4   set77 (    struct Slice_7  slice1689 ,    size_t  i1691 ,    uint8_t  x1693 ) {
    uint8_t *  ep1694 = ( (  get_dash_ptr78 ) ( (  slice1689 ) ,  (  i1691 ) ) );
    (*  ep1694 ) = (  x1693 );
    return ( Unit_4_Unit );
}

static  uint8_t   char_dash_u8122 (    struct Char_17  c696 ) {
    struct CharDestructured_97  dref697 = ( (  destructure98 ) ( (  c696 ) ) );
    if ( dref697.tag == CharDestructured_97_Ref_t ) {
        return ( * ( ( dref697 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref697.tag == CharDestructured_97_Scalar_t ) {
            return ( (  u32_dash_u8109 ) ( ( dref697 .stuff .CharDestructured_97_Scalar_s .field0 ) ) );
        }
    }
}

static  struct Char_17   nullchar123 (  ) {
    return ( (  from_dash_charlike112 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_58   try_dash_read_dash_contents59 (    const char*  filename2725 ,    enum CAllocator_6  al2727 ) {
    FILE *  file2728 = ( ( fopen ) ( (  filename2725 ) ,  ( (  from_dash_charlike60 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null61 ) ( (  file2728 ) ) ) ) {
        return ( (struct Maybe_58) { .tag = Maybe_58_None_t } );
    }
    ( ( fseek ) ( (  file2728 ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  seek_dash_end67 ) ( ) ) ) );
    int32_t  file_dash_size2729 = ( ( ftell ) ( (  file2728 ) ) );
    ( ( fseek ) ( (  file2728 ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  seek_dash_set68 ) ( ) ) ) );
    struct Slice_7  file_dash_buf2730 = ( ( (  allocate69 ) ( (  al2727 ) ,  (  op_dash_add75 ( ( (  i32_dash_size76 ) ( (  file_dash_size2729 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2730 ) .f_ptr ) ,  (  from_dash_integral49 ( 1 ) ) ,  (  file_dash_size2729 ) ,  (  file2728 ) ) );
    ( (  set77 ) ( (  file_dash_buf2730 ) ,  ( (  i32_dash_size76 ) ( (  file_dash_size2729 ) ) ) ,  ( (  char_dash_u8122 ) ( ( (  nullchar123 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2728 ) ) );
    struct StrView_24  str2731 = ( (struct StrView_24) { .f_contents = (  file_dash_buf2730 ) } );
    return ( ( Maybe_58_Just ) ( (  str2731 ) ) );
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

static  enum Unit_4   print_dash_str130 (    struct StrConcat_129  self1423 ) {
    struct StrConcat_129  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str88 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str127 (    struct StrConcat_128  self1423 ) {
    struct StrConcat_128  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str130 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic126 (    struct StrView_24  errmsg1627 ) {
    ( (  print_dash_str127 ) ( ( ( StrConcat_128_StrConcat ) ( ( ( StrConcat_129_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1627 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  int64_t   undefined131 (  ) {
    int64_t  temp132;
    return (  temp132 );
}

static  int64_t   or_dash_fail124 (    struct Maybe_125  x1640 ,    struct StrView_24  errmsg1642 ) {
    struct Maybe_125  dref1643 = (  x1640 );
    if ( dref1643.tag == Maybe_125_None_t ) {
        ( (  panic126 ) ( (  errmsg1642 ) ) );
        return ( (  undefined131 ) ( ) );
    }
    else {
        if ( dref1643.tag == Maybe_125_Just_t ) {
            return ( dref1643 .stuff .Maybe_125_Just_s .field0 );
        }
    }
}

struct StrViewIter_134 {
    struct StrView_24  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_134   into_dash_iter136 (    struct StrView_24  self1288 ) {
    return ( (struct StrViewIter_134) { .f_ds = (  self1288 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_134   chars135 (    struct StrView_24  self1302 ) {
    return ( (  into_dash_iter136 ) ( (  self1302 ) ) );
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

static  struct Maybe_137   next139 (    struct StrViewIter_134 *  self1294 ) {
    if ( (  cmp52 ( ( ( * (  self1294 ) ) .f_i ) , ( ( ( ( * (  self1294 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    uint8_t *  char_dash_ptr1295 = ( ( (  offset_dash_ptr120 ) ( ( (  cast113 ) ( ( ( ( ( * (  self1294 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i6454 ) ( ( ( * (  self1294 ) ) .f_i ) ) ) ) ) );
    struct Char_17  char1296 = ( (  scan_dash_from_dash_mem114 ) ( (  char_dash_ptr1295 ) ) );
    (*  self1294 ) .f_i = (  op_dash_add75 ( ( ( * (  self1294 ) ) .f_i ) , ( (  char1296 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_137_Just ) ( (  char1296 ) ) );
}

static  struct StrViewIter_134   into_dash_iter141 (    struct StrViewIter_134  self1291 ) {
    return (  self1291 );
}

static  struct Maybe_137   head138 (    struct StrViewIter_134  it1087 ) {
    struct StrViewIter_134  temp140 = ( (  into_dash_iter141 ) ( (  it1087 ) ) );
    return ( (  next139 ) ( ( &temp140 ) ) );
}

static  struct Maybe_125   reduce142 (    struct StrViewIter_134  iterable1038 ,    struct Maybe_125  base1040 ,    struct Maybe_125 (*  fun1042 )(    struct Char_17  ,    struct Maybe_125  ) ) {
    struct Maybe_125  x1043 = (  base1040 );
    struct StrViewIter_134  it1044 = ( (  into_dash_iter141 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1045 = ( (  next139 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_137_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_137_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1043 ) ) );
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

static  bool   is_dash_digit147 (    struct Char_17  c2266 ) {
    return ( (  cmp116 ( ( (  char_dash_u8122 ) ( (  c2266 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp116 ( ( (  char_dash_u8122 ) ( (  c2266 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  void *   cast_dash_ptr153 (    int32_t *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of154 (    int32_t  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  int32_t   zeroed151 (  ) {
    int32_t  temp152;
    int32_t  x554 = (  temp152 );
    ( ( memset ) ( ( (  cast_dash_ptr153 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of154 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  uint8_t *   cast155 (    int32_t *  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static  int32_t   cast_dash_on_dash_zeroed149 (    uint8_t  x557 ) {
    int32_t  temp150 = ( (  zeroed151 ) ( ) );
    int32_t *  y558 = ( &temp150 );
    uint8_t *  yp559 = ( (  cast155 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  int32_t   u8_dash_i32148 (    uint8_t  x644 ) {
    return ( (  cast_dash_on_dash_zeroed149 ) ( (  x644 ) ) );
}

static  uint8_t   op_dash_sub156 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) - (  r252 ) );
}

static  struct Maybe_145   parse_dash_digit146 (    struct Char_17  c2269 ) {
    if ( ( (  is_dash_digit147 ) ( (  c2269 ) ) ) ) {
        return ( ( Maybe_145_Just ) ( ( (  u8_dash_i32148 ) ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2269 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_145) { .tag = Maybe_145_None_t } );
    }
}

static  int64_t   op_dash_add157 (    int64_t  l179 ,    int64_t  r181 ) {
    return ( (  l179 ) + (  r181 ) );
}

static  int64_t   i32_dash_i64158 (    int32_t  x587 ) {
    return ( (int64_t ) (  x587 ) );
}

static  struct Maybe_125   sequence_dash_maybe144 (    struct Char_17  e2275 ,    struct Maybe_125  b2277 ) {
    struct Maybe_125  dref2278 = (  b2277 );
    if ( dref2278.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref2278.tag == Maybe_125_Just_t ) {
            struct Maybe_145  dref2280 = ( (  parse_dash_digit146 ) ( (  e2275 ) ) );
            if ( dref2280.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
            }
            else {
                if ( dref2280.tag == Maybe_145_Just_t ) {
                    return ( ( Maybe_125_Just ) ( (  op_dash_add157 ( (  op_dash_mul40 ( ( dref2278 .stuff .Maybe_125_Just_s .field0 ) , (  from_dash_integral42 ( 10 ) ) ) ) , ( (  i32_dash_i64158 ) ( ( dref2280 .stuff .Maybe_145_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_125   parse_dash_int133 (    struct StrView_24  s2272 ) {
    struct StrViewIter_134  cs2282 = ( (  chars135 ) ( (  s2272 ) ) );
    struct Maybe_137  dref2283 = ( (  head138 ) ( (  cs2282 ) ) );
    if ( dref2283.tag == Maybe_137_Just_t ) {
        return ( (  reduce142 ) ( (  cs2282 ) ,  ( ( Maybe_125_Just ) ( (  from_dash_integral42 ( 0 ) ) ) ) ,  (  sequence_dash_maybe144 ) ) );
    }
    else {
        if ( dref2283.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
}

static  struct StrView_24   undefined160 (  ) {
    struct StrView_24  temp161;
    return (  temp161 );
}

static  struct StrView_24   or_dash_fail159 (    struct Maybe_58  x1640 ,    struct StrView_24  errmsg1642 ) {
    struct Maybe_58  dref1643 = (  x1640 );
    if ( dref1643.tag == Maybe_58_None_t ) {
        ( (  panic126 ) ( (  errmsg1642 ) ) );
        return ( (  undefined160 ) ( ) );
    }
    else {
        if ( dref1643.tag == Maybe_58_Just_t ) {
            return ( dref1643 .stuff .Maybe_58_Just_s .field0 );
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

static  uint8_t   or_dash_fail167 (    struct Maybe_168  x1640 ,    struct StrConcat_80  errmsg1642 ) {
    struct Maybe_168  dref1643 = (  x1640 );
    if ( dref1643.tag == Maybe_168_None_t ) {
        ( (  panic79 ) ( (  errmsg1642 ) ) );
        return ( (  undefined169 ) ( ) );
    }
    else {
        if ( dref1643.tag == Maybe_168_Just_t ) {
            return ( dref1643 .stuff .Maybe_168_Just_s .field0 );
        }
    }
}

static  struct Maybe_168   try_dash_get171 (    struct Slice_7  slice1678 ,    size_t  i1680 ) {
    if ( ( (  cmp52 ( (  i1680 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1680 ) , ( (  slice1678 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_168) { .tag = Maybe_168_None_t } );
    }
    uint8_t *  elem_dash_ptr1681 = ( (  offset_dash_ptr120 ) ( ( (  slice1678 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1680 ) ) ) ) );
    return ( ( Maybe_168_Just ) ( ( * (  elem_dash_ptr1681 ) ) ) );
}

static  uint8_t   get166 (    struct Slice_7  slice1684 ,    size_t  i1686 ) {
    return ( (  or_dash_fail167 ) ( ( (  try_dash_get171 ) ( (  slice1684 ) ,  (  i1686 ) ) ) ,  ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1686 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1684 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get165 (    struct Slice_7  self1782 ,    size_t  idx1784 ) {
    return ( (  get166 ) ( (  self1782 ) ,  (  idx1784 ) ) );
}

static  size_t   min174 (    size_t  l1181 ,    size_t  r1183 ) {
    if ( (  cmp52 ( (  l1181 ) , (  r1183 ) ) == 0 ) ) {
        return (  l1181 );
    } else {
        return (  r1183 );
    }
}

static  struct Slice_7   subslice173 (    struct Slice_7  slice1697 ,    size_t  from1699 ,    size_t  to1701 ) {
    uint8_t *  begin_dash_ptr1702 = ( (  offset_dash_ptr120 ) ( ( (  slice1697 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  from1699 ) ) ) ) );
    if ( ( (  cmp52 ( (  from1699 ) , (  to1701 ) ) != 0 ) || (  cmp52 ( (  from1699 ) , ( (  slice1697 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_7) { .f_ptr = (  begin_dash_ptr1702 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1703 = (  op_dash_sub43 ( ( (  min174 ) ( (  to1701 ) ,  ( (  slice1697 ) .f_count ) ) ) , (  from1699 ) ) );
    return ( (struct Slice_7) { .f_ptr = (  begin_dash_ptr1702 ) , .f_count = (  count1703 ) } );
}

static  struct StrView_24   byte_dash_substr172 (    struct StrView_24  s2069 ,    size_t  from2071 ,    size_t  to2073 ) {
    return ( (struct StrView_24) { .f_contents = ( (  subslice173 ) ( ( (  s2069 ) .f_contents ) ,  (  from2071 ) ,  (  to2073 ) ) ) } );
}

static  struct Maybe_58   next164 (    struct LineIter_163 *  self2243 ) {
    if ( ( (  cmp52 ( ( ( * (  self2243 ) ) .f_last ) , ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq99 ( (  elem_dash_get165 ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) , ( ( * (  self2243 ) ) .f_last ) ) ) , ( (  char_dash_u8122 ) ( ( (  nullchar123 ) ( ) ) ) ) ) ) ) ) {
        return ( (struct Maybe_58) { .tag = Maybe_58_None_t } );
    }
    size_t  i2244 = ( ( * (  self2243 ) ) .f_last );
    while ( ( (  cmp52 ( (  i2244 ) , ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq99 ( ( (  get166 ) ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) ,  (  i2244 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) ) ) {
        i2244 = (  op_dash_add75 ( (  i2244 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_24  line2245 = ( (  byte_dash_substr172 ) ( ( ( * (  self2243 ) ) .f_og ) ,  ( ( * (  self2243 ) ) .f_last ) ,  (  i2244 ) ) );
    if ( (  cmp52 ( (  i2244 ) , ( ( ( ( * (  self2243 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2244 = (  op_dash_add75 ( (  i2244 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2243 ) .f_last = (  i2244 );
    return ( ( Maybe_58_Just ) ( (  line2245 ) ) );
}

static  struct LineIter_163   into_dash_iter176 (    struct LineIter_163  self2240 ) {
    return (  self2240 );
}

static  struct Maybe_58   head162 (    struct LineIter_163  it1087 ) {
    struct LineIter_163  temp175 = ( (  into_dash_iter176 ) ( (  it1087 ) ) );
    return ( (  next164 ) ( ( &temp175 ) ) );
}

static  struct LineIter_163   lines177 (    struct StrView_24  s2237 ) {
    return ( (struct LineIter_163) { .f_og = (  s2237 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr180 (    uint8_t *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  enum Unit_4   free179 (    enum CAllocator_6  dref1868 ,    struct Slice_7  slice1870 ) {
    if (!(  dref1868 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr180 ) ( ( (  slice1870 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free178 (    struct StrView_24  s2053 ,    enum CAllocator_6  al2055 ) {
    ( (  free179 ) ( (  al2055 ) ,  ( (struct Slice_7) { .f_ptr = ( ( (  s2053 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_4_Unit );
}

struct envunion182 {
    const char*  (*fun) (  struct env22*  ,    struct StrConcat_20  ,    enum CAllocator_6  );
    struct env22 env;
};

static  const char*   cast184 (    uint8_t *  x351 ) {
    return ( (const char* ) (  x351 ) );
}

static  void *   cast_dash_ptr194 (    uint8_t * *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of195 (    uint8_t *  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  uint8_t *   zeroed192 (  ) {
    uint8_t *  temp193;
    uint8_t *  x554 = (  temp193 );
    ( ( memset ) ( ( (  cast_dash_ptr194 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of195 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  uint8_t *   null_dash_ptr191 (  ) {
    return ( (  zeroed192 ) ( ) );
}

static  struct Slice_7   empty190 (  ) {
    return ( (struct Slice_7) { .f_ptr = ( (  null_dash_ptr191 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_5   mk189 (    enum CAllocator_6  al1940 ) {
    struct Slice_7  elements1941 = ( (  empty190 ) ( ) );
    return ( (struct List_5) { .f_al = (  al1940 ) , .f_elements = (  elements1941 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrBuilder_14   mk188 (    enum CAllocator_6  al2573 ) {
    return ( (struct StrBuilder_14) { .f_chars = ( (  mk189 ) ( (  al2573 ) ) ) } );
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
    struct StrBuilder_14 *  builder2555;
    struct env12 envinst12;
};

struct envunion204 {
    enum Unit_4  (*fun) (  struct env203*  ,    struct Char_17  );
    struct env203 env;
};

static  struct StrConcatIter_199   into_dash_iter206 (    struct StrConcatIter_199  self1411 ) {
    return (  self1411 );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp209 (    int32_t  l154 ,    int32_t  r156 ) {
    return ( builtin_int32_tcmp( (  l154 ) , (  r156 ) ) );
}

struct Range_212 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_212 Range_212_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_212 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env213 {
    ;
    int64_t  base1155;
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

static  struct RangeIter_215   into_dash_iter216 (    struct Range_212  dref841 ) {
    return ( ( RangeIter_215_RangeIter ) ( ( ( Range_212_Range ) ( ( dref841 .field0 ) ,  ( dref841 .field1 ) ) ) ,  ( dref841 .field0 ) ) );
}

static  int32_t   op_dash_add218 (    int32_t  l202 ,    int32_t  r204 ) {
    return ( (  l202 ) + (  r204 ) );
}

static  struct Maybe_145   next217 (    struct RangeIter_215 *  self849 ) {
    struct RangeIter_215  dref850 = ( * (  self849 ) );
    if ( true ) {
        if ( (  cmp209 ( ( dref850 .field1 ) , ( dref850 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_145) { .tag = Maybe_145_None_t } );
        }
        struct Maybe_145  x854 = ( ( Maybe_145_Just ) ( ( dref850 .field1 ) ) );
        (*  self849 ) = ( ( RangeIter_215_RangeIter ) ( ( ( Range_212_Range ) ( ( dref850 .field0 .field0 ) ,  ( dref850 .field0 .field1 ) ) ) ,  (  op_dash_add218 ( ( dref850 .field1 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
        return (  x854 );
    }
}

static  int64_t   reduce211 (    struct Range_212  iterable1038 ,    int64_t  base1040 ,   struct envunion214  fun1042 ) {
    int64_t  x1043 = (  base1040 );
    struct RangeIter_215  it1044 = ( (  into_dash_iter216 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1045 = ( (  next217 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_145_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_145_Just_t ) {
                struct envunion214  temp219 = (  fun1042 );
                x1043 = ( temp219.fun ( &temp219.env ,  ( dref1045 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    int64_t  temp220;
    return (  temp220 );
}

static  struct Range_212   to221 (    int32_t  from832 ,    int32_t  to834 ) {
    return ( ( Range_212_Range ) ( (  from832 ) ,  (  to834 ) ) );
}

static  int32_t   op_dash_sub222 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) - (  r209 ) );
}

static  int64_t   lam223 (   struct env213* env ,    int32_t  item1159 ,    int64_t  x1161 ) {
    return (  op_dash_mul40 ( (  x1161 ) , ( env->base1155 ) ) );
}

static  int64_t   pow210 (    int64_t  base1155 ,    int32_t  p1157 ) {
    struct env213 envinst213 = {
        .base1155 =  base1155 ,
    };
    return ( (  reduce211 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1157 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral42 ( 1 ) ) ,  ( (struct envunion214){ .fun = (  int64_t  (*) (  struct env213*  ,    int32_t  ,    int64_t  ) )lam223 , .env =  envinst213 } ) ) );
}

static  int64_t   op_dash_div224 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) / (  r196 ) );
}

static  uint8_t   cast225 (    int64_t  x351 ) {
    return ( (uint8_t ) (  x351 ) );
}

static  int64_t   op_dash_sub226 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) - (  r186 ) );
}

static  void *   cast_dash_ptr234 (    size_t *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of235 (    size_t  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  size_t   zeroed232 (  ) {
    size_t  temp233;
    size_t  x554 = (  temp233 );
    ( ( memset ) ( ( (  cast_dash_ptr234 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of235 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  uint8_t *   cast236 (    size_t *  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static  size_t   cast_dash_on_dash_zeroed230 (    uint8_t  x557 ) {
    size_t  temp231 = ( (  zeroed232 ) ( ) );
    size_t *  y558 = ( &temp231 );
    uint8_t *  yp559 = ( (  cast236 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  size_t   u8_dash_size229 (    uint8_t  x638 ) {
    return ( (  cast_dash_on_dash_zeroed230 ) ( (  x638 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer228 (    uint8_t *  ptr656 ,    uint8_t  b658 ) {
    size_t  s659 = ( ( (size_t ) (  ptr656 ) ) );
    size_t  exp660 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add75 ( (  op_dash_sub43 ( (  s659 ) , ( (  u8_dash_size229 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer100 ) ( (  ptr656 ) ) ) ) ) ) ) , (  op_dash_mul74 ( (  exp660 ) , ( (  u8_dash_size229 ) ( (  b658 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast237 (    size_t  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static  struct Char_17   from_dash_u8227 (    uint8_t  b685 ) {
    uint8_t *  ptr686 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer228 ) ( ( ( (  cast237 ) ( ( (  u8_dash_size229 ) ( (  b685 ) ) ) ) ) ) ,  (  from_dash_integral103 ( 103 ) ) ) );
    return ( (struct Char_17) { .f_ptr = (  ptr686 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_137   next208 (    struct IntStrIter_200 *  self1342 ) {
    if ( ( ( * (  self1342 ) ) .f_negative ) ) {
        (*  self1342 ) .f_negative = ( false );
        return ( ( Maybe_137_Just ) ( ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp209 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    int64_t  trim_dash_down1343 = ( (  pow210 ) ( (  from_dash_integral42 ( 10 ) ) ,  (  op_dash_sub222 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    int64_t  upper1344 = (  op_dash_div224 ( ( ( * (  self1342 ) ) .f_int ) , (  trim_dash_down1343 ) ) );
    int64_t  upper_dash_mask1345 = (  op_dash_mul40 ( (  op_dash_div224 ( (  upper1344 ) , (  from_dash_integral42 ( 10 ) ) ) ) , (  from_dash_integral42 ( 10 ) ) ) );
    uint8_t  digit1346 = ( ( (  cast225 ) ( (  op_dash_sub226 ( (  upper1344 ) , (  upper_dash_mask1345 ) ) ) ) ) );
    (*  self1342 ) .f_len = (  op_dash_sub222 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1347 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1346 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1347 ) ) );
}

static  struct Maybe_137   next239 (    enum EmptyIter_202 *  dref750 ) {
    return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
}

static  struct Maybe_137   next238 (    struct AppendIter_201 *  self980 ) {
    struct Maybe_137  dref981 = ( (  next239 ) ( ( & ( ( * (  self980 ) ) .f_it ) ) ) );
    if ( dref981.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref981 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref981.tag == Maybe_137_None_t ) {
            if ( ( ! ( ( * (  self980 ) ) .f_appended ) ) ) {
                (*  self980 ) .f_appended = ( true );
                return ( ( Maybe_137_Just ) ( ( ( * (  self980 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
        }
    }
}

static  struct Maybe_137   next207 (    struct StrConcatIter_199 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next208 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each198 (    struct StrConcatIter_199  iterable1019 ,   struct envunion204  fun1021 ) {
    struct StrConcatIter_199  temp205 = ( (  into_dash_iter206 ) ( (  iterable1019 ) ) );
    struct StrConcatIter_199 *  it1022 = ( &temp205 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next207 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                struct envunion204  temp240 = (  fun1021 );
                ( temp240.fun ( &temp240.env ,  ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_53   cmp245 (    int64_t  l149 ,    int64_t  r151 ) {
    return ( builtin_int64_tcmp( (  l149 ) , (  r151 ) ) );
}

static  int64_t   op_dash_neg246 (    int64_t  l199 ) {
    return ( (  from_dash_integral42 ( 0 ) ) - (  l199 ) );
}

static  bool   eq248 (    int64_t  l96 ,    int64_t  r98 ) {
    return ( (  l96 ) == (  r98 ) );
}

static  int32_t   count_dash_digits247 (    int64_t  self1350 ) {
    if ( (  eq248 ( (  self1350 ) , (  from_dash_integral42 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1351 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp245 ( (  self1350 ) , (  from_dash_integral42 ( 0 ) ) ) == 2 ) ) {
        self1350 = (  op_dash_div224 ( (  self1350 ) , (  from_dash_integral42 ( 10 ) ) ) );
        digits1351 = (  op_dash_add218 ( (  digits1351 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1351 );
}

static  struct IntStrIter_200   int_dash_iter244 (    int64_t  int1354 ) {
    if ( (  cmp245 ( (  int1354 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_200) { .f_int = (  op_dash_neg246 ( (  int1354 ) ) ) , .f_len = ( (  count_dash_digits247 ) ( (  op_dash_neg246 ( (  int1354 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_200) { .f_int = (  int1354 ) , .f_len = ( (  count_dash_digits247 ) ( (  int1354 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_200   chars243 (    int64_t  self1381 ) {
    return ( (  int_dash_iter244 ) ( (  self1381 ) ) );
}

static  enum EmptyIter_202   into_dash_iter253 (    enum EmptyIter_202  self748 ) {
    return (  self748 );
}

static  struct AppendIter_201   append252 (    enum EmptyIter_202  it964 ,    struct Char_17  e966 ) {
    return ( (struct AppendIter_201) { .f_it = ( (  into_dash_iter253 ) ( (  it964 ) ) ) , .f_elem = (  e966 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_201   cons251 (    enum EmptyIter_202  it969 ,    struct Char_17  e971 ) {
    return ( (  append252 ) ( (  it969 ) ,  (  e971 ) ) );
}

static  enum EmptyIter_202   nil254 (  ) {
    return ( EmptyIter_202_EmptyIter );
}

static  struct AppendIter_201   single250 (    struct Char_17  e974 ) {
    return ( (  cons251 ) ( ( (  nil254 ) ( ) ) ,  (  e974 ) ) );
}

static  struct AppendIter_201   chars249 (    struct Char_17  self1327 ) {
    return ( (  single250 ) ( (  self1327 ) ) );
}

static  struct StrConcatIter_199   into_dash_iter242 (    struct StrConcat_20  dref1418 ) {
    return ( (struct StrConcatIter_199) { .f_left = ( (  chars243 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_199   chars241 (    struct StrConcat_20  self1429 ) {
    return ( (  into_dash_iter242 ) ( (  self1429 ) ) );
}

struct env263 {
    struct env2 envinst2;
    struct List_5 *  list1999;
};

struct envunion264 {
    enum Unit_4  (*fun) (  struct env263*  ,    uint8_t  );
    struct env263 env;
};

struct SliceIter_265 {
    struct Slice_7  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_265   into_dash_iter267 (    struct Slice_7  self1737 ) {
    return ( (struct SliceIter_265) { .f_slice = (  self1737 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_168   next268 (    struct SliceIter_265 *  self1743 ) {
    size_t  off1744 = ( ( * (  self1743 ) ) .f_current_dash_offset );
    if ( (  cmp52 ( (  op_dash_add75 ( (  off1744 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1743 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_168) { .tag = Maybe_168_None_t } );
    }
    uint8_t  elem1745 = ( * ( (  offset_dash_ptr120 ) ( ( ( ( * (  self1743 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  off1744 ) ) ) ) ) );
    (*  self1743 ) .f_current_dash_offset = (  op_dash_add75 ( (  off1744 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_168_Just ) ( (  elem1745 ) ) );
}

static  enum Unit_4   for_dash_each262 (    struct Slice_7  iterable1019 ,   struct envunion264  fun1021 ) {
    struct SliceIter_265  temp266 = ( (  into_dash_iter267 ) ( (  iterable1019 ) ) );
    struct SliceIter_265 *  it1022 = ( &temp266 );
    while ( ( true ) ) {
        struct Maybe_168  dref1023 = ( (  next268 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_168_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_168_Just_t ) {
                struct envunion264  temp269 = (  fun1021 );
                ( temp269.fun ( &temp269.env ,  ( dref1023 .stuff .Maybe_168_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  bool   eq275 (    size_t  l121 ,    size_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

struct env276 {
    ;
    ;
    struct Slice_7  new_dash_slice1951;
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

static  enum Unit_4   lam279 (   struct env276* env ,    struct Tuple2_278  dref1952 ) {
    return ( (  set77 ) ( ( env->new_dash_slice1951 ) ,  ( (  i32_dash_size76 ) ( ( dref1952 .field1 ) ) ) ,  ( dref1952 .field0 ) ) );
}

struct FromIter_282 {
    int32_t  f_from;
};

struct Zip_281 {
    struct SliceIter_265  f_left_dash_it;
    struct FromIter_282  f_right_dash_it;
};

static  struct Zip_281   into_dash_iter284 (    struct Zip_281  self869 ) {
    return (  self869 );
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

static  struct Maybe_145   next287 (    struct FromIter_282 *  dref863 ) {
    int32_t  v865 = ( ( (* dref863 ) ) .f_from );
    (* dref863 ) .f_from = (  op_dash_add218 ( ( ( (* dref863 ) ) .f_from ) , (  from_dash_integral49 ( 1 ) ) ) );
    return ( ( Maybe_145_Just ) ( (  v865 ) ) );
}

static  struct Maybe_285   next286 (    struct Zip_281 *  self872 ) {
    struct Zip_281  copy873 = ( * (  self872 ) );
    while ( ( true ) ) {
        struct Maybe_168  dref874 = ( (  next268 ) ( ( & ( (  copy873 ) .f_left_dash_it ) ) ) );
        if ( dref874.tag == Maybe_168_None_t ) {
            return ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
        }
        else {
            if ( dref874.tag == Maybe_168_Just_t ) {
                struct Maybe_145  dref876 = ( (  next287 ) ( ( & ( (  copy873 ) .f_right_dash_it ) ) ) );
                if ( dref876.tag == Maybe_145_None_t ) {
                    return ( (struct Maybe_285) { .tag = Maybe_285_None_t } );
                }
                else {
                    if ( dref876.tag == Maybe_145_Just_t ) {
                        ( (  next268 ) ( ( & ( ( * (  self872 ) ) .f_left_dash_it ) ) ) );
                        ( (  next287 ) ( ( & ( ( * (  self872 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_285_Just ) ( ( ( Tuple2_278_Tuple2 ) ( ( dref874 .stuff .Maybe_168_Just_s .field0 ) ,  ( dref876 .stuff .Maybe_145_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_4   for_dash_each280 (    struct Zip_281  iterable1019 ,   struct envunion277  fun1021 ) {
    struct Zip_281  temp283 = ( (  into_dash_iter284 ) ( (  iterable1019 ) ) );
    struct Zip_281 *  it1022 = ( &temp283 );
    while ( ( true ) ) {
        struct Maybe_285  dref1023 = ( (  next286 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_285_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_285_Just_t ) {
                struct envunion277  temp288 = (  fun1021 );
                ( temp288.fun ( &temp288.env ,  ( dref1023 .stuff .Maybe_285_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct FromIter_282   into_dash_iter290 (    struct FromIter_282  it861 ) {
    return (  it861 );
}

static  struct Zip_281   zip289 (    struct Slice_7  left880 ,    struct FromIter_282  right882 ) {
    struct SliceIter_265  left_dash_it883 = ( (  into_dash_iter267 ) ( (  left880 ) ) );
    struct FromIter_282  right_dash_it884 = ( (  into_dash_iter290 ) ( (  right882 ) ) );
    return ( (struct Zip_281) { .f_left_dash_it = (  left_dash_it883 ) , .f_right_dash_it = (  right_dash_it884 ) } );
}

static  struct FromIter_282   from291 (    int32_t  f858 ) {
    return ( (struct FromIter_282) { .f_from = (  f858 ) } );
}

static  enum Unit_4   grow_dash_if_dash_full274 (   struct env1* env ,    struct List_5 *  list1950 ) {
    if ( (  eq275 ( ( ( * (  list1950 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list1950 ) .f_elements = ( (  allocate69 ) ( ( ( * (  list1950 ) ) .f_al ) ,  ( env->starting_dash_size1945 ) ) );
    } else {
        if ( (  eq275 ( ( ( * (  list1950 ) ) .f_count ) , ( ( ( * (  list1950 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_7  new_dash_slice1951 = ( (  allocate69 ) ( ( ( * (  list1950 ) ) .f_al ) ,  (  op_dash_mul74 ( ( ( * (  list1950 ) ) .f_count ) , ( env->growth_dash_factor1946 ) ) ) ) );
            struct env276 envinst276 = {
                .new_dash_slice1951 =  new_dash_slice1951 ,
            };
            struct envunion277  fun1955 = ( (struct envunion277){ .fun = (  enum Unit_4  (*) (  struct env276*  ,    struct Tuple2_278  ) )lam279 , .env =  envinst276 } );
            ( (  for_dash_each280 ) ( ( (  zip289 ) ( ( ( * (  list1950 ) ) .f_elements ) ,  ( (  from291 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) ,  (  fun1955 ) ) );
            ( (  free179 ) ( ( ( * (  list1950 ) ) .f_al ) ,  ( ( * (  list1950 ) ) .f_elements ) ) );
            (*  list1950 ) .f_elements = (  new_dash_slice1951 );
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   add272 (   struct env2* env ,    struct List_5 *  list1958 ,    uint8_t  elem1960 ) {
    struct envunion3  temp273 = ( (struct envunion3){ .fun = (  enum Unit_4  (*) (  struct env1*  ,    struct List_5 *  ) )grow_dash_if_dash_full274 , .env =  env->envinst1 } );
    ( temp273.fun ( &temp273.env ,  (  list1958 ) ) );
    ( (  set77 ) ( ( ( * (  list1958 ) ) .f_elements ) ,  ( ( * (  list1958 ) ) .f_count ) ,  (  elem1960 ) ) );
    (*  list1958 ) .f_count = (  op_dash_add75 ( ( ( * (  list1958 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam270 (   struct env263* env ,    uint8_t  x2003 ) {
    struct envunion9  temp271 = ( (struct envunion9){ .fun = (  enum Unit_4  (*) (  struct env2*  ,    struct List_5 *  ,    uint8_t  ) )add272 , .env =  env->envinst2 } );
    return ( temp271.fun ( &temp271.env ,  ( env->list1999 ) ,  (  x2003 ) ) );
}

static  enum Unit_4   add_dash_all261 (   struct env8* env ,    struct List_5 *  list1999 ,    struct Slice_7  it2001 ) {
    struct env263 envinst263 = {
        .envinst2 = env->envinst2 ,
        .list1999 =  list1999 ,
    };
    ( (  for_dash_each262 ) ( (  it2001 ) ,  ( (struct envunion264){ .fun = (  enum Unit_4  (*) (  struct env263*  ,    uint8_t  ) )lam270 , .env =  envinst263 } ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   write_dash_slice259 (   struct env10* env ,    struct StrBuilder_14 *  builder2545 ,    struct Slice_7  s2547 ) {
    struct envunion11  temp260 = ( (struct envunion11){ .fun = (  enum Unit_4  (*) (  struct env8*  ,    struct List_5 *  ,    struct Slice_7  ) )add_dash_all261 , .env =  env->envinst8 } );
    ( temp260.fun ( &temp260.env ,  ( & ( ( * (  builder2545 ) ) .f_chars ) ) ,  (  s2547 ) ) );
    return ( Unit_4_Unit );
}

static  struct Slice_7   from_dash_char292 (    struct Char_17  c1850 ,    uint8_t *  buf1852 ) {
    struct CharDestructured_97  dref1853 = ( (  destructure98 ) ( (  c1850 ) ) );
    if ( dref1853.tag == CharDestructured_97_Ref_t ) {
        return ( (struct Slice_7) { .f_ptr = ( ( dref1853 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1853 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1853.tag == CharDestructured_97_Scalar_t ) {
            if ( (  cmp106 ( ( dref1853 .stuff .CharDestructured_97_Scalar_s .field0 ) , (  from_dash_integral107 ( 127 ) ) ) == 2 ) ) {
                const char*  temp293 = ( (  from_dash_string57 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp293);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            (*  buf1852 ) = ( (  u32_dash_u8109 ) ( ( dref1853 .stuff .CharDestructured_97_Scalar_s .field0 ) ) );
            return ( (struct Slice_7) { .f_ptr = (  buf1852 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_4   write_dash_char257 (   struct env12* env ,    struct StrBuilder_14 *  builder2550 ,    struct Char_17  c2552 ) {
    struct envunion13  temp258 = ( (struct envunion13){ .fun = (  enum Unit_4  (*) (  struct env10*  ,    struct StrBuilder_14 *  ,    struct Slice_7  ) )write_dash_slice259 , .env =  env->envinst10 } );
    uint8_t  temp295;
    uint8_t  temp294 = (  temp295 );
    ( temp258.fun ( &temp258.env ,  (  builder2550 ) ,  ( (  from_dash_char292 ) ( (  c2552 ) ,  ( &temp294 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam255 (   struct env203* env ,    struct Char_17  c2559 ) {
    struct envunion16  temp256 = ( (struct envunion16){ .fun = (  enum Unit_4  (*) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  ) )write_dash_char257 , .env =  env->envinst12 } );
    return ( temp256.fun ( &temp256.env ,  ( env->builder2555 ) ,  (  c2559 ) ) );
}

static  enum Unit_4   write197 (   struct env15* env ,    struct StrBuilder_14 *  builder2555 ,    struct StrConcat_20  s2557 ) {
    struct env203 envinst203 = {
        .builder2555 =  builder2555 ,
        .envinst12 = env->envinst12 ,
    };
    ( (  for_dash_each198 ) ( ( (  chars241 ) ( (  s2557 ) ) ) ,  ( (struct envunion204){ .fun = (  enum Unit_4  (*) (  struct env203*  ,    struct Char_17  ) )lam255 , .env =  envinst203 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Slice_7   cast298 (    struct Slice_7  x351 ) {
    return ( (struct Slice_7 ) (  x351 ) );
}

static  struct StrView_24   as_dash_str297 (    struct StrBuilder_14 *  builder2579 ) {
    return ( (struct StrView_24) { .f_contents = ( (  cast298 ) ( ( (  subslice173 ) ( ( ( ( * (  builder2579 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2579 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_24   mk_dash_dyn_dash_str186 (   struct env18* env ,    struct StrConcat_20  s2599 ,    enum CAllocator_6  al2601 ) {
    struct StrBuilder_14  temp187 = ( (  mk188 ) ( (  al2601 ) ) );
    struct StrBuilder_14 *  sb2602 = ( &temp187 );
    struct envunion19  temp196 = ( (struct envunion19){ .fun = (  enum Unit_4  (*) (  struct env15*  ,    struct StrBuilder_14 *  ,    struct StrConcat_20  ) )write197 , .env =  env->envinst15 } );
    ( temp196.fun ( &temp196.env ,  (  sb2602 ) ,  (  s2599 ) ) );
    struct envunion21  temp296 = ( (struct envunion21){ .fun = (  enum Unit_4  (*) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  ) )write_dash_char257 , .env =  env->envinst12 } );
    ( temp296.fun ( &temp296.env ,  (  sb2602 ) ,  ( (  nullchar123 ) ( ) ) ) );
    struct StrView_24  dynstr2603 = ( (  as_dash_str297 ) ( (  sb2602 ) ) );
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = ( ( (  dynstr2603 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub43 ( ( ( (  dynstr2603 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  const char*   mk_dash_const_dash_str183 (   struct env22* env ,    struct StrConcat_20  s2606 ,    enum CAllocator_6  al2608 ) {
    struct envunion23  temp185 = ( (struct envunion23){ .fun = (  struct StrView_24  (*) (  struct env18*  ,    struct StrConcat_20  ,    enum CAllocator_6  ) )mk_dash_dyn_dash_str186 , .env =  env->envinst18 } );
    return ( ( (  cast184 ) ( ( ( ( temp185.fun ( &temp185.env ,  (  s2606 ) ,  (  al2608 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct ConstStrIter_301 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_301   into_dash_iter303 (    const char*  self1306 ) {
    return ( (struct ConstStrIter_301) { .f_ogstr = (  self1306 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_301   chars302 (    const char*  self1321 ) {
    return ( (  into_dash_iter303 ) ( (  self1321 ) ) );
}

static  uint8_t *   cast305 (    const char*  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static  uint8_t   cast306 (    int32_t  x351 ) {
    return ( (uint8_t ) (  x351 ) );
}

static  struct Maybe_137   next304 (    struct ConstStrIter_301 *  self1312 ) {
    uint8_t *  char_dash_ptr1313 = ( ( (  cast305 ) ( ( ( * (  self1312 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1314 = ( (  offset_dash_ptr120 ) ( (  char_dash_ptr1313 ) ,  ( (  size_dash_i6454 ) ( ( ( * (  self1312 ) ) .f_i ) ) ) ) );
    if ( (  eq99 ( ( * (  optr1314 ) ) , ( (  cast306 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    struct Char_17  char1315 = ( (  scan_dash_from_dash_mem114 ) ( (  optr1314 ) ) );
    (*  self1312 ) .f_i = (  op_dash_add75 ( ( ( * (  self1312 ) ) .f_i ) , ( (  char1315 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_137_Just ) ( (  char1315 ) ) );
}

static  int32_t   fprintf_dash_char307 (    FILE *  file729 ,    struct Char_17  c731 ) {
    struct CharDestructured_97  dref732 = ( (  destructure98 ) ( (  c731 ) ) );
    if ( dref732.tag == CharDestructured_97_Ref_t ) {
        return ( ( fprintf ) ( (  file729 ) ,  ( (  from_dash_string57 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3289 ) ( ( ( dref732 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref732 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref732.tag == CharDestructured_97_Scalar_t ) {
            if ( (  cmp106 ( ( dref732 .stuff .CharDestructured_97_Scalar_s .field0 ) , (  from_dash_integral107 ( 127 ) ) ) == 2 ) ) {
                const char*  temp308 = ( (  from_dash_string57 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp308);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            return ( ( fprintf ) ( (  file729 ) ,  ( (  from_dash_string57 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u8109 ) ( ( dref732 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each311 (    struct StrViewIter_134  iterable1019 ,    enum Unit_4 (*  fun1021 )(    struct Char_17  ) ) {
    struct StrViewIter_134  temp312 = ( (  into_dash_iter141 ) ( (  iterable1019 ) ) );
    struct StrViewIter_134 *  it1022 = ( &temp312 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next139 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                ( (  fun1021 ) ( ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print310 (    struct StrView_24  s1616 ) {
    ( (  for_dash_each311 ) ( ( (  chars135 ) ( (  s1616 ) ) ) ,  (  printf_dash_char96 ) ) );
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

static  bool   try_dash_write_dash_contents300 (    const char*  filename2739 ,    const char*  contents2741 ) {
    FILE *  file2742 = ( ( fopen ) ( (  filename2739 ) ,  ( (  from_dash_charlike60 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null61 ) ( (  file2742 ) ) ) ) {
        return ( false );
    }
    struct ConstStrIter_301  it2743 = ( (  chars302 ) ( (  contents2741 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref2744 = ( (  next304 ) ( ( & (  it2743 ) ) ) );
        if ( dref2744.tag == Maybe_137_None_t ) {
            ( ( fclose ) ( (  file2742 ) ) );
            return ( true );
        }
        else {
            if ( dref2744.tag == Maybe_137_Just_t ) {
                int32_t  chars_dash_written2746 = ( (  fprintf_dash_char307 ) ( (  file2742 ) ,  ( dref2744 .stuff .Maybe_137_Just_s .field0 ) ) );
                if ( (  cmp209 ( (  chars_dash_written2746 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) ) {
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

static  enum Unit_4   print_dash_str322 (    const char*  self1318 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1318 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str321 (    struct StrConcat_316  self1423 ) {
    struct StrConcat_316  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str322 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str320 (    struct StrConcat_319  self1423 ) {
    struct StrConcat_319  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str321 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str317 (    struct StrConcat_318  self1423 ) {
    struct StrConcat_318  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str320 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic315 (    struct StrConcat_316  errmsg1627 ) {
    ( (  print_dash_str317 ) ( ( ( StrConcat_318_StrConcat ) ( ( ( StrConcat_319_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1627 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   write_dash_contents299 (    const char*  filename2749 ,    const char*  contents2751 ) {
    if ( ( ! ( (  try_dash_write_dash_contents300 ) ( (  filename2749 ) ,  (  contents2751 ) ) ) ) ) {
        ( (  panic315 ) ( ( ( StrConcat_316_StrConcat ) ( ( (  from_dash_string111 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename2749 ) ) ) ) );
    }
    return ( Unit_4_Unit );
}

struct Slice_325 {
    enum Unit_4 *  f_ptr;
    size_t  f_count;
};

static  void *   cast_dash_ptr326 (    enum Unit_4 *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  enum Unit_4   free324 (    enum CAllocator_6  dref1868 ,    struct Slice_325  slice1870 ) {
    if (!(  dref1868 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr326 ) ( ( (  slice1870 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free_dash_const_dash_str323 (    const char*  s2611 ,    enum CAllocator_6  al2613 ) {
    ( (  free324 ) ( (  al2613 ) ,  ( (struct Slice_325) { .f_ptr = ( (enum Unit_4 * ) (  s2611 ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_4_Unit );
}

static  struct ConstStrIter_301   into_dash_iter330 (    struct ConstStrIter_301  self1309 ) {
    return (  self1309 );
}

static  struct Maybe_137   head328 (    struct ConstStrIter_301  it1087 ) {
    struct ConstStrIter_301  temp329 = ( (  into_dash_iter330 ) ( (  it1087 ) ) );
    return ( (  next304 ) ( ( &temp329 ) ) );
}

static  struct Maybe_125   reduce331 (    struct ConstStrIter_301  iterable1038 ,    struct Maybe_125  base1040 ,    struct Maybe_125 (*  fun1042 )(    struct Char_17  ,    struct Maybe_125  ) ) {
    struct Maybe_125  x1043 = (  base1040 );
    struct ConstStrIter_301  it1044 = ( (  into_dash_iter330 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1045 = ( (  next304 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_137_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_137_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    struct Maybe_125  temp332;
    return (  temp332 );
}

static  struct Maybe_125   sequence_dash_maybe333 (    struct Char_17  e2275 ,    struct Maybe_125  b2277 ) {
    struct Maybe_125  dref2278 = (  b2277 );
    if ( dref2278.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref2278.tag == Maybe_125_Just_t ) {
            struct Maybe_145  dref2280 = ( (  parse_dash_digit146 ) ( (  e2275 ) ) );
            if ( dref2280.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
            }
            else {
                if ( dref2280.tag == Maybe_145_Just_t ) {
                    return ( ( Maybe_125_Just ) ( (  op_dash_add157 ( (  op_dash_mul40 ( ( dref2278 .stuff .Maybe_125_Just_s .field0 ) , (  from_dash_integral42 ( 10 ) ) ) ) , ( (  i32_dash_i64158 ) ( ( dref2280 .stuff .Maybe_145_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_125   parse_dash_int327 (    const char*  s2272 ) {
    struct ConstStrIter_301  cs2282 = ( (  chars302 ) ( (  s2272 ) ) );
    struct Maybe_137  dref2283 = ( (  head328 ) ( (  cs2282 ) ) );
    if ( dref2283.tag == Maybe_137_Just_t ) {
        return ( (  reduce331 ) ( (  cs2282 ) ,  ( ( Maybe_125_Just ) ( (  from_dash_integral42 ( 0 ) ) ) ) ,  (  sequence_dash_maybe333 ) ) );
    }
    else {
        if ( dref2283.tag == Maybe_137_None_t ) {
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

static  struct termios *   cast_dash_ptr343 (    struct Termios_32 *  p354 ) {
    return ( (struct termios * ) (  p354 ) );
}

static  uint32_t   u32_dash_and344 (    uint32_t  l2624 ,    uint32_t  r2626 ) {
    return ( (  l2624 ) & (  r2626 ) );
}

static  uint32_t   u32_dash_neg345 (    uint32_t  l2629 ) {
    return ( ~ (  l2629 ) );
}

struct Array_347 {
    uint32_t _arr [4];
};

struct ArrayIter_349 {
    struct Array_347  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_349   into_dash_iter350 (    struct Array_347  self2161 ) {
    return ( (struct ArrayIter_349) { .f_backing = (  self2161 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
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

static  enum Unit_4   print_dash_str364 (    int32_t  self1360 ) {
    ( ( printf ) ( ( (  from_dash_string57 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1360 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str363 (    struct StrConcat_357  self1423 ) {
    struct StrConcat_357  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str92 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str364 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str362 (    struct StrConcat_356  self1423 ) {
    struct StrConcat_356  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str363 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str361 (    struct StrConcat_360  self1423 ) {
    struct StrConcat_360  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str362 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str358 (    struct StrConcat_359  self1423 ) {
    struct StrConcat_359  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str361 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic355 (    struct StrConcat_356  errmsg1627 ) {
    ( (  print_dash_str358 ) ( ( ( StrConcat_359_StrConcat ) ( ( ( StrConcat_360_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1627 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint32_t *   cast_dash_ptr365 (    struct Array_347 *  p354 ) {
    return ( (uint32_t * ) (  p354 ) );
}

static  uint32_t *   offset_dash_ptr366 (    uint32_t *  x333 ,    int64_t  count335 ) {
    uint32_t  temp367;
    return ( (uint32_t * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul40 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp367 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr354 (    struct Array_347 *  arr2089 ,    size_t  i2092 ) {
    if ( ( (  cmp52 ( (  i2092 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2092 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2092 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2093 = ( ( (  cast_dash_ptr365 ) ( (  arr2089 ) ) ) );
    return ( (  offset_dash_ptr366 ) ( (  p2093 ) ,  ( (int64_t ) (  i2092 ) ) ) );
}

static  uint32_t   get353 (    struct Array_347 *  arr2096 ,    size_t  i2099 ) {
    return ( * ( (  get_dash_ptr354 ) ( (  arr2096 ) ,  (  i2099 ) ) ) );
}

static  struct Maybe_351   next352 (    struct ArrayIter_349 *  self2168 ) {
    if ( (  cmp52 ( ( ( * (  self2168 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  e2170 = ( (  get353 ) ( ( & ( ( * (  self2168 ) ) .f_backing ) ) ,  ( ( * (  self2168 ) ) .f_cur ) ) );
    (*  self2168 ) .f_cur = (  op_dash_add75 ( ( ( * (  self2168 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_351_Just ) ( (  e2170 ) ) );
}

static  uint32_t   reduce348 (    struct Array_347  iterable1038 ,    uint32_t  base1040 ,    uint32_t (*  fun1042 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1043 = (  base1040 );
    struct ArrayIter_349  it1044 = ( (  into_dash_iter350 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1045 = ( (  next352 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_351_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_351_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    uint32_t  temp368;
    return (  temp368 );
}

static  uint32_t   u32_dash_or369 (    uint32_t  l2616 ,    uint32_t  r2618 ) {
    return ( (  l2616 ) | (  r2618 ) );
}

static  uint32_t   u32_dash_ors346 (    struct Array_347  vals2621 ) {
    return ( (  reduce348 ) ( (  vals2621 ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  u32_dash_or369 ) ) );
}

static  struct Array_347   from_dash_listlike370 (    struct Array_347  self325 ) {
    return (  self325 );
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

static  struct ArrayIter_378   into_dash_iter379 (    struct Array_376  self2161 ) {
    return ( (struct ArrayIter_378) { .f_backing = (  self2161 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr383 (    struct Array_376 *  p354 ) {
    return ( (uint32_t * ) (  p354 ) );
}

static  uint32_t *   get_dash_ptr382 (    struct Array_376 *  arr2089 ,    size_t  i2092 ) {
    if ( ( (  cmp52 ( (  i2092 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2092 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2092 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2093 = ( ( (  cast_dash_ptr383 ) ( (  arr2089 ) ) ) );
    return ( (  offset_dash_ptr366 ) ( (  p2093 ) ,  ( (int64_t ) (  i2092 ) ) ) );
}

static  uint32_t   get381 (    struct Array_376 *  arr2096 ,    size_t  i2099 ) {
    return ( * ( (  get_dash_ptr382 ) ( (  arr2096 ) ,  (  i2099 ) ) ) );
}

static  struct Maybe_351   next380 (    struct ArrayIter_378 *  self2168 ) {
    if ( (  cmp52 ( ( ( * (  self2168 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  e2170 = ( (  get381 ) ( ( & ( ( * (  self2168 ) ) .f_backing ) ) ,  ( ( * (  self2168 ) ) .f_cur ) ) );
    (*  self2168 ) .f_cur = (  op_dash_add75 ( ( ( * (  self2168 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_351_Just ) ( (  e2170 ) ) );
}

static  uint32_t   reduce377 (    struct Array_376  iterable1038 ,    uint32_t  base1040 ,    uint32_t (*  fun1042 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1043 = (  base1040 );
    struct ArrayIter_378  it1044 = ( (  into_dash_iter379 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1045 = ( (  next380 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_351_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_351_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    uint32_t  temp384;
    return (  temp384 );
}

static  uint32_t   u32_dash_ors375 (    struct Array_376  vals2621 ) {
    return ( (  reduce377 ) ( (  vals2621 ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  u32_dash_or369 ) ) );
}

static  struct Array_376   from_dash_listlike385 (    struct Array_376  self325 ) {
    return (  self325 );
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

static  struct ArrayIter_394   into_dash_iter395 (    struct Array_392  self2161 ) {
    return ( (struct ArrayIter_394) { .f_backing = (  self2161 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr399 (    struct Array_392 *  p354 ) {
    return ( (uint32_t * ) (  p354 ) );
}

static  uint32_t *   get_dash_ptr398 (    struct Array_392 *  arr2089 ,    size_t  i2092 ) {
    if ( ( (  cmp52 ( (  i2092 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2092 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2092 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2093 = ( ( (  cast_dash_ptr399 ) ( (  arr2089 ) ) ) );
    return ( (  offset_dash_ptr366 ) ( (  p2093 ) ,  ( (int64_t ) (  i2092 ) ) ) );
}

static  uint32_t   get397 (    struct Array_392 *  arr2096 ,    size_t  i2099 ) {
    return ( * ( (  get_dash_ptr398 ) ( (  arr2096 ) ,  (  i2099 ) ) ) );
}

static  struct Maybe_351   next396 (    struct ArrayIter_394 *  self2168 ) {
    if ( (  cmp52 ( ( ( * (  self2168 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    uint32_t  e2170 = ( (  get397 ) ( ( & ( ( * (  self2168 ) ) .f_backing ) ) ,  ( ( * (  self2168 ) ) .f_cur ) ) );
    (*  self2168 ) .f_cur = (  op_dash_add75 ( ( ( * (  self2168 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_351_Just ) ( (  e2170 ) ) );
}

static  uint32_t   reduce393 (    struct Array_392  iterable1038 ,    uint32_t  base1040 ,    uint32_t (*  fun1042 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1043 = (  base1040 );
    struct ArrayIter_394  it1044 = ( (  into_dash_iter395 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1045 = ( (  next396 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_351_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_351_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    uint32_t  temp400;
    return (  temp400 );
}

static  uint32_t   u32_dash_ors391 (    struct Array_392  vals2621 ) {
    return ( (  reduce393 ) ( (  vals2621 ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  u32_dash_or369 ) ) );
}

static  struct Array_392   from_dash_listlike401 (    struct Array_392  self325 ) {
    return (  self325 );
}

static  uint32_t   opost402 (  ) {
    return (  from_dash_integral107 ( 1 ) );
}

static  uint32_t   cs8403 (  ) {
    return (  from_dash_integral107 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr406 (    struct Array_33 *  p354 ) {
    return ( (uint8_t * ) (  p354 ) );
}

static  uint8_t *   get_dash_ptr405 (    struct Array_33 *  arr2089 ,    size_t  i2092 ) {
    if ( ( (  cmp52 ( (  i2092 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2092 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2092 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2093 = ( ( (  cast_dash_ptr406 ) ( (  arr2089 ) ) ) );
    return ( (  offset_dash_ptr120 ) ( (  p2093 ) ,  ( (int64_t ) (  i2092 ) ) ) );
}

static  enum Unit_4   set404 (    struct Array_33 *  arr2102 ,    size_t  i2105 ,    uint8_t  e2107 ) {
    uint8_t *  p2108 = ( (  get_dash_ptr405 ) ( (  arr2102 ) ,  (  i2105 ) ) );
    (*  p2108 ) = (  e2107 );
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
    struct Termios_32 *  orig_dash_termios3069 = ( &temp339 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  cast_dash_ptr343 ) ( (  orig_dash_termios3069 ) ) ) ) );
    struct Termios_32  raw3070 = ( * (  orig_dash_termios3069 ) );
    raw3070 .f_c_dash_lflag = ( (  u32_dash_and344 ) ( ( (  raw3070 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg345 ) ( ( (  u32_dash_ors346 ) ( ( (  from_dash_listlike370 ) ( ( (struct Array_347) { ._arr = { ( (  echo371 ) ( ) ) , ( (  icanon372 ) ( ) ) , ( (  isig373 ) ( ) ) , ( ( (  iexten374 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3070 .f_c_dash_iflag = ( (  u32_dash_and344 ) ( ( (  raw3070 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg345 ) ( ( (  u32_dash_ors375 ) ( ( (  from_dash_listlike385 ) ( ( (struct Array_376) { ._arr = { ( (  brkint386 ) ( ) ) , ( (  icrnl387 ) ( ) ) , ( (  inpck388 ) ( ) ) , ( (  istrip389 ) ( ) ) , ( ( (  ixon390 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3070 .f_c_dash_oflag = ( (  u32_dash_and344 ) ( ( (  raw3070 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg345 ) ( ( (  u32_dash_ors391 ) ( ( (  from_dash_listlike401 ) ( ( (struct Array_392) { ._arr = { ( ( (  opost402 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3070 .f_c_dash_cflag = ( (  u32_dash_or369 ) ( ( (  raw3070 ) .f_c_dash_cflag ) ,  ( (  cs8403 ) ( ) ) ) );
    ( (  set404 ) ( ( & ( (  raw3070 ) .f_c_dash_cc ) ) ,  ( (  vmin407 ) ( ) ) ,  (  from_dash_integral103 ( 0 ) ) ) );
    ( (  set404 ) ( ( & ( (  raw3070 ) .f_c_dash_cc ) ) ,  ( (  vtime408 ) ( ) ) ,  (  from_dash_integral103 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  tcsa_dash_flush409 ) ( ) ) ,  ( (  cast_dash_ptr343 ) ( ( & (  raw3070 ) ) ) ) ) );
    return ( * (  orig_dash_termios3069 ) );
}

static  enum Unit_4   print411 (    struct StrView_24  s2372 ) {
    ( (  for_dash_each311 ) ( ( (  chars135 ) ( (  s2372 ) ) ) ,  (  printf_dash_char96 ) ) );
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

static  bool   ptr_dash_eq419 (    enum Unit_4 *  l570 ,    enum Unit_4 *  r572 ) {
    return ( (  l570 ) == (  r572 ) );
}

static  enum Unit_4 *   cast420 (    const char*  x351 ) {
    return ( (enum Unit_4 * ) (  x351 ) );
}

static  void *   cast_dash_ptr424 (    enum Unit_4 * *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of425 (    enum Unit_4 *  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  enum Unit_4 *   zeroed422 (  ) {
    enum Unit_4 *  temp423;
    enum Unit_4 *  x554 = (  temp423 );
    ( ( memset ) ( ( (  cast_dash_ptr424 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of425 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  enum Unit_4 *   null_dash_ptr421 (  ) {
    return ( (  zeroed422 ) ( ) );
}

static  struct Maybe_50   from_dash_nullable_dash_c_dash_str418 (    const char*  s575 ) {
    if ( ( (  ptr_dash_eq419 ) ( ( (  cast420 ) ( (  s575 ) ) ) ,  ( ( (  null_dash_ptr421 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_50) { .tag = Maybe_50_None_t } );
    } else {
        return ( ( Maybe_50_Just ) ( (  s575 ) ) );
    }
}

static  struct Maybe_50   get417 (    const char*  s2402 ) {
    return ( (  from_dash_nullable_dash_c_dash_str418 ) ( ( ( getenv ) ( (  s2402 ) ) ) ) );
}

static  enum ColorPalette_31   query_dash_palette416 (  ) {
    struct Maybe_50  colorterm2403 = ( (  get417 ) ( ( (  from_dash_string57 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_50  dref2404 = (  colorterm2403 );
    if ( dref2404.tag == Maybe_50_Just_t ) {
        if ( ( (  eq55 ( ( dref2404 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq55 ( ( dref2404 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_31_PaletteRGB );
        }
    }
    else {
        if ( dref2404.tag == Maybe_50_None_t ) {
        }
    }
    struct Maybe_50  dref2406 = ( (  get417 ) ( ( (  from_dash_string57 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2406.tag == Maybe_50_Just_t ) {
        if ( (  eq55 ( ( dref2406 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_31_Palette8 );
        }
    }
    else {
        if ( dref2406.tag == Maybe_50_None_t ) {
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

static  void *   cast_dash_ptr432 (    struct Winsize_428 *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of433 (    struct Winsize_428  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  struct Winsize_428   zeroed430 (  ) {
    struct Winsize_428  temp431;
    struct Winsize_428  x554 = (  temp431 );
    ( ( memset ) ( ( (  cast_dash_ptr432 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of433 ) ( (  x554 ) ) ) ) );
    return (  x554 );
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

static  int32_t   op_dash_neg437 (    int32_t  x222 ) {
    return ( (  from_dash_integral49 ( 0 ) ) - (  x222 ) );
}

static  bool   eq438 (    uint16_t  l116 ,    uint16_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint16_t   from_dash_integral439 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr445 (    uint32_t *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of446 (    uint32_t  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  uint32_t   zeroed443 (  ) {
    uint32_t  temp444;
    uint32_t  x554 = (  temp444 );
    ( ( memset ) ( ( (  cast_dash_ptr445 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of446 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  uint16_t *   cast447 (    uint32_t *  x351 ) {
    return ( (uint16_t * ) (  x351 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed441 (    uint16_t  x557 ) {
    uint32_t  temp442 = ( (  zeroed443 ) ( ) );
    uint32_t *  y558 = ( &temp442 );
    uint16_t *  yp559 = ( (  cast447 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  uint32_t   u16_dash_u32440 (    uint16_t  x620 ) {
    return ( (  cast_dash_on_dash_zeroed441 ) ( (  x620 ) ) );
}

static  struct Tuple2_426   get_dash_dimensions427 (  ) {
    struct Winsize_428  temp429 = ( ( (  zeroed430 ) ( ) ) );
    struct Winsize_428 *  ws2391 = ( &temp429 );
    if ( ( (  eq56 ( ( ( ioctl ) ( ( (  stdout_dash_fileno434 ) ( ) ) ,  ( (  tiocgwinsz435 ) ( ) ) ,  (  ws2391 ) ) ) , (  op_dash_neg437 ( (  from_dash_integral49 ( 1 ) ) ) ) ) ) || (  eq438 ( ( ( * (  ws2391 ) ) .f_ws_dash_col ) , (  from_dash_integral439 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_426_Tuple2 ) ( (  from_dash_integral107 ( 80 ) ) ,  (  from_dash_integral107 ( 24 ) ) ) );
    }
    return ( ( Tuple2_426_Tuple2 ) ( ( (  u16_dash_u32440 ) ( ( ( * (  ws2391 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32440 ) ( ( ( * (  ws2391 ) ) .f_ws_dash_row ) ) ) ) );
}

struct env448 {
    bool *  should_dash_resize3083;
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

static  enum Unit_4   lam454 (   struct env448* env ,    int32_t  dref3090 ) {
    (* env->should_dash_resize3083 ) = ( true );
    return ( Unit_4_Unit );
}

static  uint32_t   fst455 (    struct Tuple2_426  dref1195 ) {
    return ( dref1195 .field0 );
}

static  uint32_t   snd456 (    struct Tuple2_426  dref1198 ) {
    return ( dref1198 .field1 );
}

static  struct Tui_30   mk337 (   struct env26* env ) {
    struct Termios_32  og_dash_termios3085 = ( (  enable_dash_raw_dash_mode338 ) ( ) );
    ( (  hide_dash_cursor410 ) ( ) );
    ( (  reset_dash_colors412 ) ( ) );
    ( (  clear_dash_screen413 ) ( ) );
    ( (  enable_dash_mouse414 ) ( ) );
    ( (  flush_dash_stdout415 ) ( ) );
    enum ColorPalette_31  palette3086 = ( (  query_dash_palette416 ) ( ) );
    struct Tuple2_426  dims3087 = ( (  get_dash_dimensions427 ) ( ) );
    uint32_t  fps3088 = (  from_dash_integral107 ( 60 ) );
    struct timespec  last_dash_sync3089 = ( (  now44 ) ( ) );
    struct env448 envinst448 = {
        .should_dash_resize3083 = env->should_dash_resize3083 ,
    };
    ( _intr_register_signal ( (  from_dash_integral49 ( 28 ) ) , ( (struct envunion449){ .fun = (  enum Unit_4  (*) (  struct env448*  ,    int32_t  ) )lam454 , .env =  envinst448 } ) ) );
    return ( (struct Tui_30) { .f_width = ( (  fst455 ) ( (  dims3087 ) ) ) , .f_height = ( (  snd456 ) ( (  dims3087 ) ) ) , .f_target_dash_fps = (  fps3088 ) , .f_actual_dash_fps = (  from_dash_integral107 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3089 ) , .f_fps_dash_ts = (  last_dash_sync3089 ) , .f_fps_dash_count = (  from_dash_integral107 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3085 ) , .f_palette = (  palette3086 ) , .f_should_dash_redraw = ( true ) } );
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

static  struct Cell_459 *   cast_dash_ptr470 (    void *  p354 ) {
    return ( (struct Cell_459 * ) (  p354 ) );
}

static  struct Slice_458   allocate466 (    enum CAllocator_6  dref1862 ,    size_t  count1864 ) {
    if (!(  dref1862 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1865 = ( ( ( (  get_dash_typesize467 ) ( ) ) ) .f_size );
    struct Cell_459 *  ptr1866 = ( (  cast_dash_ptr470 ) ( ( ( malloc ) ( (  op_dash_mul74 ( (  size1865 ) , (  count1864 ) ) ) ) ) ) );
    return ( (struct Slice_458) { .f_ptr = (  ptr1866 ) , .f_count = (  count1864 ) } );
}

static  uint32_t *   cast474 (    size_t *  x351 ) {
    return ( (uint32_t * ) (  x351 ) );
}

static  size_t   cast_dash_on_dash_zeroed472 (    uint32_t  x557 ) {
    size_t  temp473 = ( (  zeroed232 ) ( ) );
    size_t *  y558 = ( &temp473 );
    uint32_t *  yp559 = ( (  cast474 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  size_t   u32_dash_size471 (    uint32_t  x626 ) {
    return ( (  cast_dash_on_dash_zeroed472 ) ( (  x626 ) ) );
}

static  uint32_t   op_dash_mul475 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) * (  r237 ) );
}

struct env478 {
    struct Cell_459 (*  fun1822 )(    struct Cell_459  );
    ;
    struct Slice_458  s1820;
    ;
    ;
};

struct envunion479 {
    enum Unit_4  (*fun) (  struct env478*  ,    int32_t  );
    struct env478 env;
};

static  enum Unit_4   for_dash_each477 (    struct Range_212  iterable1019 ,   struct envunion479  fun1021 ) {
    struct RangeIter_215  temp480 = ( (  into_dash_iter216 ) ( (  iterable1019 ) ) );
    struct RangeIter_215 *  it1022 = ( &temp480 );
    while ( ( true ) ) {
        struct Maybe_145  dref1023 = ( (  next217 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_145_Just_t ) {
                struct envunion479  temp481 = (  fun1021 );
                ( temp481.fun ( &temp481.env ,  ( dref1023 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct Cell_459 *   offset_dash_ptr485 (    struct Cell_459 *  x333 ,    int64_t  count335 ) {
    struct Cell_459  temp486;
    return ( (struct Cell_459 * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul40 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp486 ) ) ) ) ) ) ) ) );
}

static  struct Cell_459 *   get_dash_ptr484 (    struct Slice_458  slice1672 ,    size_t  i1674 ) {
    if ( ( (  cmp52 ( (  i1674 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1674 ) , ( (  slice1672 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic79 ) ( ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1674 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1672 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_459 *  elem_dash_ptr1675 = ( (  offset_dash_ptr485 ) ( ( (  slice1672 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1674 ) ) ) ) );
    return (  elem_dash_ptr1675 );
}

static  enum Unit_4   set483 (    struct Slice_458  slice1689 ,    size_t  i1691 ,    struct Cell_459  x1693 ) {
    struct Cell_459 *  ep1694 = ( (  get_dash_ptr484 ) ( (  slice1689 ) ,  (  i1691 ) ) );
    (*  ep1694 ) = (  x1693 );
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

static  struct Cell_459   or_dash_fail489 (    struct Maybe_490  x1640 ,    struct StrConcat_80  errmsg1642 ) {
    struct Maybe_490  dref1643 = (  x1640 );
    if ( dref1643.tag == Maybe_490_None_t ) {
        ( (  panic79 ) ( (  errmsg1642 ) ) );
        return ( (  undefined491 ) ( ) );
    }
    else {
        if ( dref1643.tag == Maybe_490_Just_t ) {
            return ( dref1643 .stuff .Maybe_490_Just_s .field0 );
        }
    }
}

static  struct Maybe_490   try_dash_get493 (    struct Slice_458  slice1678 ,    size_t  i1680 ) {
    if ( ( (  cmp52 ( (  i1680 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1680 ) , ( (  slice1678 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_490) { .tag = Maybe_490_None_t } );
    }
    struct Cell_459 *  elem_dash_ptr1681 = ( (  offset_dash_ptr485 ) ( ( (  slice1678 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1680 ) ) ) ) );
    return ( ( Maybe_490_Just ) ( ( * (  elem_dash_ptr1681 ) ) ) );
}

static  struct Cell_459   get488 (    struct Slice_458  slice1684 ,    size_t  i1686 ) {
    return ( (  or_dash_fail489 ) ( ( (  try_dash_get493 ) ( (  slice1684 ) ,  (  i1686 ) ) ) ,  ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1686 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1684 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_459   elem_dash_get487 (    struct Slice_458  self1782 ,    size_t  idx1784 ) {
    return ( (  get488 ) ( (  self1782 ) ,  (  idx1784 ) ) );
}

static  enum Unit_4   lam482 (   struct env478* env ,    int32_t  i1824 ) {
    return ( (  set483 ) ( ( env->s1820 ) ,  ( (  i32_dash_size76 ) ( (  i1824 ) ) ) ,  ( ( env->fun1822 ) ( (  elem_dash_get487 ( ( env->s1820 ) , ( (  i32_dash_size76 ) ( (  i1824 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map476 (    struct Slice_458  s1820 ,    struct Cell_459 (*  fun1822 )(    struct Cell_459  ) ) {
    struct env478 envinst478 = {
        .fun1822 =  fun1822 ,
        .s1820 =  s1820 ,
    };
    ( (  for_dash_each477 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_i3289 ) ( (  op_dash_sub43 ( ( (  s1820 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion479){ .fun = (  enum Unit_4  (*) (  struct env478*  ,    int32_t  ) )lam482 , .env =  envinst478 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_459   lam494 (    struct Cell_459  dref3192 ) {
    return ( (struct Cell_459) { .f_c = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

struct env497 {
    struct Cell_459 (*  fun1822 )(    struct Cell_459  );
    ;
    struct Slice_458  s1820;
    ;
    ;
};

struct envunion498 {
    enum Unit_4  (*fun) (  struct env497*  ,    int32_t  );
    struct env497 env;
};

static  enum Unit_4   for_dash_each496 (    struct Range_212  iterable1019 ,   struct envunion498  fun1021 ) {
    struct RangeIter_215  temp499 = ( (  into_dash_iter216 ) ( (  iterable1019 ) ) );
    struct RangeIter_215 *  it1022 = ( &temp499 );
    while ( ( true ) ) {
        struct Maybe_145  dref1023 = ( (  next217 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_145_Just_t ) {
                struct envunion498  temp500 = (  fun1021 );
                ( temp500.fun ( &temp500.env ,  ( dref1023 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam501 (   struct env497* env ,    int32_t  i1824 ) {
    return ( (  set483 ) ( ( env->s1820 ) ,  ( (  i32_dash_size76 ) ( (  i1824 ) ) ) ,  ( ( env->fun1822 ) ( (  elem_dash_get487 ( ( env->s1820 ) , ( (  i32_dash_size76 ) ( (  i1824 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map495 (    struct Slice_458  s1820 ,    struct Cell_459 (*  fun1822 )(    struct Cell_459  ) ) {
    struct env497 envinst497 = {
        .fun1822 =  fun1822 ,
        .s1820 =  s1820 ,
    };
    ( (  for_dash_each496 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_i3289 ) ( (  op_dash_sub43 ( ( (  s1820 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion498){ .fun = (  enum Unit_4  (*) (  struct env497*  ,    int32_t  ) )lam501 , .env =  envinst497 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_459   lam502 (    struct Cell_459  dref3194 ) {
    return ( (struct Cell_459) { .f_c = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

static  struct Screen_457   mk_dash_screen465 (    struct Tui_30 *  tui3188 ,    enum CAllocator_6  al3190 ) {
    struct Slice_458  cur3191 = ( (  allocate466 ) ( (  al3190 ) ,  ( (  u32_dash_size471 ) ( (  op_dash_mul475 ( ( ( * (  tui3188 ) ) .f_width ) , ( ( * (  tui3188 ) ) .f_height ) ) ) ) ) ) );
    ( (  map476 ) ( (  cur3191 ) ,  (  lam494 ) ) );
    struct Slice_458  prev3193 = ( (  allocate466 ) ( (  al3190 ) ,  ( (  u32_dash_size471 ) ( (  op_dash_mul475 ( ( ( * (  tui3188 ) ) .f_width ) , ( ( * (  tui3188 ) ) .f_height ) ) ) ) ) ) );
    ( (  map495 ) ( (  prev3193 ) ,  (  lam502 ) ) );
    return ( (struct Screen_457) { .f_current = (  cur3191 ) , .f_previous = (  prev3193 ) , .f_al = (  al3190 ) , .f_tui = (  tui3188 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

struct Duration_503 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  struct Duration_503   diff504 (    struct timespec  l3046 ,    struct timespec  r3048 ) {
    int64_t  secdiff3049 = (  op_dash_sub226 ( ( (  l3046 ) .tv_sec ) , ( (  r3048 ) .tv_sec ) ) );
    int64_t  nsdiff3050 = (  op_dash_sub226 ( ( (  l3046 ) .tv_nsec ) , ( (  r3048 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs3051 = (  from_dash_integral42 ( 1000000000 ) );
    if ( (  cmp245 ( (  nsdiff3050 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp245 ( (  secdiff3049 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_503) { .f_secs = (  secdiff3049 ) , .f_nsecs = (  op_dash_neg246 ( (  nsdiff3050 ) ) ) } );
        } else {
            if ( (  eq248 ( (  secdiff3049 ) , (  from_dash_integral42 ( 0 ) ) ) ) ) {
                return ( (struct Duration_503) { .f_secs = (  from_dash_integral42 ( 0 ) ) , .f_nsecs = (  nsdiff3050 ) } );
            } else {
                return ( (struct Duration_503) { .f_secs = (  op_dash_sub226 ( (  secdiff3049 ) , (  from_dash_integral42 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add157 ( (  ns_dash_in_dash_secs3051 ) , (  nsdiff3050 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp245 ( (  secdiff3049 ) , (  from_dash_integral42 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_503) { .f_secs = (  secdiff3049 ) , .f_nsecs = (  nsdiff3050 ) } );
        } else {
            return ( (struct Duration_503) { .f_secs = (  op_dash_sub226 ( (  secdiff3049 ) , (  from_dash_integral42 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub226 ( (  ns_dash_in_dash_secs3051 ) , (  nsdiff3050 ) ) ) } );
        }
    }
}

static  enum Unit_4   set_dash_screen_dash_fg505 (    struct Screen_457 *  screen3238 ,    struct Color_460  c3240 ) {
    (*  screen3238 ) .f_default_dash_fg = (  c3240 );
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
    struct Tui_30 *  tui3369;
    struct env28 envinst28;
};

struct envunion515 {
    struct Maybe_510  (*fun) (  struct env508*  );
    struct env508 env;
};

struct FunIter_507 {
    struct envunion515  f_fun;
    bool  f_finished;
};

static  struct FunIter_507   into_dash_iter516 (    struct FunIter_507  self986 ) {
    return (  self986 );
}

static  struct FunIter_507   from_dash_function517 (   struct envunion515  fun994 ) {
    return ( (struct FunIter_507) { .f_fun = (  fun994 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions522 (   struct env27* env ,    struct Tui_30 *  tui3155 ) {
    if ( ( ! ( * ( env->should_dash_resize3083 ) ) ) ) {
        return ( false );
    }
    (*  tui3155 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3083 ) = ( false );
    struct Tuple2_426  dim3156 = ( (  get_dash_dimensions427 ) ( ) );
    uint32_t  w3157 = ( (  fst455 ) ( (  dim3156 ) ) );
    uint32_t  h3158 = ( (  snd456 ) ( (  dim3156 ) ) );
    (*  tui3155 ) .f_width = (  w3157 );
    (*  tui3155 ) .f_height = (  h3158 );
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

static  struct pollfd *   cast_dash_ptr530 (    struct Pollfd_529 *  p354 ) {
    return ( (struct pollfd * ) (  p354 ) );
}

static  void *   cast_dash_ptr533 (    char *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of534 (    char  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  char   zeroed531 (  ) {
    char  temp532;
    char  x554 = (  temp532 );
    ( ( memset ) ( ( (  cast_dash_ptr533 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of534 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  struct Maybe_527   read_dash_byte528 (    int32_t  timeout_dash_ms3077 ) {
    struct Pollfd_529  pfd3078 = ( (struct Pollfd_529) { .f_fd = (  from_dash_integral49 ( 0 ) ) , .f_events = (  from_dash_integral439 ( 1 ) ) , .f_revents = (  from_dash_integral439 ( 0 ) ) } );
    if ( (  cmp209 ( ( ( poll ) ( ( (  cast_dash_ptr530 ) ( ( & (  pfd3078 ) ) ) ) ,  (  from_dash_integral49 ( 1 ) ) ,  (  timeout_dash_ms3077 ) ) ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_527) { .tag = Maybe_527_None_t } );
    }
    char  c3079 = ( ( (  zeroed531 ) ( ) ) );
    if ( (  cmp209 ( ( ( read ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  cast_dash_ptr533 ) ( ( & (  c3079 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_527) { .tag = Maybe_527_None_t } );
    }
    return ( ( Maybe_527_Just ) ( (  c3079 ) ) );
}

static  uint8_t   ascii_dash_u8535 (    char  c737 ) {
    return ( ( (uint8_t ) (  c737 ) ) );
}

static  char   u8_dash_ascii536 (    uint8_t  b740 ) {
    return ( ( (char ) (  b740 ) ) );
}

static  uint8_t *   cast540 (    uint32_t *  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed538 (    uint8_t  x557 ) {
    uint32_t  temp539 = ( (  zeroed443 ) ( ) );
    uint32_t *  y558 = ( &temp539 );
    uint8_t *  yp559 = ( (  cast540 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  uint32_t   u8_dash_u32537 (    uint8_t  x647 ) {
    return ( (  cast_dash_on_dash_zeroed538 ) ( (  x647 ) ) );
}

struct Map_543 {
    struct StrViewIter_134  field0;
    uint32_t (*  field1 )(    struct Char_17  );
};

static struct Map_543 Map_543_Map (  struct StrViewIter_134  field0 ,  uint32_t (*  field1 )(    struct Char_17  ) ) {
    return ( struct Map_543 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_543   into_dash_iter544 (    struct Map_543  self754 ) {
    return (  self754 );
}

static  struct Maybe_351   next545 (    struct Map_543 *  dref756 ) {
    struct Maybe_137  dref759 = ( (  next139 ) ( ( & ( (* dref756 ) .field0 ) ) ) );
    if ( dref759.tag == Maybe_137_None_t ) {
        return ( (struct Maybe_351) { .tag = Maybe_351_None_t } );
    }
    else {
        if ( dref759.tag == Maybe_137_Just_t ) {
            return ( ( Maybe_351_Just ) ( ( ( (* dref756 ) .field1 ) ( ( dref759 .stuff .Maybe_137_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce542 (    struct Map_543  iterable1038 ,    uint32_t  base1040 ,    uint32_t (*  fun1042 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1043 = (  base1040 );
    struct Map_543  it1044 = ( (  into_dash_iter544 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_351  dref1045 = ( (  next545 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_351_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_351_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_351_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    uint32_t  temp546;
    return (  temp546 );
}

static  struct Map_543   map547 (    struct StrView_24  iterable763 ,    uint32_t (*  fun765 )(    struct Char_17  ) ) {
    struct StrViewIter_134  it766 = ( (  into_dash_iter136 ) ( (  iterable763 ) ) );
    return ( ( Map_543_Map ) ( (  it766 ) ,  (  fun765 ) ) );
}

static  void *   cast_dash_ptr554 (    int64_t *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of555 (    int64_t  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  int64_t   zeroed552 (  ) {
    int64_t  temp553;
    int64_t  x554 = (  temp553 );
    ( ( memset ) ( ( (  cast_dash_ptr554 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of555 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  uint8_t *   cast556 (    int64_t *  x351 ) {
    return ( (uint8_t * ) (  x351 ) );
}

static  int64_t   cast_dash_on_dash_zeroed550 (    uint8_t  x557 ) {
    int64_t  temp551 = ( (  zeroed552 ) ( ) );
    int64_t *  y558 = ( &temp551 );
    uint8_t *  yp559 = ( (  cast556 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  int64_t   u8_dash_i64549 (    uint8_t  x641 ) {
    return ( (  cast_dash_on_dash_zeroed550 ) ( (  x641 ) ) );
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

static  enum Unit_4   print_dash_str566 (    struct StrConcat_559  self1423 ) {
    struct StrConcat_559  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str95 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str565 (    struct StrConcat_558  self1423 ) {
    struct StrConcat_558  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str566 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str88 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str564 (    struct StrConcat_563  self1423 ) {
    struct StrConcat_563  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str88 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str565 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str561 (    struct StrConcat_562  self1423 ) {
    struct StrConcat_562  dref1424 = (  self1423 );
    if ( true ) {
        ( (  print_dash_str564 ) ( ( dref1424 .field0 ) ) );
        ( (  print_dash_str95 ) ( ( dref1424 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic560 (    struct StrConcat_558  errmsg1627 ) {
    ( (  print_dash_str561 ) ( ( ( StrConcat_562_StrConcat ) ( ( ( StrConcat_563_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1627 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint8_t   or_dash_fail557 (    struct Maybe_168  x1640 ,    struct StrConcat_558  errmsg1642 ) {
    struct Maybe_168  dref1643 = (  x1640 );
    if ( dref1643.tag == Maybe_168_None_t ) {
        ( (  panic560 ) ( (  errmsg1642 ) ) );
        return ( (  undefined169 ) ( ) );
    }
    else {
        if ( dref1643.tag == Maybe_168_Just_t ) {
            return ( dref1643 .stuff .Maybe_168_Just_s .field0 );
        }
    }
}

static  enum Ordering_53   cmp568 (    struct Char_17  l717 ,    struct Char_17  r719 ) {
    if ( ( ( !  eq275 ( ( (  l717 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq275 ( ( (  r719 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp569 = ( (  from_dash_string57 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp569);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( (  cmp116 ) ( ( (  char_dash_u8122 ) ( (  l717 ) ) ) ,  ( (  char_dash_u8122 ) ( (  r719 ) ) ) ) );
}

static  struct Maybe_168   hex_dash_digit567 (    struct Char_17  c2354 ) {
    if ( ( (  cmp568 ( (  c2354 ) , ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp568 ( (  c2354 ) , ( (  from_dash_charlike112 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_168_Just ) ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2354 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp568 ( (  c2354 ) , ( (  from_dash_charlike112 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp568 ( (  c2354 ) , ( (  from_dash_charlike112 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_168_Just ) ( (  op_dash_add117 ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2354 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral103 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp568 ( (  c2354 ) , ( (  from_dash_charlike112 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp568 ( (  c2354 ) , ( (  from_dash_charlike112 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_168_Just ) ( (  op_dash_add117 ( (  op_dash_sub156 ( ( (  char_dash_u8122 ) ( (  c2354 ) ) ) , ( (  char_dash_u8122 ) ( ( (  from_dash_charlike112 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral103 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_168) { .tag = Maybe_168_None_t } );
}

static  uint32_t   lam548 (    struct Char_17  c2359 ) {
    return ( (  from_dash_integral107 ) ( ( (  u8_dash_i64549 ) ( ( (  or_dash_fail557 ) ( ( (  hex_dash_digit567 ) ( (  c2359 ) ) ) ,  ( ( StrConcat_558_StrConcat ) ( ( ( StrConcat_559_StrConcat ) ( ( (  from_dash_charlike112 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2359 ) ) ) ,  ( (  from_dash_string111 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add571 (    uint32_t  l225 ,    uint32_t  r227 ) {
    return ( (  l225 ) + (  r227 ) );
}

static  uint32_t   lam570 (    uint32_t  elem2361 ,    uint32_t  b2363 ) {
    return (  op_dash_add571 ( (  op_dash_mul475 ( (  b2363 ) , (  from_dash_integral107 ( 16 ) ) ) ) , (  elem2361 ) ) );
}

static  uint32_t   from_dash_hex541 (    struct StrView_24  arr2357 ) {
    return ( (  reduce542 ) ( ( (  map547 ) ( (  arr2357 ) ,  (  lam548 ) ) ) ,  (  from_dash_integral107 ( 0 ) ) ,  (  lam570 ) ) );
}

static  bool   eq573 (    char  l368 ,    char  r370 ) {
    return ( (  l368 ) == (  r370 ) );
}

static  char   from_dash_charlike574 (    uint8_t *  ptr363 ,    size_t  num_dash_bytes365 ) {
    if ( ( !  eq275 ( (  num_dash_bytes365 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp575 = ( (  from_dash_string57 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp575);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( ( (char ) ( * (  ptr363 ) ) ) );
}

struct Array_576 {
    char _arr [32];
};

static  void *   cast_dash_ptr580 (    struct Array_576 *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of581 (    struct Array_576  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  struct Array_576   zeroed578 (  ) {
    struct Array_576  temp579;
    struct Array_576  x554 = (  temp579 );
    ( ( memset ) ( ( (  cast_dash_ptr580 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of581 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  char *   cast_dash_ptr585 (    struct Array_576 *  p354 ) {
    return ( (char * ) (  p354 ) );
}

static  char *   offset_dash_ptr586 (    char *  x333 ,    int64_t  count335 ) {
    char  temp587;
    return ( (char * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul40 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp587 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr584 (    struct Array_576 *  arr2089 ,    size_t  i2092 ) {
    if ( ( (  cmp52 ( (  i2092 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i2092 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic355 ) ( ( ( StrConcat_356_StrConcat ) ( ( ( StrConcat_357_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2092 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2093 = ( ( (  cast_dash_ptr585 ) ( (  arr2089 ) ) ) );
    return ( (  offset_dash_ptr586 ) ( (  p2093 ) ,  ( (int64_t ) (  i2092 ) ) ) );
}

static  enum Unit_4   set583 (    struct Array_576 *  arr2102 ,    size_t  i2105 ,    char  e2107 ) {
    char *  p2108 = ( (  get_dash_ptr584 ) ( (  arr2102 ) ,  (  i2105 ) ) );
    (*  p2108 ) = (  e2107 );
    return ( Unit_4_Unit );
}

struct Slice_589 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail592 (    struct Maybe_527  x1640 ,    struct StrConcat_80  errmsg1642 ) {
    struct Maybe_527  dref1643 = (  x1640 );
    if ( dref1643.tag == Maybe_527_None_t ) {
        ( (  panic79 ) ( (  errmsg1642 ) ) );
        return ( (  undefined525 ) ( ) );
    }
    else {
        if ( dref1643.tag == Maybe_527_Just_t ) {
            return ( dref1643 .stuff .Maybe_527_Just_s .field0 );
        }
    }
}

static  struct Maybe_527   try_dash_get593 (    struct Slice_589  slice1678 ,    size_t  i1680 ) {
    if ( ( (  cmp52 ( (  i1680 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp52 ( (  i1680 ) , ( (  slice1678 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_527) { .tag = Maybe_527_None_t } );
    }
    char *  elem_dash_ptr1681 = ( (  offset_dash_ptr586 ) ( ( (  slice1678 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  i1680 ) ) ) ) );
    return ( ( Maybe_527_Just ) ( ( * (  elem_dash_ptr1681 ) ) ) );
}

static  char   get591 (    struct Slice_589  slice1684 ,    size_t  i1686 ) {
    return ( (  or_dash_fail592 ) ( ( (  try_dash_get593 ) ( (  slice1684 ) ,  (  i1686 ) ) ) ,  ( ( StrConcat_80_StrConcat ) ( ( ( StrConcat_81_StrConcat ) ( ( ( StrConcat_82_StrConcat ) ( ( ( StrConcat_83_StrConcat ) ( ( (  from_dash_string111 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1686 ) ) ) ,  ( (  from_dash_string111 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1684 ) .f_count ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get590 (    struct Slice_589  self1782 ,    size_t  idx1784 ) {
    return ( (  get591 ) ( (  self1782 ) ,  (  idx1784 ) ) );
}

struct Scanner_594 {
    struct StrViewIter_134  f_s;
};

static  struct Scanner_594   mk_dash_from_dash_str596 (    struct StrView_24  s2961 ) {
    return ( (struct Scanner_594) { .f_s = ( (  chars135 ) ( (  s2961 ) ) ) } );
}

static  uint8_t *   offset_dash_ptr_prime_600 (    uint8_t *  x338 ,    size_t  count340 ) {
    return ( (  offset_dash_ptr120 ) ( (  x338 ) ,  ( (int64_t ) (  count340 ) ) ) );
}

static  struct StrView_24   substr597 (    struct StrView_24  s2058 ,    size_t  from2060 ,    size_t  to2062 ) {
    size_t  from_dash_bs2063 = (  from_dash_integral0 ( 0 ) );
    struct RangeIter_215  temp598 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( ( (  size_dash_i3289 ) ( (  from2060 ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_145  __cond599 =  next217 (&temp598);
        if (  __cond599 .tag == 0 ) {
            break;
        }
        int32_t  dref2064 =  __cond599 .stuff .Maybe_145_Just_s .field0;
        if ( (  cmp52 ( (  from_dash_bs2063 ) , ( ( (  s2058 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        from_dash_bs2063 = (  op_dash_add75 ( (  from_dash_bs2063 ) , ( (  next_dash_char115 ) ( ( (  offset_dash_ptr_prime_600 ) ( ( ( (  s2058 ) .f_contents ) .f_ptr ) ,  (  from_dash_bs2063 ) ) ) ) ) ) );
    }
    size_t  to_dash_bs2065 = (  from_dash_bs2063 );
    struct RangeIter_215  temp601 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  op_dash_sub222 ( ( (  size_dash_i3289 ) ( (  to2062 ) ) ) , ( (  size_dash_i3289 ) ( (  from2060 ) ) ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_145  __cond602 =  next217 (&temp601);
        if (  __cond602 .tag == 0 ) {
            break;
        }
        int32_t  dref2066 =  __cond602 .stuff .Maybe_145_Just_s .field0;
        if ( (  cmp52 ( (  to_dash_bs2065 ) , ( ( (  s2058 ) .f_contents ) .f_count ) ) != 0 ) ) {
            break;
        }
        to_dash_bs2065 = (  op_dash_add75 ( (  to_dash_bs2065 ) , ( (  next_dash_char115 ) ( ( (  offset_dash_ptr_prime_600 ) ( ( ( (  s2058 ) .f_contents ) .f_ptr ) ,  (  to_dash_bs2065 ) ) ) ) ) ) );
    }
    return ( (struct StrView_24) { .f_contents = ( (  subslice173 ) ( ( (  s2058 ) .f_contents ) ,  (  from_dash_bs2063 ) ,  (  to_dash_bs2065 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr605 (    char *  p354 ) {
    return ( (uint8_t * ) (  p354 ) );
}

static  struct Slice_7   cast_dash_slice604 (    struct Slice_589  s1847 ) {
    return ( (struct Slice_7) { .f_ptr = ( (  cast_dash_ptr605 ) ( ( (  s1847 ) .f_ptr ) ) ) , .f_count = ( (  s1847 ) .f_count ) } );
}

static  struct StrView_24   from_dash_ascii_dash_slice603 (    struct Slice_589  sl2038 ) {
    return ( (struct StrView_24) { .f_contents = ( (  cast_dash_slice604 ) ( (  sl2038 ) ) ) } );
}

struct TakeWhile_607 {
    struct Scanner_594  f_it;
    bool (*  f_pred )(    struct Char_17  );
};

static  struct Scanner_594   into_dash_iter610 (    struct Scanner_594  self2955 ) {
    return (  self2955 );
}

static  struct Scanner_594   into_dash_iter609 (    struct Scanner_594 *  self743 ) {
    return ( (  into_dash_iter610 ) ( ( * (  self743 ) ) ) );
}

static  struct TakeWhile_607   take_dash_while608 (    struct Scanner_594 *  it928 ,    bool (*  pred930 )(    struct Char_17  ) ) {
    return ( (struct TakeWhile_607) { .f_it = ( (  into_dash_iter609 ) ( (  it928 ) ) ) , .f_pred = (  pred930 ) } );
}

static  struct Maybe_137   next614 (    struct Scanner_594 *  self2952 ) {
    return ( (  next139 ) ( ( & ( ( * (  self2952 ) ) .f_s ) ) ) );
}

static  struct Maybe_137   next613 (    struct TakeWhile_607 *  self922 ) {
    struct Maybe_137  mx923 = ( (  next614 ) ( ( & ( ( * (  self922 ) ) .f_it ) ) ) );
    struct Maybe_137  dref924 = (  mx923 );
    if ( dref924.tag == Maybe_137_None_t ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    else {
        if ( dref924.tag == Maybe_137_Just_t ) {
            if ( ( ( ( * (  self922 ) ) .f_pred ) ( ( dref924 .stuff .Maybe_137_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_137_Just ) ( ( dref924 .stuff .Maybe_137_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
            }
        }
    }
}

static  struct TakeWhile_607   into_dash_iter616 (    struct TakeWhile_607  self919 ) {
    return (  self919 );
}

static  struct Maybe_137   head612 (    struct TakeWhile_607  it1087 ) {
    struct TakeWhile_607  temp615 = ( (  into_dash_iter616 ) ( (  it1087 ) ) );
    return ( (  next613 ) ( ( &temp615 ) ) );
}

static  bool   null611 (    struct TakeWhile_607  it1096 ) {
    struct Maybe_137  dref1097 = ( (  head612 ) ( (  it1096 ) ) );
    if ( dref1097.tag == Maybe_137_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env619 {
    ;
    struct Scanner_594 *  it1131;
};

struct envunion620 {
    struct Maybe_137  (*fun) (  struct env619*  ,    int32_t  );
    struct env619 env;
};

static  enum Unit_4   for_dash_each618 (    struct Range_212  iterable1019 ,   struct envunion620  fun1021 ) {
    struct RangeIter_215  temp621 = ( (  into_dash_iter216 ) ( (  iterable1019 ) ) );
    struct RangeIter_215 *  it1022 = ( &temp621 );
    while ( ( true ) ) {
        struct Maybe_145  dref1023 = ( (  next217 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_145_Just_t ) {
                struct envunion620  temp622 = (  fun1021 );
                ( temp622.fun ( &temp622.env ,  ( dref1023 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct Maybe_137   lam623 (   struct env619* env ,    int32_t  dref1134 ) {
    return ( (  next614 ) ( ( env->it1131 ) ) );
}

static  enum Unit_4   drop_prime_617 (    struct Scanner_594 *  it1131 ,    size_t  n1133 ) {
    struct env619 envinst619 = {
        .it1131 =  it1131 ,
    };
    ( (  for_dash_each618 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 1 ) ) ,  ( (  size_dash_i3289 ) ( (  n1133 ) ) ) ) ) ,  ( (struct envunion620){ .fun = (  struct Maybe_137  (*) (  struct env619*  ,    int32_t  ) )lam623 , .env =  envinst619 } ) ) );
    return ( Unit_4_Unit );
}

static  size_t   reduce625 (    struct TakeWhile_607  iterable1038 ,    size_t  base1040 ,    size_t (*  fun1042 )(    struct Char_17  ,    size_t  ) ) {
    size_t  x1043 = (  base1040 );
    struct TakeWhile_607  it1044 = ( (  into_dash_iter616 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1045 = ( (  next613 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_137_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_137_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    size_t  temp626;
    return (  temp626 );
}

static  size_t   lam627 (    struct Char_17  dref1050 ,    size_t  x1052 ) {
    return (  op_dash_add75 ( (  x1052 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count624 (    struct TakeWhile_607  it1049 ) {
    return ( (  reduce625 ) ( (  it1049 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam627 ) ) );
}

static  struct TakeWhile_607   chars629 (    struct TakeWhile_607  self1571 ) {
    return (  self1571 );
}

static  struct Maybe_125   reduce630 (    struct TakeWhile_607  iterable1038 ,    struct Maybe_125  base1040 ,    struct Maybe_125 (*  fun1042 )(    struct Char_17  ,    struct Maybe_125  ) ) {
    struct Maybe_125  x1043 = (  base1040 );
    struct TakeWhile_607  it1044 = ( (  into_dash_iter616 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1045 = ( (  next613 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_137_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_137_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    struct Maybe_125  temp631;
    return (  temp631 );
}

static  struct Maybe_125   sequence_dash_maybe632 (    struct Char_17  e2275 ,    struct Maybe_125  b2277 ) {
    struct Maybe_125  dref2278 = (  b2277 );
    if ( dref2278.tag == Maybe_125_None_t ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    else {
        if ( dref2278.tag == Maybe_125_Just_t ) {
            struct Maybe_145  dref2280 = ( (  parse_dash_digit146 ) ( (  e2275 ) ) );
            if ( dref2280.tag == Maybe_145_None_t ) {
                return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
            }
            else {
                if ( dref2280.tag == Maybe_145_Just_t ) {
                    return ( ( Maybe_125_Just ) ( (  op_dash_add157 ( (  op_dash_mul40 ( ( dref2278 .stuff .Maybe_125_Just_s .field0 ) , (  from_dash_integral42 ( 10 ) ) ) ) , ( (  i32_dash_i64158 ) ( ( dref2280 .stuff .Maybe_145_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_125   parse_dash_int628 (    struct TakeWhile_607  s2272 ) {
    struct TakeWhile_607  cs2282 = ( (  chars629 ) ( (  s2272 ) ) );
    struct Maybe_137  dref2283 = ( (  head612 ) ( (  cs2282 ) ) );
    if ( dref2283.tag == Maybe_137_Just_t ) {
        return ( (  reduce630 ) ( (  cs2282 ) ,  ( ( Maybe_125_Just ) ( (  from_dash_integral42 ( 0 ) ) ) ) ,  (  sequence_dash_maybe632 ) ) );
    }
    else {
        if ( dref2283.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
        }
    }
}

static  struct Maybe_125   scan_dash_int606 (    struct Scanner_594 *  sc2964 ) {
    struct TakeWhile_607  digit_dash_chars2965 = ( (  take_dash_while608 ) ( (  sc2964 ) ,  (  is_dash_digit147 ) ) );
    if ( ( (  null611 ) ( (  digit_dash_chars2965 ) ) ) ) {
        return ( (struct Maybe_125) { .tag = Maybe_125_None_t } );
    }
    ( (  drop_prime_617 ) ( (  sc2964 ) ,  ( (  count624 ) ( (  digit_dash_chars2965 ) ) ) ) );
    return ( (  parse_dash_int628 ) ( (  digit_dash_chars2965 ) ) );
}

static  int32_t   i64_dash_i32634 (    int64_t  x596 ) {
    return ( (int32_t ) (  x596 ) );
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

static  struct StrConcatIter_641   into_dash_iter645 (    struct StrConcatIter_641  self1411 ) {
    return (  self1411 );
}

static  struct Maybe_137   next648 (    struct StrConcatIter_643 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next139 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next208 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next647 (    struct StrConcatIter_642 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next139 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next648 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next646 (    struct StrConcatIter_641 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next647 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each640 (    struct StrConcatIter_641  iterable1019 ,    enum Unit_4 (*  fun1021 )(    struct Char_17  ) ) {
    struct StrConcatIter_641  temp644 = ( (  into_dash_iter645 ) ( (  iterable1019 ) ) );
    struct StrConcatIter_641 *  it1022 = ( &temp644 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next646 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                ( (  fun1021 ) ( ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrConcatIter_643   into_dash_iter654 (    struct StrConcat_636  dref1418 ) {
    return ( (struct StrConcatIter_643) { .f_left = ( (  chars135 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars243 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_643   chars653 (    struct StrConcat_636  self1429 ) {
    return ( (  into_dash_iter654 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_642   into_dash_iter652 (    struct StrConcat_639  dref1418 ) {
    return ( (struct StrConcatIter_642) { .f_left = ( (  chars135 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars653 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_642   chars651 (    struct StrConcat_639  self1429 ) {
    return ( (  into_dash_iter652 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_641   into_dash_iter650 (    struct StrConcat_638  dref1418 ) {
    return ( (struct StrConcatIter_641) { .f_left = ( (  chars651 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_641   chars649 (    struct StrConcat_638  self1429 ) {
    return ( (  into_dash_iter650 ) ( (  self1429 ) ) );
}

static  enum Unit_4   print637 (    struct StrConcat_638  s1616 ) {
    ( (  for_dash_each640 ) ( ( (  chars649 ) ( (  s1616 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum MouseButton_514   undefined655 (  ) {
    enum MouseButton_514  temp656;
    return (  temp656 );
}

static  enum MouseButton_514   panic_prime_635 (    struct StrConcat_636  errmsg1630 ) {
    ( (  print637 ) ( ( ( StrConcat_638_StrConcat ) ( ( ( StrConcat_639_StrConcat ) ( ( (  from_dash_string111 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1630 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( (  undefined655 ) ( ) );
}

static  enum MouseButton_514   btn_dash_to_dash_mouse_dash_button633 (    int64_t  btn3115 ) {
    return ( {  int32_t  dref3116 = ( (  i64_dash_i32634 ) ( (  btn3115 ) ) ) ;  dref3116 == 0 ? ( MouseButton_514_MouseLeft ) :  dref3116 == 1 ? ( MouseButton_514_MouseMiddle ) :  dref3116 == 2 ? ( MouseButton_514_MouseRight ) :  dref3116 == 64 ? ( MouseButton_514_ScrollUp ) :  dref3116 == 65 ? ( MouseButton_514_ScrollDown ) : ( (  panic_prime_635 ) ( ( ( StrConcat_636_StrConcat ) ( ( (  from_dash_string111 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3115 ) ) ) ) ) ; } );
}

static  struct Scanner_594   mk658 (    struct StrView_24  s2958 ) {
    return ( (struct Scanner_594) { .f_s = ( (  into_dash_iter136 ) ( (  s2958 ) ) ) } );
}

static  struct Maybe_510   parse_dash_csi588 (    struct Slice_589  seq3122 ) {
    if ( (  eq275 ( ( (  seq3122 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    char  last3123 = (  elem_dash_get590 ( (  seq3122 ) , (  op_dash_sub43 ( ( (  seq3122 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq573 ( (  elem_dash_get590 ( (  seq3122 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike574 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_594  temp595 = ( (  mk_dash_from_dash_str596 ) ( ( (  substr597 ) ( ( (  from_dash_ascii_dash_slice603 ) ( (  seq3122 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3122 ) .f_count ) ) ) ) );
        struct Scanner_594 *  sc3124 = ( &temp595 );
        struct Maybe_125  dref3125 = ( (  scan_dash_int606 ) ( (  sc3124 ) ) );
        if ( dref3125.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
        else {
            if ( dref3125.tag == Maybe_125_Just_t ) {
                ( (  next614 ) ( (  sc3124 ) ) );
                struct Maybe_125  dref3127 = ( (  scan_dash_int606 ) ( (  sc3124 ) ) );
                if ( dref3127.tag == Maybe_125_None_t ) {
                    return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
                }
                else {
                    if ( dref3127.tag == Maybe_125_Just_t ) {
                        ( (  next614 ) ( (  sc3124 ) ) );
                        struct Maybe_125  dref3129 = ( (  scan_dash_int606 ) ( (  sc3124 ) ) );
                        if ( dref3129.tag == Maybe_125_None_t ) {
                            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
                        }
                        else {
                            if ( dref3129.tag == Maybe_125_Just_t ) {
                                return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Mouse ) ( ( (struct MouseEvent_513) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button633 ) ( ( dref3125 .stuff .Maybe_125_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub222 ( ( (  i64_dash_i32634 ) ( ( dref3127 .stuff .Maybe_125_Just_s .field0 ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) , .f_y = (  op_dash_sub222 ( ( (  i64_dash_i32634 ) ( ( dref3129 .stuff .Maybe_125_Just_s .field0 ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) , .f_pressed = (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq275 ( ( (  seq3122 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Up_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Down_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Right_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Left_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Home_t } ) ) ) ) );
        }
        if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    if ( (  eq573 ( (  last3123 ) , ( (  from_dash_charlike574 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_594  temp657 = ( (  mk658 ) ( ( (  from_dash_ascii_dash_slice603 ) ( (  seq3122 ) ) ) ) );
        struct Scanner_594 *  sc3131 = ( &temp657 );
        struct Maybe_125  dref3132 = ( (  scan_dash_int606 ) ( (  sc3131 ) ) );
        if ( dref3132.tag == Maybe_125_None_t ) {
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
        else {
            if ( dref3132.tag == Maybe_125_Just_t ) {
                return ( {  int32_t  dref3134 = ( (  i64_dash_i32634 ) ( ( dref3132 .stuff .Maybe_125_Just_s .field0 ) ) ) ;  dref3134 == 1 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Home_t } ) ) ) ) ) :  dref3134 == 2 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Insert_t } ) ) ) ) ) :  dref3134 == 3 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Delete_t } ) ) ) ) ) :  dref3134 == 4 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_End_t } ) ) ) ) ) :  dref3134 == 5 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_PageUp_t } ) ) ) ) ) :  dref3134 == 6 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_PageDown_t } ) ) ) ) ) :  dref3134 == 15 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F5_t } ) ) ) ) ) :  dref3134 == 17 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F6_t } ) ) ) ) ) :  dref3134 == 18 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F7_t } ) ) ) ) ) :  dref3134 == 19 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F8_t } ) ) ) ) ) :  dref3134 == 20 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F9_t } ) ) ) ) ) :  dref3134 == 21 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F10_t } ) ) ) ) ) :  dref3134 == 23 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F11_t } ) ) ) ) ) :  dref3134 == 24 ? ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_F12_t } ) ) ) ) ) : ( (struct Maybe_510) { .tag = Maybe_510_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
}

static  struct Slice_589   subslice659 (    struct Slice_589  slice1697 ,    size_t  from1699 ,    size_t  to1701 ) {
    char *  begin_dash_ptr1702 = ( (  offset_dash_ptr586 ) ( ( (  slice1697 ) .f_ptr ) ,  ( (  size_dash_i6454 ) ( (  from1699 ) ) ) ) );
    if ( ( (  cmp52 ( (  from1699 ) , (  to1701 ) ) != 0 ) || (  cmp52 ( (  from1699 ) , ( (  slice1697 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_589) { .f_ptr = (  begin_dash_ptr1702 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1703 = (  op_dash_sub43 ( ( (  min174 ) ( (  to1701 ) ,  ( (  slice1697 ) .f_count ) ) ) , (  from1699 ) ) );
    return ( (struct Slice_589) { .f_ptr = (  begin_dash_ptr1702 ) , .f_count = (  count1703 ) } );
}

static  char *   cast661 (    struct Array_576 *  x351 ) {
    return ( (char * ) (  x351 ) );
}

static  struct Slice_589   as_dash_slice660 (    struct Array_576 *  arr2111 ) {
    return ( (struct Slice_589) { .f_ptr = ( (  cast661 ) ( (  arr2111 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
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

static  struct Maybe_663   parse_dash_ss3664 (    char  c3119 ) {
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Up_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Down_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Right_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Left_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_Home_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_End_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F1_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F2_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F3_t } ) ) );
    }
    if ( (  eq573 ( (  c3119 ) , ( (  from_dash_charlike574 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_663_Just ) ( ( (struct Key_512) { .tag = Key_512_F4_t } ) ) );
    }
    return ( (struct Maybe_663) { .tag = Maybe_663_None_t } );
}

static  struct Maybe_510   read_dash_key523 (  ) {
    char  temp524 = ( (  undefined525 ) ( ) );
    char *  ch3136 = ( &temp524 );
    struct Maybe_527  dref3137 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 0 ) ) ) );
    if ( dref3137.tag == Maybe_527_None_t ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    else {
        if ( dref3137.tag == Maybe_527_Just_t ) {
            (*  ch3136 ) = ( dref3137 .stuff .Maybe_527_Just_s .field0 );
        }
    }
    if ( (  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) , (  from_dash_integral103 ( 13 ) ) ) ) ) {
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Enter_t } ) ) ) ) );
    }
    if ( (  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) , (  from_dash_integral103 ( 127 ) ) ) ) ) {
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) , (  from_dash_integral103 ( 27 ) ) ) == 0 ) && ( !  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) , (  from_dash_integral103 ( 9 ) ) ) ) ) ) {
        char  letter3139 = ( (  u8_dash_ascii536 ) ( ( (  u32_dash_u8109 ) ( ( (  u32_dash_or369 ) ( ( (  u8_dash_u32537 ) ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) ) ) ,  ( (  from_dash_hex541 ) ( ( (  from_dash_string111 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( ( Key_512_Ctrl ) ( (  letter3139 ) ) ) ) ) ) );
    }
    if ( ( !  eq99 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) , (  from_dash_integral103 ( 27 ) ) ) ) ) {
        if ( (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  ch3136 ) ) ) ) , (  from_dash_integral103 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key523 ) ( ) );
        } else {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( ( Key_512_Char ) ( ( * (  ch3136 ) ) ) ) ) ) ) );
        }
    }
    char  temp572 = ( (  undefined525 ) ( ) );
    char *  ch23140 = ( &temp572 );
    struct Maybe_527  dref3141 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 50 ) ) ) );
    if ( dref3141.tag == Maybe_527_None_t ) {
        return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3141.tag == Maybe_527_Just_t ) {
            (*  ch23140 ) = ( dref3141 .stuff .Maybe_527_Just_s .field0 );
        }
    }
    if ( (  eq573 ( ( * (  ch23140 ) ) , ( (  from_dash_charlike574 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_576  temp577 = ( ( (  zeroed578 ) ( ) ) );
        struct Array_576 *  seq3143 = ( &temp577 );
        int32_t  slen3144 = (  from_dash_integral49 ( 0 ) );
        while ( (  cmp209 ( (  slen3144 ) , (  from_dash_integral49 ( 31 ) ) ) == 0 ) ) {
            char  temp582 = ( (  undefined525 ) ( ) );
            char *  sc3145 = ( &temp582 );
            struct Maybe_527  dref3146 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 50 ) ) ) );
            if ( dref3146.tag == Maybe_527_None_t ) {
                break;
            }
            else {
                if ( dref3146.tag == Maybe_527_Just_t ) {
                    (*  sc3145 ) = ( dref3146 .stuff .Maybe_527_Just_s .field0 );
                }
            }
            ( (  set583 ) ( (  seq3143 ) ,  ( (  i32_dash_size76 ) ( (  slen3144 ) ) ) ,  ( * (  sc3145 ) ) ) );
            slen3144 = (  op_dash_add218 ( (  slen3144 ) , (  from_dash_integral49 ( 1 ) ) ) );
            if ( ( (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  sc3145 ) ) ) ) , (  from_dash_integral103 ( 64 ) ) ) != 0 ) && (  cmp116 ( ( (  ascii_dash_u8535 ) ( ( * (  sc3145 ) ) ) ) , (  from_dash_integral103 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi588 ) ( ( (  subslice659 ) ( ( (  as_dash_slice660 ) ( (  seq3143 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size76 ) ( (  slen3144 ) ) ) ) ) ) );
    }
    if ( (  eq573 ( ( * (  ch23140 ) ) , ( (  from_dash_charlike574 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp662 = ( (  undefined525 ) ( ) );
        char *  sc3148 = ( &temp662 );
        struct Maybe_527  dref3149 = ( (  read_dash_byte528 ) ( (  from_dash_integral49 ( 50 ) ) ) );
        if ( dref3149.tag == Maybe_527_None_t ) {
            return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3149.tag == Maybe_527_Just_t ) {
                (*  sc3148 ) = ( dref3149 .stuff .Maybe_527_Just_s .field0 );
            }
        }
        struct Maybe_663  dref3151 = ( (  parse_dash_ss3664 ) ( ( * (  sc3148 ) ) ) );
        if ( dref3151.tag == Maybe_663_None_t ) {
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
        else {
            if ( dref3151.tag == Maybe_663_Just_t ) {
                return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( dref3151 .stuff .Maybe_663_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_510_Just ) ( ( ( InputEvent_511_Key ) ( ( (struct Key_512) { .tag = Key_512_Escape_t } ) ) ) ) );
}

static  struct Maybe_510   read_dash_event520 (   struct env28* env ,    struct Tui_30 *  tui3161 ) {
    struct envunion29  temp521 = ( (struct envunion29){ .fun = (  bool  (*) (  struct env27*  ,    struct Tui_30 *  ) )update_dash_dimensions522 , .env =  env->envinst27 } );
    ( temp521.fun ( &temp521.env ,  (  tui3161 ) ) );
    struct Maybe_510  dref3162 = ( (  read_dash_key523 ) ( ) );
    if ( dref3162.tag == Maybe_510_None_t ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    else {
        if ( dref3162.tag == Maybe_510_Just_t ) {
            (*  tui3161 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_510_Just ) ( ( dref3162 .stuff .Maybe_510_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_510   lam518 (   struct env508* env ) {
    struct envunion509  temp519 = ( (struct envunion509){ .fun = (  struct Maybe_510  (*) (  struct env28*  ,    struct Tui_30 *  ) )read_dash_event520 , .env =  env->envinst28 } );
    return ( temp519.fun ( &temp519.env ,  ( env->tui3369 ) ) );
}

static  struct Maybe_510   next666 (    struct FunIter_507 *  self989 ) {
    if ( ( ( * (  self989 ) ) .f_finished ) ) {
        return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
    }
    struct envunion515  temp667 = ( ( * (  self989 ) ) .f_fun );
    struct Maybe_510  dref990 = ( temp667.fun ( &temp667.env ) );
    if ( dref990.tag == Maybe_510_Just_t ) {
        return ( ( Maybe_510_Just ) ( ( dref990 .stuff .Maybe_510_Just_s .field0 ) ) );
    }
    else {
        if ( dref990.tag == Maybe_510_None_t ) {
            (*  self989 ) .f_finished = ( true );
            return ( (struct Maybe_510) { .tag = Maybe_510_None_t } );
        }
    }
}

struct envunion669 {
    bool  (*fun) (  struct env34*  ,    struct Screen_457 *  );
    struct env34 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed670 (   struct env34* env ,    struct Screen_457 *  screen3230 ) {
    struct Tui_30 *  tui3231 = ( ( * (  screen3230 ) ) .f_tui );
    struct envunion35  temp671 = ( (struct envunion35){ .fun = (  bool  (*) (  struct env27*  ,    struct Tui_30 *  ) )update_dash_dimensions522 , .env =  env->envinst27 } );
    ( temp671.fun ( &temp671.env ,  (  tui3231 ) ) );
    if ( ( ! ( ( * (  tui3231 ) ) .f_should_dash_redraw ) ) ) {
        return ( false );
    }
    (*  screen3230 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3232 = ( ( * ( ( * (  screen3230 ) ) .f_tui ) ) .f_width );
    uint32_t  h3233 = ( ( * ( ( * (  screen3230 ) ) .f_tui ) ) .f_height );
    size_t  nusz3234 = ( (  u32_dash_size471 ) ( (  op_dash_mul475 ( (  w3232 ) , (  h3233 ) ) ) ) );
    if ( (  cmp52 ( (  nusz3234 ) , ( ( ( * (  screen3230 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_457  nuscreen3235 = ( (  mk_dash_screen465 ) ( (  tui3231 ) ,  ( ( * (  screen3230 ) ) .f_al ) ) );
    (*  screen3230 ) .f_current = ( (  nuscreen3235 ) .f_current );
    (*  screen3230 ) .f_previous = ( (  nuscreen3235 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw672 (    struct Tui_30 *  tui3166 ) {
    bool  redraw3167 = ( ( * (  tui3166 ) ) .f_should_dash_redraw );
    (*  tui3166 ) .f_should_dash_redraw = ( false );
    return (  redraw3167 );
}

struct env676 {
    struct Cell_459 (*  fun1822 )(    struct Cell_459  );
    ;
    struct Slice_458  s1820;
    ;
    ;
};

struct envunion677 {
    enum Unit_4  (*fun) (  struct env676*  ,    int32_t  );
    struct env676 env;
};

static  enum Unit_4   for_dash_each675 (    struct Range_212  iterable1019 ,   struct envunion677  fun1021 ) {
    struct RangeIter_215  temp678 = ( (  into_dash_iter216 ) ( (  iterable1019 ) ) );
    struct RangeIter_215 *  it1022 = ( &temp678 );
    while ( ( true ) ) {
        struct Maybe_145  dref1023 = ( (  next217 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_145_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_145_Just_t ) {
                struct envunion677  temp679 = (  fun1021 );
                ( temp679.fun ( &temp679.env ,  ( dref1023 .stuff .Maybe_145_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam680 (   struct env676* env ,    int32_t  i1824 ) {
    return ( (  set483 ) ( ( env->s1820 ) ,  ( (  i32_dash_size76 ) ( (  i1824 ) ) ) ,  ( ( env->fun1822 ) ( (  elem_dash_get487 ( ( env->s1820 ) , ( (  i32_dash_size76 ) ( (  i1824 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map674 (    struct Slice_458  s1820 ,    struct Cell_459 (*  fun1822 )(    struct Cell_459  ) ) {
    struct env676 envinst676 = {
        .fun1822 =  fun1822 ,
        .s1820 =  s1820 ,
    };
    ( (  for_dash_each675 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_i3289 ) ( (  op_dash_sub43 ( ( (  s1820 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion677){ .fun = (  enum Unit_4  (*) (  struct env676*  ,    int32_t  ) )lam680 , .env =  envinst676 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_459   lam681 (    struct Cell_459  dref3202 ) {
    return ( (struct Cell_459) { .f_c = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) } );
}

static  enum Unit_4   clear_dash_screen673 (    struct Screen_457 *  screen3201 ) {
    ( (  map674 ) ( ( ( * (  screen3201 ) ) .f_current ) ,  (  lam681 ) ) );
    return ( Unit_4_Unit );
}

struct ClockTime_682 {
    uint32_t  f_h;
    uint8_t  f_m;
    uint8_t  f_s;
};

static  uint8_t   i64_dash_u8684 (    int64_t  x593 ) {
    return ( (uint8_t ) (  x593 ) );
}

static  int64_t   mod685 (    int64_t  l1174 ,    int64_t  d1176 ) {
    int64_t  r1177 = (  op_dash_div224 ( (  l1174 ) , (  d1176 ) ) );
    int64_t  m1178 = (  op_dash_sub226 ( (  l1174 ) , (  op_dash_mul40 ( (  r1177 ) , (  d1176 ) ) ) ) );
    if ( (  cmp245 ( (  m1178 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add157 ( (  d1176 ) , (  m1178 ) ) );
    } else {
        return (  m1178 );
    }
}

static  uint32_t   i64_dash_u32686 (    int64_t  x599 ) {
    return ( (uint32_t ) (  x599 ) );
}

static  struct ClockTime_682   clock_dash_time_dash_from_dash_secs683 (    int64_t  secs3330 ) {
    if ( (  cmp245 ( (  secs3330 ) , (  from_dash_integral42 ( 0 ) ) ) == 0 ) ) {
        ( (  panic126 ) ( ( (  from_dash_string111 ) ( ( "negative seconds!" ) ,  ( 17 ) ) ) ) );
    }
    uint8_t  s3331 = ( (  i64_dash_u8684 ) ( ( (  mod685 ) ( (  secs3330 ) ,  (  from_dash_integral42 ( 60 ) ) ) ) ) );
    uint8_t  m3332 = ( (  i64_dash_u8684 ) ( ( (  mod685 ) ( (  op_dash_div224 ( (  secs3330 ) , (  from_dash_integral42 ( 60 ) ) ) ) ,  (  from_dash_integral42 ( 60 ) ) ) ) ) );
    uint32_t  h3333 = ( (  i64_dash_u32686 ) ( (  op_dash_div224 ( (  secs3330 ) , (  op_dash_mul40 ( (  from_dash_integral42 ( 60 ) ) , (  from_dash_integral42 ( 60 ) ) ) ) ) ) ) );
    return ( (struct ClockTime_682) { .f_h = (  h3333 ) , .f_m = (  m3332 ) , .f_s = (  s3331 ) } );
}

struct PadZeroes_687 {
    int32_t  f_x;
    uint8_t  f_len;
};

static  uint8_t   max689 (    uint8_t  l1246 ,    uint8_t  r1248 ) {
    if ( (  cmp116 ( (  l1246 ) , (  r1248 ) ) == 2 ) ) {
        return (  l1246 );
    } else {
        return (  r1248 );
    }
}

static  uint8_t   i32_dash_u8690 (    int32_t  x581 ) {
    return ( (uint8_t ) (  x581 ) );
}

static  int32_t   op_dash_div692 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) / (  r219 ) );
}

static  int32_t   count_dash_digits691 (    int32_t  self1350 ) {
    if ( (  eq56 ( (  self1350 ) , (  from_dash_integral49 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1351 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp209 ( (  self1350 ) , (  from_dash_integral49 ( 0 ) ) ) == 2 ) ) {
        self1350 = (  op_dash_div692 ( (  self1350 ) , (  from_dash_integral49 ( 10 ) ) ) );
        digits1351 = (  op_dash_add218 ( (  digits1351 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1351 );
}

static  struct PadZeroes_687   pad_dash_zeroes688 (    int32_t  x1549 ,    uint8_t  num_dash_zeroes1551 ,    bool  trim_dash_larger1553 ) {
    return ( (struct PadZeroes_687) { .f_x = (  x1549 ) , .f_len = ( ( ! (  trim_dash_larger1553 ) ) ? (  num_dash_zeroes1551 ) : ( (  max689 ) ( (  num_dash_zeroes1551 ) ,  ( (  i32_dash_u8690 ) ( ( (  count_dash_digits691 ) ( (  x1549 ) ) ) ) ) ) ) ) } );
}

static  int32_t   cast694 (    uint32_t  x351 ) {
    return ( (int32_t ) (  x351 ) );
}

static  int32_t   u32_dash_i32693 (    uint32_t  x635 ) {
    return ( (  cast694 ) ( (  x635 ) ) );
}

struct StrConcat_698 {
    struct PadZeroes_687  field0;
    struct Char_17  field1;
};

static struct StrConcat_698 StrConcat_698_StrConcat (  struct PadZeroes_687  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_698 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_697 {
    struct StrConcat_698  field0;
    struct PadZeroes_687  field1;
};

static struct StrConcat_697 StrConcat_697_StrConcat (  struct StrConcat_698  field0 ,  struct PadZeroes_687  field1 ) {
    return ( struct StrConcat_697 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_696 {
    struct StrConcat_697  field0;
    struct Char_17  field1;
};

static struct StrConcat_696 StrConcat_696_StrConcat (  struct StrConcat_697  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_696 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_695 {
    struct StrConcat_696  field0;
    struct PadZeroes_687  field1;
};

static struct StrConcat_695 StrConcat_695_StrConcat (  struct StrConcat_696  field0 ,  struct PadZeroes_687  field1 ) {
    return ( struct StrConcat_695 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_704 {
    struct PadZeroes_687  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_703 {
    struct StrConcatIter_704  f_left;
    struct PadZeroes_687  f_right;
};

struct StrConcatIter_702 {
    struct StrConcatIter_703  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_701 {
    struct StrConcatIter_702  f_left;
    struct PadZeroes_687  f_right;
};

static  struct PadZeroes_687   chars712 (    struct PadZeroes_687  self1546 ) {
    return (  self1546 );
}

static  struct StrConcatIter_704   into_dash_iter711 (    struct StrConcat_698  dref1418 ) {
    return ( (struct StrConcatIter_704) { .f_left = ( (  chars712 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_704   chars710 (    struct StrConcat_698  self1429 ) {
    return ( (  into_dash_iter711 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_703   into_dash_iter709 (    struct StrConcat_697  dref1418 ) {
    return ( (struct StrConcatIter_703) { .f_left = ( (  chars710 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars712 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_703   chars708 (    struct StrConcat_697  self1429 ) {
    return ( (  into_dash_iter709 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_702   into_dash_iter707 (    struct StrConcat_696  dref1418 ) {
    return ( (struct StrConcatIter_702) { .f_left = ( (  chars708 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_702   chars706 (    struct StrConcat_696  self1429 ) {
    return ( (  into_dash_iter707 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_701   into_dash_iter705 (    struct StrConcat_695  dref1418 ) {
    return ( (struct StrConcatIter_701) { .f_left = ( (  chars706 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars712 ) ( ( dref1418 .field1 ) ) ) } );
}

struct env720 {
    int32_t  base1155;
    ;
};

struct envunion721 {
    int32_t  (*fun) (  struct env720*  ,    int32_t  ,    int32_t  );
    struct env720 env;
};

static  int32_t   reduce719 (    struct Range_212  iterable1038 ,    int32_t  base1040 ,   struct envunion721  fun1042 ) {
    int32_t  x1043 = (  base1040 );
    struct RangeIter_215  it1044 = ( (  into_dash_iter216 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1045 = ( (  next217 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_145_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_145_Just_t ) {
                struct envunion721  temp722 = (  fun1042 );
                x1043 = ( temp722.fun ( &temp722.env ,  ( dref1045 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    int32_t  temp723;
    return (  temp723 );
}

static  int32_t   op_dash_mul725 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) * (  r214 ) );
}

static  int32_t   lam724 (   struct env720* env ,    int32_t  item1159 ,    int32_t  x1161 ) {
    return (  op_dash_mul725 ( (  x1161 ) , ( env->base1155 ) ) );
}

static  int32_t   pow718 (    int32_t  base1155 ,    int32_t  p1157 ) {
    struct env720 envinst720 = {
        .base1155 =  base1155 ,
    };
    return ( (  reduce719 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1157 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral49 ( 1 ) ) ,  ( (struct envunion721){ .fun = (  int32_t  (*) (  struct env720*  ,    int32_t  ,    int32_t  ) )lam724 , .env =  envinst720 } ) ) );
}

static  struct Maybe_137   next717 (    struct PadZeroes_687 *  self1535 ) {
    if ( (  cmp116 ( ( ( * (  self1535 ) ) .f_len ) , (  from_dash_integral103 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    int32_t  trim_dash_down1536 = ( (  pow718 ) ( (  from_dash_integral49 ( 10 ) ) ,  (  op_dash_sub222 ( ( (  u8_dash_i32148 ) ( ( ( * (  self1535 ) ) .f_len ) ) ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    int32_t  upper1537 = (  op_dash_div692 ( ( ( * (  self1535 ) ) .f_x ) , (  trim_dash_down1536 ) ) );
    int32_t  upper_dash_mask1538 = (  op_dash_mul725 ( (  op_dash_div692 ( (  upper1537 ) , (  from_dash_integral49 ( 10 ) ) ) ) , (  from_dash_integral49 ( 10 ) ) ) );
    uint8_t  digit1539 = ( (  i32_dash_u8690 ) ( (  op_dash_sub222 ( (  upper1537 ) , (  upper_dash_mask1538 ) ) ) ) );
    (*  self1535 ) .f_len = (  op_dash_sub156 ( ( ( * (  self1535 ) ) .f_len ) , (  from_dash_integral103 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1540 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1539 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1540 ) ) );
}

static  struct Maybe_137   next716 (    struct StrConcatIter_704 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next717 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next715 (    struct StrConcatIter_703 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next716 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next717 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next714 (    struct StrConcatIter_702 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next715 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next713 (    struct StrConcatIter_701 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next714 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next717 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce700 (    struct StrConcat_695  iterable1038 ,    size_t  base1040 ,    size_t (*  fun1042 )(    struct Char_17  ,    size_t  ) ) {
    size_t  x1043 = (  base1040 );
    struct StrConcatIter_701  it1044 = ( (  into_dash_iter705 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_137  dref1045 = ( (  next713 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_137_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_137_Just_t ) {
                x1043 = ( (  fun1042 ) ( ( dref1045 .stuff .Maybe_137_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    size_t  temp726;
    return (  temp726 );
}

static  size_t   lam727 (    struct Char_17  dref1050 ,    size_t  x1052 ) {
    return (  op_dash_add75 ( (  x1052 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count699 (    struct StrConcat_695  it1049 ) {
    return ( (  reduce700 ) ( (  it1049 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam727 ) ) );
}

struct Zip_729 {
    struct StrConcatIter_701  f_left_dash_it;
    struct FromIter_282  f_right_dash_it;
};

static  struct Zip_729   into_dash_iter730 (    struct Zip_729  self869 ) {
    return (  self869 );
}

static  struct StrConcatIter_701   into_dash_iter732 (    struct StrConcatIter_701  self1411 ) {
    return (  self1411 );
}

static  struct Zip_729   zip731 (    struct StrConcatIter_701  left880 ,    struct FromIter_282  right882 ) {
    struct StrConcatIter_701  left_dash_it883 = ( (  into_dash_iter732 ) ( (  left880 ) ) );
    struct FromIter_282  right_dash_it884 = ( (  into_dash_iter290 ) ( (  right882 ) ) );
    return ( (struct Zip_729) { .f_left_dash_it = (  left_dash_it883 ) , .f_right_dash_it = (  right_dash_it884 ) } );
}

static  struct StrConcatIter_701   chars733 (    struct StrConcat_695  self1429 ) {
    return ( (  into_dash_iter705 ) ( (  self1429 ) ) );
}

struct Tuple2_736 {
    struct Char_17  field0;
    int32_t  field1;
};

static struct Tuple2_736 Tuple2_736_Tuple2 (  struct Char_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_736 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_735 {
    enum {
        Maybe_735_None_t,
        Maybe_735_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_736  field0;
        } Maybe_735_Just_s;
    } stuff;
};

static struct Maybe_735 Maybe_735_Just (  struct Tuple2_736  field0 ) {
    return ( struct Maybe_735 ) { .tag = Maybe_735_Just_t, .stuff = { .Maybe_735_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_735   next737 (    struct Zip_729 *  self872 ) {
    struct Zip_729  copy873 = ( * (  self872 ) );
    while ( ( true ) ) {
        struct Maybe_137  dref874 = ( (  next713 ) ( ( & ( (  copy873 ) .f_left_dash_it ) ) ) );
        if ( dref874.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_735) { .tag = Maybe_735_None_t } );
        }
        else {
            if ( dref874.tag == Maybe_137_Just_t ) {
                struct Maybe_145  dref876 = ( (  next287 ) ( ( & ( (  copy873 ) .f_right_dash_it ) ) ) );
                if ( dref876.tag == Maybe_145_None_t ) {
                    return ( (struct Maybe_735) { .tag = Maybe_735_None_t } );
                }
                else {
                    if ( dref876.tag == Maybe_145_Just_t ) {
                        ( (  next713 ) ( ( & ( ( * (  self872 ) ) .f_left_dash_it ) ) ) );
                        ( (  next287 ) ( ( & ( ( * (  self872 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_735_Just ) ( ( ( Tuple2_736_Tuple2 ) ( ( dref874 .stuff .Maybe_137_Just_s .field0 ) ,  ( dref876 .stuff .Maybe_145_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct Tuple2_740 {
    struct CharDestructured_97  field0;
    struct CharDestructured_97  field1;
};

static struct Tuple2_740 Tuple2_740_Tuple2 (  struct CharDestructured_97  field0 ,  struct CharDestructured_97  field1 ) {
    return ( struct Tuple2_740 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq741 (    uint32_t  l106 ,    uint32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq739 (    struct Char_17  l702 ,    struct Char_17  r704 ) {
    if ( ( !  eq275 ( ( (  l702 ) .f_num_dash_bytes ) , ( (  r704 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_740  dref705 = ( ( Tuple2_740_Tuple2 ) ( ( (  destructure98 ) ( (  l702 ) ) ) ,  ( (  destructure98 ) ( (  r704 ) ) ) ) );
    if ( dref705 .field0.tag == CharDestructured_97_Ref_t && dref705 .field1.tag == CharDestructured_97_Ref_t ) {
        size_t  i708 = (  from_dash_integral0 ( 0 ) );
        while ( (  cmp52 ( (  i708 ) , ( ( dref705 .field0 .stuff .CharDestructured_97_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq99 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref705 .field0 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i708 ) ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref705 .field1 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i708 ) ) ) ) ) ) ) ) {
                return ( false );
            }
            i708 = (  op_dash_add75 ( (  i708 ) , (  from_dash_integral0 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref705 .field0.tag == CharDestructured_97_Scalar_t && dref705 .field1.tag == CharDestructured_97_Scalar_t ) {
            return (  eq741 ( ( dref705 .field0 .stuff .CharDestructured_97_Scalar_s .field0 ) , ( dref705 .field1 .stuff .CharDestructured_97_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref705 .field0.tag == CharDestructured_97_Scalar_t && dref705 .field1.tag == CharDestructured_97_Ref_t ) {
                return (  eq99 ( ( (  u32_dash_u8109 ) ( ( dref705 .field0 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) , ( * ( ( dref705 .field1 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref705 .field0.tag == CharDestructured_97_Ref_t && dref705 .field1.tag == CharDestructured_97_Scalar_t ) {
                    return (  eq99 ( ( (  u32_dash_u8109 ) ( ( dref705 .field1 .stuff .CharDestructured_97_Scalar_s .field0 ) ) ) , ( * ( ( dref705 .field0 .stuff .CharDestructured_97_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

struct Zip_744 {
    struct StrViewIter_134  f_left_dash_it;
    struct FromIter_282  f_right_dash_it;
};

static  struct Zip_744   into_dash_iter745 (    struct Zip_744  self869 ) {
    return (  self869 );
}

static  struct Zip_744   zip746 (    struct StrViewIter_134  left880 ,    struct FromIter_282  right882 ) {
    struct StrViewIter_134  left_dash_it883 = ( (  into_dash_iter141 ) ( (  left880 ) ) );
    struct FromIter_282  right_dash_it884 = ( (  into_dash_iter290 ) ( (  right882 ) ) );
    return ( (struct Zip_744) { .f_left_dash_it = (  left_dash_it883 ) , .f_right_dash_it = (  right_dash_it884 ) } );
}

static  struct Maybe_735   next748 (    struct Zip_744 *  self872 ) {
    struct Zip_744  copy873 = ( * (  self872 ) );
    while ( ( true ) ) {
        struct Maybe_137  dref874 = ( (  next139 ) ( ( & ( (  copy873 ) .f_left_dash_it ) ) ) );
        if ( dref874.tag == Maybe_137_None_t ) {
            return ( (struct Maybe_735) { .tag = Maybe_735_None_t } );
        }
        else {
            if ( dref874.tag == Maybe_137_Just_t ) {
                struct Maybe_145  dref876 = ( (  next287 ) ( ( & ( (  copy873 ) .f_right_dash_it ) ) ) );
                if ( dref876.tag == Maybe_145_None_t ) {
                    return ( (struct Maybe_735) { .tag = Maybe_735_None_t } );
                }
                else {
                    if ( dref876.tag == Maybe_145_Just_t ) {
                        ( (  next139 ) ( ( & ( ( * (  self872 ) ) .f_left_dash_it ) ) ) );
                        ( (  next287 ) ( ( & ( ( * (  self872 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_735_Just ) ( ( ( Tuple2_736_Tuple2 ) ( ( dref874 .stuff .Maybe_137_Just_s .field0 ) ,  ( dref876 .stuff .Maybe_145_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   is_dash_whitespace749 (    struct Char_17  c2218 ) {
    return ( ( (  eq739 ( (  c2218 ) , ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq739 ( (  c2218 ) , ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq739 ( (  c2218 ) , ( (  from_dash_charlike112 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum Unit_4   set_dash_screen_dash_bg750 (    struct Screen_457 *  screen3243 ,    struct Color_460  c3245 ) {
    (*  screen3243 ) .f_default_dash_bg = (  c3245 );
    return ( Unit_4_Unit );
}

static  enum Unit_4   put_dash_char751 (    struct Screen_457 *  screen3276 ,    struct Char_17  c3278 ,    int32_t  x3280 ,    int32_t  y3282 ) {
    int32_t  w3283 = ( (  u32_dash_i32693 ) ( ( ( * ( ( * (  screen3276 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp209 ( (  x3280 ) , (  w3283 ) ) != 0 ) || (  cmp209 ( (  y3282 ) , ( (  u32_dash_i32693 ) ( ( ( * ( ( * (  screen3276 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp209 ( (  x3280 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) ) || (  cmp209 ( (  y3282 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_4_Unit );
    }
    size_t  i3284 = ( (  i32_dash_size76 ) ( (  op_dash_add218 ( (  op_dash_mul725 ( (  y3282 ) , (  w3283 ) ) ) , (  x3280 ) ) ) ) );
    struct Color_460  fg3285 = ( ( * (  screen3276 ) ) .f_default_dash_fg );
    struct Color_460  bg3286 = ( ( * (  screen3276 ) ) .f_default_dash_bg );
    struct Char_17  c3287 = (  c3278 );
    ( (  set483 ) ( ( ( * (  screen3276 ) ) .f_current ) ,  (  i3284 ) ,  ( (struct Cell_459) { .f_c = (  c3287 ) , .f_fg = (  fg3285 ) , .f_bg = (  bg3286 ) } ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   cb742 (    struct Screen_457 *  screen3336 ,    struct StrView_24  s3338 ,    int32_t  x3340 ,    int32_t  y3342 ) {
    struct Color_460  og_dash_bg3343 = ( ( * (  screen3336 ) ) .f_default_dash_bg );
    struct Zip_744  temp743 =  into_dash_iter745 ( ( (  zip746 ) ( ( (  chars135 ) ( (  s3338 ) ) ) ,  ( (  from291 ) ( (  x3340 ) ) ) ) ) );
    while (true) {
        struct Maybe_735  __cond747 =  next748 (&temp743);
        if (  __cond747 .tag == 0 ) {
            break;
        }
        struct Tuple2_736  dref3344 =  __cond747 .stuff .Maybe_735_Just_s .field0;
        if ( ( (  is_dash_whitespace749 ) ( ( dref3344 .field0 ) ) ) ) {
            ( (  set_dash_screen_dash_bg750 ) ( (  screen3336 ) ,  (  og_dash_bg3343 ) ) );
            ( (  put_dash_char751 ) ( (  screen3336 ) ,  ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) ,  ( dref3344 .field1 ) ,  (  y3342 ) ) );
        } else {
            ( (  set_dash_screen_dash_bg750 ) ( (  screen3336 ) ,  ( ( * (  screen3336 ) ) .f_default_dash_fg ) ) );
            ( (  put_dash_char751 ) ( (  screen3336 ) ,  ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) ) ,  ( dref3344 .field1 ) ,  (  y3342 ) ) );
        }
    }
    ( (  set_dash_screen_dash_bg750 ) ( (  screen3336 ) ,  (  og_dash_bg3343 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   undefined753 (  ) {
    enum Unit_4  temp754;
    return (  temp754 );
}

static  enum Unit_4   unreachable752 (  ) {
    ( (  print310 ) ( ( (  from_dash_string111 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral49 ( 1 ) ) ) );
    return ( (  undefined753 ) ( ) );
}

static  enum Unit_4   draw_dash_digit738 (    struct Screen_457 *  screen3349 ,    struct Char_17  digit3351 ,    int32_t  x3353 ,    int32_t  y3355 ) {
    if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) {
        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 0000 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 0000 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
    } else {
        if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) {
            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "1111  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "111111" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
        } else {
            if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "2" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 2222 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "22  22" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "   22 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  22  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "222222" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
            } else {
                if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "3" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 3333 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "33  33" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "   333" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "33  33" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 3333 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                } else {
                    if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "4" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "44  44" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "44  44" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "444444" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "    44" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "    44" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                    } else {
                        if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "5" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "555555" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "55    " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "55555 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "    55" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "55555 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                        } else {
                            if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "6" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 6666 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "66    " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "66666 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "66  66" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 6666 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                            } else {
                                if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "777777" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "   77 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  77  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 77   " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                    ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "77    " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                } else {
                                    if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "8" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "88  88" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "88  88" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                        ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                    } else {
                                        if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 9999 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "99  99" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 99999" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "    99" ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                            ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( " 9999 " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                        } else {
                                            if ( (  eq739 ( (  digit3351 ) , ( (  from_dash_charlike112 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  y3355 ) ) );
                                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  ::  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
                                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 2 ) ) ) ) ) );
                                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "  ::  " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 3 ) ) ) ) ) );
                                                ( (  cb742 ) ( (  screen3349 ) ,  ( (  from_dash_string111 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3353 ) ,  (  op_dash_add218 ( (  y3355 ) , (  from_dash_integral49 ( 4 ) ) ) ) ) );
                                            } else {
                                                ( (  unreachable752 ) ( ) );
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

static  int32_t   min756 (    int32_t  l1181 ,    int32_t  r1183 ) {
    if ( (  cmp209 ( (  l1181 ) , (  r1183 ) ) == 0 ) ) {
        return (  l1181 );
    } else {
        return (  r1183 );
    }
}

struct env758 {
    int32_t  y3296;
    ;
    struct Screen_457 *  screen3290;
    int32_t  x3299;
    ;
};

struct envunion759 {
    enum Unit_4  (*fun) (  struct env758*  ,    struct Tuple2_736  );
    struct env758 env;
};

static  enum Unit_4   for_dash_each757 (    struct Zip_729  iterable1019 ,   struct envunion759  fun1021 ) {
    struct Zip_729  temp760 = ( (  into_dash_iter730 ) ( (  iterable1019 ) ) );
    struct Zip_729 *  it1022 = ( &temp760 );
    while ( ( true ) ) {
        struct Maybe_735  dref1023 = ( (  next737 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_735_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_735_Just_t ) {
                struct envunion759  temp761 = (  fun1021 );
                ( temp761.fun ( &temp761.env ,  ( dref1023 .stuff .Maybe_735_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam762 (   struct env758* env ,    struct Tuple2_736  dref3301 ) {
    ( (  put_dash_char751 ) ( ( env->screen3290 ) ,  ( dref3301 .field0 ) ,  (  op_dash_add218 ( ( env->x3299 ) , ( dref3301 .field1 ) ) ) ,  ( env->y3296 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   draw_dash_str755 (    struct Screen_457 *  screen3290 ,    struct StrConcat_695  s3292 ,    int32_t  x3294 ,    int32_t  y3296 ) {
    int32_t  w3297 = ( (  u32_dash_i32693 ) ( ( ( * ( ( * (  screen3290 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp209 ( (  y3296 ) , (  from_dash_integral49 ( 0 ) ) ) == 0 ) || (  cmp209 ( (  y3296 ) , ( (  u32_dash_i32693 ) ( ( ( * ( ( * (  screen3290 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_4_Unit );
    }
    int32_t  i3298 = (  op_dash_add218 ( (  op_dash_mul725 ( (  y3296 ) , (  w3297 ) ) ) , (  x3294 ) ) );
    int32_t  x3299 = ( (  min756 ) ( (  x3294 ) ,  (  w3297 ) ) );
    size_t  max_dash_len3300 = ( (  i32_dash_size76 ) ( (  op_dash_sub222 ( (  w3297 ) , (  x3299 ) ) ) ) );
    struct env758 envinst758 = {
        .y3296 =  y3296 ,
        .screen3290 =  screen3290 ,
        .x3299 =  x3299 ,
    };
    ( (  for_dash_each757 ) ( ( (  zip731 ) ( ( (  chars733 ) ( (  s3292 ) ) ) ,  ( (  from291 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) ,  ( (struct envunion759){ .fun = (  enum Unit_4  (*) (  struct env758*  ,    struct Tuple2_736  ) )lam762 , .env =  envinst758 } ) ) );
    return ( Unit_4_Unit );
}

struct RenderState_764 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_460  f_fg;
    struct Color_460  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_771 {
    struct StrView_24  field0;
    uint32_t  field1;
};

static struct StrConcat_771 StrConcat_771_StrConcat (  struct StrView_24  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_771 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_770 {
    struct StrConcat_771  field0;
    struct Char_17  field1;
};

static struct StrConcat_770 StrConcat_770_StrConcat (  struct StrConcat_771  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_770 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_769 {
    struct StrConcat_770  field0;
    uint32_t  field1;
};

static struct StrConcat_769 StrConcat_769_StrConcat (  struct StrConcat_770  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_769 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_768 {
    struct StrConcat_769  field0;
    struct Char_17  field1;
};

static struct StrConcat_768 StrConcat_768_StrConcat (  struct StrConcat_769  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_768 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_777 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_776 {
    struct StrViewIter_134  f_left;
    struct IntStrIter_777  f_right;
};

struct StrConcatIter_775 {
    struct StrConcatIter_776  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_774 {
    struct StrConcatIter_775  f_left;
    struct IntStrIter_777  f_right;
};

struct StrConcatIter_773 {
    struct StrConcatIter_774  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_773   into_dash_iter779 (    struct StrConcatIter_773  self1411 ) {
    return (  self1411 );
}

struct env787 {
    ;
    uint32_t  base1155;
};

struct envunion788 {
    uint32_t  (*fun) (  struct env787*  ,    int32_t  ,    uint32_t  );
    struct env787 env;
};

static  uint32_t   reduce786 (    struct Range_212  iterable1038 ,    uint32_t  base1040 ,   struct envunion788  fun1042 ) {
    uint32_t  x1043 = (  base1040 );
    struct RangeIter_215  it1044 = ( (  into_dash_iter216 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1045 = ( (  next217 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_145_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_145_Just_t ) {
                struct envunion788  temp789 = (  fun1042 );
                x1043 = ( temp789.fun ( &temp789.env ,  ( dref1045 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    uint32_t  temp790;
    return (  temp790 );
}

static  uint32_t   lam791 (   struct env787* env ,    int32_t  item1159 ,    uint32_t  x1161 ) {
    return (  op_dash_mul475 ( (  x1161 ) , ( env->base1155 ) ) );
}

static  uint32_t   pow785 (    uint32_t  base1155 ,    int32_t  p1157 ) {
    struct env787 envinst787 = {
        .base1155 =  base1155 ,
    };
    return ( (  reduce786 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1157 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral107 ( 1 ) ) ,  ( (struct envunion788){ .fun = (  uint32_t  (*) (  struct env787*  ,    int32_t  ,    uint32_t  ) )lam791 , .env =  envinst787 } ) ) );
}

static  uint32_t   op_dash_div792 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) / (  r242 ) );
}

static  uint32_t   op_dash_sub793 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) - (  r232 ) );
}

static  struct Maybe_137   next784 (    struct IntStrIter_777 *  self1342 ) {
    if ( ( ( * (  self1342 ) ) .f_negative ) ) {
        (*  self1342 ) .f_negative = ( false );
        return ( ( Maybe_137_Just ) ( ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp209 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    uint32_t  trim_dash_down1343 = ( (  pow785 ) ( (  from_dash_integral107 ( 10 ) ) ,  (  op_dash_sub222 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    uint32_t  upper1344 = (  op_dash_div792 ( ( ( * (  self1342 ) ) .f_int ) , (  trim_dash_down1343 ) ) );
    uint32_t  upper_dash_mask1345 = (  op_dash_mul475 ( (  op_dash_div792 ( (  upper1344 ) , (  from_dash_integral107 ( 10 ) ) ) ) , (  from_dash_integral107 ( 10 ) ) ) );
    uint8_t  digit1346 = ( ( (  cast110 ) ( (  op_dash_sub793 ( (  upper1344 ) , (  upper_dash_mask1345 ) ) ) ) ) );
    (*  self1342 ) .f_len = (  op_dash_sub222 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1347 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1346 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1347 ) ) );
}

static  struct Maybe_137   next783 (    struct StrConcatIter_776 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next139 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next784 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next782 (    struct StrConcatIter_775 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next783 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next781 (    struct StrConcatIter_774 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next782 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next784 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next780 (    struct StrConcatIter_773 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next781 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each772 (    struct StrConcatIter_773  iterable1019 ,    enum Unit_4 (*  fun1021 )(    struct Char_17  ) ) {
    struct StrConcatIter_773  temp778 = ( (  into_dash_iter779 ) ( (  iterable1019 ) ) );
    struct StrConcatIter_773 *  it1022 = ( &temp778 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next780 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                ( (  fun1021 ) ( ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   count_dash_digits804 (    uint32_t  self1350 ) {
    if ( (  eq741 ( (  self1350 ) , (  from_dash_integral107 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1351 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp106 ( (  self1350 ) , (  from_dash_integral107 ( 0 ) ) ) == 2 ) ) {
        self1350 = (  op_dash_div792 ( (  self1350 ) , (  from_dash_integral107 ( 10 ) ) ) );
        digits1351 = (  op_dash_add218 ( (  digits1351 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1351 );
}

static  struct IntStrIter_777   uint_dash_iter803 (    uint32_t  int1357 ) {
    return ( (struct IntStrIter_777) { .f_int = (  int1357 ) , .f_len = ( (  count_dash_digits804 ) ( (  int1357 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_777   chars802 (    uint32_t  self1369 ) {
    return ( (  uint_dash_iter803 ) ( (  self1369 ) ) );
}

static  struct StrConcatIter_776   into_dash_iter801 (    struct StrConcat_771  dref1418 ) {
    return ( (struct StrConcatIter_776) { .f_left = ( (  chars135 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars802 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_776   chars800 (    struct StrConcat_771  self1429 ) {
    return ( (  into_dash_iter801 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_775   into_dash_iter799 (    struct StrConcat_770  dref1418 ) {
    return ( (struct StrConcatIter_775) { .f_left = ( (  chars800 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_775   chars798 (    struct StrConcat_770  self1429 ) {
    return ( (  into_dash_iter799 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_774   into_dash_iter797 (    struct StrConcat_769  dref1418 ) {
    return ( (struct StrConcatIter_774) { .f_left = ( (  chars798 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars802 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_774   chars796 (    struct StrConcat_769  self1429 ) {
    return ( (  into_dash_iter797 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_773   into_dash_iter795 (    struct StrConcat_768  dref1418 ) {
    return ( (struct StrConcatIter_773) { .f_left = ( (  chars796 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_773   chars794 (    struct StrConcat_768  self1429 ) {
    return ( (  into_dash_iter795 ) ( (  self1429 ) ) );
}

static  enum Unit_4   print767 (    struct StrConcat_768  s2372 ) {
    ( (  for_dash_each772 ) ( ( (  chars794 ) ( (  s2372 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   move_dash_cursor_dash_to766 (    uint32_t  x2383 ,    uint32_t  y2385 ) {
    uint32_t  x2386 = (  op_dash_add571 ( (  x2383 ) , (  from_dash_integral107 ( 1 ) ) ) );
    uint32_t  y2387 = (  op_dash_add571 ( (  y2385 ) , (  from_dash_integral107 ( 1 ) ) ) );
    ( (  print767 ) ( ( ( StrConcat_768_StrConcat ) ( ( ( StrConcat_769_StrConcat ) ( ( ( StrConcat_770_StrConcat ) ( ( ( StrConcat_771_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2387 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2386 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

struct Tuple2_812 {
    struct Color_460  field0;
    struct Color_460  field1;
};

static struct Tuple2_812 Tuple2_812_Tuple2 (  struct Color_460  field0 ,  struct Color_460  field1 ) {
    return ( struct Tuple2_812 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_461 *   cast816 (    int32_t *  x351 ) {
    return ( (enum Color8_461 * ) (  x351 ) );
}

static  int32_t   cast_dash_on_dash_zeroed814 (    enum Color8_461  x557 ) {
    int32_t  temp815 = ( (  zeroed151 ) ( ) );
    int32_t *  y558 = ( &temp815 );
    enum Color8_461 *  yp559 = ( (  cast816 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  bool   eq813 (    enum Color8_461  l2411 ,    enum Color8_461  r2413 ) {
    return (  eq56 ( ( ( (  cast_dash_on_dash_zeroed814 ) ( (  l2411 ) ) ) ) , ( (  cast_dash_on_dash_zeroed814 ) ( (  r2413 ) ) ) ) );
}

static  enum Color16_462 *   cast820 (    int32_t *  x351 ) {
    return ( (enum Color16_462 * ) (  x351 ) );
}

static  int32_t   cast_dash_on_dash_zeroed818 (    enum Color16_462  x557 ) {
    int32_t  temp819 = ( (  zeroed151 ) ( ) );
    int32_t *  y558 = ( &temp819 );
    enum Color16_462 *  yp559 = ( (  cast820 ) ( (  y558 ) ) );
    (*  yp559 ) = (  x557 );
    return ( * (  y558 ) );
}

static  bool   eq817 (    enum Color16_462  l2417 ,    enum Color16_462  r2419 ) {
    return (  eq56 ( ( ( (  cast_dash_on_dash_zeroed818 ) ( (  l2417 ) ) ) ) , ( (  cast_dash_on_dash_zeroed818 ) ( (  r2419 ) ) ) ) );
}

static  bool   eq821 (    struct RGB_463  l2447 ,    struct RGB_463  r2449 ) {
    return ( ( (  eq99 ( ( (  l2447 ) .f_r ) , ( (  r2449 ) .f_r ) ) ) && (  eq99 ( ( (  l2447 ) .f_g ) , ( (  r2449 ) .f_g ) ) ) ) && (  eq99 ( ( (  l2447 ) .f_b ) , ( (  r2449 ) .f_b ) ) ) );
}

static  bool   eq811 (    struct Color_460  l2470 ,    struct Color_460  r2472 ) {
    return ( {  struct Tuple2_812  dref2473 = ( ( Tuple2_812_Tuple2 ) ( (  l2470 ) ,  (  r2472 ) ) ) ; dref2473 .field0.tag == Color_460_ColorDefault_t && dref2473 .field1.tag == Color_460_ColorDefault_t ? ( true ) : dref2473 .field0.tag == Color_460_Color8_t && dref2473 .field1.tag == Color_460_Color8_t ? (  eq813 ( ( dref2473 .field0 .stuff .Color_460_Color8_s .field0 ) , ( dref2473 .field1 .stuff .Color_460_Color8_s .field0 ) ) ) : dref2473 .field0.tag == Color_460_Color16_t && dref2473 .field1.tag == Color_460_Color16_t ? (  eq817 ( ( dref2473 .field0 .stuff .Color_460_Color16_s .field0 ) , ( dref2473 .field1 .stuff .Color_460_Color16_s .field0 ) ) ) : dref2473 .field0.tag == Color_460_Color256_t && dref2473 .field1.tag == Color_460_Color256_t ? (  eq99 ( ( dref2473 .field0 .stuff .Color_460_Color256_s .field0 ) , ( dref2473 .field1 .stuff .Color_460_Color256_s .field0 ) ) ) : dref2473 .field0.tag == Color_460_ColorRGB_t && dref2473 .field1.tag == Color_460_ColorRGB_t ? (  eq821 ( ( dref2473 .field0 .stuff .Color_460_ColorRGB_s .field0 ) , ( dref2473 .field1 .stuff .Color_460_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq810 (    struct Cell_459  l3178 ,    struct Cell_459  r3180 ) {
    if ( ( !  eq739 ( ( (  l3178 ) .f_c ) , ( (  r3180 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq811 ( ( (  l3178 ) .f_fg ) , ( (  r3180 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq811 ( ( (  l3178 ) .f_bg ) , ( (  r3180 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq809 (    struct Cell_459 *  dref143 ,    struct Cell_459 *  dref145 ) {
    return (  eq810 ( ( (* dref143 ) ) , ( (* dref145 ) ) ) );
}

static  enum Unit_4   set_dash_default_dash_fg824 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg8825 (    enum Color8_461  color2422 ) {
    enum Color8_461  dref2423 = (  color2422 );
    switch (  dref2423 ) {
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

static  enum Unit_4   set_dash_fg16826 (    enum Color16_462  color2426 ) {
    enum Color16_462  dref2427 = (  color2426 );
    switch (  dref2427 ) {
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

struct StrConcat_830 {
    struct StrView_24  field0;
    uint8_t  field1;
};

static struct StrConcat_830 StrConcat_830_StrConcat (  struct StrView_24  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_830 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_829 {
    struct StrConcat_830  field0;
    struct Char_17  field1;
};

static struct StrConcat_829 StrConcat_829_StrConcat (  struct StrConcat_830  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_829 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_834 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_833 {
    struct StrViewIter_134  f_left;
    struct IntStrIter_834  f_right;
};

struct StrConcatIter_832 {
    struct StrConcatIter_833  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_832   into_dash_iter836 (    struct StrConcatIter_832  self1411 ) {
    return (  self1411 );
}

struct env842 {
    uint8_t  base1155;
    ;
};

struct envunion843 {
    uint8_t  (*fun) (  struct env842*  ,    int32_t  ,    uint8_t  );
    struct env842 env;
};

static  uint8_t   reduce841 (    struct Range_212  iterable1038 ,    uint8_t  base1040 ,   struct envunion843  fun1042 ) {
    uint8_t  x1043 = (  base1040 );
    struct RangeIter_215  it1044 = ( (  into_dash_iter216 ) ( (  iterable1038 ) ) );
    while ( ( true ) ) {
        struct Maybe_145  dref1045 = ( (  next217 ) ( ( & (  it1044 ) ) ) );
        if ( dref1045.tag == Maybe_145_None_t ) {
            return (  x1043 );
        }
        else {
            if ( dref1045.tag == Maybe_145_Just_t ) {
                struct envunion843  temp844 = (  fun1042 );
                x1043 = ( temp844.fun ( &temp844.env ,  ( dref1045 .stuff .Maybe_145_Just_s .field0 ) ,  (  x1043 ) ) );
            }
        }
    }
    uint8_t  temp845;
    return (  temp845 );
}

static  uint8_t   op_dash_mul847 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) * (  r257 ) );
}

static  uint8_t   lam846 (   struct env842* env ,    int32_t  item1159 ,    uint8_t  x1161 ) {
    return (  op_dash_mul847 ( (  x1161 ) , ( env->base1155 ) ) );
}

static  uint8_t   pow840 (    uint8_t  base1155 ,    int32_t  p1157 ) {
    struct env842 envinst842 = {
        .base1155 =  base1155 ,
    };
    return ( (  reduce841 ) ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  p1157 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral103 ( 1 ) ) ,  ( (struct envunion843){ .fun = (  uint8_t  (*) (  struct env842*  ,    int32_t  ,    uint8_t  ) )lam846 , .env =  envinst842 } ) ) );
}

static  uint8_t   op_dash_div848 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) / (  r262 ) );
}

static  uint8_t   cast849 (    uint8_t  x351 ) {
    return ( (uint8_t ) (  x351 ) );
}

static  struct Maybe_137   next839 (    struct IntStrIter_834 *  self1342 ) {
    if ( ( ( * (  self1342 ) ) .f_negative ) ) {
        (*  self1342 ) .f_negative = ( false );
        return ( ( Maybe_137_Just ) ( ( (  from_dash_charlike112 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp209 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_137) { .tag = Maybe_137_None_t } );
    }
    uint8_t  trim_dash_down1343 = ( (  pow840 ) ( (  from_dash_integral103 ( 10 ) ) ,  (  op_dash_sub222 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) ) ) );
    uint8_t  upper1344 = (  op_dash_div848 ( ( ( * (  self1342 ) ) .f_int ) , (  trim_dash_down1343 ) ) );
    uint8_t  upper_dash_mask1345 = (  op_dash_mul847 ( (  op_dash_div848 ( (  upper1344 ) , (  from_dash_integral103 ( 10 ) ) ) ) , (  from_dash_integral103 ( 10 ) ) ) );
    uint8_t  digit1346 = ( ( (  cast849 ) ( (  op_dash_sub156 ( (  upper1344 ) , (  upper_dash_mask1345 ) ) ) ) ) );
    (*  self1342 ) .f_len = (  op_dash_sub222 ( ( ( * (  self1342 ) ) .f_len ) , (  from_dash_integral49 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1347 = ( (  from_dash_u8227 ) ( (  op_dash_add117 ( (  digit1346 ) , (  from_dash_integral103 ( 48 ) ) ) ) ) );
    return ( ( Maybe_137_Just ) ( (  digit_dash_char1347 ) ) );
}

static  struct Maybe_137   next838 (    struct StrConcatIter_833 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next139 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next839 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next837 (    struct StrConcatIter_832 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next838 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each831 (    struct StrConcatIter_832  iterable1019 ,    enum Unit_4 (*  fun1021 )(    struct Char_17  ) ) {
    struct StrConcatIter_832  temp835 = ( (  into_dash_iter836 ) ( (  iterable1019 ) ) );
    struct StrConcatIter_832 *  it1022 = ( &temp835 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next837 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                ( (  fun1021 ) ( ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   count_dash_digits856 (    uint8_t  self1350 ) {
    if ( (  eq99 ( (  self1350 ) , (  from_dash_integral103 ( 0 ) ) ) ) ) {
        return (  from_dash_integral49 ( 1 ) );
    }
    int32_t  digits1351 = (  from_dash_integral49 ( 0 ) );
    while ( (  cmp116 ( (  self1350 ) , (  from_dash_integral103 ( 0 ) ) ) == 2 ) ) {
        self1350 = (  op_dash_div848 ( (  self1350 ) , (  from_dash_integral103 ( 10 ) ) ) );
        digits1351 = (  op_dash_add218 ( (  digits1351 ) , (  from_dash_integral49 ( 1 ) ) ) );
    }
    return (  digits1351 );
}

static  struct IntStrIter_834   uint_dash_iter855 (    uint8_t  int1357 ) {
    return ( (struct IntStrIter_834) { .f_int = (  int1357 ) , .f_len = ( (  count_dash_digits856 ) ( (  int1357 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_834   chars854 (    uint8_t  self1375 ) {
    return ( (  uint_dash_iter855 ) ( (  self1375 ) ) );
}

static  struct StrConcatIter_833   into_dash_iter853 (    struct StrConcat_830  dref1418 ) {
    return ( (struct StrConcatIter_833) { .f_left = ( (  chars135 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars854 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_833   chars852 (    struct StrConcat_830  self1429 ) {
    return ( (  into_dash_iter853 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_832   into_dash_iter851 (    struct StrConcat_829  dref1418 ) {
    return ( (struct StrConcatIter_832) { .f_left = ( (  chars852 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_832   chars850 (    struct StrConcat_829  self1429 ) {
    return ( (  into_dash_iter851 ) ( (  self1429 ) ) );
}

static  enum Unit_4   print828 (    struct StrConcat_829  s2372 ) {
    ( (  for_dash_each831 ) ( ( (  chars850 ) ( (  s2372 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg256827 (    uint8_t  color2440 ) {
    ( (  print828 ) ( ( ( StrConcat_829_StrConcat ) ( ( ( StrConcat_830_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2440 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

struct StrConcat_862 {
    struct StrConcat_829  field0;
    uint8_t  field1;
};

static struct StrConcat_862 StrConcat_862_StrConcat (  struct StrConcat_829  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_862 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_861 {
    struct StrConcat_862  field0;
    struct Char_17  field1;
};

static struct StrConcat_861 StrConcat_861_StrConcat (  struct StrConcat_862  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_861 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_860 {
    struct StrConcat_861  field0;
    uint8_t  field1;
};

static struct StrConcat_860 StrConcat_860_StrConcat (  struct StrConcat_861  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_860 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_859 {
    struct StrConcat_860  field0;
    struct Char_17  field1;
};

static struct StrConcat_859 StrConcat_859_StrConcat (  struct StrConcat_860  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_859 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_867 {
    struct StrConcatIter_832  f_left;
    struct IntStrIter_834  f_right;
};

struct StrConcatIter_866 {
    struct StrConcatIter_867  f_left;
    struct AppendIter_201  f_right;
};

struct StrConcatIter_865 {
    struct StrConcatIter_866  f_left;
    struct IntStrIter_834  f_right;
};

struct StrConcatIter_864 {
    struct StrConcatIter_865  f_left;
    struct AppendIter_201  f_right;
};

static  struct StrConcatIter_864   into_dash_iter869 (    struct StrConcatIter_864  self1411 ) {
    return (  self1411 );
}

static  struct Maybe_137   next873 (    struct StrConcatIter_867 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next837 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next839 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next872 (    struct StrConcatIter_866 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next873 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next871 (    struct StrConcatIter_865 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next872 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next839 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_137   next870 (    struct StrConcatIter_864 *  self1414 ) {
    struct Maybe_137  dref1415 = ( (  next871 ) ( ( & ( ( * (  self1414 ) ) .f_left ) ) ) );
    if ( dref1415.tag == Maybe_137_Just_t ) {
        return ( ( Maybe_137_Just ) ( ( dref1415 .stuff .Maybe_137_Just_s .field0 ) ) );
    }
    else {
        if ( dref1415.tag == Maybe_137_None_t ) {
            return ( (  next238 ) ( ( & ( ( * (  self1414 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each863 (    struct StrConcatIter_864  iterable1019 ,    enum Unit_4 (*  fun1021 )(    struct Char_17  ) ) {
    struct StrConcatIter_864  temp868 = ( (  into_dash_iter869 ) ( (  iterable1019 ) ) );
    struct StrConcatIter_864 *  it1022 = ( &temp868 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next870 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                ( (  fun1021 ) ( ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrConcatIter_867   into_dash_iter881 (    struct StrConcat_862  dref1418 ) {
    return ( (struct StrConcatIter_867) { .f_left = ( (  chars850 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars854 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_867   chars880 (    struct StrConcat_862  self1429 ) {
    return ( (  into_dash_iter881 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_866   into_dash_iter879 (    struct StrConcat_861  dref1418 ) {
    return ( (struct StrConcatIter_866) { .f_left = ( (  chars880 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_866   chars878 (    struct StrConcat_861  self1429 ) {
    return ( (  into_dash_iter879 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_865   into_dash_iter877 (    struct StrConcat_860  dref1418 ) {
    return ( (struct StrConcatIter_865) { .f_left = ( (  chars878 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars854 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_865   chars876 (    struct StrConcat_860  self1429 ) {
    return ( (  into_dash_iter877 ) ( (  self1429 ) ) );
}

static  struct StrConcatIter_864   into_dash_iter875 (    struct StrConcat_859  dref1418 ) {
    return ( (struct StrConcatIter_864) { .f_left = ( (  chars876 ) ( ( dref1418 .field0 ) ) ) , .f_right = ( (  chars249 ) ( ( dref1418 .field1 ) ) ) } );
}

static  struct StrConcatIter_864   chars874 (    struct StrConcat_859  self1429 ) {
    return ( (  into_dash_iter875 ) ( (  self1429 ) ) );
}

static  enum Unit_4   print858 (    struct StrConcat_859  s2372 ) {
    ( (  for_dash_each863 ) ( ( (  chars874 ) ( (  s2372 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg_dash_rgb857 (    struct RGB_463  c2463 ) {
    ( (  print858 ) ( ( ( StrConcat_859_StrConcat ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( ( StrConcat_829_StrConcat ) ( ( ( StrConcat_830_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2463 ) .f_r ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2463 ) .f_g ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2463 ) .f_b ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg823 (    struct Color_460  c2484 ) {
    struct Color_460  dref2485 = (  c2484 );
    if ( dref2485.tag == Color_460_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg824 ) ( ) );
    }
    else {
        if ( dref2485.tag == Color_460_Color8_t ) {
            ( (  set_dash_fg8825 ) ( ( dref2485 .stuff .Color_460_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2485.tag == Color_460_Color16_t ) {
                ( (  set_dash_fg16826 ) ( ( dref2485 .stuff .Color_460_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2485.tag == Color_460_Color256_t ) {
                    ( (  set_dash_fg256827 ) ( ( dref2485 .stuff .Color_460_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2485.tag == Color_460_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb857 ) ( ( dref2485 .stuff .Color_460_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_default_dash_bg883 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg8884 (    enum Color8_461  color2430 ) {
    enum Color8_461  dref2431 = (  color2430 );
    switch (  dref2431 ) {
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

static  enum Unit_4   set_dash_bg16885 (    enum Color16_462  color2434 ) {
    enum Color16_462  dref2435 = (  color2434 );
    switch (  dref2435 ) {
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

static  enum Unit_4   set_dash_bg256886 (    uint8_t  color2443 ) {
    ( (  print828 ) ( ( ( StrConcat_829_StrConcat ) ( ( ( StrConcat_830_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2443 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg_dash_rgb887 (    struct RGB_463  c2466 ) {
    ( (  print858 ) ( ( ( StrConcat_859_StrConcat ) ( ( ( StrConcat_860_StrConcat ) ( ( ( StrConcat_861_StrConcat ) ( ( ( StrConcat_862_StrConcat ) ( ( ( StrConcat_829_StrConcat ) ( ( ( StrConcat_830_StrConcat ) ( ( (  from_dash_string111 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2466 ) .f_r ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2466 ) .f_g ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2466 ) .f_b ) ) ) ,  ( (  from_dash_charlike112 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg882 (    struct Color_460  c2492 ) {
    struct Color_460  dref2493 = (  c2492 );
    if ( dref2493.tag == Color_460_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg883 ) ( ) );
    }
    else {
        if ( dref2493.tag == Color_460_Color8_t ) {
            ( (  set_dash_bg8884 ) ( ( dref2493 .stuff .Color_460_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2493.tag == Color_460_Color16_t ) {
                ( (  set_dash_bg16885 ) ( ( dref2493 .stuff .Color_460_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2493.tag == Color_460_Color256_t ) {
                    ( (  set_dash_bg256886 ) ( ( dref2493 .stuff .Color_460_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2493.tag == Color_460_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb887 ) ( ( dref2493 .stuff .Color_460_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   emit_dash_cell822 (    struct RenderState_764 *  rs3206 ,    struct Cell_459 *  c3208 ,    uint32_t  x3210 ,    uint32_t  y3212 ) {
    if ( ( ( !  eq741 ( (  x3210 ) , ( ( * (  rs3206 ) ) .f_x ) ) ) || ( !  eq741 ( (  y3212 ) , ( ( * (  rs3206 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to766 ) ( (  x3210 ) ,  (  y3212 ) ) );
        (*  rs3206 ) .f_x = (  x3210 );
        (*  rs3206 ) .f_y = (  y3212 );
    }
    struct Char_17  char3213 = ( ( * (  c3208 ) ) .f_c );
    struct Color_460  bg3214 = ( ( * (  c3208 ) ) .f_bg );
    if ( ( ( (  eq739 ( (  char3213 ) , ( (  from_dash_charlike112 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) || (  eq739 ( (  char3213 ) , ( (  from_dash_charlike112 ) ( ( "\r" ) ,  ( 1 ) ) ) ) ) ) || (  eq739 ( (  char3213 ) , ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) {
        char3213 = ( (  from_dash_charlike112 ) ( ( " " ) ,  ( 1 ) ) );
        bg3214 = ( ( Color_460_Color8 ) ( ( Color8_461_Red8 ) ) );
    }
    if ( ( !  eq811 ( ( ( * (  rs3206 ) ) .f_fg ) , ( ( * (  c3208 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg823 ) ( ( ( * (  c3208 ) ) .f_fg ) ) );
        (*  rs3206 ) .f_fg = ( ( * (  c3208 ) ) .f_fg );
    }
    if ( ( !  eq811 ( ( ( * (  rs3206 ) ) .f_bg ) , (  bg3214 ) ) ) ) {
        ( (  set_dash_bg882 ) ( (  bg3214 ) ) );
        (*  rs3206 ) .f_bg = (  bg3214 );
    }
    ( (  print_dash_str95 ) ( (  char3213 ) ) );
    (*  rs3206 ) .f_x = (  op_dash_add571 ( ( ( * (  rs3206 ) ) .f_x ) , (  from_dash_integral107 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint32_t   i32_dash_u32888 (    int32_t  x584 ) {
    return ( (uint32_t ) (  x584 ) );
}

static  uint32_t   render_dash_screen763 (    struct Screen_457 *  screen3217 ) {
    int32_t  w3218 = ( (  u32_dash_i32693 ) ( ( ( * ( ( * (  screen3217 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3219 = ( (  u32_dash_i32693 ) ( ( ( * ( ( * (  screen3217 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_764  temp765 = ( (struct RenderState_764) { .f_x = (  from_dash_integral107 ( 0 ) ) , .f_y = (  from_dash_integral107 ( 0 ) ) , .f_fg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_bg = ( (struct Color_460) { .tag = Color_460_ColorDefault_t } ) , .f_changes = (  from_dash_integral107 ( 0 ) ) } );
    struct RenderState_764 *  rs3220 = ( &temp765 );
    ( (  move_dash_cursor_dash_to766 ) ( (  from_dash_integral107 ( 0 ) ) ,  (  from_dash_integral107 ( 0 ) ) ) );
    struct RangeIter_215  temp805 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  h3219 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_145  __cond806 =  next217 (&temp805);
        if (  __cond806 .tag == 0 ) {
            break;
        }
        int32_t  y3222 =  __cond806 .stuff .Maybe_145_Just_s .field0;
        struct RangeIter_215  temp807 =  into_dash_iter216 ( ( (  to221 ) ( (  from_dash_integral49 ( 0 ) ) ,  (  op_dash_sub222 ( (  w3218 ) , (  from_dash_integral49 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_145  __cond808 =  next217 (&temp807);
            if (  __cond808 .tag == 0 ) {
                break;
            }
            int32_t  x3224 =  __cond808 .stuff .Maybe_145_Just_s .field0;
            size_t  i3225 = ( (  i32_dash_size76 ) ( (  op_dash_add218 ( (  op_dash_mul725 ( (  y3222 ) , (  w3218 ) ) ) , (  x3224 ) ) ) ) );
            struct Cell_459 *  cur3226 = ( (  get_dash_ptr484 ) ( ( ( * (  screen3217 ) ) .f_current ) ,  (  i3225 ) ) );
            struct Cell_459 *  prev3227 = ( (  get_dash_ptr484 ) ( ( ( * (  screen3217 ) ) .f_previous ) ,  (  i3225 ) ) );
            if ( ( ( !  eq809 ( (  cur3226 ) , (  prev3227 ) ) ) || ( ( * (  screen3217 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs3220 ) .f_changes = (  op_dash_add571 ( ( ( * (  rs3220 ) ) .f_changes ) , (  from_dash_integral107 ( 1 ) ) ) );
                ( (  emit_dash_cell822 ) ( (  rs3220 ) ,  (  cur3226 ) ,  ( (  i32_dash_u32888 ) ( (  x3224 ) ) ) ,  ( (  i32_dash_u32888 ) ( (  y3222 ) ) ) ) );
                (*  prev3227 ) = ( * (  cur3226 ) );
            }
        }
    }
    (*  screen3217 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors412 ) ( ) );
    ( (  flush_dash_stdout415 ) ( ) );
    return ( ( * (  rs3220 ) ) .f_changes );
}

static  void *   cast_dash_ptr895 (    struct timespec * *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  size_t   size_dash_of896 (    struct timespec *  x345 ) {
    return ( sizeof( (  x345 ) ) );
}

static  struct timespec *   zeroed893 (  ) {
    struct timespec *  temp894;
    struct timespec *  x554 = (  temp894 );
    ( ( memset ) ( ( (  cast_dash_ptr895 ) ( ( & (  x554 ) ) ) ) ,  (  from_dash_integral49 ( 0 ) ) ,  ( (  size_dash_of896 ) ( (  x554 ) ) ) ) );
    return (  x554 );
}

static  struct timespec *   null_dash_ptr892 (  ) {
    return ( (  zeroed893 ) ( ) );
}

static  enum Unit_4   sync889 (    struct Tui_30 *  tui3093 ) {
    if ( (  eq741 ( ( ( * (  tui3093 ) ) .f_target_dash_fps ) , (  from_dash_integral107 ( 0 ) ) ) ) ) {
        return ( Unit_4_Unit );
    }
    int64_t  frame_dash_ns3094 = (  op_dash_div224 ( (  from_dash_integral42 ( 1000000000 ) ) , ( (  size_dash_i6454 ) ( ( (  u32_dash_size471 ) ( ( ( * (  tui3093 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp890 = ( (  undefined46 ) ( ) );
    struct timespec *  now3095 = ( &temp890 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic48 ) ( ) ) ,  (  now3095 ) ) );
    int64_t  elapsed_dash_ns3096 = (  op_dash_add157 ( (  op_dash_mul40 ( (  op_dash_sub226 ( ( ( * (  now3095 ) ) .tv_sec ) , ( ( ( * (  tui3093 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral42 ( 1000000000 ) ) ) ) , (  op_dash_sub226 ( ( ( * (  now3095 ) ) .tv_nsec ) , ( ( ( * (  tui3093 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3097 = (  op_dash_sub226 ( (  frame_dash_ns3094 ) , (  elapsed_dash_ns3096 ) ) );
    if ( (  cmp245 ( (  sleep_dash_ns3097 ) , (  from_dash_integral42 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp891 = ( (struct timespec) { .tv_sec = (  from_dash_integral42 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3097 ) } );
        struct timespec *  ts3098 = ( &temp891 );
        ( ( nanosleep ) ( (  ts3098 ) ,  ( (  null_dash_ptr892 ) ( ) ) ) );
    }
    struct timespec  temp897 = ( (  undefined46 ) ( ) );
    struct timespec *  last_dash_sync3099 = ( &temp897 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic48 ) ( ) ) ,  (  last_dash_sync3099 ) ) );
    (*  tui3093 ) .f_last_dash_sync = ( * (  last_dash_sync3099 ) );
    (*  tui3093 ) .f_fps_dash_count = (  op_dash_add571 ( ( ( * (  tui3093 ) ) .f_fps_dash_count ) , (  from_dash_integral107 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3100 = (  op_dash_add157 ( (  op_dash_mul40 ( (  op_dash_sub226 ( ( ( ( * (  tui3093 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3093 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral42 ( 1000 ) ) ) ) , (  op_dash_div224 ( (  op_dash_sub226 ( ( ( ( * (  tui3093 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3093 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral42 ( 1000000 ) ) ) ) ) );
    if ( (  cmp245 ( (  fps_dash_elapsed_dash_ms3100 ) , (  from_dash_integral42 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3093 ) .f_actual_dash_fps = ( ( * (  tui3093 ) ) .f_fps_dash_count );
        (*  tui3093 ) .f_fps_dash_count = (  from_dash_integral107 ( 0 ) );
        (*  tui3093 ) .f_fps_dash_ts = ( ( * (  tui3093 ) ) .f_last_dash_sync );
    }
    return ( Unit_4_Unit );
}

static  void *   cast_dash_ptr900 (    struct Cell_459 *  p354 ) {
    return ( (void * ) (  p354 ) );
}

static  enum Unit_4   free899 (    enum CAllocator_6  dref1868 ,    struct Slice_458  slice1870 ) {
    if (!(  dref1868 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr900 ) ( ( (  slice1870 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free_dash_screen898 (    struct Screen_457 *  screen3197 ) {
    enum CAllocator_6  al3198 = ( ( * (  screen3197 ) ) .f_al );
    ( (  free899 ) ( (  al3198 ) ,  ( ( * (  screen3197 ) ) .f_current ) ) );
    ( (  free899 ) ( (  al3198 ) ,  ( ( * (  screen3197 ) ) .f_previous ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   disable_dash_mouse902 (  ) {
    ( (  print_dash_str88 ) ( ( (  from_dash_string111 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   show_dash_cursor903 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   reset_dash_cursor_dash_position904 (  ) {
    ( (  print411 ) ( ( (  from_dash_string111 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   disable_dash_raw_dash_mode905 (    struct Termios_32 *  og_dash_termios3073 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno342 ) ( ) ) ,  ( (  tcsa_dash_flush409 ) ( ) ) ,  ( (  cast_dash_ptr343 ) ( (  og_dash_termios3073 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   deinit901 (    struct Tui_30 *  tui3103 ) {
    ( (  disable_dash_mouse902 ) ( ) );
    ( (  show_dash_cursor903 ) ( ) );
    ( (  reset_dash_colors412 ) ( ) );
    ( (  clear_dash_screen413 ) ( ) );
    ( (  reset_dash_cursor_dash_position904 ) ( ) );
    ( (  disable_dash_raw_dash_mode905 ) ( ( & ( ( * (  tui3103 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout415 ) ( ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   for_dash_each908 (    struct StrConcatIter_199  iterable1019 ,    enum Unit_4 (*  fun1021 )(    struct Char_17  ) ) {
    struct StrConcatIter_199  temp909 = ( (  into_dash_iter206 ) ( (  iterable1019 ) ) );
    struct StrConcatIter_199 *  it1022 = ( &temp909 );
    while ( ( true ) ) {
        struct Maybe_137  dref1023 = ( (  next207 ) ( (  it1022 ) ) );
        if ( dref1023.tag == Maybe_137_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1023.tag == Maybe_137_Just_t ) {
                ( (  fun1021 ) ( ( dref1023 .stuff .Maybe_137_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print907 (    struct StrConcat_20  s2372 ) {
    ( (  for_dash_each908 ) ( ( (  chars241 ) ( (  s2372 ) ) ) ,  (  printf_dash_char96 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   println906 (    int64_t  s2375 ) {
    ( (  print907 ) ( ( ( StrConcat_20_StrConcat ) ( (  s2375 ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1945 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor1946 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor1947 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .growth_dash_factor1946 =  growth_dash_factor1946 ,
        .starting_dash_size1945 =  starting_dash_size1945 ,
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
    bool *  should_dash_resize3083 = ( &temp25 );
    struct env26 envinst26 = {
        .should_dash_resize3083 =  should_dash_resize3083 ,
    };
    struct env27 envinst27 = {
        .should_dash_resize3083 =  should_dash_resize3083 ,
    };
    struct env28 envinst28 = {
        .envinst27 = envinst27 ,
    };
    struct env34 envinst34 = {
        .envinst27 = envinst27 ,
    };
    enum CAllocator_6  al3356 = ( (  idc36 ) ( ) );
    struct Slice_37  args3359 = ( (  get38 ) ( ) );
    struct timespec  start_dash_time3360 = ( (  now44 ) ( ) );
    struct Maybe_50  dref3361 = ( (  try_dash_get51 ) ( (  args3359 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    if ( dref3361.tag == Maybe_50_Just_t ) {
        if ( (  eq55 ( ( dref3361 .stuff .Maybe_50_Just_s .field0 ) , ( (  from_dash_string57 ) ( ( "-p" ) ,  ( 2 ) ) ) ) ) ) {
            const char*  filename3363 = ( (  from_dash_string57 ) ( ( "timer-start" ) ,  ( 11 ) ) );
            struct Maybe_58  dref3364 = ( (  try_dash_read_dash_contents59 ) ( (  filename3363 ) ,  (  al3356 ) ) );
            if ( dref3364.tag == Maybe_58_Just_t ) {
                int64_t  num3366 = ( (  or_dash_fail124 ) ( ( (  parse_dash_int133 ) ( ( (  or_dash_fail159 ) ( ( (  head162 ) ( ( (  lines177 ) ( ( dref3364 .stuff .Maybe_58_Just_s .field0 ) ) ) ) ) ,  ( (  from_dash_string111 ) ( ( "empty timer file" ) ,  ( 16 ) ) ) ) ) ) ) ,  ( (  from_dash_string111 ) ( ( "could not parse first timestamp" ) ,  ( 31 ) ) ) ) );
                start_dash_time3360 = ( (struct timespec) { .tv_sec = (  num3366 ) , .tv_nsec = (  from_dash_integral42 ( 0 ) ) } );
                ( (  free178 ) ( ( dref3364 .stuff .Maybe_58_Just_s .field0 ) ,  (  al3356 ) ) );
            }
            else {
                if ( dref3364.tag == Maybe_58_None_t ) {
                    struct envunion182  temp181 = ( (struct envunion182){ .fun = (  const char*  (*) (  struct env22*  ,    struct StrConcat_20  ,    enum CAllocator_6  ) )mk_dash_const_dash_str183 , .env =  envinst22 } );
                    const char*  s3367 = ( temp181.fun ( &temp181.env ,  ( ( StrConcat_20_StrConcat ) ( ( (  start_dash_time3360 ) .tv_sec ) ,  ( (  from_dash_charlike112 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  al3356 ) ) );
                    ( (  write_dash_contents299 ) ( (  filename3363 ) ,  (  s3367 ) ) );
                    ( (  free_dash_const_dash_str323 ) ( (  s3367 ) ,  (  al3356 ) ) );
                }
            }
        } else {
            int64_t  num3368 = ( (  or_dash_fail124 ) ( ( (  parse_dash_int327 ) ( ( dref3361 .stuff .Maybe_50_Just_s .field0 ) ) ) ,  ( (  from_dash_string111 ) ( ( "could not parse first timestamp" ) ,  ( 31 ) ) ) ) );
            start_dash_time3360 = ( (struct timespec) { .tv_sec = (  num3368 ) , .tv_nsec = (  from_dash_integral42 ( 0 ) ) } );
        }
    }
    else {
        if ( dref3361.tag == Maybe_50_None_t ) {
        }
    }
    struct envunion336  temp335 = ( (struct envunion336){ .fun = (  struct Tui_30  (*) (  struct env26*  ) )mk337 , .env =  envinst26 } );
    struct Tui_30  temp334 = ( temp335.fun ( &temp335.env ) );
    struct Tui_30 *  tui3369 = ( &temp334 );
    struct Screen_457  temp464 = ( (  mk_dash_screen465 ) ( (  tui3369 ) ,  (  al3356 ) ) );
    struct Screen_457 *  screen3370 = ( &temp464 );
    struct Duration_503  last_dash_diff3371 = ( (  diff504 ) ( (  start_dash_time3360 ) ,  (  start_dash_time3360 ) ) );
    ( (  set_dash_screen_dash_fg505 ) ( (  screen3370 ) ,  ( ( Color_460_Color8 ) ( ( Color8_461_White8 ) ) ) ) );
    bool  running3372 = ( true );
    while ( (  running3372 ) ) {
        struct env508 envinst508 = {
            .tui3369 =  tui3369 ,
            .envinst28 = envinst28 ,
        };
        struct FunIter_507  temp506 =  into_dash_iter516 ( ( (  from_dash_function517 ) ( ( (struct envunion515){ .fun = (  struct Maybe_510  (*) (  struct env508*  ) )lam518 , .env =  envinst508 } ) ) ) );
        while (true) {
            struct Maybe_510  __cond665 =  next666 (&temp506);
            if (  __cond665 .tag == 0 ) {
                break;
            }
            struct InputEvent_511  ev3374 =  __cond665 .stuff .Maybe_510_Just_s .field0;
            struct InputEvent_511  dref3375 = (  ev3374 );
            if ( dref3375.tag == InputEvent_511_Key_t && dref3375 .stuff .InputEvent_511_Key_s .field0.tag == Key_512_Char_t ) {
                if ( (  eq573 ( ( dref3375 .stuff .InputEvent_511_Key_s .field0 .stuff .Key_512_Char_s .field0 ) , ( (  from_dash_charlike574 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
                    running3372 = ( false );
                }
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion669  temp668 = ( (struct envunion669){ .fun = (  bool  (*) (  struct env34*  ,    struct Screen_457 *  ) )resize_dash_screen_dash_if_dash_needed670 , .env =  envinst34 } );
        ( temp668.fun ( &temp668.env ,  (  screen3370 ) ) );
        struct Duration_503  diff3377 = ( (  diff504 ) ( ( (  now44 ) ( ) ) ,  (  start_dash_time3360 ) ) );
        if ( ( ( (  should_dash_redraw672 ) ( (  tui3369 ) ) ) || ( !  eq248 ( ( (  diff3377 ) .f_secs ) , ( (  last_dash_diff3371 ) .f_secs ) ) ) ) ) {
            last_dash_diff3371 = (  diff3377 );
            ( (  clear_dash_screen673 ) ( (  screen3370 ) ) );
            struct ClockTime_682  ct3378 = ( (  clock_dash_time_dash_from_dash_secs683 ) ( ( (  diff3377 ) .f_secs ) ) );
            struct PadZeroes_687  s3379 = ( (  pad_dash_zeroes688 ) ( ( (  u8_dash_i32148 ) ( ( (  ct3378 ) .f_s ) ) ) ,  (  from_dash_integral103 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_687  m3380 = ( (  pad_dash_zeroes688 ) ( ( (  u8_dash_i32148 ) ( ( (  ct3378 ) .f_m ) ) ) ,  (  from_dash_integral103 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_687  h3381 = ( (  pad_dash_zeroes688 ) ( ( (  u32_dash_i32693 ) ( ( (  ct3378 ) .f_h ) ) ) ,  (  from_dash_integral103 ( 2 ) ) ,  ( true ) ) );
            struct StrConcat_695  timer_dash_str3382 = ( ( StrConcat_695_StrConcat ) ( ( ( StrConcat_696_StrConcat ) ( ( ( StrConcat_697_StrConcat ) ( ( ( StrConcat_698_StrConcat ) ( (  h3381 ) ,  ( (  from_dash_charlike112 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  m3380 ) ) ) ,  ( (  from_dash_charlike112 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  s3379 ) ) );
            size_t  timer_dash_sz3383 = (  op_dash_sub43 ( (  op_dash_mul74 ( ( (  count699 ) ( (  timer_dash_str3382 ) ) ) , (  from_dash_integral0 ( 7 ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
            int32_t  timer_dash_h3384 = (  from_dash_integral49 ( 6 ) );
            int32_t  begin_dash_x3385 = (  op_dash_div692 ( (  op_dash_sub222 ( ( (  u32_dash_i32693 ) ( ( ( * (  tui3369 ) ) .f_width ) ) ) , ( (  size_dash_i3289 ) ( (  timer_dash_sz3383 ) ) ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
            int32_t  begin_dash_y3386 = (  op_dash_div692 ( (  op_dash_sub222 ( ( (  u32_dash_i32693 ) ( ( ( * (  tui3369 ) ) .f_height ) ) ) , (  timer_dash_h3384 ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
            if ( ( (  cmp209 ( (  begin_dash_x3385 ) , (  from_dash_integral49 ( 0 ) ) ) != 0 ) && (  cmp209 ( (  begin_dash_y3386 ) , (  from_dash_integral49 ( 0 ) ) ) != 0 ) ) ) {
                struct Zip_729  temp728 =  into_dash_iter730 ( ( (  zip731 ) ( ( (  chars733 ) ( (  timer_dash_str3382 ) ) ) ,  ( (  from291 ) ( (  from_dash_integral49 ( 0 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_735  __cond734 =  next737 (&temp728);
                    if (  __cond734 .tag == 0 ) {
                        break;
                    }
                    struct Tuple2_736  dref3387 =  __cond734 .stuff .Maybe_735_Just_s .field0;
                    ( (  draw_dash_digit738 ) ( (  screen3370 ) ,  ( dref3387 .field0 ) ,  (  op_dash_add218 ( (  begin_dash_x3385 ) , (  op_dash_mul725 ( ( dref3387 .field1 ) , (  from_dash_integral49 ( 7 ) ) ) ) ) ) ,  (  begin_dash_y3386 ) ) );
                }
            } else {
                size_t  timer_dash_sz3390 = ( (  count699 ) ( (  timer_dash_str3382 ) ) );
                int32_t  timer_dash_h3391 = (  from_dash_integral49 ( 1 ) );
                int32_t  begin_dash_x3392 = (  op_dash_div692 ( (  op_dash_sub222 ( ( (  u32_dash_i32693 ) ( ( ( * (  tui3369 ) ) .f_width ) ) ) , ( (  size_dash_i3289 ) ( (  timer_dash_sz3390 ) ) ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
                int32_t  begin_dash_y3393 = (  op_dash_div692 ( (  op_dash_sub222 ( ( (  u32_dash_i32693 ) ( ( ( * (  tui3369 ) ) .f_height ) ) ) , (  timer_dash_h3391 ) ) ) , (  from_dash_integral49 ( 2 ) ) ) );
                ( (  draw_dash_str755 ) ( (  screen3370 ) ,  (  timer_dash_str3382 ) ,  (  begin_dash_x3392 ) ,  (  begin_dash_y3393 ) ) );
            }
            ( (  render_dash_screen763 ) ( (  screen3370 ) ) );
        }
        ( (  sync889 ) ( (  tui3369 ) ) );
    }
    ( (  free_dash_screen898 ) ( (  screen3370 ) ) );
    ( (  deinit901 ) ( (  tui3369 ) ) );
    ( (  println906 ) ( ( (  start_dash_time3360 ) .tv_sec ) ) );
}
