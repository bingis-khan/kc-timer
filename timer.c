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
    size_t  starting_dash_size1947;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    size_t  growth_dash_factor1948;
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
    struct env10 envinst10;
    ;
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
    ;
    struct env12 envinst12;
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
    ;
    ;
    struct env15 envinst15;
    struct env12 envinst12;
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
    struct env18 envinst18;
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
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize3068;
    ;
};

struct env27 {
    ;
    bool *  should_dash_resize3068;
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
    ;
    struct env27 envinst27;
};

struct envunion35 {
    bool  (*fun) (  struct env27*  ,    struct Tui_30 *  );
    struct env27 env;
};

struct env34 {
    ;
    ;
    ;
    ;
    ;
    struct env27 envinst27;
};

struct envunion38 {
    struct Tui_30  (*fun) (  struct env26*  );
    struct env26 env;
};

static  struct Termios_32   undefined42 (  ) {
    struct Termios_32  temp43;
    return (  temp43 );
}

static  int32_t   from_dash_integral45 (    int64_t  x49 ) {
    return ( (int32_t ) (  x49 ) );
}

static  int32_t   stdin_dash_fileno44 (  ) {
    return (  from_dash_integral45 ( 0 ) );
}

static  struct termios *   cast_dash_ptr46 (    struct Termios_32 *  p349 ) {
    return ( (struct termios * ) (  p349 ) );
}

static  uint32_t   u32_dash_and47 (    uint32_t  l2609 ,    uint32_t  r2611 ) {
    return ( (  l2609 ) & (  r2611 ) );
}

static  uint32_t   u32_dash_neg48 (    uint32_t  l2614 ) {
    return ( ~ (  l2614 ) );
}

struct Array_50 {
    uint32_t _arr [4];
};

struct ArrayIter_52 {
    struct Array_50  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_52   into_dash_iter53 (    struct Array_50  self2145 ) {
    return ( (struct ArrayIter_52) { .f_backing = (  self2145 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

struct Maybe_54 {
    enum {
        Maybe_54_None_t,
        Maybe_54_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_54_Just_s;
    } stuff;
};

static struct Maybe_54 Maybe_54_Just (  uint32_t  field0 ) {
    return ( struct Maybe_54 ) { .tag = Maybe_54_Just_t, .stuff = { .Maybe_54_Just_s = { .field0 = field0 } } };
};

enum Ordering_57 {
    Ordering_57_LT,
    Ordering_57_EQ,
    Ordering_57_GT,
};

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_57   cmp56 (    size_t  l174 ,    size_t  r176 ) {
    return ( builtin_size_tcmp( (  l174 ) , (  r176 ) ) );
}

struct StrConcat_64 {
    struct StrView_24  field0;
    size_t  field1;
};

static struct StrConcat_64 StrConcat_64_StrConcat (  struct StrView_24  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_64 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_63 {
    struct StrConcat_64  field0;
    struct StrView_24  field1;
};

static struct StrConcat_63 StrConcat_63_StrConcat (  struct StrConcat_64  field0 ,  struct StrView_24  field1 ) {
    return ( struct StrConcat_63 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_62 {
    struct StrConcat_63  field0;
    int32_t  field1;
};

static struct StrConcat_62 StrConcat_62_StrConcat (  struct StrConcat_63  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_62 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_61 {
    struct StrConcat_62  field0;
    struct Char_17  field1;
};

static struct StrConcat_61 StrConcat_61_StrConcat (  struct StrConcat_62  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_61 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_67 {
    struct StrView_24  field0;
    struct StrConcat_61  field1;
};

static struct StrConcat_67 StrConcat_67_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_61  field1 ) {
    return ( struct StrConcat_67 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_66 {
    struct StrConcat_67  field0;
    struct Char_17  field1;
};

static struct StrConcat_66 StrConcat_66_StrConcat (  struct StrConcat_67  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_66 ) { .field0 = field0 ,  .field1 = field1 };
};

static  const char*   from_dash_string70 (    uint8_t *  ptr77 ,    size_t  dref78 ) {
    return ( ( (const char* ) (  ptr77 ) ) );
}

static  int32_t   size_dash_i3271 (    size_t  x603 ) {
    return ( (int32_t ) (  x603 ) );
}

static  enum Unit_4   print_dash_str69 (    struct StrView_24  self1294 ) {
    ( ( printf ) ( ( (  from_dash_string70 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3271 ) ( ( ( (  self1294 ) .f_contents ) .f_count ) ) ) ,  ( ( (  self1294 ) .f_contents ) .f_ptr ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str76 (    size_t  self1379 ) {
    ( ( printf ) ( ( (  from_dash_string70 ) ( ( "%lu" ) ,  ( 3 ) ) ) ,  (  self1379 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str75 (    struct StrConcat_64  self1418 ) {
    struct StrConcat_64  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str76 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str74 (    struct StrConcat_63  self1418 ) {
    struct StrConcat_63  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str75 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str69 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str77 (    int32_t  self1355 ) {
    ( ( printf ) ( ( (  from_dash_string70 ) ( ( "%d" ) ,  ( 2 ) ) ) ,  (  self1355 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str73 (    struct StrConcat_62  self1418 ) {
    struct StrConcat_62  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str74 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str77 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

struct CharDestructured_80 {
    enum {
        CharDestructured_80_Ref_t,
        CharDestructured_80_Scalar_t,
    } tag;
    union {
        struct {
            struct Char_17  field0;
        } CharDestructured_80_Ref_s;
        struct {
            uint32_t  field0;
        } CharDestructured_80_Scalar_s;
    } stuff;
};

static struct CharDestructured_80 CharDestructured_80_Ref (  struct Char_17  field0 ) {
    return ( struct CharDestructured_80 ) { .tag = CharDestructured_80_Ref_t, .stuff = { .CharDestructured_80_Ref_s = { .field0 = field0 } } };
};

static struct CharDestructured_80 CharDestructured_80_Scalar (  uint32_t  field0 ) {
    return ( struct CharDestructured_80 ) { .tag = CharDestructured_80_Scalar_t, .stuff = { .CharDestructured_80_Scalar_s = { .field0 = field0 } } };
};

static  bool   eq82 (    uint8_t  l111 ,    uint8_t  r113 ) {
    return ( (  l111 ) == (  r113 ) );
}

static  uint8_t   size_dash_u884 (    size_t  x612 ) {
    return ( (uint8_t ) (  x612 ) );
}

static  size_t   op_dash_div85 (    size_t  l280 ,    size_t  r282 ) {
    return ( (  l280 ) / (  r282 ) );
}

static  uint8_t   get_dash_ms_dash_byte_dash_of_dash_pointer83 (    uint8_t *  ptr648 ) {
    return ( (  size_dash_u884 ) ( (  op_dash_div85 ( ( ( (size_t ) (  ptr648 ) ) ) , (  from_dash_integral0 ( 72057594037927936 ) ) ) ) ) );
}

static  uint8_t   from_dash_integral86 (    int64_t  x61 ) {
    return ( (uint8_t ) (  x61 ) );
}

static  uint32_t   size_dash_u3287 (    size_t  x606 ) {
    return ( (uint32_t ) (  x606 ) );
}

static  size_t   cast88 (    uint8_t *  x346 ) {
    return ( (size_t ) (  x346 ) );
}

static  struct CharDestructured_80   destructure81 (    struct Char_17  c685 ) {
    if ( (  eq82 ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer83 ) ( ( (  c685 ) .f_ptr ) ) ) , (  from_dash_integral86 ( 103 ) ) ) ) ) {
        return ( ( CharDestructured_80_Scalar ) ( ( (  size_dash_u3287 ) ( ( ( (  cast88 ) ( ( (  c685 ) .f_ptr ) ) ) ) ) ) ) );
    } else {
        return ( ( CharDestructured_80_Ref ) ( (  c685 ) ) );
    }
}

static uint32_t builtin_uint32_tcmp (uint32_t l, uint32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_57   cmp89 (    uint32_t  l159 ,    uint32_t  r161 ) {
    return ( builtin_uint32_tcmp( (  l159 ) , (  r161 ) ) );
}

static  uint32_t   from_dash_integral90 (    int64_t  x52 ) {
    return ( (uint32_t ) (  x52 ) );
}

static  uint8_t   cast93 (    uint32_t  x346 ) {
    return ( (uint8_t ) (  x346 ) );
}

static  uint8_t   u32_dash_u892 (    uint32_t  x627 ) {
    return ( (  cast93 ) ( (  x627 ) ) );
}

static  enum Unit_4   printf_dash_char79 (    struct Char_17  c718 ) {
    struct CharDestructured_80  dref719 = ( (  destructure81 ) ( (  c718 ) ) );
    if ( dref719.tag == CharDestructured_80_Ref_t ) {
        ( ( printf ) ( ( (  from_dash_string70 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3271 ) ( ( ( dref719 .stuff .CharDestructured_80_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref719 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref719.tag == CharDestructured_80_Scalar_t ) {
            if ( (  cmp89 ( ( dref719 .stuff .CharDestructured_80_Scalar_s .field0 ) , (  from_dash_integral90 ( 127 ) ) ) == 2 ) ) {
                const char*  temp91 = ( (  from_dash_string70 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp91);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            ( ( printf ) ( ( (  from_dash_string70 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u892 ) ( ( dref719 .stuff .CharDestructured_80_Scalar_s .field0 ) ) ) ) );
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str78 (    struct Char_17  self1319 ) {
    ( (  printf_dash_char79 ) ( (  self1319 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str72 (    struct StrConcat_61  self1418 ) {
    struct StrConcat_61  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str73 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str68 (    struct StrConcat_67  self1418 ) {
    struct StrConcat_67  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str72 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str65 (    struct StrConcat_66  self1418 ) {
    struct StrConcat_66  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str68 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  struct StrView_24   from_dash_string94 (    uint8_t *  ptr81 ,    size_t  count83 ) {
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = (  ptr81 ) , .f_count = (  count83 ) } ) } );
}

static  uint8_t *   cast96 (    uint8_t *  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_57   cmp99 (    uint8_t  l164 ,    uint8_t  r166 ) {
    return ( builtin_uint8_tcmp( (  l164 ) , (  r166 ) ) );
}

static  uint8_t   op_dash_add100 (    uint8_t  l245 ,    uint8_t  r247 ) {
    return ( (  l245 ) + (  r247 ) );
}

static  size_t   next_dash_char98 (    uint8_t *  p658 ) {
    uint8_t  pb659 = ( * (  p658 ) );
    if ( (  cmp99 ( (  pb659 ) , (  from_dash_integral86 ( 128 ) ) ) == 0 ) ) {
        return (  from_dash_integral0 ( 1 ) );
    } else {
        if ( (  cmp99 ( (  pb659 ) , (  op_dash_add100 ( (  op_dash_add100 ( (  op_dash_add100 ( (  from_dash_integral86 ( 128 ) ) , (  from_dash_integral86 ( 64 ) ) ) ) , (  from_dash_integral86 ( 32 ) ) ) ) , (  from_dash_integral86 ( 16 ) ) ) ) ) != 0 ) ) {
            return (  from_dash_integral0 ( 4 ) );
        } else {
            if ( (  cmp99 ( (  pb659 ) , (  op_dash_add100 ( (  op_dash_add100 ( (  from_dash_integral86 ( 128 ) ) , (  from_dash_integral86 ( 64 ) ) ) ) , (  from_dash_integral86 ( 32 ) ) ) ) ) != 0 ) ) {
                return (  from_dash_integral0 ( 3 ) );
            } else {
                if ( (  cmp99 ( (  pb659 ) , (  op_dash_add100 ( (  from_dash_integral86 ( 128 ) ) , (  from_dash_integral86 ( 64 ) ) ) ) ) != 0 ) ) {
                    return (  from_dash_integral0 ( 2 ) );
                } else {
                    const char*  temp101 = ( (  from_dash_string70 ) ( ( "(TODO) invalid byte (handle this better...)" ) ,  ( 43 ) ) );
                    printf("%s\n", temp101);
                    exit ( 1 );
                    ( Unit_4_Unit );
                }
            }
        }
    }
}

static  struct Char_17   scan_dash_from_dash_mem97 (    uint8_t *  p670 ) {
    size_t  clen671 = ( (  next_dash_char98 ) ( (  p670 ) ) );
    if ( (  cmp56 ( (  clen671 ) , (  from_dash_integral0 ( 4 ) ) ) == 2 ) ) {
        const char*  temp102 = ( (  from_dash_string70 ) ( ( "UTF8 STRING TOO LONG (is this correct utf8 string?)" ) ,  ( 51 ) ) );
        printf("%s\n", temp102);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( (struct Char_17) { .f_ptr = (  p670 ) , .f_num_dash_bytes = (  clen671 ) } );
}

static  struct Char_17   from_dash_charlike95 (    uint8_t *  ptr674 ,    size_t  num_dash_bytes676 ) {
    uint8_t *  ptr677 = ( ( (  cast96 ) ( (  ptr674 ) ) ) );
    return ( (  scan_dash_from_dash_mem97 ) ( (  ptr677 ) ) );
}

static  enum Unit_4   panic60 (    struct StrConcat_61  errmsg1622 ) {
    ( (  print_dash_str65 ) ( ( ( StrConcat_66_StrConcat ) ( ( ( StrConcat_67_StrConcat ) ( ( (  from_dash_string94 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1622 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint32_t *   cast_dash_ptr103 (    struct Array_50 *  p349 ) {
    return ( (uint32_t * ) (  p349 ) );
}

static  int64_t   op_dash_mul105 (    int64_t  l189 ,    int64_t  r191 ) {
    return ( (  l189 ) * (  r191 ) );
}

static  uint32_t *   offset_dash_ptr104 (    uint32_t *  x333 ,    int64_t  count335 ) {
    uint32_t  temp106;
    return ( (uint32_t * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul105 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp106 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   get_dash_ptr59 (    struct Array_50 *  arr2073 ,    size_t  i2076 ) {
    if ( ( (  cmp56 ( (  i2076 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i2076 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic60 ) ( ( ( StrConcat_61_StrConcat ) ( ( ( StrConcat_62_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2076 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2077 = ( ( (  cast_dash_ptr103 ) ( (  arr2073 ) ) ) );
    return ( (  offset_dash_ptr104 ) ( (  p2077 ) ,  ( (int64_t ) (  i2076 ) ) ) );
}

static  uint32_t   get58 (    struct Array_50 *  arr2080 ,    size_t  i2083 ) {
    return ( * ( (  get_dash_ptr59 ) ( (  arr2080 ) ,  (  i2083 ) ) ) );
}

static  size_t   op_dash_add107 (    size_t  l265 ,    size_t  r267 ) {
    return ( (  l265 ) + (  r267 ) );
}

static  struct Maybe_54   next55 (    struct ArrayIter_52 *  self2152 ) {
    if ( (  cmp56 ( ( ( * (  self2152 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_54) { .tag = Maybe_54_None_t } );
    }
    uint32_t  e2154 = ( (  get58 ) ( ( & ( ( * (  self2152 ) ) .f_backing ) ) ,  ( ( * (  self2152 ) ) .f_cur ) ) );
    (*  self2152 ) .f_cur = (  op_dash_add107 ( ( ( * (  self2152 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_54_Just ) ( (  e2154 ) ) );
}

static  uint32_t   reduce51 (    struct Array_50  iterable1033 ,    uint32_t  base1035 ,    uint32_t (*  fun1037 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1038 = (  base1035 );
    struct ArrayIter_52  it1039 = ( (  into_dash_iter53 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_54  dref1040 = ( (  next55 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_54_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_54_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_54_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    uint32_t  temp108;
    return (  temp108 );
}

static  uint32_t   u32_dash_or109 (    uint32_t  l2601 ,    uint32_t  r2603 ) {
    return ( (  l2601 ) | (  r2603 ) );
}

static  uint32_t   u32_dash_ors49 (    struct Array_50  vals2606 ) {
    return ( (  reduce51 ) ( (  vals2606 ) ,  (  from_dash_integral90 ( 0 ) ) ,  (  u32_dash_or109 ) ) );
}

static  struct Array_50   from_dash_listlike110 (    struct Array_50  self325 ) {
    return (  self325 );
}

static  uint32_t   echo111 (  ) {
    return (  from_dash_integral90 ( 8 ) );
}

static  uint32_t   icanon112 (  ) {
    return (  from_dash_integral90 ( 2 ) );
}

static  uint32_t   isig113 (  ) {
    return (  from_dash_integral90 ( 1 ) );
}

static  uint32_t   iexten114 (  ) {
    return (  from_dash_integral90 ( 32768 ) );
}

struct Array_116 {
    uint32_t _arr [5];
};

struct ArrayIter_118 {
    struct Array_116  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_118   into_dash_iter119 (    struct Array_116  self2145 ) {
    return ( (struct ArrayIter_118) { .f_backing = (  self2145 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr123 (    struct Array_116 *  p349 ) {
    return ( (uint32_t * ) (  p349 ) );
}

static  uint32_t *   get_dash_ptr122 (    struct Array_116 *  arr2073 ,    size_t  i2076 ) {
    if ( ( (  cmp56 ( (  i2076 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i2076 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic60 ) ( ( ( StrConcat_61_StrConcat ) ( ( ( StrConcat_62_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2076 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2077 = ( ( (  cast_dash_ptr123 ) ( (  arr2073 ) ) ) );
    return ( (  offset_dash_ptr104 ) ( (  p2077 ) ,  ( (int64_t ) (  i2076 ) ) ) );
}

static  uint32_t   get121 (    struct Array_116 *  arr2080 ,    size_t  i2083 ) {
    return ( * ( (  get_dash_ptr122 ) ( (  arr2080 ) ,  (  i2083 ) ) ) );
}

static  struct Maybe_54   next120 (    struct ArrayIter_118 *  self2152 ) {
    if ( (  cmp56 ( ( ( * (  self2152 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_54) { .tag = Maybe_54_None_t } );
    }
    uint32_t  e2154 = ( (  get121 ) ( ( & ( ( * (  self2152 ) ) .f_backing ) ) ,  ( ( * (  self2152 ) ) .f_cur ) ) );
    (*  self2152 ) .f_cur = (  op_dash_add107 ( ( ( * (  self2152 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_54_Just ) ( (  e2154 ) ) );
}

static  uint32_t   reduce117 (    struct Array_116  iterable1033 ,    uint32_t  base1035 ,    uint32_t (*  fun1037 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1038 = (  base1035 );
    struct ArrayIter_118  it1039 = ( (  into_dash_iter119 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_54  dref1040 = ( (  next120 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_54_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_54_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_54_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    uint32_t  temp124;
    return (  temp124 );
}

static  uint32_t   u32_dash_ors115 (    struct Array_116  vals2606 ) {
    return ( (  reduce117 ) ( (  vals2606 ) ,  (  from_dash_integral90 ( 0 ) ) ,  (  u32_dash_or109 ) ) );
}

static  struct Array_116   from_dash_listlike125 (    struct Array_116  self325 ) {
    return (  self325 );
}

static  uint32_t   brkint126 (  ) {
    return (  from_dash_integral90 ( 2 ) );
}

static  uint32_t   icrnl127 (  ) {
    return (  from_dash_integral90 ( 256 ) );
}

static  uint32_t   inpck128 (  ) {
    return (  from_dash_integral90 ( 16 ) );
}

static  uint32_t   istrip129 (  ) {
    return (  from_dash_integral90 ( 32 ) );
}

static  uint32_t   ixon130 (  ) {
    return (  from_dash_integral90 ( 1024 ) );
}

struct Array_132 {
    uint32_t _arr [1];
};

struct ArrayIter_134 {
    struct Array_132  f_backing;
    size_t  f_cur;
};

static  struct ArrayIter_134   into_dash_iter135 (    struct Array_132  self2145 ) {
    return ( (struct ArrayIter_134) { .f_backing = (  self2145 ) , .f_cur = (  from_dash_integral0 ( 0 ) ) } );
}

static  uint32_t *   cast_dash_ptr139 (    struct Array_132 *  p349 ) {
    return ( (uint32_t * ) (  p349 ) );
}

static  uint32_t *   get_dash_ptr138 (    struct Array_132 *  arr2073 ,    size_t  i2076 ) {
    if ( ( (  cmp56 ( (  i2076 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i2076 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic60 ) ( ( ( StrConcat_61_StrConcat ) ( ( ( StrConcat_62_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2076 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint32_t *  p2077 = ( ( (  cast_dash_ptr139 ) ( (  arr2073 ) ) ) );
    return ( (  offset_dash_ptr104 ) ( (  p2077 ) ,  ( (int64_t ) (  i2076 ) ) ) );
}

static  uint32_t   get137 (    struct Array_132 *  arr2080 ,    size_t  i2083 ) {
    return ( * ( (  get_dash_ptr138 ) ( (  arr2080 ) ,  (  i2083 ) ) ) );
}

static  struct Maybe_54   next136 (    struct ArrayIter_134 *  self2152 ) {
    if ( (  cmp56 ( ( ( * (  self2152 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_54) { .tag = Maybe_54_None_t } );
    }
    uint32_t  e2154 = ( (  get137 ) ( ( & ( ( * (  self2152 ) ) .f_backing ) ) ,  ( ( * (  self2152 ) ) .f_cur ) ) );
    (*  self2152 ) .f_cur = (  op_dash_add107 ( ( ( * (  self2152 ) ) .f_cur ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_54_Just ) ( (  e2154 ) ) );
}

static  uint32_t   reduce133 (    struct Array_132  iterable1033 ,    uint32_t  base1035 ,    uint32_t (*  fun1037 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1038 = (  base1035 );
    struct ArrayIter_134  it1039 = ( (  into_dash_iter135 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_54  dref1040 = ( (  next136 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_54_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_54_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_54_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    uint32_t  temp140;
    return (  temp140 );
}

static  uint32_t   u32_dash_ors131 (    struct Array_132  vals2606 ) {
    return ( (  reduce133 ) ( (  vals2606 ) ,  (  from_dash_integral90 ( 0 ) ) ,  (  u32_dash_or109 ) ) );
}

static  struct Array_132   from_dash_listlike141 (    struct Array_132  self325 ) {
    return (  self325 );
}

static  uint32_t   opost142 (  ) {
    return (  from_dash_integral90 ( 1 ) );
}

static  uint32_t   cs8143 (  ) {
    return (  from_dash_integral90 ( 48 ) );
}

static  uint8_t *   cast_dash_ptr146 (    struct Array_33 *  p349 ) {
    return ( (uint8_t * ) (  p349 ) );
}

static  uint8_t *   offset_dash_ptr147 (    uint8_t *  x333 ,    int64_t  count335 ) {
    uint8_t  temp148;
    return ( (uint8_t * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul105 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp148 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   get_dash_ptr145 (    struct Array_33 *  arr2073 ,    size_t  i2076 ) {
    if ( ( (  cmp56 ( (  i2076 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i2076 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic60 ) ( ( ( StrConcat_61_StrConcat ) ( ( ( StrConcat_62_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2076 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  p2077 = ( ( (  cast_dash_ptr146 ) ( (  arr2073 ) ) ) );
    return ( (  offset_dash_ptr147 ) ( (  p2077 ) ,  ( (int64_t ) (  i2076 ) ) ) );
}

static  enum Unit_4   set144 (    struct Array_33 *  arr2086 ,    size_t  i2089 ,    uint8_t  e2091 ) {
    uint8_t *  p2092 = ( (  get_dash_ptr145 ) ( (  arr2086 ) ,  (  i2089 ) ) );
    (*  p2092 ) = (  e2091 );
    return ( Unit_4_Unit );
}

static  size_t   vmin149 (  ) {
    return (  from_dash_integral0 ( 6 ) );
}

static  size_t   vtime150 (  ) {
    return (  from_dash_integral0 ( 5 ) );
}

static  int32_t   tcsa_dash_flush151 (  ) {
    return (  from_dash_integral45 ( 2 ) );
}

static  struct Termios_32   enable_dash_raw_dash_mode40 (  ) {
    struct Termios_32  temp41 = ( (  undefined42 ) ( ) );
    struct Termios_32 *  orig_dash_termios3054 = ( &temp41 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno44 ) ( ) ) ,  ( (  cast_dash_ptr46 ) ( (  orig_dash_termios3054 ) ) ) ) );
    struct Termios_32  raw3055 = ( * (  orig_dash_termios3054 ) );
    raw3055 .f_c_dash_lflag = ( (  u32_dash_and47 ) ( ( (  raw3055 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg48 ) ( ( (  u32_dash_ors49 ) ( ( (  from_dash_listlike110 ) ( ( (struct Array_50) { ._arr = { ( (  echo111 ) ( ) ) , ( (  icanon112 ) ( ) ) , ( (  isig113 ) ( ) ) , ( ( (  iexten114 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3055 .f_c_dash_iflag = ( (  u32_dash_and47 ) ( ( (  raw3055 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg48 ) ( ( (  u32_dash_ors115 ) ( ( (  from_dash_listlike125 ) ( ( (struct Array_116) { ._arr = { ( (  brkint126 ) ( ) ) , ( (  icrnl127 ) ( ) ) , ( (  inpck128 ) ( ) ) , ( (  istrip129 ) ( ) ) , ( ( (  ixon130 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3055 .f_c_dash_oflag = ( (  u32_dash_and47 ) ( ( (  raw3055 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg48 ) ( ( (  u32_dash_ors131 ) ( ( (  from_dash_listlike141 ) ( ( (struct Array_132) { ._arr = { ( ( (  opost142 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw3055 .f_c_dash_cflag = ( (  u32_dash_or109 ) ( ( (  raw3055 ) .f_c_dash_cflag ) ,  ( (  cs8143 ) ( ) ) ) );
    ( (  set144 ) ( ( & ( (  raw3055 ) .f_c_dash_cc ) ) ,  ( (  vmin149 ) ( ) ) ,  (  from_dash_integral86 ( 0 ) ) ) );
    ( (  set144 ) ( ( & ( (  raw3055 ) .f_c_dash_cc ) ) ,  ( (  vtime150 ) ( ) ) ,  (  from_dash_integral86 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno44 ) ( ) ) ,  ( (  tcsa_dash_flush151 ) ( ) ) ,  ( (  cast_dash_ptr46 ) ( ( & (  raw3055 ) ) ) ) ) );
    return ( * (  orig_dash_termios3054 ) );
}

struct StrViewIter_155 {
    struct StrView_24  f_ds;
    size_t  f_i;
};

static  struct StrViewIter_155   into_dash_iter157 (    struct StrViewIter_155  self1286 ) {
    return (  self1286 );
}

struct Maybe_158 {
    enum {
        Maybe_158_None_t,
        Maybe_158_Just_t,
    } tag;
    union {
        struct {
            struct Char_17  field0;
        } Maybe_158_Just_s;
    } stuff;
};

static struct Maybe_158 Maybe_158_Just (  struct Char_17  field0 ) {
    return ( struct Maybe_158 ) { .tag = Maybe_158_Just_t, .stuff = { .Maybe_158_Just_s = { .field0 = field0 } } };
};

static  int64_t   size_dash_i64160 (    size_t  x573 ) {
    return ( (int64_t ) (  x573 ) );
}

static  struct Maybe_158   next159 (    struct StrViewIter_155 *  self1289 ) {
    if ( (  cmp56 ( ( ( * (  self1289 ) ) .f_i ) , ( ( ( ( * (  self1289 ) ) .f_ds ) .f_contents ) .f_count ) ) != 0 ) ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    uint8_t *  char_dash_ptr1290 = ( ( (  offset_dash_ptr147 ) ( ( (  cast96 ) ( ( ( ( ( * (  self1289 ) ) .f_ds ) .f_contents ) .f_ptr ) ) ) ,  ( (  size_dash_i64160 ) ( ( ( * (  self1289 ) ) .f_i ) ) ) ) ) );
    struct Char_17  char1291 = ( (  scan_dash_from_dash_mem97 ) ( (  char_dash_ptr1290 ) ) );
    (*  self1289 ) .f_i = (  op_dash_add107 ( ( ( * (  self1289 ) ) .f_i ) , ( (  char1291 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_158_Just ) ( (  char1291 ) ) );
}

static  enum Unit_4   for_dash_each154 (    struct StrViewIter_155  iterable1014 ,    enum Unit_4 (*  fun1016 )(    struct Char_17  ) ) {
    struct StrViewIter_155  temp156 = ( (  into_dash_iter157 ) ( (  iterable1014 ) ) );
    struct StrViewIter_155 *  it1017 = ( &temp156 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next159 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                ( (  fun1016 ) ( ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrViewIter_155   into_dash_iter162 (    struct StrView_24  self1283 ) {
    return ( (struct StrViewIter_155) { .f_ds = (  self1283 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrViewIter_155   chars161 (    struct StrView_24  self1297 ) {
    return ( (  into_dash_iter162 ) ( (  self1297 ) ) );
}

static  enum Unit_4   print153 (    struct StrView_24  s2357 ) {
    ( (  for_dash_each154 ) ( ( (  chars161 ) ( (  s2357 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   hide_dash_cursor152 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[?25l" ) ,  ( 6 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   reset_dash_colors163 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[0m" ) ,  ( 4 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   clear_dash_screen164 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[2J" ) ,  ( 4 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   enable_dash_mouse165 (  ) {
    ( (  print_dash_str69 ) ( ( (  from_dash_string94 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ,  ( 16 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  void *   cast_dash_ptr170 (    FILE * *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of171 (    FILE *  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  FILE *   zeroed168 (  ) {
    FILE *  temp169;
    FILE *  x549 = (  temp169 );
    ( ( memset ) ( ( (  cast_dash_ptr170 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of171 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  FILE *   null_dash_ptr167 (  ) {
    return ( (  zeroed168 ) ( ) );
}

static  enum Unit_4   flush_dash_stdout166 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr167 ) ( ) ) ) );
    return ( Unit_4_Unit );
}

struct Maybe_173 {
    enum {
        Maybe_173_None_t,
        Maybe_173_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_173_Just_s;
    } stuff;
};

static struct Maybe_173 Maybe_173_Just (  const char*  field0 ) {
    return ( struct Maybe_173 ) { .tag = Maybe_173_Just_t, .stuff = { .Maybe_173_Just_s = { .field0 = field0 } } };
};

static  bool   ptr_dash_eq176 (    enum Unit_4 *  l565 ,    enum Unit_4 *  r567 ) {
    return ( (  l565 ) == (  r567 ) );
}

static  enum Unit_4 *   cast177 (    const char*  x346 ) {
    return ( (enum Unit_4 * ) (  x346 ) );
}

static  void *   cast_dash_ptr181 (    enum Unit_4 * *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of182 (    enum Unit_4 *  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  enum Unit_4 *   zeroed179 (  ) {
    enum Unit_4 *  temp180;
    enum Unit_4 *  x549 = (  temp180 );
    ( ( memset ) ( ( (  cast_dash_ptr181 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of182 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  enum Unit_4 *   null_dash_ptr178 (  ) {
    return ( (  zeroed179 ) ( ) );
}

static  struct Maybe_173   from_dash_nullable_dash_c_dash_str175 (    const char*  s570 ) {
    if ( ( (  ptr_dash_eq176 ) ( ( (  cast177 ) ( (  s570 ) ) ) ,  ( ( (  null_dash_ptr178 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_173) { .tag = Maybe_173_None_t } );
    } else {
        return ( ( Maybe_173_Just ) ( (  s570 ) ) );
    }
}

static  struct Maybe_173   get174 (    const char*  s2387 ) {
    return ( (  from_dash_nullable_dash_c_dash_str175 ) ( ( ( getenv ) ( (  s2387 ) ) ) ) );
}

static  bool   eq184 (    int32_t  l101 ,    int32_t  r103 ) {
    return ( (  l101 ) == (  r103 ) );
}

static  bool   eq183 (    const char*  l1606 ,    const char*  r1608 ) {
    return (  eq184 ( ( ( strcmp ) ( (  l1606 ) ,  (  r1608 ) ) ) , (  from_dash_integral45 ( 0 ) ) ) );
}

static  enum ColorPalette_31   query_dash_palette172 (  ) {
    struct Maybe_173  colorterm2388 = ( (  get174 ) ( ( (  from_dash_string70 ) ( ( "COLORTERM" ) ,  ( 9 ) ) ) ) );
    struct Maybe_173  dref2389 = (  colorterm2388 );
    if ( dref2389.tag == Maybe_173_Just_t ) {
        if ( ( (  eq183 ( ( dref2389 .stuff .Maybe_173_Just_s .field0 ) , ( (  from_dash_string70 ) ( ( "truecolor" ) ,  ( 9 ) ) ) ) ) || (  eq183 ( ( dref2389 .stuff .Maybe_173_Just_s .field0 ) , ( (  from_dash_string70 ) ( ( "24bit" ) ,  ( 5 ) ) ) ) ) ) ) {
            return ( ColorPalette_31_PaletteRGB );
        }
    }
    else {
        if ( dref2389.tag == Maybe_173_None_t ) {
        }
    }
    struct Maybe_173  dref2391 = ( (  get174 ) ( ( (  from_dash_string70 ) ( ( "TERM" ) ,  ( 4 ) ) ) ) );
    if ( dref2391.tag == Maybe_173_Just_t ) {
        if ( (  eq183 ( ( dref2391 .stuff .Maybe_173_Just_s .field0 ) , ( (  from_dash_string70 ) ( ( "linux" ) ,  ( 5 ) ) ) ) ) ) {
            return ( ColorPalette_31_Palette8 );
        }
    }
    else {
        if ( dref2391.tag == Maybe_173_None_t ) {
        }
    }
    return ( ColorPalette_31_Palette16 );
}

struct Tuple2_185 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_185 Tuple2_185_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_185 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Winsize_187 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  void *   cast_dash_ptr191 (    struct Winsize_187 *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of192 (    struct Winsize_187  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  struct Winsize_187   zeroed189 (  ) {
    struct Winsize_187  temp190;
    struct Winsize_187  x549 = (  temp190 );
    ( ( memset ) ( ( (  cast_dash_ptr191 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of192 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  int32_t   stdout_dash_fileno193 (  ) {
    return (  from_dash_integral45 ( 1 ) );
}

static  uint64_t   from_dash_integral195 (    int64_t  x64 ) {
    return ( (uint64_t ) (  x64 ) );
}

static  uint64_t   tiocgwinsz194 (  ) {
    return (  from_dash_integral195 ( 21523 ) );
}

static  int32_t   op_dash_neg196 (    int32_t  x222 ) {
    return ( (  from_dash_integral45 ( 0 ) ) - (  x222 ) );
}

static  bool   eq197 (    uint16_t  l116 ,    uint16_t  r118 ) {
    return ( (  l116 ) == (  r118 ) );
}

static  uint16_t   from_dash_integral198 (    int64_t  x55 ) {
    return ( (uint16_t ) (  x55 ) );
}

static  void *   cast_dash_ptr204 (    uint32_t *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of205 (    uint32_t  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  uint32_t   zeroed202 (  ) {
    uint32_t  temp203;
    uint32_t  x549 = (  temp203 );
    ( ( memset ) ( ( (  cast_dash_ptr204 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of205 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  uint16_t *   cast206 (    uint32_t *  x346 ) {
    return ( (uint16_t * ) (  x346 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed200 (    uint16_t  x552 ) {
    uint32_t  temp201 = ( (  zeroed202 ) ( ) );
    uint32_t *  y553 = ( &temp201 );
    uint16_t *  yp554 = ( (  cast206 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  uint32_t   u16_dash_u32199 (    uint16_t  x615 ) {
    return ( (  cast_dash_on_dash_zeroed200 ) ( (  x615 ) ) );
}

static  struct Tuple2_185   get_dash_dimensions186 (  ) {
    struct Winsize_187  temp188 = ( ( (  zeroed189 ) ( ) ) );
    struct Winsize_187 *  ws2376 = ( &temp188 );
    if ( ( (  eq184 ( ( ( ioctl ) ( ( (  stdout_dash_fileno193 ) ( ) ) ,  ( (  tiocgwinsz194 ) ( ) ) ,  (  ws2376 ) ) ) , (  op_dash_neg196 ( (  from_dash_integral45 ( 1 ) ) ) ) ) ) || (  eq197 ( ( ( * (  ws2376 ) ) .f_ws_dash_col ) , (  from_dash_integral198 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_185_Tuple2 ) ( (  from_dash_integral90 ( 80 ) ) ,  (  from_dash_integral90 ( 24 ) ) ) );
    }
    return ( ( Tuple2_185_Tuple2 ) ( ( (  u16_dash_u32199 ) ( ( ( * (  ws2376 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32199 ) ( ( ( * (  ws2376 ) ) .f_ws_dash_row ) ) ) ) );
}

static  struct timespec   undefined209 (  ) {
    struct timespec  temp210;
    return (  temp210 );
}

static  int32_t   clock_dash_monotonic211 (  ) {
    return (  from_dash_integral45 ( 1 ) );
}

static  struct timespec   now207 (  ) {
    struct timespec  temp208 = ( (  undefined209 ) ( ) );
    struct timespec *  t3016 = ( &temp208 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic211 ) ( ) ) ,  (  t3016 ) ) );
    return ( * (  t3016 ) );
}

struct env212 {
    bool *  should_dash_resize3068;
};

struct envunion213 {
    enum Unit_4  (*fun) (  struct env212*  ,    int32_t  );
    struct env212 env;
};

struct envunion213  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig214 ) {
    struct envunion213  temp215 = _intr_sigarr [  __intr__sig214 ];
    temp215.fun ( &temp215.env ,  __intr__sig214 );
}

static  enum Unit_4  _intr_register_signal (    int32_t  __intr__sig216 ,   struct envunion213  __intr__fun217 ) {
    _intr_sigarr [  __intr__sig216 ] =  __intr__fun217;
    signal(  __intr__sig216 , _intr_sighandle );
    return Unit_4_Unit;
}

static  enum Unit_4   lam218 (   struct env212* env ,    int32_t  dref3075 ) {
    (* env->should_dash_resize3068 ) = ( true );
    return ( Unit_4_Unit );
}

static  uint32_t   fst219 (    struct Tuple2_185  dref1190 ) {
    return ( dref1190 .field0 );
}

static  uint32_t   snd220 (    struct Tuple2_185  dref1193 ) {
    return ( dref1193 .field1 );
}

static  struct Tui_30   mk39 (   struct env26* env ) {
    struct Termios_32  og_dash_termios3070 = ( (  enable_dash_raw_dash_mode40 ) ( ) );
    ( (  hide_dash_cursor152 ) ( ) );
    ( (  reset_dash_colors163 ) ( ) );
    ( (  clear_dash_screen164 ) ( ) );
    ( (  enable_dash_mouse165 ) ( ) );
    ( (  flush_dash_stdout166 ) ( ) );
    enum ColorPalette_31  palette3071 = ( (  query_dash_palette172 ) ( ) );
    struct Tuple2_185  dims3072 = ( (  get_dash_dimensions186 ) ( ) );
    uint32_t  fps3073 = (  from_dash_integral90 ( 60 ) );
    struct timespec  last_dash_sync3074 = ( (  now207 ) ( ) );
    struct env212 envinst212 = {
        .should_dash_resize3068 = env->should_dash_resize3068 ,
    };
    ( _intr_register_signal ( (  from_dash_integral45 ( 28 ) ) , ( (struct envunion213){ .fun = (  enum Unit_4  (*) (  struct env212*  ,    int32_t  ) )lam218 , .env =  envinst212 } ) ) );
    return ( (struct Tui_30) { .f_width = ( (  fst219 ) ( (  dims3072 ) ) ) , .f_height = ( (  snd220 ) ( (  dims3072 ) ) ) , .f_target_dash_fps = (  fps3073 ) , .f_actual_dash_fps = (  from_dash_integral90 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync3074 ) , .f_fps_dash_ts = (  last_dash_sync3074 ) , .f_fps_dash_count = (  from_dash_integral90 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios3070 ) , .f_palette = (  palette3071 ) , .f_should_dash_redraw = ( true ) } );
}

static  enum CAllocator_6   idc221 (  ) {
    return ( CAllocator_6_CAllocator );
}

enum Color8_226 {
    Color8_226_Black8,
    Color8_226_Red8,
    Color8_226_Green8,
    Color8_226_Yellow8,
    Color8_226_Blue8,
    Color8_226_Magenta8,
    Color8_226_Cyan8,
    Color8_226_White8,
};

enum Color16_227 {
    Color16_227_Black16,
    Color16_227_Red16,
    Color16_227_Green16,
    Color16_227_Yellow16,
    Color16_227_Blue16,
    Color16_227_Magenta16,
    Color16_227_Cyan16,
    Color16_227_White16,
    Color16_227_BrightBlack16,
    Color16_227_BrightRed16,
    Color16_227_BrightGreen16,
    Color16_227_BrightYellow16,
    Color16_227_BrightBlue16,
    Color16_227_BrightMagenta16,
    Color16_227_BrightCyan16,
    Color16_227_BrightWhite16,
};

struct RGB_228 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_225 {
    enum {
        Color_225_ColorDefault_t,
        Color_225_Color8_t,
        Color_225_Color16_t,
        Color_225_Color256_t,
        Color_225_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_226  field0;
        } Color_225_Color8_s;
        struct {
            enum Color16_227  field0;
        } Color_225_Color16_s;
        struct {
            uint8_t  field0;
        } Color_225_Color256_s;
        struct {
            struct RGB_228  field0;
        } Color_225_ColorRGB_s;
    } stuff;
};

static struct Color_225 Color_225_Color8 (  enum Color8_226  field0 ) {
    return ( struct Color_225 ) { .tag = Color_225_Color8_t, .stuff = { .Color_225_Color8_s = { .field0 = field0 } } };
};

static struct Color_225 Color_225_Color16 (  enum Color16_227  field0 ) {
    return ( struct Color_225 ) { .tag = Color_225_Color16_t, .stuff = { .Color_225_Color16_s = { .field0 = field0 } } };
};

static struct Color_225 Color_225_Color256 (  uint8_t  field0 ) {
    return ( struct Color_225 ) { .tag = Color_225_Color256_t, .stuff = { .Color_225_Color256_s = { .field0 = field0 } } };
};

static struct Color_225 Color_225_ColorRGB (  struct RGB_228  field0 ) {
    return ( struct Color_225 ) { .tag = Color_225_ColorRGB_t, .stuff = { .Color_225_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_224 {
    struct Char_17  f_c;
    struct Color_225  f_fg;
    struct Color_225  f_bg;
};

struct Slice_223 {
    struct Cell_224 *  f_ptr;
    size_t  f_count;
};

struct Screen_222 {
    enum CAllocator_6  f_al;
    struct Tui_30 *  f_tui;
    struct Slice_223  f_current;
    struct Slice_223  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_225  f_default_dash_fg;
    struct Color_225  f_default_dash_bg;
};

struct TypeSize_233 {
    size_t  f_size;
};

static  struct TypeSize_233   get_dash_typesize232 (  ) {
    struct Cell_224  temp234;
    return ( (struct TypeSize_233) { .f_size = ( sizeof( ( (  temp234 ) ) ) ) } );
}

static  struct Cell_224 *   cast_dash_ptr235 (    void *  p349 ) {
    return ( (struct Cell_224 * ) (  p349 ) );
}

static  size_t   op_dash_mul236 (    size_t  l275 ,    size_t  r277 ) {
    return ( (  l275 ) * (  r277 ) );
}

static  struct Slice_223   allocate231 (    enum CAllocator_6  dref1857 ,    size_t  count1859 ) {
    if (!(  dref1857 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1860 = ( ( ( (  get_dash_typesize232 ) ( ) ) ) .f_size );
    struct Cell_224 *  ptr1861 = ( (  cast_dash_ptr235 ) ( ( ( malloc ) ( (  op_dash_mul236 ( (  size1860 ) , (  count1859 ) ) ) ) ) ) );
    return ( (struct Slice_223) { .f_ptr = (  ptr1861 ) , .f_count = (  count1859 ) } );
}

static  void *   cast_dash_ptr242 (    size_t *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of243 (    size_t  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  size_t   zeroed240 (  ) {
    size_t  temp241;
    size_t  x549 = (  temp241 );
    ( ( memset ) ( ( (  cast_dash_ptr242 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of243 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  uint32_t *   cast244 (    size_t *  x346 ) {
    return ( (uint32_t * ) (  x346 ) );
}

static  size_t   cast_dash_on_dash_zeroed238 (    uint32_t  x552 ) {
    size_t  temp239 = ( (  zeroed240 ) ( ) );
    size_t *  y553 = ( &temp239 );
    uint32_t *  yp554 = ( (  cast244 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  size_t   u32_dash_size237 (    uint32_t  x621 ) {
    return ( (  cast_dash_on_dash_zeroed238 ) ( (  x621 ) ) );
}

static  uint32_t   op_dash_mul245 (    uint32_t  l235 ,    uint32_t  r237 ) {
    return ( (  l235 ) * (  r237 ) );
}

struct Range_248 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_248 Range_248_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_248 ) { .field0 = field0 ,  .field1 = field1 };
};

struct env249 {
    struct Slice_223  s1815;
    struct Cell_224 (*  fun1817 )(    struct Cell_224  );
    ;
    ;
    ;
};

struct envunion250 {
    enum Unit_4  (*fun) (  struct env249*  ,    int32_t  );
    struct env249 env;
};

struct RangeIter_251 {
    struct Range_248  field0;
    int32_t  field1;
};

static struct RangeIter_251 RangeIter_251_RangeIter (  struct Range_248  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_251 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_251   into_dash_iter253 (    struct Range_248  dref836 ) {
    return ( ( RangeIter_251_RangeIter ) ( ( ( Range_248_Range ) ( ( dref836 .field0 ) ,  ( dref836 .field1 ) ) ) ,  ( dref836 .field0 ) ) );
}

struct Maybe_254 {
    enum {
        Maybe_254_None_t,
        Maybe_254_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_254_Just_s;
    } stuff;
};

static struct Maybe_254 Maybe_254_Just (  int32_t  field0 ) {
    return ( struct Maybe_254 ) { .tag = Maybe_254_Just_t, .stuff = { .Maybe_254_Just_s = { .field0 = field0 } } };
};

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_57   cmp256 (    int32_t  l154 ,    int32_t  r156 ) {
    return ( builtin_int32_tcmp( (  l154 ) , (  r156 ) ) );
}

static  int32_t   op_dash_add257 (    int32_t  l202 ,    int32_t  r204 ) {
    return ( (  l202 ) + (  r204 ) );
}

static  struct Maybe_254   next255 (    struct RangeIter_251 *  self844 ) {
    struct RangeIter_251  dref845 = ( * (  self844 ) );
    if ( true ) {
        if ( (  cmp256 ( ( dref845 .field1 ) , ( dref845 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
        }
        struct Maybe_254  x849 = ( ( Maybe_254_Just ) ( ( dref845 .field1 ) ) );
        (*  self844 ) = ( ( RangeIter_251_RangeIter ) ( ( ( Range_248_Range ) ( ( dref845 .field0 .field0 ) ,  ( dref845 .field0 .field1 ) ) ) ,  (  op_dash_add257 ( ( dref845 .field1 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
        return (  x849 );
    }
}

static  enum Unit_4   for_dash_each247 (    struct Range_248  iterable1014 ,   struct envunion250  fun1016 ) {
    struct RangeIter_251  temp252 = ( (  into_dash_iter253 ) ( (  iterable1014 ) ) );
    struct RangeIter_251 *  it1017 = ( &temp252 );
    while ( ( true ) ) {
        struct Maybe_254  dref1018 = ( (  next255 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_254_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_254_Just_t ) {
                struct envunion250  temp258 = (  fun1016 );
                ( temp258.fun ( &temp258.env ,  ( dref1018 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct Range_248   to259 (    int32_t  from827 ,    int32_t  to829 ) {
    return ( ( Range_248_Range ) ( (  from827 ) ,  (  to829 ) ) );
}

static  size_t   op_dash_sub260 (    size_t  l270 ,    size_t  r272 ) {
    return ( (  l270 ) - (  r272 ) );
}

struct StrConcat_266 {
    struct StrConcat_63  field0;
    size_t  field1;
};

static struct StrConcat_266 StrConcat_266_StrConcat (  struct StrConcat_63  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_266 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_265 {
    struct StrConcat_266  field0;
    struct Char_17  field1;
};

static struct StrConcat_265 StrConcat_265_StrConcat (  struct StrConcat_266  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_265 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_269 {
    struct StrView_24  field0;
    struct StrConcat_265  field1;
};

static struct StrConcat_269 StrConcat_269_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_265  field1 ) {
    return ( struct StrConcat_269 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_268 {
    struct StrConcat_269  field0;
    struct Char_17  field1;
};

static struct StrConcat_268 StrConcat_268_StrConcat (  struct StrConcat_269  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_268 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str272 (    struct StrConcat_266  self1418 ) {
    struct StrConcat_266  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str74 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str76 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str271 (    struct StrConcat_265  self1418 ) {
    struct StrConcat_265  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str272 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str270 (    struct StrConcat_269  self1418 ) {
    struct StrConcat_269  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str271 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str267 (    struct StrConcat_268  self1418 ) {
    struct StrConcat_268  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str270 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic264 (    struct StrConcat_265  errmsg1622 ) {
    ( (  print_dash_str267 ) ( ( ( StrConcat_268_StrConcat ) ( ( ( StrConcat_269_StrConcat ) ( ( (  from_dash_string94 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1622 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_224 *   offset_dash_ptr273 (    struct Cell_224 *  x333 ,    int64_t  count335 ) {
    struct Cell_224  temp274;
    return ( (struct Cell_224 * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul105 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp274 ) ) ) ) ) ) ) ) );
}

static  struct Cell_224 *   get_dash_ptr263 (    struct Slice_223  slice1667 ,    size_t  i1669 ) {
    if ( ( (  cmp56 ( (  i1669 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i1669 ) , ( (  slice1667 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic264 ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_266_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1669 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1667 ) .f_count ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    struct Cell_224 *  elem_dash_ptr1670 = ( (  offset_dash_ptr273 ) ( ( (  slice1667 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  i1669 ) ) ) ) );
    return (  elem_dash_ptr1670 );
}

static  enum Unit_4   set262 (    struct Slice_223  slice1684 ,    size_t  i1686 ,    struct Cell_224  x1688 ) {
    struct Cell_224 *  ep1689 = ( (  get_dash_ptr263 ) ( (  slice1684 ) ,  (  i1686 ) ) );
    (*  ep1689 ) = (  x1688 );
    return ( Unit_4_Unit );
}

static  size_t   i32_dash_size275 (    int32_t  x585 ) {
    return ( (size_t ) ( (int64_t ) (  x585 ) ) );
}

struct Maybe_279 {
    enum {
        Maybe_279_None_t,
        Maybe_279_Just_t,
    } tag;
    union {
        struct {
            struct Cell_224  field0;
        } Maybe_279_Just_s;
    } stuff;
};

static struct Maybe_279 Maybe_279_Just (  struct Cell_224  field0 ) {
    return ( struct Maybe_279 ) { .tag = Maybe_279_Just_t, .stuff = { .Maybe_279_Just_s = { .field0 = field0 } } };
};

static  struct Cell_224   undefined280 (  ) {
    struct Cell_224  temp281;
    return (  temp281 );
}

static  struct Cell_224   or_dash_fail278 (    struct Maybe_279  x1635 ,    struct StrConcat_265  errmsg1637 ) {
    struct Maybe_279  dref1638 = (  x1635 );
    if ( dref1638.tag == Maybe_279_None_t ) {
        ( (  panic264 ) ( (  errmsg1637 ) ) );
        return ( (  undefined280 ) ( ) );
    }
    else {
        if ( dref1638.tag == Maybe_279_Just_t ) {
            return ( dref1638 .stuff .Maybe_279_Just_s .field0 );
        }
    }
}

static  struct Maybe_279   try_dash_get282 (    struct Slice_223  slice1673 ,    size_t  i1675 ) {
    if ( ( (  cmp56 ( (  i1675 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i1675 ) , ( (  slice1673 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_279) { .tag = Maybe_279_None_t } );
    }
    struct Cell_224 *  elem_dash_ptr1676 = ( (  offset_dash_ptr273 ) ( ( (  slice1673 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  i1675 ) ) ) ) );
    return ( ( Maybe_279_Just ) ( ( * (  elem_dash_ptr1676 ) ) ) );
}

static  struct Cell_224   get277 (    struct Slice_223  slice1679 ,    size_t  i1681 ) {
    return ( (  or_dash_fail278 ) ( ( (  try_dash_get282 ) ( (  slice1679 ) ,  (  i1681 ) ) ) ,  ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_266_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1681 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1679 ) .f_count ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  struct Cell_224   elem_dash_get276 (    struct Slice_223  self1777 ,    size_t  idx1779 ) {
    return ( (  get277 ) ( (  self1777 ) ,  (  idx1779 ) ) );
}

static  enum Unit_4   lam261 (   struct env249* env ,    int32_t  i1819 ) {
    return ( (  set262 ) ( ( env->s1815 ) ,  ( (  i32_dash_size275 ) ( (  i1819 ) ) ) ,  ( ( env->fun1817 ) ( (  elem_dash_get276 ( ( env->s1815 ) , ( (  i32_dash_size275 ) ( (  i1819 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map246 (    struct Slice_223  s1815 ,    struct Cell_224 (*  fun1817 )(    struct Cell_224  ) ) {
    struct env249 envinst249 = {
        .s1815 =  s1815 ,
        .fun1817 =  fun1817 ,
    };
    ( (  for_dash_each247 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_i3271 ) ( (  op_dash_sub260 ( ( (  s1815 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion250){ .fun = (  enum Unit_4  (*) (  struct env249*  ,    int32_t  ) )lam261 , .env =  envinst249 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_224   lam283 (    struct Cell_224  dref3177 ) {
    return ( (struct Cell_224) { .f_c = ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) , .f_bg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) } );
}

struct env286 {
    struct Slice_223  s1815;
    struct Cell_224 (*  fun1817 )(    struct Cell_224  );
    ;
    ;
    ;
};

struct envunion287 {
    enum Unit_4  (*fun) (  struct env286*  ,    int32_t  );
    struct env286 env;
};

static  enum Unit_4   for_dash_each285 (    struct Range_248  iterable1014 ,   struct envunion287  fun1016 ) {
    struct RangeIter_251  temp288 = ( (  into_dash_iter253 ) ( (  iterable1014 ) ) );
    struct RangeIter_251 *  it1017 = ( &temp288 );
    while ( ( true ) ) {
        struct Maybe_254  dref1018 = ( (  next255 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_254_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_254_Just_t ) {
                struct envunion287  temp289 = (  fun1016 );
                ( temp289.fun ( &temp289.env ,  ( dref1018 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam290 (   struct env286* env ,    int32_t  i1819 ) {
    return ( (  set262 ) ( ( env->s1815 ) ,  ( (  i32_dash_size275 ) ( (  i1819 ) ) ) ,  ( ( env->fun1817 ) ( (  elem_dash_get276 ( ( env->s1815 ) , ( (  i32_dash_size275 ) ( (  i1819 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map284 (    struct Slice_223  s1815 ,    struct Cell_224 (*  fun1817 )(    struct Cell_224  ) ) {
    struct env286 envinst286 = {
        .s1815 =  s1815 ,
        .fun1817 =  fun1817 ,
    };
    ( (  for_dash_each285 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_i3271 ) ( (  op_dash_sub260 ( ( (  s1815 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion287){ .fun = (  enum Unit_4  (*) (  struct env286*  ,    int32_t  ) )lam290 , .env =  envinst286 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_224   lam291 (    struct Cell_224  dref3179 ) {
    return ( (struct Cell_224) { .f_c = ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) , .f_bg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) } );
}

static  struct Screen_222   mk_dash_screen230 (    struct Tui_30 *  tui3173 ,    enum CAllocator_6  al3175 ) {
    struct Slice_223  cur3176 = ( (  allocate231 ) ( (  al3175 ) ,  ( (  u32_dash_size237 ) ( (  op_dash_mul245 ( ( ( * (  tui3173 ) ) .f_width ) , ( ( * (  tui3173 ) ) .f_height ) ) ) ) ) ) );
    ( (  map246 ) ( (  cur3176 ) ,  (  lam283 ) ) );
    struct Slice_223  prev3178 = ( (  allocate231 ) ( (  al3175 ) ,  ( (  u32_dash_size237 ) ( (  op_dash_mul245 ( ( ( * (  tui3173 ) ) .f_width ) , ( ( * (  tui3173 ) ) .f_height ) ) ) ) ) ) );
    ( (  map284 ) ( (  prev3178 ) ,  (  lam291 ) ) );
    return ( (struct Screen_222) { .f_current = (  cur3176 ) , .f_previous = (  prev3178 ) , .f_al = (  al3175 ) , .f_tui = (  tui3173 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) } );
}

struct Slice_292 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  const char* *   offset_dash_ptr294 (    const char* *  x333 ,    int64_t  count335 ) {
    const char*  temp295;
    return ( (const char* * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul105 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp295 ) ) ) ) ) ) ) ) );
}

static  int64_t   from_dash_integral296 (    int64_t  x46 ) {
    return (  x46 );
}

static  struct Slice_292   get293 (  ) {
    return ( (struct Slice_292) { .f_ptr = ( (  offset_dash_ptr294 ) ( ( _global_argv ) ,  (  from_dash_integral296 ( 1 ) ) ) ) , .f_count = (  op_dash_sub260 ( ( _global_argc ) , (  from_dash_integral0 ( 1 ) ) ) ) } );
}

static  struct Maybe_173   try_dash_get297 (    struct Slice_292  slice1673 ,    size_t  i1675 ) {
    if ( ( (  cmp56 ( (  i1675 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i1675 ) , ( (  slice1673 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_173) { .tag = Maybe_173_None_t } );
    }
    const char* *  elem_dash_ptr1676 = ( (  offset_dash_ptr294 ) ( ( (  slice1673 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  i1675 ) ) ) ) );
    return ( ( Maybe_173_Just ) ( ( * (  elem_dash_ptr1676 ) ) ) );
}

struct Maybe_298 {
    enum {
        Maybe_298_None_t,
        Maybe_298_Just_t,
    } tag;
    union {
        struct {
            struct StrView_24  field0;
        } Maybe_298_Just_s;
    } stuff;
};

static struct Maybe_298 Maybe_298_Just (  struct StrView_24  field0 ) {
    return ( struct Maybe_298 ) { .tag = Maybe_298_Just_t, .stuff = { .Maybe_298_Just_s = { .field0 = field0 } } };
};

static  const char*   from_dash_charlike300 (    uint8_t *  ptr73 ,    size_t  dref74 ) {
    return ( ( (const char* ) (  ptr73 ) ) );
}

static  bool   is_dash_ptr_dash_null301 (    FILE *  p559 ) {
    return ( (  p559 ) == ( (  null_dash_ptr167 ) ( ) ) );
}

static  int32_t   seek_dash_end302 (  ) {
    return (  from_dash_integral45 ( 2 ) );
}

static  int32_t   seek_dash_set303 (  ) {
    return (  from_dash_integral45 ( 0 ) );
}

struct TypeSize_306 {
    size_t  f_size;
};

static  struct TypeSize_306   get_dash_typesize305 (  ) {
    uint8_t  temp307;
    return ( (struct TypeSize_306) { .f_size = ( sizeof( ( (  temp307 ) ) ) ) } );
}

static  uint8_t *   cast_dash_ptr308 (    void *  p349 ) {
    return ( (uint8_t * ) (  p349 ) );
}

static  struct Slice_7   allocate304 (    enum CAllocator_6  dref1857 ,    size_t  count1859 ) {
    if (!(  dref1857 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1860 = ( ( ( (  get_dash_typesize305 ) ( ) ) ) .f_size );
    uint8_t *  ptr1861 = ( (  cast_dash_ptr308 ) ( ( ( malloc ) ( (  op_dash_mul236 ( (  size1860 ) , (  count1859 ) ) ) ) ) ) );
    return ( (struct Slice_7) { .f_ptr = (  ptr1861 ) , .f_count = (  count1859 ) } );
}

static  uint8_t *   get_dash_ptr310 (    struct Slice_7  slice1667 ,    size_t  i1669 ) {
    if ( ( (  cmp56 ( (  i1669 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i1669 ) , ( (  slice1667 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic264 ) ( ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_266_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1669 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1667 ) .f_count ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    uint8_t *  elem_dash_ptr1670 = ( (  offset_dash_ptr147 ) ( ( (  slice1667 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  i1669 ) ) ) ) );
    return (  elem_dash_ptr1670 );
}

static  enum Unit_4   set309 (    struct Slice_7  slice1684 ,    size_t  i1686 ,    uint8_t  x1688 ) {
    uint8_t *  ep1689 = ( (  get_dash_ptr310 ) ( (  slice1684 ) ,  (  i1686 ) ) );
    (*  ep1689 ) = (  x1688 );
    return ( Unit_4_Unit );
}

static  uint8_t   char_dash_u8311 (    struct Char_17  c691 ) {
    struct CharDestructured_80  dref692 = ( (  destructure81 ) ( (  c691 ) ) );
    if ( dref692.tag == CharDestructured_80_Ref_t ) {
        return ( * ( ( dref692 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) );
    }
    else {
        if ( dref692.tag == CharDestructured_80_Scalar_t ) {
            return ( (  u32_dash_u892 ) ( ( dref692 .stuff .CharDestructured_80_Scalar_s .field0 ) ) );
        }
    }
}

static  struct Char_17   nullchar312 (  ) {
    return ( (  from_dash_charlike95 ) ( ( "\x00" ) ,  ( 1 ) ) );
}

static  struct Maybe_298   try_dash_read_dash_contents299 (    const char*  filename2710 ,    enum CAllocator_6  al2712 ) {
    FILE *  file2713 = ( ( fopen ) ( (  filename2710 ) ,  ( (  from_dash_charlike300 ) ( ( "r" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null301 ) ( (  file2713 ) ) ) ) {
        return ( (struct Maybe_298) { .tag = Maybe_298_None_t } );
    }
    ( ( fseek ) ( (  file2713 ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  seek_dash_end302 ) ( ) ) ) );
    int32_t  file_dash_size2714 = ( ( ftell ) ( (  file2713 ) ) );
    ( ( fseek ) ( (  file2713 ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  seek_dash_set303 ) ( ) ) ) );
    struct Slice_7  file_dash_buf2715 = ( ( (  allocate304 ) ( (  al2712 ) ,  (  op_dash_add107 ( ( (  i32_dash_size275 ) ( (  file_dash_size2714 ) ) ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2715 ) .f_ptr ) ,  (  from_dash_integral45 ( 1 ) ) ,  (  file_dash_size2714 ) ,  (  file2713 ) ) );
    ( (  set309 ) ( (  file_dash_buf2715 ) ,  ( (  i32_dash_size275 ) ( (  file_dash_size2714 ) ) ) ,  ( (  char_dash_u8311 ) ( ( (  nullchar312 ) ( ) ) ) ) ) );
    ( ( fclose ) ( (  file2713 ) ) );
    struct StrView_24  str2716 = ( (struct StrView_24) { .f_contents = (  file_dash_buf2715 ) } );
    return ( ( Maybe_298_Just ) ( (  str2716 ) ) );
}

struct Maybe_314 {
    enum {
        Maybe_314_None_t,
        Maybe_314_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_314_Just_s;
    } stuff;
};

static struct Maybe_314 Maybe_314_Just (  int64_t  field0 ) {
    return ( struct Maybe_314 ) { .tag = Maybe_314_Just_t, .stuff = { .Maybe_314_Just_s = { .field0 = field0 } } };
};

struct StrConcat_318 {
    struct StrView_24  field0;
    struct StrView_24  field1;
};

static struct StrConcat_318 StrConcat_318_StrConcat (  struct StrView_24  field0 ,  struct StrView_24  field1 ) {
    return ( struct StrConcat_318 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_317 {
    struct StrConcat_318  field0;
    struct Char_17  field1;
};

static struct StrConcat_317 StrConcat_317_StrConcat (  struct StrConcat_318  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_317 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str319 (    struct StrConcat_318  self1418 ) {
    struct StrConcat_318  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str69 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str316 (    struct StrConcat_317  self1418 ) {
    struct StrConcat_317  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str319 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic315 (    struct StrView_24  errmsg1622 ) {
    ( (  print_dash_str316 ) ( ( ( StrConcat_317_StrConcat ) ( ( ( StrConcat_318_StrConcat ) ( ( (  from_dash_string94 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1622 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  int64_t   undefined320 (  ) {
    int64_t  temp321;
    return (  temp321 );
}

static  int64_t   or_dash_fail313 (    struct Maybe_314  x1635 ,    struct StrView_24  errmsg1637 ) {
    struct Maybe_314  dref1638 = (  x1635 );
    if ( dref1638.tag == Maybe_314_None_t ) {
        ( (  panic315 ) ( (  errmsg1637 ) ) );
        return ( (  undefined320 ) ( ) );
    }
    else {
        if ( dref1638.tag == Maybe_314_Just_t ) {
            return ( dref1638 .stuff .Maybe_314_Just_s .field0 );
        }
    }
}

static  struct Maybe_158   head323 (    struct StrViewIter_155  it1082 ) {
    struct StrViewIter_155  temp324 = ( (  into_dash_iter157 ) ( (  it1082 ) ) );
    return ( (  next159 ) ( ( &temp324 ) ) );
}

static  struct Maybe_314   reduce325 (    struct StrViewIter_155  iterable1033 ,    struct Maybe_314  base1035 ,    struct Maybe_314 (*  fun1037 )(    struct Char_17  ,    struct Maybe_314  ) ) {
    struct Maybe_314  x1038 = (  base1035 );
    struct StrViewIter_155  it1039 = ( (  into_dash_iter157 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_158  dref1040 = ( (  next159 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_158_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_158_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_158_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    struct Maybe_314  temp326;
    return (  temp326 );
}

static  bool   is_dash_digit329 (    struct Char_17  c2251 ) {
    return ( (  cmp99 ( ( (  char_dash_u8311 ) ( (  c2251 ) ) ) , ( (  char_dash_u8311 ) ( ( (  from_dash_charlike95 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) != 0 ) && (  cmp99 ( ( (  char_dash_u8311 ) ( (  c2251 ) ) ) , ( (  char_dash_u8311 ) ( ( (  from_dash_charlike95 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) != 2 ) );
}

static  void *   cast_dash_ptr335 (    int32_t *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of336 (    int32_t  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  int32_t   zeroed333 (  ) {
    int32_t  temp334;
    int32_t  x549 = (  temp334 );
    ( ( memset ) ( ( (  cast_dash_ptr335 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of336 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  uint8_t *   cast337 (    int32_t *  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static  int32_t   cast_dash_on_dash_zeroed331 (    uint8_t  x552 ) {
    int32_t  temp332 = ( (  zeroed333 ) ( ) );
    int32_t *  y553 = ( &temp332 );
    uint8_t *  yp554 = ( (  cast337 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  int32_t   u8_dash_i32330 (    uint8_t  x639 ) {
    return ( (  cast_dash_on_dash_zeroed331 ) ( (  x639 ) ) );
}

static  uint8_t   op_dash_sub338 (    uint8_t  l250 ,    uint8_t  r252 ) {
    return ( (  l250 ) - (  r252 ) );
}

static  struct Maybe_254   parse_dash_digit328 (    struct Char_17  c2254 ) {
    if ( ( (  is_dash_digit329 ) ( (  c2254 ) ) ) ) {
        return ( ( Maybe_254_Just ) ( ( (  u8_dash_i32330 ) ( (  op_dash_sub338 ( ( (  char_dash_u8311 ) ( (  c2254 ) ) ) , ( (  char_dash_u8311 ) ( ( (  from_dash_charlike95 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_254) { .tag = Maybe_254_None_t } );
    }
}

static  int64_t   op_dash_add339 (    int64_t  l179 ,    int64_t  r181 ) {
    return ( (  l179 ) + (  r181 ) );
}

static  int64_t   i32_dash_i64340 (    int32_t  x582 ) {
    return ( (int64_t ) (  x582 ) );
}

static  struct Maybe_314   sequence_dash_maybe327 (    struct Char_17  e2260 ,    struct Maybe_314  b2262 ) {
    struct Maybe_314  dref2263 = (  b2262 );
    if ( dref2263.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    else {
        if ( dref2263.tag == Maybe_314_Just_t ) {
            struct Maybe_254  dref2265 = ( (  parse_dash_digit328 ) ( (  e2260 ) ) );
            if ( dref2265.tag == Maybe_254_None_t ) {
                return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
            }
            else {
                if ( dref2265.tag == Maybe_254_Just_t ) {
                    return ( ( Maybe_314_Just ) ( (  op_dash_add339 ( (  op_dash_mul105 ( ( dref2263 .stuff .Maybe_314_Just_s .field0 ) , (  from_dash_integral296 ( 10 ) ) ) ) , ( (  i32_dash_i64340 ) ( ( dref2265 .stuff .Maybe_254_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_314   parse_dash_int322 (    struct StrView_24  s2257 ) {
    struct StrViewIter_155  cs2267 = ( (  chars161 ) ( (  s2257 ) ) );
    struct Maybe_158  dref2268 = ( (  head323 ) ( (  cs2267 ) ) );
    if ( dref2268.tag == Maybe_158_Just_t ) {
        return ( (  reduce325 ) ( (  cs2267 ) ,  ( ( Maybe_314_Just ) ( (  from_dash_integral296 ( 0 ) ) ) ) ,  (  sequence_dash_maybe327 ) ) );
    }
    else {
        if ( dref2268.tag == Maybe_158_None_t ) {
            return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
        }
    }
}

static  struct StrView_24   undefined342 (  ) {
    struct StrView_24  temp343;
    return (  temp343 );
}

static  struct StrView_24   or_dash_fail341 (    struct Maybe_298  x1635 ,    struct StrView_24  errmsg1637 ) {
    struct Maybe_298  dref1638 = (  x1635 );
    if ( dref1638.tag == Maybe_298_None_t ) {
        ( (  panic315 ) ( (  errmsg1637 ) ) );
        return ( (  undefined342 ) ( ) );
    }
    else {
        if ( dref1638.tag == Maybe_298_Just_t ) {
            return ( dref1638 .stuff .Maybe_298_Just_s .field0 );
        }
    }
}

struct LineIter_345 {
    struct StrView_24  f_og;
    size_t  f_last;
};

struct Maybe_350 {
    enum {
        Maybe_350_None_t,
        Maybe_350_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_350_Just_s;
    } stuff;
};

static struct Maybe_350 Maybe_350_Just (  uint8_t  field0 ) {
    return ( struct Maybe_350 ) { .tag = Maybe_350_Just_t, .stuff = { .Maybe_350_Just_s = { .field0 = field0 } } };
};

static  uint8_t   undefined351 (  ) {
    uint8_t  temp352;
    return (  temp352 );
}

static  uint8_t   or_dash_fail349 (    struct Maybe_350  x1635 ,    struct StrConcat_265  errmsg1637 ) {
    struct Maybe_350  dref1638 = (  x1635 );
    if ( dref1638.tag == Maybe_350_None_t ) {
        ( (  panic264 ) ( (  errmsg1637 ) ) );
        return ( (  undefined351 ) ( ) );
    }
    else {
        if ( dref1638.tag == Maybe_350_Just_t ) {
            return ( dref1638 .stuff .Maybe_350_Just_s .field0 );
        }
    }
}

static  struct Maybe_350   try_dash_get353 (    struct Slice_7  slice1673 ,    size_t  i1675 ) {
    if ( ( (  cmp56 ( (  i1675 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i1675 ) , ( (  slice1673 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_350) { .tag = Maybe_350_None_t } );
    }
    uint8_t *  elem_dash_ptr1676 = ( (  offset_dash_ptr147 ) ( ( (  slice1673 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  i1675 ) ) ) ) );
    return ( ( Maybe_350_Just ) ( ( * (  elem_dash_ptr1676 ) ) ) );
}

static  uint8_t   get348 (    struct Slice_7  slice1679 ,    size_t  i1681 ) {
    return ( (  or_dash_fail349 ) ( ( (  try_dash_get353 ) ( (  slice1679 ) ,  (  i1681 ) ) ) ,  ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_266_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1681 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1679 ) .f_count ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  uint8_t   elem_dash_get347 (    struct Slice_7  self1777 ,    size_t  idx1779 ) {
    return ( (  get348 ) ( (  self1777 ) ,  (  idx1779 ) ) );
}

static  struct Char_17   newline354 (  ) {
    return ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) );
}

static  size_t   min357 (    size_t  l1176 ,    size_t  r1178 ) {
    if ( (  cmp56 ( (  l1176 ) , (  r1178 ) ) == 0 ) ) {
        return (  l1176 );
    } else {
        return (  r1178 );
    }
}

static  struct Slice_7   subslice356 (    struct Slice_7  slice1692 ,    size_t  from1694 ,    size_t  to1696 ) {
    uint8_t *  begin_dash_ptr1697 = ( (  offset_dash_ptr147 ) ( ( (  slice1692 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  from1694 ) ) ) ) );
    if ( ( (  cmp56 ( (  from1694 ) , (  to1696 ) ) != 0 ) || (  cmp56 ( (  from1694 ) , ( (  slice1692 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_7) { .f_ptr = (  begin_dash_ptr1697 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1698 = (  op_dash_sub260 ( ( (  min357 ) ( (  to1696 ) ,  ( (  slice1692 ) .f_count ) ) ) , (  from1694 ) ) );
    return ( (struct Slice_7) { .f_ptr = (  begin_dash_ptr1697 ) , .f_count = (  count1698 ) } );
}

static  struct StrView_24   substr355 (    struct StrView_24  s1895 ,    size_t  from1897 ,    size_t  to1899 ) {
    return ( (struct StrView_24) { .f_contents = ( (  subslice356 ) ( ( (  s1895 ) .f_contents ) ,  (  from1897 ) ,  (  to1899 ) ) ) } );
}

static  struct Maybe_298   next346 (    struct LineIter_345 *  self2228 ) {
    if ( ( (  cmp56 ( ( ( * (  self2228 ) ) .f_last ) , ( ( ( ( * (  self2228 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq82 ( (  elem_dash_get347 ( ( ( ( * (  self2228 ) ) .f_og ) .f_contents ) , ( ( * (  self2228 ) ) .f_last ) ) ) , ( (  char_dash_u8311 ) ( ( (  nullchar312 ) ( ) ) ) ) ) ) ) ) {
        return ( (struct Maybe_298) { .tag = Maybe_298_None_t } );
    }
    size_t  i2229 = ( ( * (  self2228 ) ) .f_last );
    while ( ( (  cmp56 ( (  i2229 ) , ( ( ( ( * (  self2228 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq82 ( ( (  get348 ) ( ( ( ( * (  self2228 ) ) .f_og ) .f_contents ) ,  (  i2229 ) ) ) , ( (  char_dash_u8311 ) ( ( (  newline354 ) ( ) ) ) ) ) ) ) ) {
        i2229 = (  op_dash_add107 ( (  i2229 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    struct StrView_24  line2230 = ( (  substr355 ) ( ( ( * (  self2228 ) ) .f_og ) ,  ( ( * (  self2228 ) ) .f_last ) ,  (  i2229 ) ) );
    if ( (  cmp56 ( (  i2229 ) , ( ( ( ( * (  self2228 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i2229 = (  op_dash_add107 ( (  i2229 ) , (  from_dash_integral0 ( 1 ) ) ) );
    }
    (*  self2228 ) .f_last = (  i2229 );
    return ( ( Maybe_298_Just ) ( (  line2230 ) ) );
}

static  struct LineIter_345   into_dash_iter359 (    struct LineIter_345  self2225 ) {
    return (  self2225 );
}

static  struct Maybe_298   head344 (    struct LineIter_345  it1082 ) {
    struct LineIter_345  temp358 = ( (  into_dash_iter359 ) ( (  it1082 ) ) );
    return ( (  next346 ) ( ( &temp358 ) ) );
}

static  struct LineIter_345   lines360 (    struct StrView_24  s2222 ) {
    return ( (struct LineIter_345) { .f_og = (  s2222 ) , .f_last = (  from_dash_integral0 ( 0 ) ) } );
}

static  void *   cast_dash_ptr363 (    uint8_t *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  enum Unit_4   free362 (    enum CAllocator_6  dref1863 ,    struct Slice_7  slice1865 ) {
    if (!(  dref1863 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr363 ) ( ( (  slice1865 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free361 (    struct StrView_24  s2055 ,    enum CAllocator_6  al2057 ) {
    ( (  free362 ) ( (  al2057 ) ,  ( (struct Slice_7) { .f_ptr = ( ( (  s2055 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_4_Unit );
}

struct envunion365 {
    const char*  (*fun) (  struct env22*  ,    struct StrConcat_20  ,    enum CAllocator_6  );
    struct env22 env;
};

static  const char*   cast367 (    uint8_t *  x346 ) {
    return ( (const char* ) (  x346 ) );
}

static  void *   cast_dash_ptr377 (    uint8_t * *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of378 (    uint8_t *  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  uint8_t *   zeroed375 (  ) {
    uint8_t *  temp376;
    uint8_t *  x549 = (  temp376 );
    ( ( memset ) ( ( (  cast_dash_ptr377 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of378 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  uint8_t *   null_dash_ptr374 (  ) {
    return ( (  zeroed375 ) ( ) );
}

static  struct Slice_7   empty373 (  ) {
    return ( (struct Slice_7) { .f_ptr = ( (  null_dash_ptr374 ) ( ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct List_5   mk372 (    enum CAllocator_6  al1942 ) {
    struct Slice_7  elements1943 = ( (  empty373 ) ( ) );
    return ( (struct List_5) { .f_al = (  al1942 ) , .f_elements = (  elements1943 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct StrBuilder_14   mk371 (    enum CAllocator_6  al2558 ) {
    return ( (struct StrBuilder_14) { .f_chars = ( (  mk372 ) ( (  al2558 ) ) ) } );
}

struct IntStrIter_383 {
    int64_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

enum EmptyIter_385 {
    EmptyIter_385_EmptyIter,
};

struct AppendIter_384 {
    enum EmptyIter_385  f_it;
    struct Char_17  f_elem;
    bool  f_appended;
};

struct StrConcatIter_382 {
    struct IntStrIter_383  f_left;
    struct AppendIter_384  f_right;
};

struct env386 {
    struct StrBuilder_14 *  builder2540;
    struct env12 envinst12;
};

struct envunion387 {
    enum Unit_4  (*fun) (  struct env386*  ,    struct Char_17  );
    struct env386 env;
};

static  struct StrConcatIter_382   into_dash_iter389 (    struct StrConcatIter_382  self1406 ) {
    return (  self1406 );
}

struct env394 {
    ;
    int64_t  base1150;
};

struct envunion395 {
    int64_t  (*fun) (  struct env394*  ,    int32_t  ,    int64_t  );
    struct env394 env;
};

static  int64_t   reduce393 (    struct Range_248  iterable1033 ,    int64_t  base1035 ,   struct envunion395  fun1037 ) {
    int64_t  x1038 = (  base1035 );
    struct RangeIter_251  it1039 = ( (  into_dash_iter253 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1040 = ( (  next255 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_254_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_254_Just_t ) {
                struct envunion395  temp396 = (  fun1037 );
                x1038 = ( temp396.fun ( &temp396.env ,  ( dref1040 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    int64_t  temp397;
    return (  temp397 );
}

static  int32_t   op_dash_sub398 (    int32_t  l207 ,    int32_t  r209 ) {
    return ( (  l207 ) - (  r209 ) );
}

static  int64_t   lam399 (   struct env394* env ,    int32_t  item1154 ,    int64_t  x1156 ) {
    return (  op_dash_mul105 ( (  x1156 ) , ( env->base1150 ) ) );
}

static  int64_t   pow392 (    int64_t  base1150 ,    int32_t  p1152 ) {
    struct env394 envinst394 = {
        .base1150 =  base1150 ,
    };
    return ( (  reduce393 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  (  op_dash_sub398 ( (  p1152 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral296 ( 1 ) ) ,  ( (struct envunion395){ .fun = (  int64_t  (*) (  struct env394*  ,    int32_t  ,    int64_t  ) )lam399 , .env =  envinst394 } ) ) );
}

static  int64_t   op_dash_div400 (    int64_t  l194 ,    int64_t  r196 ) {
    return ( (  l194 ) / (  r196 ) );
}

static  uint8_t   cast401 (    int64_t  x346 ) {
    return ( (uint8_t ) (  x346 ) );
}

static  int64_t   op_dash_sub402 (    int64_t  l184 ,    int64_t  r186 ) {
    return ( (  l184 ) - (  r186 ) );
}

static  uint8_t *   cast408 (    size_t *  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static  size_t   cast_dash_on_dash_zeroed406 (    uint8_t  x552 ) {
    size_t  temp407 = ( (  zeroed240 ) ( ) );
    size_t *  y553 = ( &temp407 );
    uint8_t *  yp554 = ( (  cast408 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  size_t   u8_dash_size405 (    uint8_t  x633 ) {
    return ( (  cast_dash_on_dash_zeroed406 ) ( (  x633 ) ) );
}

static  uint8_t *   set_dash_ms_dash_byte_dash_of_dash_pointer404 (    uint8_t *  ptr651 ,    uint8_t  b653 ) {
    size_t  s654 = ( ( (size_t ) (  ptr651 ) ) );
    size_t  exp655 = (  from_dash_integral0 ( 72057594037927936 ) );
    return ( (uint8_t * ) (  op_dash_add107 ( (  op_dash_sub260 ( (  s654 ) , ( (  u8_dash_size405 ) ( ( (  get_dash_ms_dash_byte_dash_of_dash_pointer83 ) ( (  ptr651 ) ) ) ) ) ) ) , (  op_dash_mul236 ( (  exp655 ) , ( (  u8_dash_size405 ) ( (  b653 ) ) ) ) ) ) ) );
}

static  uint8_t *   cast409 (    size_t  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static  struct Char_17   from_dash_u8403 (    uint8_t  b680 ) {
    uint8_t *  ptr681 = ( (  set_dash_ms_dash_byte_dash_of_dash_pointer404 ) ( ( ( (  cast409 ) ( ( (  u8_dash_size405 ) ( (  b680 ) ) ) ) ) ) ,  (  from_dash_integral86 ( 103 ) ) ) );
    return ( (struct Char_17) { .f_ptr = (  ptr681 ) , .f_num_dash_bytes = (  from_dash_integral0 ( 1 ) ) } );
}

static  struct Maybe_158   next391 (    struct IntStrIter_383 *  self1337 ) {
    if ( ( ( * (  self1337 ) ) .f_negative ) ) {
        (*  self1337 ) .f_negative = ( false );
        return ( ( Maybe_158_Just ) ( ( (  from_dash_charlike95 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp256 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    int64_t  trim_dash_down1338 = ( (  pow392 ) ( (  from_dash_integral296 ( 10 ) ) ,  (  op_dash_sub398 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
    int64_t  upper1339 = (  op_dash_div400 ( ( ( * (  self1337 ) ) .f_int ) , (  trim_dash_down1338 ) ) );
    int64_t  upper_dash_mask1340 = (  op_dash_mul105 ( (  op_dash_div400 ( (  upper1339 ) , (  from_dash_integral296 ( 10 ) ) ) ) , (  from_dash_integral296 ( 10 ) ) ) );
    uint8_t  digit1341 = ( ( (  cast401 ) ( (  op_dash_sub402 ( (  upper1339 ) , (  upper_dash_mask1340 ) ) ) ) ) );
    (*  self1337 ) .f_len = (  op_dash_sub398 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1342 = ( (  from_dash_u8403 ) ( (  op_dash_add100 ( (  digit1341 ) , (  from_dash_integral86 ( 48 ) ) ) ) ) );
    return ( ( Maybe_158_Just ) ( (  digit_dash_char1342 ) ) );
}

static  struct Maybe_158   next411 (    enum EmptyIter_385 *  dref745 ) {
    return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
}

static  struct Maybe_158   next410 (    struct AppendIter_384 *  self975 ) {
    struct Maybe_158  dref976 = ( (  next411 ) ( ( & ( ( * (  self975 ) ) .f_it ) ) ) );
    if ( dref976.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref976 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref976.tag == Maybe_158_None_t ) {
            if ( ( ! ( ( * (  self975 ) ) .f_appended ) ) ) {
                (*  self975 ) .f_appended = ( true );
                return ( ( Maybe_158_Just ) ( ( ( * (  self975 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
        }
    }
}

static  struct Maybe_158   next390 (    struct StrConcatIter_382 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next391 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each381 (    struct StrConcatIter_382  iterable1014 ,   struct envunion387  fun1016 ) {
    struct StrConcatIter_382  temp388 = ( (  into_dash_iter389 ) ( (  iterable1014 ) ) );
    struct StrConcatIter_382 *  it1017 = ( &temp388 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next390 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                struct envunion387  temp412 = (  fun1016 );
                ( temp412.fun ( &temp412.env ,  ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_57   cmp417 (    int64_t  l149 ,    int64_t  r151 ) {
    return ( builtin_int64_tcmp( (  l149 ) , (  r151 ) ) );
}

static  int64_t   op_dash_neg418 (    int64_t  l199 ) {
    return ( (  from_dash_integral296 ( 0 ) ) - (  l199 ) );
}

static  bool   eq420 (    int64_t  l96 ,    int64_t  r98 ) {
    return ( (  l96 ) == (  r98 ) );
}

static  int32_t   count_dash_digits419 (    int64_t  self1345 ) {
    if ( (  eq420 ( (  self1345 ) , (  from_dash_integral296 ( 0 ) ) ) ) ) {
        return (  from_dash_integral45 ( 1 ) );
    }
    int32_t  digits1346 = (  from_dash_integral45 ( 0 ) );
    while ( (  cmp417 ( (  self1345 ) , (  from_dash_integral296 ( 0 ) ) ) == 2 ) ) {
        self1345 = (  op_dash_div400 ( (  self1345 ) , (  from_dash_integral296 ( 10 ) ) ) );
        digits1346 = (  op_dash_add257 ( (  digits1346 ) , (  from_dash_integral45 ( 1 ) ) ) );
    }
    return (  digits1346 );
}

static  struct IntStrIter_383   int_dash_iter416 (    int64_t  int1349 ) {
    if ( (  cmp417 ( (  int1349 ) , (  from_dash_integral296 ( 0 ) ) ) == 0 ) ) {
        return ( (struct IntStrIter_383) { .f_int = (  op_dash_neg418 ( (  int1349 ) ) ) , .f_len = ( (  count_dash_digits419 ) ( (  op_dash_neg418 ( (  int1349 ) ) ) ) ) , .f_negative = ( true ) } );
    } else {
        return ( (struct IntStrIter_383) { .f_int = (  int1349 ) , .f_len = ( (  count_dash_digits419 ) ( (  int1349 ) ) ) , .f_negative = ( false ) } );
    }
}

static  struct IntStrIter_383   chars415 (    int64_t  self1376 ) {
    return ( (  int_dash_iter416 ) ( (  self1376 ) ) );
}

static  enum EmptyIter_385   into_dash_iter425 (    enum EmptyIter_385  self743 ) {
    return (  self743 );
}

static  struct AppendIter_384   append424 (    enum EmptyIter_385  it959 ,    struct Char_17  e961 ) {
    return ( (struct AppendIter_384) { .f_it = ( (  into_dash_iter425 ) ( (  it959 ) ) ) , .f_elem = (  e961 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_384   cons423 (    enum EmptyIter_385  it964 ,    struct Char_17  e966 ) {
    return ( (  append424 ) ( (  it964 ) ,  (  e966 ) ) );
}

static  enum EmptyIter_385   nil426 (  ) {
    return ( EmptyIter_385_EmptyIter );
}

static  struct AppendIter_384   single422 (    struct Char_17  e969 ) {
    return ( (  cons423 ) ( ( (  nil426 ) ( ) ) ,  (  e969 ) ) );
}

static  struct AppendIter_384   chars421 (    struct Char_17  self1322 ) {
    return ( (  single422 ) ( (  self1322 ) ) );
}

static  struct StrConcatIter_382   into_dash_iter414 (    struct StrConcat_20  dref1413 ) {
    return ( (struct StrConcatIter_382) { .f_left = ( (  chars415 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_382   chars413 (    struct StrConcat_20  self1424 ) {
    return ( (  into_dash_iter414 ) ( (  self1424 ) ) );
}

struct env435 {
    struct List_5 *  list2001;
    struct env2 envinst2;
};

struct envunion436 {
    enum Unit_4  (*fun) (  struct env435*  ,    uint8_t  );
    struct env435 env;
};

struct SliceIter_437 {
    struct Slice_7  f_slice;
    size_t  f_current_dash_offset;
};

static  struct SliceIter_437   into_dash_iter439 (    struct Slice_7  self1732 ) {
    return ( (struct SliceIter_437) { .f_slice = (  self1732 ) , .f_current_dash_offset = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct Maybe_350   next440 (    struct SliceIter_437 *  self1738 ) {
    size_t  off1739 = ( ( * (  self1738 ) ) .f_current_dash_offset );
    if ( (  cmp56 ( (  op_dash_add107 ( (  off1739 ) , (  from_dash_integral0 ( 1 ) ) ) ) , ( ( ( * (  self1738 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_350) { .tag = Maybe_350_None_t } );
    }
    uint8_t  elem1740 = ( * ( (  offset_dash_ptr147 ) ( ( ( ( * (  self1738 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  off1739 ) ) ) ) ) );
    (*  self1738 ) .f_current_dash_offset = (  op_dash_add107 ( (  off1739 ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( ( Maybe_350_Just ) ( (  elem1740 ) ) );
}

static  enum Unit_4   for_dash_each434 (    struct Slice_7  iterable1014 ,   struct envunion436  fun1016 ) {
    struct SliceIter_437  temp438 = ( (  into_dash_iter439 ) ( (  iterable1014 ) ) );
    struct SliceIter_437 *  it1017 = ( &temp438 );
    while ( ( true ) ) {
        struct Maybe_350  dref1018 = ( (  next440 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_350_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_350_Just_t ) {
                struct envunion436  temp441 = (  fun1016 );
                ( temp441.fun ( &temp441.env ,  ( dref1018 .stuff .Maybe_350_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  bool   eq447 (    size_t  l121 ,    size_t  r123 ) {
    return ( (  l121 ) == (  r123 ) );
}

struct env448 {
    struct Slice_7  new_dash_slice1953;
    ;
    ;
};

struct Tuple2_450 {
    uint8_t  field0;
    int32_t  field1;
};

static struct Tuple2_450 Tuple2_450_Tuple2 (  uint8_t  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_450 ) { .field0 = field0 ,  .field1 = field1 };
};

struct envunion449 {
    enum Unit_4  (*fun) (  struct env448*  ,    struct Tuple2_450  );
    struct env448 env;
};

static  enum Unit_4   lam451 (   struct env448* env ,    struct Tuple2_450  dref1954 ) {
    return ( (  set309 ) ( ( env->new_dash_slice1953 ) ,  ( (  i32_dash_size275 ) ( ( dref1954 .field1 ) ) ) ,  ( dref1954 .field0 ) ) );
}

struct FromIter_454 {
    int32_t  f_from;
};

struct Zip_453 {
    struct SliceIter_437  f_left_dash_it;
    struct FromIter_454  f_right_dash_it;
};

static  struct Zip_453   into_dash_iter456 (    struct Zip_453  self864 ) {
    return (  self864 );
}

struct Maybe_457 {
    enum {
        Maybe_457_None_t,
        Maybe_457_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_450  field0;
        } Maybe_457_Just_s;
    } stuff;
};

static struct Maybe_457 Maybe_457_Just (  struct Tuple2_450  field0 ) {
    return ( struct Maybe_457 ) { .tag = Maybe_457_Just_t, .stuff = { .Maybe_457_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_254   next459 (    struct FromIter_454 *  dref858 ) {
    int32_t  v860 = ( ( (* dref858 ) ) .f_from );
    (* dref858 ) .f_from = (  op_dash_add257 ( ( ( (* dref858 ) ) .f_from ) , (  from_dash_integral45 ( 1 ) ) ) );
    return ( ( Maybe_254_Just ) ( (  v860 ) ) );
}

static  struct Maybe_457   next458 (    struct Zip_453 *  self867 ) {
    struct Zip_453  copy868 = ( * (  self867 ) );
    while ( ( true ) ) {
        struct Maybe_350  dref869 = ( (  next440 ) ( ( & ( (  copy868 ) .f_left_dash_it ) ) ) );
        if ( dref869.tag == Maybe_350_None_t ) {
            return ( (struct Maybe_457) { .tag = Maybe_457_None_t } );
        }
        else {
            if ( dref869.tag == Maybe_350_Just_t ) {
                struct Maybe_254  dref871 = ( (  next459 ) ( ( & ( (  copy868 ) .f_right_dash_it ) ) ) );
                if ( dref871.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_457) { .tag = Maybe_457_None_t } );
                }
                else {
                    if ( dref871.tag == Maybe_254_Just_t ) {
                        ( (  next440 ) ( ( & ( ( * (  self867 ) ) .f_left_dash_it ) ) ) );
                        ( (  next459 ) ( ( & ( ( * (  self867 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_457_Just ) ( ( ( Tuple2_450_Tuple2 ) ( ( dref869 .stuff .Maybe_350_Just_s .field0 ) ,  ( dref871 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  enum Unit_4   for_dash_each452 (    struct Zip_453  iterable1014 ,   struct envunion449  fun1016 ) {
    struct Zip_453  temp455 = ( (  into_dash_iter456 ) ( (  iterable1014 ) ) );
    struct Zip_453 *  it1017 = ( &temp455 );
    while ( ( true ) ) {
        struct Maybe_457  dref1018 = ( (  next458 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_457_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_457_Just_t ) {
                struct envunion449  temp460 = (  fun1016 );
                ( temp460.fun ( &temp460.env ,  ( dref1018 .stuff .Maybe_457_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct FromIter_454   into_dash_iter462 (    struct FromIter_454  it856 ) {
    return (  it856 );
}

static  struct Zip_453   zip461 (    struct Slice_7  left875 ,    struct FromIter_454  right877 ) {
    struct SliceIter_437  left_dash_it878 = ( (  into_dash_iter439 ) ( (  left875 ) ) );
    struct FromIter_454  right_dash_it879 = ( (  into_dash_iter462 ) ( (  right877 ) ) );
    return ( (struct Zip_453) { .f_left_dash_it = (  left_dash_it878 ) , .f_right_dash_it = (  right_dash_it879 ) } );
}

static  struct FromIter_454   from463 (    int32_t  f853 ) {
    return ( (struct FromIter_454) { .f_from = (  f853 ) } );
}

static  enum Unit_4   grow_dash_if_dash_full446 (   struct env1* env ,    struct List_5 *  list1952 ) {
    if ( (  eq447 ( ( ( * (  list1952 ) ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        (*  list1952 ) .f_elements = ( (  allocate304 ) ( ( ( * (  list1952 ) ) .f_al ) ,  ( env->starting_dash_size1947 ) ) );
    } else {
        if ( (  eq447 ( ( ( * (  list1952 ) ) .f_count ) , ( ( ( * (  list1952 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_7  new_dash_slice1953 = ( (  allocate304 ) ( ( ( * (  list1952 ) ) .f_al ) ,  (  op_dash_mul236 ( ( ( * (  list1952 ) ) .f_count ) , ( env->growth_dash_factor1948 ) ) ) ) );
            struct env448 envinst448 = {
                .new_dash_slice1953 =  new_dash_slice1953 ,
            };
            struct envunion449  fun1957 = ( (struct envunion449){ .fun = (  enum Unit_4  (*) (  struct env448*  ,    struct Tuple2_450  ) )lam451 , .env =  envinst448 } );
            ( (  for_dash_each452 ) ( ( (  zip461 ) ( ( ( * (  list1952 ) ) .f_elements ) ,  ( (  from463 ) ( (  from_dash_integral45 ( 0 ) ) ) ) ) ) ,  (  fun1957 ) ) );
            ( (  free362 ) ( ( ( * (  list1952 ) ) .f_al ) ,  ( ( * (  list1952 ) ) .f_elements ) ) );
            (*  list1952 ) .f_elements = (  new_dash_slice1953 );
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   add444 (   struct env2* env ,    struct List_5 *  list1960 ,    uint8_t  elem1962 ) {
    struct envunion3  temp445 = ( (struct envunion3){ .fun = (  enum Unit_4  (*) (  struct env1*  ,    struct List_5 *  ) )grow_dash_if_dash_full446 , .env =  env->envinst1 } );
    ( temp445.fun ( &temp445.env ,  (  list1960 ) ) );
    ( (  set309 ) ( ( ( * (  list1960 ) ) .f_elements ) ,  ( ( * (  list1960 ) ) .f_count ) ,  (  elem1962 ) ) );
    (*  list1960 ) .f_count = (  op_dash_add107 ( ( ( * (  list1960 ) ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam442 (   struct env435* env ,    uint8_t  x2005 ) {
    struct envunion9  temp443 = ( (struct envunion9){ .fun = (  enum Unit_4  (*) (  struct env2*  ,    struct List_5 *  ,    uint8_t  ) )add444 , .env =  env->envinst2 } );
    return ( temp443.fun ( &temp443.env ,  ( env->list2001 ) ,  (  x2005 ) ) );
}

static  enum Unit_4   add_dash_all433 (   struct env8* env ,    struct List_5 *  list2001 ,    struct Slice_7  it2003 ) {
    struct env435 envinst435 = {
        .list2001 =  list2001 ,
        .envinst2 = env->envinst2 ,
    };
    ( (  for_dash_each434 ) ( (  it2003 ) ,  ( (struct envunion436){ .fun = (  enum Unit_4  (*) (  struct env435*  ,    uint8_t  ) )lam442 , .env =  envinst435 } ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   write_dash_slice431 (   struct env10* env ,    struct StrBuilder_14 *  builder2530 ,    struct Slice_7  s2532 ) {
    struct envunion11  temp432 = ( (struct envunion11){ .fun = (  enum Unit_4  (*) (  struct env8*  ,    struct List_5 *  ,    struct Slice_7  ) )add_dash_all433 , .env =  env->envinst8 } );
    ( temp432.fun ( &temp432.env ,  ( & ( ( * (  builder2530 ) ) .f_chars ) ) ,  (  s2532 ) ) );
    return ( Unit_4_Unit );
}

static  struct Slice_7   from_dash_char464 (    struct Char_17  c1845 ,    uint8_t *  buf1847 ) {
    struct CharDestructured_80  dref1848 = ( (  destructure81 ) ( (  c1845 ) ) );
    if ( dref1848.tag == CharDestructured_80_Ref_t ) {
        return ( (struct Slice_7) { .f_ptr = ( ( dref1848 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) , .f_count = ( ( dref1848 .stuff .CharDestructured_80_Ref_s .field0 ) .f_num_dash_bytes ) } );
    }
    else {
        if ( dref1848.tag == CharDestructured_80_Scalar_t ) {
            if ( (  cmp89 ( ( dref1848 .stuff .CharDestructured_80_Scalar_s .field0 ) , (  from_dash_integral90 ( 127 ) ) ) == 2 ) ) {
                const char*  temp465 = ( (  from_dash_string70 ) ( ( "(Slice.from-char) non-ascii characters not yet supported" ) ,  ( 56 ) ) );
                printf("%s\n", temp465);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            (*  buf1847 ) = ( (  u32_dash_u892 ) ( ( dref1848 .stuff .CharDestructured_80_Scalar_s .field0 ) ) );
            return ( (struct Slice_7) { .f_ptr = (  buf1847 ) , .f_count = (  from_dash_integral0 ( 1 ) ) } );
        }
    }
}

static  enum Unit_4   write_dash_char429 (   struct env12* env ,    struct StrBuilder_14 *  builder2535 ,    struct Char_17  c2537 ) {
    struct envunion13  temp430 = ( (struct envunion13){ .fun = (  enum Unit_4  (*) (  struct env10*  ,    struct StrBuilder_14 *  ,    struct Slice_7  ) )write_dash_slice431 , .env =  env->envinst10 } );
    uint8_t  temp467;
    uint8_t  temp466 = (  temp467 );
    ( temp430.fun ( &temp430.env ,  (  builder2535 ) ,  ( (  from_dash_char464 ) ( (  c2537 ) ,  ( &temp466 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam427 (   struct env386* env ,    struct Char_17  c2544 ) {
    struct envunion16  temp428 = ( (struct envunion16){ .fun = (  enum Unit_4  (*) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  ) )write_dash_char429 , .env =  env->envinst12 } );
    return ( temp428.fun ( &temp428.env ,  ( env->builder2540 ) ,  (  c2544 ) ) );
}

static  enum Unit_4   write380 (   struct env15* env ,    struct StrBuilder_14 *  builder2540 ,    struct StrConcat_20  s2542 ) {
    struct env386 envinst386 = {
        .builder2540 =  builder2540 ,
        .envinst12 = env->envinst12 ,
    };
    ( (  for_dash_each381 ) ( ( (  chars413 ) ( (  s2542 ) ) ) ,  ( (struct envunion387){ .fun = (  enum Unit_4  (*) (  struct env386*  ,    struct Char_17  ) )lam427 , .env =  envinst386 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Slice_7   cast470 (    struct Slice_7  x346 ) {
    return ( (struct Slice_7 ) (  x346 ) );
}

static  struct StrView_24   as_dash_str469 (    struct StrBuilder_14 *  builder2564 ) {
    return ( (struct StrView_24) { .f_contents = ( (  cast470 ) ( ( (  subslice356 ) ( ( ( ( * (  builder2564 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( ( ( * (  builder2564 ) ) .f_chars ) .f_count ) ) ) ) ) } );
}

static  struct StrView_24   mk_dash_dyn_dash_str369 (   struct env18* env ,    struct StrConcat_20  s2584 ,    enum CAllocator_6  al2586 ) {
    struct StrBuilder_14  temp370 = ( (  mk371 ) ( (  al2586 ) ) );
    struct StrBuilder_14 *  sb2587 = ( &temp370 );
    struct envunion19  temp379 = ( (struct envunion19){ .fun = (  enum Unit_4  (*) (  struct env15*  ,    struct StrBuilder_14 *  ,    struct StrConcat_20  ) )write380 , .env =  env->envinst15 } );
    ( temp379.fun ( &temp379.env ,  (  sb2587 ) ,  (  s2584 ) ) );
    struct envunion21  temp468 = ( (struct envunion21){ .fun = (  enum Unit_4  (*) (  struct env12*  ,    struct StrBuilder_14 *  ,    struct Char_17  ) )write_dash_char429 , .env =  env->envinst12 } );
    ( temp468.fun ( &temp468.env ,  (  sb2587 ) ,  ( (  nullchar312 ) ( ) ) ) );
    struct StrView_24  dynstr2588 = ( (  as_dash_str469 ) ( (  sb2587 ) ) );
    return ( (struct StrView_24) { .f_contents = ( (struct Slice_7) { .f_ptr = ( ( (  dynstr2588 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub260 ( ( ( (  dynstr2588 ) .f_contents ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) } ) } );
}

static  const char*   mk_dash_const_dash_str366 (   struct env22* env ,    struct StrConcat_20  s2591 ,    enum CAllocator_6  al2593 ) {
    struct envunion23  temp368 = ( (struct envunion23){ .fun = (  struct StrView_24  (*) (  struct env18*  ,    struct StrConcat_20  ,    enum CAllocator_6  ) )mk_dash_dyn_dash_str369 , .env =  env->envinst18 } );
    return ( ( (  cast367 ) ( ( ( ( temp368.fun ( &temp368.env ,  (  s2591 ) ,  (  al2593 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

struct ConstStrIter_473 {
    const char*  f_ogstr;
    size_t  f_i;
};

static  struct ConstStrIter_473   into_dash_iter475 (    const char*  self1301 ) {
    return ( (struct ConstStrIter_473) { .f_ogstr = (  self1301 ) , .f_i = (  from_dash_integral0 ( 0 ) ) } );
}

static  struct ConstStrIter_473   chars474 (    const char*  self1316 ) {
    return ( (  into_dash_iter475 ) ( (  self1316 ) ) );
}

static  uint8_t *   cast477 (    const char*  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static  uint8_t   cast478 (    int32_t  x346 ) {
    return ( (uint8_t ) (  x346 ) );
}

static  struct Maybe_158   next476 (    struct ConstStrIter_473 *  self1307 ) {
    uint8_t *  char_dash_ptr1308 = ( ( (  cast477 ) ( ( ( * (  self1307 ) ) .f_ogstr ) ) ) );
    uint8_t *  optr1309 = ( (  offset_dash_ptr147 ) ( (  char_dash_ptr1308 ) ,  ( (  size_dash_i64160 ) ( ( ( * (  self1307 ) ) .f_i ) ) ) ) );
    if ( (  eq82 ( ( * (  optr1309 ) ) , ( (  cast478 ) ( (  from_dash_integral45 ( 0 ) ) ) ) ) ) ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    struct Char_17  char1310 = ( (  scan_dash_from_dash_mem97 ) ( (  optr1309 ) ) );
    (*  self1307 ) .f_i = (  op_dash_add107 ( ( ( * (  self1307 ) ) .f_i ) , ( (  char1310 ) .f_num_dash_bytes ) ) );
    return ( ( Maybe_158_Just ) ( (  char1310 ) ) );
}

static  int32_t   fprintf_dash_char479 (    FILE *  file724 ,    struct Char_17  c726 ) {
    struct CharDestructured_80  dref727 = ( (  destructure81 ) ( (  c726 ) ) );
    if ( dref727.tag == CharDestructured_80_Ref_t ) {
        return ( ( fprintf ) ( (  file724 ) ,  ( (  from_dash_string70 ) ( ( "%.*s" ) ,  ( 4 ) ) ) ,  ( (  size_dash_i3271 ) ( ( ( dref727 .stuff .CharDestructured_80_Ref_s .field0 ) .f_num_dash_bytes ) ) ) ,  ( ( dref727 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) ) );
    }
    else {
        if ( dref727.tag == CharDestructured_80_Scalar_t ) {
            if ( (  cmp89 ( ( dref727 .stuff .CharDestructured_80_Scalar_s .field0 ) , (  from_dash_integral90 ( 127 ) ) ) == 2 ) ) {
                const char*  temp480 = ( (  from_dash_string70 ) ( ( "(TODO) scalar too large BRUH" ) ,  ( 28 ) ) );
                printf("%s\n", temp480);
                exit ( 1 );
                ( Unit_4_Unit );
            }
            return ( ( fprintf ) ( (  file724 ) ,  ( (  from_dash_string70 ) ( ( "%c" ) ,  ( 2 ) ) ) ,  ( (  u32_dash_u892 ) ( ( dref727 .stuff .CharDestructured_80_Scalar_s .field0 ) ) ) ) );
        }
    }
}

static  enum Unit_4   print482 (    struct StrView_24  s1611 ) {
    ( (  for_dash_each154 ) ( ( (  chars161 ) ( (  s1611 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  bool   undefined483 (  ) {
    bool  temp484;
    return (  temp484 );
}

static  bool   unreachable481 (  ) {
    ( (  print482 ) ( ( (  from_dash_string94 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( (  undefined483 ) ( ) );
}

static  bool   try_dash_write_dash_contents472 (    const char*  filename2724 ,    const char*  contents2726 ) {
    FILE *  file2727 = ( ( fopen ) ( (  filename2724 ) ,  ( (  from_dash_charlike300 ) ( ( "w" ) ,  ( 1 ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null301 ) ( (  file2727 ) ) ) ) {
        return ( false );
    }
    struct ConstStrIter_473  it2728 = ( (  chars474 ) ( (  contents2726 ) ) );
    while ( ( true ) ) {
        struct Maybe_158  dref2729 = ( (  next476 ) ( ( & (  it2728 ) ) ) );
        if ( dref2729.tag == Maybe_158_None_t ) {
            ( ( fclose ) ( (  file2727 ) ) );
            return ( true );
        }
        else {
            if ( dref2729.tag == Maybe_158_Just_t ) {
                int32_t  chars_dash_written2731 = ( (  fprintf_dash_char479 ) ( (  file2727 ) ,  ( dref2729 .stuff .Maybe_158_Just_s .field0 ) ) );
                if ( (  cmp256 ( (  chars_dash_written2731 ) , (  from_dash_integral45 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable481 ) ( ) );
}

struct StrConcat_486 {
    struct StrView_24  field0;
    const char*  field1;
};

static struct StrConcat_486 StrConcat_486_StrConcat (  struct StrView_24  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_486 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_489 {
    struct StrView_24  field0;
    struct StrConcat_486  field1;
};

static struct StrConcat_489 StrConcat_489_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_486  field1 ) {
    return ( struct StrConcat_489 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_488 {
    struct StrConcat_489  field0;
    struct Char_17  field1;
};

static struct StrConcat_488 StrConcat_488_StrConcat (  struct StrConcat_489  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_488 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str492 (    const char*  self1313 ) {
    ( ( printf ) ( ( (  from_dash_string70 ) ( ( "%s" ) ,  ( 2 ) ) ) ,  (  self1313 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str491 (    struct StrConcat_486  self1418 ) {
    struct StrConcat_486  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str492 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str490 (    struct StrConcat_489  self1418 ) {
    struct StrConcat_489  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str491 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str487 (    struct StrConcat_488  self1418 ) {
    struct StrConcat_488  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str490 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic485 (    struct StrConcat_486  errmsg1622 ) {
    ( (  print_dash_str487 ) ( ( ( StrConcat_488_StrConcat ) ( ( ( StrConcat_489_StrConcat ) ( ( (  from_dash_string94 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1622 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   write_dash_contents471 (    const char*  filename2734 ,    const char*  contents2736 ) {
    if ( ( ! ( (  try_dash_write_dash_contents472 ) ( (  filename2734 ) ,  (  contents2736 ) ) ) ) ) {
        ( (  panic485 ) ( ( ( StrConcat_486_StrConcat ) ( ( (  from_dash_string94 ) ( ( "could not write to file " ) ,  ( 24 ) ) ) ,  (  filename2734 ) ) ) ) );
    }
    return ( Unit_4_Unit );
}

struct Slice_495 {
    enum Unit_4 *  f_ptr;
    size_t  f_count;
};

static  void *   cast_dash_ptr496 (    enum Unit_4 *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  enum Unit_4   free494 (    enum CAllocator_6  dref1863 ,    struct Slice_495  slice1865 ) {
    if (!(  dref1863 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr496 ) ( ( (  slice1865 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free_dash_const_dash_str493 (    const char*  s2596 ,    enum CAllocator_6  al2598 ) {
    ( (  free494 ) ( (  al2598 ) ,  ( (struct Slice_495) { .f_ptr = ( (enum Unit_4 * ) (  s2596 ) ) , .f_count = (  from_dash_integral0 ( 0 ) ) } ) ) );
    return ( Unit_4_Unit );
}

static  struct ConstStrIter_473   into_dash_iter500 (    struct ConstStrIter_473  self1304 ) {
    return (  self1304 );
}

static  struct Maybe_158   head498 (    struct ConstStrIter_473  it1082 ) {
    struct ConstStrIter_473  temp499 = ( (  into_dash_iter500 ) ( (  it1082 ) ) );
    return ( (  next476 ) ( ( &temp499 ) ) );
}

static  struct Maybe_314   reduce501 (    struct ConstStrIter_473  iterable1033 ,    struct Maybe_314  base1035 ,    struct Maybe_314 (*  fun1037 )(    struct Char_17  ,    struct Maybe_314  ) ) {
    struct Maybe_314  x1038 = (  base1035 );
    struct ConstStrIter_473  it1039 = ( (  into_dash_iter500 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_158  dref1040 = ( (  next476 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_158_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_158_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_158_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    struct Maybe_314  temp502;
    return (  temp502 );
}

static  struct Maybe_314   sequence_dash_maybe503 (    struct Char_17  e2260 ,    struct Maybe_314  b2262 ) {
    struct Maybe_314  dref2263 = (  b2262 );
    if ( dref2263.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    else {
        if ( dref2263.tag == Maybe_314_Just_t ) {
            struct Maybe_254  dref2265 = ( (  parse_dash_digit328 ) ( (  e2260 ) ) );
            if ( dref2265.tag == Maybe_254_None_t ) {
                return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
            }
            else {
                if ( dref2265.tag == Maybe_254_Just_t ) {
                    return ( ( Maybe_314_Just ) ( (  op_dash_add339 ( (  op_dash_mul105 ( ( dref2263 .stuff .Maybe_314_Just_s .field0 ) , (  from_dash_integral296 ( 10 ) ) ) ) , ( (  i32_dash_i64340 ) ( ( dref2265 .stuff .Maybe_254_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_314   parse_dash_int497 (    const char*  s2257 ) {
    struct ConstStrIter_473  cs2267 = ( (  chars474 ) ( (  s2257 ) ) );
    struct Maybe_158  dref2268 = ( (  head498 ) ( (  cs2267 ) ) );
    if ( dref2268.tag == Maybe_158_Just_t ) {
        return ( (  reduce501 ) ( (  cs2267 ) ,  ( ( Maybe_314_Just ) ( (  from_dash_integral296 ( 0 ) ) ) ) ,  (  sequence_dash_maybe503 ) ) );
    }
    else {
        if ( dref2268.tag == Maybe_158_None_t ) {
            return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
        }
    }
}

struct Duration_504 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  struct Duration_504   diff505 (    struct timespec  l3031 ,    struct timespec  r3033 ) {
    int64_t  secdiff3034 = (  op_dash_sub402 ( ( (  l3031 ) .tv_sec ) , ( (  r3033 ) .tv_sec ) ) );
    int64_t  nsdiff3035 = (  op_dash_sub402 ( ( (  l3031 ) .tv_nsec ) , ( (  r3033 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs3036 = (  from_dash_integral296 ( 1000000000 ) );
    if ( (  cmp417 ( (  nsdiff3035 ) , (  from_dash_integral296 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp417 ( (  secdiff3034 ) , (  from_dash_integral296 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_504) { .f_secs = (  secdiff3034 ) , .f_nsecs = (  op_dash_neg418 ( (  nsdiff3035 ) ) ) } );
        } else {
            if ( (  eq420 ( (  secdiff3034 ) , (  from_dash_integral296 ( 0 ) ) ) ) ) {
                return ( (struct Duration_504) { .f_secs = (  from_dash_integral296 ( 0 ) ) , .f_nsecs = (  nsdiff3035 ) } );
            } else {
                return ( (struct Duration_504) { .f_secs = (  op_dash_sub402 ( (  secdiff3034 ) , (  from_dash_integral296 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add339 ( (  ns_dash_in_dash_secs3036 ) , (  nsdiff3035 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp417 ( (  secdiff3034 ) , (  from_dash_integral296 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_504) { .f_secs = (  secdiff3034 ) , .f_nsecs = (  nsdiff3035 ) } );
        } else {
            return ( (struct Duration_504) { .f_secs = (  op_dash_sub402 ( (  secdiff3034 ) , (  from_dash_integral296 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub402 ( (  ns_dash_in_dash_secs3036 ) , (  nsdiff3035 ) ) ) } );
        }
    }
}

static  enum Unit_4   set_dash_screen_dash_fg506 (    struct Screen_222 *  screen3223 ,    struct Color_225  c3225 ) {
    (*  screen3223 ) .f_default_dash_fg = (  c3225 );
    return ( Unit_4_Unit );
}

struct Key_513 {
    enum {
        Key_513_Escape_t,
        Key_513_Enter_t,
        Key_513_Tab_t,
        Key_513_Backspace_t,
        Key_513_Char_t,
        Key_513_Ctrl_t,
        Key_513_Up_t,
        Key_513_Down_t,
        Key_513_Left_t,
        Key_513_Right_t,
        Key_513_Home_t,
        Key_513_End_t,
        Key_513_PageUp_t,
        Key_513_PageDown_t,
        Key_513_Delete_t,
        Key_513_Insert_t,
        Key_513_F1_t,
        Key_513_F2_t,
        Key_513_F3_t,
        Key_513_F4_t,
        Key_513_F5_t,
        Key_513_F6_t,
        Key_513_F7_t,
        Key_513_F8_t,
        Key_513_F9_t,
        Key_513_F10_t,
        Key_513_F11_t,
        Key_513_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_513_Char_s;
        struct {
            char  field0;
        } Key_513_Ctrl_s;
    } stuff;
};

static struct Key_513 Key_513_Char (  char  field0 ) {
    return ( struct Key_513 ) { .tag = Key_513_Char_t, .stuff = { .Key_513_Char_s = { .field0 = field0 } } };
};

static struct Key_513 Key_513_Ctrl (  char  field0 ) {
    return ( struct Key_513 ) { .tag = Key_513_Ctrl_t, .stuff = { .Key_513_Ctrl_s = { .field0 = field0 } } };
};

enum MouseButton_515 {
    MouseButton_515_MouseLeft,
    MouseButton_515_MouseMiddle,
    MouseButton_515_MouseRight,
    MouseButton_515_ScrollUp,
    MouseButton_515_ScrollDown,
};

struct MouseEvent_514 {
    enum MouseButton_515  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_512 {
    enum {
        InputEvent_512_Key_t,
        InputEvent_512_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_513  field0;
        } InputEvent_512_Key_s;
        struct {
            struct MouseEvent_514  field0;
        } InputEvent_512_Mouse_s;
    } stuff;
};

static struct InputEvent_512 InputEvent_512_Key (  struct Key_513  field0 ) {
    return ( struct InputEvent_512 ) { .tag = InputEvent_512_Key_t, .stuff = { .InputEvent_512_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_512 InputEvent_512_Mouse (  struct MouseEvent_514  field0 ) {
    return ( struct InputEvent_512 ) { .tag = InputEvent_512_Mouse_t, .stuff = { .InputEvent_512_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_511 {
    enum {
        Maybe_511_None_t,
        Maybe_511_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_512  field0;
        } Maybe_511_Just_s;
    } stuff;
};

static struct Maybe_511 Maybe_511_Just (  struct InputEvent_512  field0 ) {
    return ( struct Maybe_511 ) { .tag = Maybe_511_Just_t, .stuff = { .Maybe_511_Just_s = { .field0 = field0 } } };
};

struct envunion510 {
    struct Maybe_511  (*fun) (  struct env28*  ,    struct Tui_30 *  );
    struct env28 env;
};

struct env509 {
    struct env28 envinst28;
    struct Tui_30 *  tui3341;
};

struct envunion516 {
    struct Maybe_511  (*fun) (  struct env509*  );
    struct env509 env;
};

struct FunIter_508 {
    struct envunion516  f_fun;
    bool  f_finished;
};

static  struct FunIter_508   into_dash_iter517 (    struct FunIter_508  self981 ) {
    return (  self981 );
}

static  struct FunIter_508   from_dash_function518 (   struct envunion516  fun989 ) {
    return ( (struct FunIter_508) { .f_fun = (  fun989 ) , .f_finished = ( false ) } );
}

static  bool   update_dash_dimensions523 (   struct env27* env ,    struct Tui_30 *  tui3140 ) {
    if ( ( ! ( * ( env->should_dash_resize3068 ) ) ) ) {
        return ( false );
    }
    (*  tui3140 ) .f_should_dash_redraw = ( true );
    (* env->should_dash_resize3068 ) = ( false );
    struct Tuple2_185  dim3141 = ( (  get_dash_dimensions186 ) ( ) );
    uint32_t  w3142 = ( (  fst219 ) ( (  dim3141 ) ) );
    uint32_t  h3143 = ( (  snd220 ) ( (  dim3141 ) ) );
    (*  tui3140 ) .f_width = (  w3142 );
    (*  tui3140 ) .f_height = (  h3143 );
    return ( true );
}

static  char   undefined526 (  ) {
    char  temp527;
    return (  temp527 );
}

struct Maybe_528 {
    enum {
        Maybe_528_None_t,
        Maybe_528_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_528_Just_s;
    } stuff;
};

static struct Maybe_528 Maybe_528_Just (  char  field0 ) {
    return ( struct Maybe_528 ) { .tag = Maybe_528_Just_t, .stuff = { .Maybe_528_Just_s = { .field0 = field0 } } };
};

struct Pollfd_530 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr531 (    struct Pollfd_530 *  p349 ) {
    return ( (struct pollfd * ) (  p349 ) );
}

static  void *   cast_dash_ptr534 (    char *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of535 (    char  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  char   zeroed532 (  ) {
    char  temp533;
    char  x549 = (  temp533 );
    ( ( memset ) ( ( (  cast_dash_ptr534 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of535 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  struct Maybe_528   read_dash_byte529 (    int32_t  timeout_dash_ms3062 ) {
    struct Pollfd_530  pfd3063 = ( (struct Pollfd_530) { .f_fd = (  from_dash_integral45 ( 0 ) ) , .f_events = (  from_dash_integral198 ( 1 ) ) , .f_revents = (  from_dash_integral198 ( 0 ) ) } );
    if ( (  cmp256 ( ( ( poll ) ( ( (  cast_dash_ptr531 ) ( ( & (  pfd3063 ) ) ) ) ,  (  from_dash_integral45 ( 1 ) ) ,  (  timeout_dash_ms3062 ) ) ) , (  from_dash_integral45 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_528) { .tag = Maybe_528_None_t } );
    }
    char  c3064 = ( ( (  zeroed532 ) ( ) ) );
    if ( (  cmp256 ( ( ( read ) ( ( (  stdin_dash_fileno44 ) ( ) ) ,  ( (  cast_dash_ptr534 ) ( ( & (  c3064 ) ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ) ) , (  from_dash_integral45 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_528) { .tag = Maybe_528_None_t } );
    }
    return ( ( Maybe_528_Just ) ( (  c3064 ) ) );
}

static  uint8_t   ascii_dash_u8536 (    char  c732 ) {
    return ( ( (uint8_t ) (  c732 ) ) );
}

static  char   u8_dash_ascii537 (    uint8_t  b735 ) {
    return ( ( (char ) (  b735 ) ) );
}

static  uint8_t *   cast541 (    uint32_t *  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static  uint32_t   cast_dash_on_dash_zeroed539 (    uint8_t  x552 ) {
    uint32_t  temp540 = ( (  zeroed202 ) ( ) );
    uint32_t *  y553 = ( &temp540 );
    uint8_t *  yp554 = ( (  cast541 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  uint32_t   u8_dash_u32538 (    uint8_t  x642 ) {
    return ( (  cast_dash_on_dash_zeroed539 ) ( (  x642 ) ) );
}

struct Map_544 {
    struct StrViewIter_155  field0;
    uint32_t (*  field1 )(    struct Char_17  );
};

static struct Map_544 Map_544_Map (  struct StrViewIter_155  field0 ,  uint32_t (*  field1 )(    struct Char_17  ) ) {
    return ( struct Map_544 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_544   into_dash_iter545 (    struct Map_544  self749 ) {
    return (  self749 );
}

static  struct Maybe_54   next546 (    struct Map_544 *  dref751 ) {
    struct Maybe_158  dref754 = ( (  next159 ) ( ( & ( (* dref751 ) .field0 ) ) ) );
    if ( dref754.tag == Maybe_158_None_t ) {
        return ( (struct Maybe_54) { .tag = Maybe_54_None_t } );
    }
    else {
        if ( dref754.tag == Maybe_158_Just_t ) {
            return ( ( Maybe_54_Just ) ( ( ( (* dref751 ) .field1 ) ( ( dref754 .stuff .Maybe_158_Just_s .field0 ) ) ) ) );
        }
    }
}

static  uint32_t   reduce543 (    struct Map_544  iterable1033 ,    uint32_t  base1035 ,    uint32_t (*  fun1037 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x1038 = (  base1035 );
    struct Map_544  it1039 = ( (  into_dash_iter545 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_54  dref1040 = ( (  next546 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_54_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_54_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_54_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    uint32_t  temp547;
    return (  temp547 );
}

static  struct Map_544   map548 (    struct StrView_24  iterable758 ,    uint32_t (*  fun760 )(    struct Char_17  ) ) {
    struct StrViewIter_155  it761 = ( (  into_dash_iter162 ) ( (  iterable758 ) ) );
    return ( ( Map_544_Map ) ( (  it761 ) ,  (  fun760 ) ) );
}

static  void *   cast_dash_ptr555 (    int64_t *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of556 (    int64_t  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  int64_t   zeroed553 (  ) {
    int64_t  temp554;
    int64_t  x549 = (  temp554 );
    ( ( memset ) ( ( (  cast_dash_ptr555 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of556 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  uint8_t *   cast557 (    int64_t *  x346 ) {
    return ( (uint8_t * ) (  x346 ) );
}

static  int64_t   cast_dash_on_dash_zeroed551 (    uint8_t  x552 ) {
    int64_t  temp552 = ( (  zeroed553 ) ( ) );
    int64_t *  y553 = ( &temp552 );
    uint8_t *  yp554 = ( (  cast557 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  int64_t   u8_dash_i64550 (    uint8_t  x636 ) {
    return ( (  cast_dash_on_dash_zeroed551 ) ( (  x636 ) ) );
}

struct StrConcat_560 {
    struct Char_17  field0;
    struct Char_17  field1;
};

static struct StrConcat_560 StrConcat_560_StrConcat (  struct Char_17  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_560 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_559 {
    struct StrConcat_560  field0;
    struct StrView_24  field1;
};

static struct StrConcat_559 StrConcat_559_StrConcat (  struct StrConcat_560  field0 ,  struct StrView_24  field1 ) {
    return ( struct StrConcat_559 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_564 {
    struct StrView_24  field0;
    struct StrConcat_559  field1;
};

static struct StrConcat_564 StrConcat_564_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_559  field1 ) {
    return ( struct StrConcat_564 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_563 {
    struct StrConcat_564  field0;
    struct Char_17  field1;
};

static struct StrConcat_563 StrConcat_563_StrConcat (  struct StrConcat_564  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_563 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_4   print_dash_str567 (    struct StrConcat_560  self1418 ) {
    struct StrConcat_560  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str78 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str566 (    struct StrConcat_559  self1418 ) {
    struct StrConcat_559  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str567 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str69 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str565 (    struct StrConcat_564  self1418 ) {
    struct StrConcat_564  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str69 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str566 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print_dash_str562 (    struct StrConcat_563  self1418 ) {
    struct StrConcat_563  dref1419 = (  self1418 );
    if ( true ) {
        ( (  print_dash_str565 ) ( ( dref1419 .field0 ) ) );
        ( (  print_dash_str78 ) ( ( dref1419 .field1 ) ) );
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   panic561 (    struct StrConcat_559  errmsg1622 ) {
    ( (  print_dash_str562 ) ( ( ( StrConcat_563_StrConcat ) ( ( ( StrConcat_564_StrConcat ) ( ( (  from_dash_string94 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1622 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint8_t   or_dash_fail558 (    struct Maybe_350  x1635 ,    struct StrConcat_559  errmsg1637 ) {
    struct Maybe_350  dref1638 = (  x1635 );
    if ( dref1638.tag == Maybe_350_None_t ) {
        ( (  panic561 ) ( (  errmsg1637 ) ) );
        return ( (  undefined351 ) ( ) );
    }
    else {
        if ( dref1638.tag == Maybe_350_Just_t ) {
            return ( dref1638 .stuff .Maybe_350_Just_s .field0 );
        }
    }
}

static  enum Ordering_57   cmp569 (    struct Char_17  l712 ,    struct Char_17  r714 ) {
    if ( ( ( !  eq447 ( ( (  l712 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) || ( !  eq447 ( ( (  r714 ) .f_num_dash_bytes ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) {
        const char*  temp570 = ( (  from_dash_string70 ) ( ( "(TODO) comparison of non-ascii characters not implemented" ) ,  ( 57 ) ) );
        printf("%s\n", temp570);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( (  cmp99 ) ( ( (  char_dash_u8311 ) ( (  l712 ) ) ) ,  ( (  char_dash_u8311 ) ( (  r714 ) ) ) ) );
}

static  struct Maybe_350   hex_dash_digit568 (    struct Char_17  c2339 ) {
    if ( ( (  cmp569 ( (  c2339 ) , ( (  from_dash_charlike95 ) ( ( "0" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp569 ( (  c2339 ) , ( (  from_dash_charlike95 ) ( ( "9" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_350_Just ) ( (  op_dash_sub338 ( ( (  char_dash_u8311 ) ( (  c2339 ) ) ) , ( (  char_dash_u8311 ) ( ( (  from_dash_charlike95 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp569 ( (  c2339 ) , ( (  from_dash_charlike95 ) ( ( "a" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp569 ( (  c2339 ) , ( (  from_dash_charlike95 ) ( ( "f" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_350_Just ) ( (  op_dash_add100 ( (  op_dash_sub338 ( ( (  char_dash_u8311 ) ( (  c2339 ) ) ) , ( (  char_dash_u8311 ) ( ( (  from_dash_charlike95 ) ( ( "a" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral86 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp569 ( (  c2339 ) , ( (  from_dash_charlike95 ) ( ( "A" ) ,  ( 1 ) ) ) ) != 0 ) && (  cmp569 ( (  c2339 ) , ( (  from_dash_charlike95 ) ( ( "F" ) ,  ( 1 ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_350_Just ) ( (  op_dash_add100 ( (  op_dash_sub338 ( ( (  char_dash_u8311 ) ( (  c2339 ) ) ) , ( (  char_dash_u8311 ) ( ( (  from_dash_charlike95 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) ) , (  from_dash_integral86 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_350) { .tag = Maybe_350_None_t } );
}

static  uint32_t   lam549 (    struct Char_17  c2344 ) {
    return ( (  from_dash_integral90 ) ( ( (  u8_dash_i64550 ) ( ( (  or_dash_fail558 ) ( ( (  hex_dash_digit568 ) ( (  c2344 ) ) ) ,  ( ( StrConcat_559_StrConcat ) ( ( ( StrConcat_560_StrConcat ) ( ( (  from_dash_charlike95 ) ( ( "\"" ) ,  ( 1 ) ) ) ,  (  c2344 ) ) ) ,  ( (  from_dash_string94 ) ( ( "\" is not a hex digit." ) ,  ( 21 ) ) ) ) ) ) ) ) ) ) );
}

static  uint32_t   op_dash_add572 (    uint32_t  l225 ,    uint32_t  r227 ) {
    return ( (  l225 ) + (  r227 ) );
}

static  uint32_t   lam571 (    uint32_t  elem2346 ,    uint32_t  b2348 ) {
    return (  op_dash_add572 ( (  op_dash_mul245 ( (  b2348 ) , (  from_dash_integral90 ( 16 ) ) ) ) , (  elem2346 ) ) );
}

static  uint32_t   from_dash_hex542 (    struct StrView_24  arr2342 ) {
    return ( (  reduce543 ) ( ( (  map548 ) ( (  arr2342 ) ,  (  lam549 ) ) ) ,  (  from_dash_integral90 ( 0 ) ) ,  (  lam571 ) ) );
}

static  bool   eq574 (    char  l363 ,    char  r365 ) {
    return ( (  l363 ) == (  r365 ) );
}

static  char   from_dash_charlike575 (    uint8_t *  ptr358 ,    size_t  num_dash_bytes360 ) {
    if ( ( !  eq447 ( (  num_dash_bytes360 ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        const char*  temp576 = ( (  from_dash_string70 ) ( ( "(Cnile.AsciiChar.from-charlike) character is not valid ascii" ) ,  ( 60 ) ) );
        printf("%s\n", temp576);
        exit ( 1 );
        ( Unit_4_Unit );
    }
    return ( ( (char ) ( * (  ptr358 ) ) ) );
}

struct Array_577 {
    char _arr [32];
};

static  void *   cast_dash_ptr581 (    struct Array_577 *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of582 (    struct Array_577  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  struct Array_577   zeroed579 (  ) {
    struct Array_577  temp580;
    struct Array_577  x549 = (  temp580 );
    ( ( memset ) ( ( (  cast_dash_ptr581 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of582 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  char *   cast_dash_ptr586 (    struct Array_577 *  p349 ) {
    return ( (char * ) (  p349 ) );
}

static  char *   offset_dash_ptr587 (    char *  x333 ,    int64_t  count335 ) {
    char  temp588;
    return ( (char * ) ( ( (void*) (  x333 ) ) + (  op_dash_mul105 ( (  count335 ) , ( (int64_t ) ( sizeof( ( (  temp588 ) ) ) ) ) ) ) ) );
}

static  char *   get_dash_ptr585 (    struct Array_577 *  arr2073 ,    size_t  i2076 ) {
    if ( ( (  cmp56 ( (  i2076 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i2076 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic60 ) ( ( ( StrConcat_61_StrConcat ) ( ( ( StrConcat_62_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to array at index " ) ,  ( 25 ) ) ) ,  (  i2076 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
    }
    char *  p2077 = ( ( (  cast_dash_ptr586 ) ( (  arr2073 ) ) ) );
    return ( (  offset_dash_ptr587 ) ( (  p2077 ) ,  ( (int64_t ) (  i2076 ) ) ) );
}

static  enum Unit_4   set584 (    struct Array_577 *  arr2086 ,    size_t  i2089 ,    char  e2091 ) {
    char *  p2092 = ( (  get_dash_ptr585 ) ( (  arr2086 ) ,  (  i2089 ) ) );
    (*  p2092 ) = (  e2091 );
    return ( Unit_4_Unit );
}

struct Slice_590 {
    char *  f_ptr;
    size_t  f_count;
};

static  char   or_dash_fail593 (    struct Maybe_528  x1635 ,    struct StrConcat_265  errmsg1637 ) {
    struct Maybe_528  dref1638 = (  x1635 );
    if ( dref1638.tag == Maybe_528_None_t ) {
        ( (  panic264 ) ( (  errmsg1637 ) ) );
        return ( (  undefined526 ) ( ) );
    }
    else {
        if ( dref1638.tag == Maybe_528_Just_t ) {
            return ( dref1638 .stuff .Maybe_528_Just_s .field0 );
        }
    }
}

static  struct Maybe_528   try_dash_get594 (    struct Slice_590  slice1673 ,    size_t  i1675 ) {
    if ( ( (  cmp56 ( (  i1675 ) , (  from_dash_integral0 ( 0 ) ) ) == 0 ) || (  cmp56 ( (  i1675 ) , ( (  slice1673 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_528) { .tag = Maybe_528_None_t } );
    }
    char *  elem_dash_ptr1676 = ( (  offset_dash_ptr587 ) ( ( (  slice1673 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  i1675 ) ) ) ) );
    return ( ( Maybe_528_Just ) ( ( * (  elem_dash_ptr1676 ) ) ) );
}

static  char   get592 (    struct Slice_590  slice1679 ,    size_t  i1681 ) {
    return ( (  or_dash_fail593 ) ( ( (  try_dash_get594 ) ( (  slice1679 ) ,  (  i1681 ) ) ) ,  ( ( StrConcat_265_StrConcat ) ( ( ( StrConcat_266_StrConcat ) ( ( ( StrConcat_63_StrConcat ) ( ( ( StrConcat_64_StrConcat ) ( ( (  from_dash_string94 ) ( ( "Access to slice at index " ) ,  ( 25 ) ) ) ,  (  i1681 ) ) ) ,  ( (  from_dash_string94 ) ( ( ". (max: " ) ,  ( 8 ) ) ) ) ) ,  ( (  slice1679 ) .f_count ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ")" ) ,  ( 1 ) ) ) ) ) ) );
}

static  char   elem_dash_get591 (    struct Slice_590  self1777 ,    size_t  idx1779 ) {
    return ( (  get592 ) ( (  self1777 ) ,  (  idx1779 ) ) );
}

struct Scanner_595 {
    struct StrViewIter_155  f_s;
};

static  struct Scanner_595   mk_dash_from_dash_str597 (    struct StrView_24  s2946 ) {
    return ( (struct Scanner_595) { .f_s = ( (  chars161 ) ( (  s2946 ) ) ) } );
}

static  uint8_t *   cast_dash_ptr600 (    char *  p349 ) {
    return ( (uint8_t * ) (  p349 ) );
}

static  struct Slice_7   cast_dash_slice599 (    struct Slice_590  s1842 ) {
    return ( (struct Slice_7) { .f_ptr = ( (  cast_dash_ptr600 ) ( ( (  s1842 ) .f_ptr ) ) ) , .f_count = ( (  s1842 ) .f_count ) } );
}

static  struct StrView_24   from_dash_ascii_dash_slice598 (    struct Slice_590  sl2040 ) {
    return ( (struct StrView_24) { .f_contents = ( (  cast_dash_slice599 ) ( (  sl2040 ) ) ) } );
}

struct TakeWhile_602 {
    struct Scanner_595  f_it;
    bool (*  f_pred )(    struct Char_17  );
};

static  struct Scanner_595   into_dash_iter605 (    struct Scanner_595  self2940 ) {
    return (  self2940 );
}

static  struct Scanner_595   into_dash_iter604 (    struct Scanner_595 *  self738 ) {
    return ( (  into_dash_iter605 ) ( ( * (  self738 ) ) ) );
}

static  struct TakeWhile_602   take_dash_while603 (    struct Scanner_595 *  it923 ,    bool (*  pred925 )(    struct Char_17  ) ) {
    return ( (struct TakeWhile_602) { .f_it = ( (  into_dash_iter604 ) ( (  it923 ) ) ) , .f_pred = (  pred925 ) } );
}

static  struct Maybe_158   next609 (    struct Scanner_595 *  self2937 ) {
    return ( (  next159 ) ( ( & ( ( * (  self2937 ) ) .f_s ) ) ) );
}

static  struct Maybe_158   next608 (    struct TakeWhile_602 *  self917 ) {
    struct Maybe_158  mx918 = ( (  next609 ) ( ( & ( ( * (  self917 ) ) .f_it ) ) ) );
    struct Maybe_158  dref919 = (  mx918 );
    if ( dref919.tag == Maybe_158_None_t ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    else {
        if ( dref919.tag == Maybe_158_Just_t ) {
            if ( ( ( ( * (  self917 ) ) .f_pred ) ( ( dref919 .stuff .Maybe_158_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_158_Just ) ( ( dref919 .stuff .Maybe_158_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
            }
        }
    }
}

static  struct TakeWhile_602   into_dash_iter611 (    struct TakeWhile_602  self914 ) {
    return (  self914 );
}

static  struct Maybe_158   head607 (    struct TakeWhile_602  it1082 ) {
    struct TakeWhile_602  temp610 = ( (  into_dash_iter611 ) ( (  it1082 ) ) );
    return ( (  next608 ) ( ( &temp610 ) ) );
}

static  bool   null606 (    struct TakeWhile_602  it1091 ) {
    struct Maybe_158  dref1092 = ( (  head607 ) ( (  it1091 ) ) );
    if ( dref1092.tag == Maybe_158_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

struct env614 {
    ;
    struct Scanner_595 *  it1126;
};

struct envunion615 {
    struct Maybe_158  (*fun) (  struct env614*  ,    int32_t  );
    struct env614 env;
};

static  enum Unit_4   for_dash_each613 (    struct Range_248  iterable1014 ,   struct envunion615  fun1016 ) {
    struct RangeIter_251  temp616 = ( (  into_dash_iter253 ) ( (  iterable1014 ) ) );
    struct RangeIter_251 *  it1017 = ( &temp616 );
    while ( ( true ) ) {
        struct Maybe_254  dref1018 = ( (  next255 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_254_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_254_Just_t ) {
                struct envunion615  temp617 = (  fun1016 );
                ( temp617.fun ( &temp617.env ,  ( dref1018 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct Maybe_158   lam618 (   struct env614* env ,    int32_t  dref1129 ) {
    return ( (  next609 ) ( ( env->it1126 ) ) );
}

static  enum Unit_4   drop_prime_612 (    struct Scanner_595 *  it1126 ,    size_t  n1128 ) {
    struct env614 envinst614 = {
        .it1126 =  it1126 ,
    };
    ( (  for_dash_each613 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 1 ) ) ,  ( (  size_dash_i3271 ) ( (  n1128 ) ) ) ) ) ,  ( (struct envunion615){ .fun = (  struct Maybe_158  (*) (  struct env614*  ,    int32_t  ) )lam618 , .env =  envinst614 } ) ) );
    return ( Unit_4_Unit );
}

static  size_t   reduce620 (    struct TakeWhile_602  iterable1033 ,    size_t  base1035 ,    size_t (*  fun1037 )(    struct Char_17  ,    size_t  ) ) {
    size_t  x1038 = (  base1035 );
    struct TakeWhile_602  it1039 = ( (  into_dash_iter611 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_158  dref1040 = ( (  next608 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_158_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_158_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_158_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    size_t  temp621;
    return (  temp621 );
}

static  size_t   lam622 (    struct Char_17  dref1045 ,    size_t  x1047 ) {
    return (  op_dash_add107 ( (  x1047 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count619 (    struct TakeWhile_602  it1044 ) {
    return ( (  reduce620 ) ( (  it1044 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam622 ) ) );
}

static  struct TakeWhile_602   chars624 (    struct TakeWhile_602  self1566 ) {
    return (  self1566 );
}

static  struct Maybe_314   reduce625 (    struct TakeWhile_602  iterable1033 ,    struct Maybe_314  base1035 ,    struct Maybe_314 (*  fun1037 )(    struct Char_17  ,    struct Maybe_314  ) ) {
    struct Maybe_314  x1038 = (  base1035 );
    struct TakeWhile_602  it1039 = ( (  into_dash_iter611 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_158  dref1040 = ( (  next608 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_158_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_158_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_158_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    struct Maybe_314  temp626;
    return (  temp626 );
}

static  struct Maybe_314   sequence_dash_maybe627 (    struct Char_17  e2260 ,    struct Maybe_314  b2262 ) {
    struct Maybe_314  dref2263 = (  b2262 );
    if ( dref2263.tag == Maybe_314_None_t ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    else {
        if ( dref2263.tag == Maybe_314_Just_t ) {
            struct Maybe_254  dref2265 = ( (  parse_dash_digit328 ) ( (  e2260 ) ) );
            if ( dref2265.tag == Maybe_254_None_t ) {
                return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
            }
            else {
                if ( dref2265.tag == Maybe_254_Just_t ) {
                    return ( ( Maybe_314_Just ) ( (  op_dash_add339 ( (  op_dash_mul105 ( ( dref2263 .stuff .Maybe_314_Just_s .field0 ) , (  from_dash_integral296 ( 10 ) ) ) ) , ( (  i32_dash_i64340 ) ( ( dref2265 .stuff .Maybe_254_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_314   parse_dash_int623 (    struct TakeWhile_602  s2257 ) {
    struct TakeWhile_602  cs2267 = ( (  chars624 ) ( (  s2257 ) ) );
    struct Maybe_158  dref2268 = ( (  head607 ) ( (  cs2267 ) ) );
    if ( dref2268.tag == Maybe_158_Just_t ) {
        return ( (  reduce625 ) ( (  cs2267 ) ,  ( ( Maybe_314_Just ) ( (  from_dash_integral296 ( 0 ) ) ) ) ,  (  sequence_dash_maybe627 ) ) );
    }
    else {
        if ( dref2268.tag == Maybe_158_None_t ) {
            return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
        }
    }
}

static  struct Maybe_314   scan_dash_int601 (    struct Scanner_595 *  sc2949 ) {
    struct TakeWhile_602  digit_dash_chars2950 = ( (  take_dash_while603 ) ( (  sc2949 ) ,  (  is_dash_digit329 ) ) );
    if ( ( (  null606 ) ( (  digit_dash_chars2950 ) ) ) ) {
        return ( (struct Maybe_314) { .tag = Maybe_314_None_t } );
    }
    ( (  drop_prime_612 ) ( (  sc2949 ) ,  ( (  count619 ) ( (  digit_dash_chars2950 ) ) ) ) );
    return ( (  parse_dash_int623 ) ( (  digit_dash_chars2950 ) ) );
}

static  int32_t   i64_dash_i32629 (    int64_t  x591 ) {
    return ( (int32_t ) (  x591 ) );
}

struct StrConcat_631 {
    struct StrView_24  field0;
    int64_t  field1;
};

static struct StrConcat_631 StrConcat_631_StrConcat (  struct StrView_24  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_631 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_634 {
    struct StrView_24  field0;
    struct StrConcat_631  field1;
};

static struct StrConcat_634 StrConcat_634_StrConcat (  struct StrView_24  field0 ,  struct StrConcat_631  field1 ) {
    return ( struct StrConcat_634 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_633 {
    struct StrConcat_634  field0;
    struct Char_17  field1;
};

static struct StrConcat_633 StrConcat_633_StrConcat (  struct StrConcat_634  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_633 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_638 {
    struct StrViewIter_155  f_left;
    struct IntStrIter_383  f_right;
};

struct StrConcatIter_637 {
    struct StrViewIter_155  f_left;
    struct StrConcatIter_638  f_right;
};

struct StrConcatIter_636 {
    struct StrConcatIter_637  f_left;
    struct AppendIter_384  f_right;
};

static  struct StrConcatIter_636   into_dash_iter640 (    struct StrConcatIter_636  self1406 ) {
    return (  self1406 );
}

static  struct Maybe_158   next643 (    struct StrConcatIter_638 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next159 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next391 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next642 (    struct StrConcatIter_637 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next159 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next643 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next641 (    struct StrConcatIter_636 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next642 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each635 (    struct StrConcatIter_636  iterable1014 ,    enum Unit_4 (*  fun1016 )(    struct Char_17  ) ) {
    struct StrConcatIter_636  temp639 = ( (  into_dash_iter640 ) ( (  iterable1014 ) ) );
    struct StrConcatIter_636 *  it1017 = ( &temp639 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next641 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                ( (  fun1016 ) ( ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrConcatIter_638   into_dash_iter649 (    struct StrConcat_631  dref1413 ) {
    return ( (struct StrConcatIter_638) { .f_left = ( (  chars161 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars415 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_638   chars648 (    struct StrConcat_631  self1424 ) {
    return ( (  into_dash_iter649 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_637   into_dash_iter647 (    struct StrConcat_634  dref1413 ) {
    return ( (struct StrConcatIter_637) { .f_left = ( (  chars161 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars648 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_637   chars646 (    struct StrConcat_634  self1424 ) {
    return ( (  into_dash_iter647 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_636   into_dash_iter645 (    struct StrConcat_633  dref1413 ) {
    return ( (struct StrConcatIter_636) { .f_left = ( (  chars646 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_636   chars644 (    struct StrConcat_633  self1424 ) {
    return ( (  into_dash_iter645 ) ( (  self1424 ) ) );
}

static  enum Unit_4   print632 (    struct StrConcat_633  s1611 ) {
    ( (  for_dash_each635 ) ( ( (  chars644 ) ( (  s1611 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  enum MouseButton_515   undefined650 (  ) {
    enum MouseButton_515  temp651;
    return (  temp651 );
}

static  enum MouseButton_515   panic_prime_630 (    struct StrConcat_631  errmsg1625 ) {
    ( (  print632 ) ( ( ( StrConcat_633_StrConcat ) ( ( ( StrConcat_634_StrConcat ) ( ( (  from_dash_string94 ) ( ( "PANIC: " ) ,  ( 7 ) ) ) ,  (  errmsg1625 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( (  undefined650 ) ( ) );
}

static  enum MouseButton_515   btn_dash_to_dash_mouse_dash_button628 (    int64_t  btn3100 ) {
    return ( {  int32_t  dref3101 = ( (  i64_dash_i32629 ) ( (  btn3100 ) ) ) ;  dref3101 == 0 ? ( MouseButton_515_MouseLeft ) :  dref3101 == 1 ? ( MouseButton_515_MouseMiddle ) :  dref3101 == 2 ? ( MouseButton_515_MouseRight ) :  dref3101 == 64 ? ( MouseButton_515_ScrollUp ) :  dref3101 == 65 ? ( MouseButton_515_ScrollDown ) : ( (  panic_prime_630 ) ( ( ( StrConcat_631_StrConcat ) ( ( (  from_dash_string94 ) ( ( "incorrect mouse button code: " ) ,  ( 29 ) ) ) ,  (  btn3100 ) ) ) ) ) ; } );
}

static  struct Scanner_595   mk653 (    struct StrView_24  s2943 ) {
    return ( (struct Scanner_595) { .f_s = ( (  into_dash_iter162 ) ( (  s2943 ) ) ) } );
}

static  struct Maybe_511   parse_dash_csi589 (    struct Slice_590  seq3107 ) {
    if ( (  eq447 ( ( (  seq3107 ) .f_count ) , (  from_dash_integral0 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    char  last3108 = (  elem_dash_get591 ( (  seq3107 ) , (  op_dash_sub260 ( ( (  seq3107 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) );
    if ( ( (  eq574 ( (  elem_dash_get591 ( (  seq3107 ) , (  from_dash_integral0 ( 0 ) ) ) ) , ( (  from_dash_charlike575 ) ( ( "<" ) ,  ( 1 ) ) ) ) ) && ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) || (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) ) ) {
        struct Scanner_595  temp596 = ( (  mk_dash_from_dash_str597 ) ( ( (  substr355 ) ( ( (  from_dash_ascii_dash_slice598 ) ( (  seq3107 ) ) ) ,  (  from_dash_integral0 ( 1 ) ) ,  ( (  seq3107 ) .f_count ) ) ) ) );
        struct Scanner_595 *  sc3109 = ( &temp596 );
        struct Maybe_314  dref3110 = ( (  scan_dash_int601 ) ( (  sc3109 ) ) );
        if ( dref3110.tag == Maybe_314_None_t ) {
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
        else {
            if ( dref3110.tag == Maybe_314_Just_t ) {
                ( (  next609 ) ( (  sc3109 ) ) );
                struct Maybe_314  dref3112 = ( (  scan_dash_int601 ) ( (  sc3109 ) ) );
                if ( dref3112.tag == Maybe_314_None_t ) {
                    return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
                }
                else {
                    if ( dref3112.tag == Maybe_314_Just_t ) {
                        ( (  next609 ) ( (  sc3109 ) ) );
                        struct Maybe_314  dref3114 = ( (  scan_dash_int601 ) ( (  sc3109 ) ) );
                        if ( dref3114.tag == Maybe_314_None_t ) {
                            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
                        }
                        else {
                            if ( dref3114.tag == Maybe_314_Just_t ) {
                                return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Mouse ) ( ( (struct MouseEvent_514) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button628 ) ( ( dref3110 .stuff .Maybe_314_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub398 ( ( (  i64_dash_i32629 ) ( ( dref3112 .stuff .Maybe_314_Just_s .field0 ) ) ) , (  from_dash_integral45 ( 1 ) ) ) ) , .f_y = (  op_dash_sub398 ( ( (  i64_dash_i32629 ) ( ( dref3114 .stuff .Maybe_314_Just_s .field0 ) ) ) , (  from_dash_integral45 ( 1 ) ) ) ) , .f_pressed = (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "M" ) ,  ( 1 ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq447 ( ( (  seq3107 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) {
        if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Up_t } ) ) ) ) );
        }
        if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Down_t } ) ) ) ) );
        }
        if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Right_t } ) ) ) ) );
        }
        if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Left_t } ) ) ) ) );
        }
        if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Home_t } ) ) ) ) );
        }
        if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    if ( (  eq574 ( (  last3108 ) , ( (  from_dash_charlike575 ) ( ( "~" ) ,  ( 1 ) ) ) ) ) ) {
        struct Scanner_595  temp652 = ( (  mk653 ) ( ( (  from_dash_ascii_dash_slice598 ) ( (  seq3107 ) ) ) ) );
        struct Scanner_595 *  sc3116 = ( &temp652 );
        struct Maybe_314  dref3117 = ( (  scan_dash_int601 ) ( (  sc3116 ) ) );
        if ( dref3117.tag == Maybe_314_None_t ) {
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
        else {
            if ( dref3117.tag == Maybe_314_Just_t ) {
                return ( {  int32_t  dref3119 = ( (  i64_dash_i32629 ) ( ( dref3117 .stuff .Maybe_314_Just_s .field0 ) ) ) ;  dref3119 == 1 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Home_t } ) ) ) ) ) :  dref3119 == 2 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Insert_t } ) ) ) ) ) :  dref3119 == 3 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Delete_t } ) ) ) ) ) :  dref3119 == 4 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_End_t } ) ) ) ) ) :  dref3119 == 5 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_PageUp_t } ) ) ) ) ) :  dref3119 == 6 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_PageDown_t } ) ) ) ) ) :  dref3119 == 15 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F5_t } ) ) ) ) ) :  dref3119 == 17 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F6_t } ) ) ) ) ) :  dref3119 == 18 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F7_t } ) ) ) ) ) :  dref3119 == 19 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F8_t } ) ) ) ) ) :  dref3119 == 20 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F9_t } ) ) ) ) ) :  dref3119 == 21 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F10_t } ) ) ) ) ) :  dref3119 == 23 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F11_t } ) ) ) ) ) :  dref3119 == 24 ? ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_F12_t } ) ) ) ) ) : ( (struct Maybe_511) { .tag = Maybe_511_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
}

static  struct Slice_590   subslice654 (    struct Slice_590  slice1692 ,    size_t  from1694 ,    size_t  to1696 ) {
    char *  begin_dash_ptr1697 = ( (  offset_dash_ptr587 ) ( ( (  slice1692 ) .f_ptr ) ,  ( (  size_dash_i64160 ) ( (  from1694 ) ) ) ) );
    if ( ( (  cmp56 ( (  from1694 ) , (  to1696 ) ) != 0 ) || (  cmp56 ( (  from1694 ) , ( (  slice1692 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_590) { .f_ptr = (  begin_dash_ptr1697 ) , .f_count = (  from_dash_integral0 ( 0 ) ) } );
    }
    size_t  count1698 = (  op_dash_sub260 ( ( (  min357 ) ( (  to1696 ) ,  ( (  slice1692 ) .f_count ) ) ) , (  from1694 ) ) );
    return ( (struct Slice_590) { .f_ptr = (  begin_dash_ptr1697 ) , .f_count = (  count1698 ) } );
}

static  char *   cast656 (    struct Array_577 *  x346 ) {
    return ( (char * ) (  x346 ) );
}

static  struct Slice_590   as_dash_slice655 (    struct Array_577 *  arr2095 ) {
    return ( (struct Slice_590) { .f_ptr = ( (  cast656 ) ( (  arr2095 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

struct Maybe_658 {
    enum {
        Maybe_658_None_t,
        Maybe_658_Just_t,
    } tag;
    union {
        struct {
            struct Key_513  field0;
        } Maybe_658_Just_s;
    } stuff;
};

static struct Maybe_658 Maybe_658_Just (  struct Key_513  field0 ) {
    return ( struct Maybe_658 ) { .tag = Maybe_658_Just_t, .stuff = { .Maybe_658_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_658   parse_dash_ss3659 (    char  c3104 ) {
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "A" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_Up_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "B" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_Down_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "C" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_Right_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "D" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_Left_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_Home_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "F" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_End_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "P" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_F1_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "Q" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_F2_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "R" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_F3_t } ) ) );
    }
    if ( (  eq574 ( (  c3104 ) , ( (  from_dash_charlike575 ) ( ( "S" ) ,  ( 1 ) ) ) ) ) ) {
        return ( ( Maybe_658_Just ) ( ( (struct Key_513) { .tag = Key_513_F4_t } ) ) );
    }
    return ( (struct Maybe_658) { .tag = Maybe_658_None_t } );
}

static  struct Maybe_511   read_dash_key524 (  ) {
    char  temp525 = ( (  undefined526 ) ( ) );
    char *  ch3121 = ( &temp525 );
    struct Maybe_528  dref3122 = ( (  read_dash_byte529 ) ( (  from_dash_integral45 ( 0 ) ) ) );
    if ( dref3122.tag == Maybe_528_None_t ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    else {
        if ( dref3122.tag == Maybe_528_Just_t ) {
            (*  ch3121 ) = ( dref3122 .stuff .Maybe_528_Just_s .field0 );
        }
    }
    if ( (  eq82 ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) , (  from_dash_integral86 ( 13 ) ) ) ) ) {
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Enter_t } ) ) ) ) );
    }
    if ( (  eq82 ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) , (  from_dash_integral86 ( 127 ) ) ) ) ) {
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp99 ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) , (  from_dash_integral86 ( 27 ) ) ) == 0 ) && ( !  eq82 ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) , (  from_dash_integral86 ( 9 ) ) ) ) ) ) {
        char  letter3124 = ( (  u8_dash_ascii537 ) ( ( (  u32_dash_u892 ) ( ( (  u32_dash_or109 ) ( ( (  u8_dash_u32538 ) ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) ) ) ,  ( (  from_dash_hex542 ) ( ( (  from_dash_string94 ) ( ( "60" ) ,  ( 2 ) ) ) ) ) ) ) ) ) ) );
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( ( Key_513_Ctrl ) ( (  letter3124 ) ) ) ) ) ) );
    }
    if ( ( !  eq82 ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) , (  from_dash_integral86 ( 27 ) ) ) ) ) {
        if ( (  cmp99 ( ( (  ascii_dash_u8536 ) ( ( * (  ch3121 ) ) ) ) , (  from_dash_integral86 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key524 ) ( ) );
        } else {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( ( Key_513_Char ) ( ( * (  ch3121 ) ) ) ) ) ) ) );
        }
    }
    char  temp573 = ( (  undefined526 ) ( ) );
    char *  ch23125 = ( &temp573 );
    struct Maybe_528  dref3126 = ( (  read_dash_byte529 ) ( (  from_dash_integral45 ( 50 ) ) ) );
    if ( dref3126.tag == Maybe_528_None_t ) {
        return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref3126.tag == Maybe_528_Just_t ) {
            (*  ch23125 ) = ( dref3126 .stuff .Maybe_528_Just_s .field0 );
        }
    }
    if ( (  eq574 ( ( * (  ch23125 ) ) , ( (  from_dash_charlike575 ) ( ( "[" ) ,  ( 1 ) ) ) ) ) ) {
        struct Array_577  temp578 = ( ( (  zeroed579 ) ( ) ) );
        struct Array_577 *  seq3128 = ( &temp578 );
        int32_t  slen3129 = (  from_dash_integral45 ( 0 ) );
        while ( (  cmp256 ( (  slen3129 ) , (  from_dash_integral45 ( 31 ) ) ) == 0 ) ) {
            char  temp583 = ( (  undefined526 ) ( ) );
            char *  sc3130 = ( &temp583 );
            struct Maybe_528  dref3131 = ( (  read_dash_byte529 ) ( (  from_dash_integral45 ( 50 ) ) ) );
            if ( dref3131.tag == Maybe_528_None_t ) {
                break;
            }
            else {
                if ( dref3131.tag == Maybe_528_Just_t ) {
                    (*  sc3130 ) = ( dref3131 .stuff .Maybe_528_Just_s .field0 );
                }
            }
            ( (  set584 ) ( (  seq3128 ) ,  ( (  i32_dash_size275 ) ( (  slen3129 ) ) ) ,  ( * (  sc3130 ) ) ) );
            slen3129 = (  op_dash_add257 ( (  slen3129 ) , (  from_dash_integral45 ( 1 ) ) ) );
            if ( ( (  cmp99 ( ( (  ascii_dash_u8536 ) ( ( * (  sc3130 ) ) ) ) , (  from_dash_integral86 ( 64 ) ) ) != 0 ) && (  cmp99 ( ( (  ascii_dash_u8536 ) ( ( * (  sc3130 ) ) ) ) , (  from_dash_integral86 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi589 ) ( ( (  subslice654 ) ( ( (  as_dash_slice655 ) ( (  seq3128 ) ) ) ,  (  from_dash_integral0 ( 0 ) ) ,  ( (  i32_dash_size275 ) ( (  slen3129 ) ) ) ) ) ) );
    }
    if ( (  eq574 ( ( * (  ch23125 ) ) , ( (  from_dash_charlike575 ) ( ( "O" ) ,  ( 1 ) ) ) ) ) ) {
        char  temp657 = ( (  undefined526 ) ( ) );
        char *  sc3133 = ( &temp657 );
        struct Maybe_528  dref3134 = ( (  read_dash_byte529 ) ( (  from_dash_integral45 ( 50 ) ) ) );
        if ( dref3134.tag == Maybe_528_None_t ) {
            return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref3134.tag == Maybe_528_Just_t ) {
                (*  sc3133 ) = ( dref3134 .stuff .Maybe_528_Just_s .field0 );
            }
        }
        struct Maybe_658  dref3136 = ( (  parse_dash_ss3659 ) ( ( * (  sc3133 ) ) ) );
        if ( dref3136.tag == Maybe_658_None_t ) {
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
        else {
            if ( dref3136.tag == Maybe_658_Just_t ) {
                return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( dref3136 .stuff .Maybe_658_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_511_Just ) ( ( ( InputEvent_512_Key ) ( ( (struct Key_513) { .tag = Key_513_Escape_t } ) ) ) ) );
}

static  struct Maybe_511   read_dash_event521 (   struct env28* env ,    struct Tui_30 *  tui3146 ) {
    struct envunion29  temp522 = ( (struct envunion29){ .fun = (  bool  (*) (  struct env27*  ,    struct Tui_30 *  ) )update_dash_dimensions523 , .env =  env->envinst27 } );
    ( temp522.fun ( &temp522.env ,  (  tui3146 ) ) );
    struct Maybe_511  dref3147 = ( (  read_dash_key524 ) ( ) );
    if ( dref3147.tag == Maybe_511_None_t ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    else {
        if ( dref3147.tag == Maybe_511_Just_t ) {
            (*  tui3146 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_511_Just ) ( ( dref3147 .stuff .Maybe_511_Just_s .field0 ) ) );
        }
    }
}

static  struct Maybe_511   lam519 (   struct env509* env ) {
    struct envunion510  temp520 = ( (struct envunion510){ .fun = (  struct Maybe_511  (*) (  struct env28*  ,    struct Tui_30 *  ) )read_dash_event521 , .env =  env->envinst28 } );
    return ( temp520.fun ( &temp520.env ,  ( env->tui3341 ) ) );
}

static  struct Maybe_511   next661 (    struct FunIter_508 *  self984 ) {
    if ( ( ( * (  self984 ) ) .f_finished ) ) {
        return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
    }
    struct envunion516  temp662 = ( ( * (  self984 ) ) .f_fun );
    struct Maybe_511  dref985 = ( temp662.fun ( &temp662.env ) );
    if ( dref985.tag == Maybe_511_Just_t ) {
        return ( ( Maybe_511_Just ) ( ( dref985 .stuff .Maybe_511_Just_s .field0 ) ) );
    }
    else {
        if ( dref985.tag == Maybe_511_None_t ) {
            (*  self984 ) .f_finished = ( true );
            return ( (struct Maybe_511) { .tag = Maybe_511_None_t } );
        }
    }
}

struct envunion664 {
    bool  (*fun) (  struct env34*  ,    struct Screen_222 *  );
    struct env34 env;
};

static  bool   resize_dash_screen_dash_if_dash_needed665 (   struct env34* env ,    struct Screen_222 *  screen3215 ) {
    struct Tui_30 *  tui3216 = ( ( * (  screen3215 ) ) .f_tui );
    struct envunion35  temp666 = ( (struct envunion35){ .fun = (  bool  (*) (  struct env27*  ,    struct Tui_30 *  ) )update_dash_dimensions523 , .env =  env->envinst27 } );
    ( temp666.fun ( &temp666.env ,  (  tui3216 ) ) );
    if ( ( ! ( ( * (  tui3216 ) ) .f_should_dash_redraw ) ) ) {
        return ( false );
    }
    (*  screen3215 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w3217 = ( ( * ( ( * (  screen3215 ) ) .f_tui ) ) .f_width );
    uint32_t  h3218 = ( ( * ( ( * (  screen3215 ) ) .f_tui ) ) .f_height );
    size_t  nusz3219 = ( (  u32_dash_size237 ) ( (  op_dash_mul245 ( (  w3217 ) , (  h3218 ) ) ) ) );
    if ( (  cmp56 ( (  nusz3219 ) , ( ( ( * (  screen3215 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_222  nuscreen3220 = ( (  mk_dash_screen230 ) ( (  tui3216 ) ,  ( ( * (  screen3215 ) ) .f_al ) ) );
    (*  screen3215 ) .f_current = ( (  nuscreen3220 ) .f_current );
    (*  screen3215 ) .f_previous = ( (  nuscreen3220 ) .f_previous );
    return ( true );
}

static  bool   should_dash_redraw667 (    struct Tui_30 *  tui3151 ) {
    bool  redraw3152 = ( ( * (  tui3151 ) ) .f_should_dash_redraw );
    (*  tui3151 ) .f_should_dash_redraw = ( false );
    return (  redraw3152 );
}

struct env671 {
    struct Slice_223  s1815;
    struct Cell_224 (*  fun1817 )(    struct Cell_224  );
    ;
    ;
    ;
};

struct envunion672 {
    enum Unit_4  (*fun) (  struct env671*  ,    int32_t  );
    struct env671 env;
};

static  enum Unit_4   for_dash_each670 (    struct Range_248  iterable1014 ,   struct envunion672  fun1016 ) {
    struct RangeIter_251  temp673 = ( (  into_dash_iter253 ) ( (  iterable1014 ) ) );
    struct RangeIter_251 *  it1017 = ( &temp673 );
    while ( ( true ) ) {
        struct Maybe_254  dref1018 = ( (  next255 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_254_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_254_Just_t ) {
                struct envunion672  temp674 = (  fun1016 );
                ( temp674.fun ( &temp674.env ,  ( dref1018 .stuff .Maybe_254_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam675 (   struct env671* env ,    int32_t  i1819 ) {
    return ( (  set262 ) ( ( env->s1815 ) ,  ( (  i32_dash_size275 ) ( (  i1819 ) ) ) ,  ( ( env->fun1817 ) ( (  elem_dash_get276 ( ( env->s1815 ) , ( (  i32_dash_size275 ) ( (  i1819 ) ) ) ) ) ) ) ) );
}

static  enum Unit_4   map669 (    struct Slice_223  s1815 ,    struct Cell_224 (*  fun1817 )(    struct Cell_224  ) ) {
    struct env671 envinst671 = {
        .s1815 =  s1815 ,
        .fun1817 =  fun1817 ,
    };
    ( (  for_dash_each670 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_i3271 ) ( (  op_dash_sub260 ( ( (  s1815 ) .f_count ) , (  from_dash_integral0 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct envunion672){ .fun = (  enum Unit_4  (*) (  struct env671*  ,    int32_t  ) )lam675 , .env =  envinst671 } ) ) );
    return ( Unit_4_Unit );
}

static  struct Cell_224   lam676 (    struct Cell_224  dref3187 ) {
    return ( (struct Cell_224) { .f_c = ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) ) , .f_fg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) , .f_bg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) } );
}

static  enum Unit_4   clear_dash_screen668 (    struct Screen_222 *  screen3186 ) {
    ( (  map669 ) ( ( ( * (  screen3186 ) ) .f_current ) ,  (  lam676 ) ) );
    return ( Unit_4_Unit );
}

struct ClockTime_677 {
    uint32_t  f_h;
    uint8_t  f_m;
    uint8_t  f_s;
};

static  uint8_t   i64_dash_u8679 (    int64_t  x588 ) {
    return ( (uint8_t ) (  x588 ) );
}

static  int64_t   mod680 (    int64_t  l1169 ,    int64_t  d1171 ) {
    int64_t  r1172 = (  op_dash_div400 ( (  l1169 ) , (  d1171 ) ) );
    int64_t  m1173 = (  op_dash_sub402 ( (  l1169 ) , (  op_dash_mul105 ( (  r1172 ) , (  d1171 ) ) ) ) );
    if ( (  cmp417 ( (  m1173 ) , (  from_dash_integral296 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add339 ( (  d1171 ) , (  m1173 ) ) );
    } else {
        return (  m1173 );
    }
}

static  uint32_t   i64_dash_u32681 (    int64_t  x594 ) {
    return ( (uint32_t ) (  x594 ) );
}

static  struct ClockTime_677   clock_dash_time_dash_from_dash_secs678 (    int64_t  secs3315 ) {
    if ( (  cmp417 ( (  secs3315 ) , (  from_dash_integral296 ( 0 ) ) ) == 0 ) ) {
        ( (  panic315 ) ( ( (  from_dash_string94 ) ( ( "negative seconds!" ) ,  ( 17 ) ) ) ) );
    }
    uint8_t  s3316 = ( (  i64_dash_u8679 ) ( ( (  mod680 ) ( (  secs3315 ) ,  (  from_dash_integral296 ( 60 ) ) ) ) ) );
    uint8_t  m3317 = ( (  i64_dash_u8679 ) ( ( (  mod680 ) ( (  op_dash_div400 ( (  secs3315 ) , (  from_dash_integral296 ( 60 ) ) ) ) ,  (  from_dash_integral296 ( 60 ) ) ) ) ) );
    uint32_t  h3318 = ( (  i64_dash_u32681 ) ( (  op_dash_div400 ( (  secs3315 ) , (  op_dash_mul105 ( (  from_dash_integral296 ( 60 ) ) , (  from_dash_integral296 ( 60 ) ) ) ) ) ) ) );
    return ( (struct ClockTime_677) { .f_h = (  h3318 ) , .f_m = (  m3317 ) , .f_s = (  s3316 ) } );
}

struct PadZeroes_682 {
    int32_t  f_x;
    uint8_t  f_len;
};

static  uint8_t   max684 (    uint8_t  l1241 ,    uint8_t  r1243 ) {
    if ( (  cmp99 ( (  l1241 ) , (  r1243 ) ) == 2 ) ) {
        return (  l1241 );
    } else {
        return (  r1243 );
    }
}

static  uint8_t   i32_dash_u8685 (    int32_t  x576 ) {
    return ( (uint8_t ) (  x576 ) );
}

static  int32_t   op_dash_div687 (    int32_t  l217 ,    int32_t  r219 ) {
    return ( (  l217 ) / (  r219 ) );
}

static  int32_t   count_dash_digits686 (    int32_t  self1345 ) {
    if ( (  eq184 ( (  self1345 ) , (  from_dash_integral45 ( 0 ) ) ) ) ) {
        return (  from_dash_integral45 ( 1 ) );
    }
    int32_t  digits1346 = (  from_dash_integral45 ( 0 ) );
    while ( (  cmp256 ( (  self1345 ) , (  from_dash_integral45 ( 0 ) ) ) == 2 ) ) {
        self1345 = (  op_dash_div687 ( (  self1345 ) , (  from_dash_integral45 ( 10 ) ) ) );
        digits1346 = (  op_dash_add257 ( (  digits1346 ) , (  from_dash_integral45 ( 1 ) ) ) );
    }
    return (  digits1346 );
}

static  struct PadZeroes_682   pad_dash_zeroes683 (    int32_t  x1544 ,    uint8_t  num_dash_zeroes1546 ,    bool  trim_dash_larger1548 ) {
    return ( (struct PadZeroes_682) { .f_x = (  x1544 ) , .f_len = ( ( ! (  trim_dash_larger1548 ) ) ? (  num_dash_zeroes1546 ) : ( (  max684 ) ( (  num_dash_zeroes1546 ) ,  ( (  i32_dash_u8685 ) ( ( (  count_dash_digits686 ) ( (  x1544 ) ) ) ) ) ) ) ) } );
}

static  int32_t   cast689 (    uint32_t  x346 ) {
    return ( (int32_t ) (  x346 ) );
}

static  int32_t   u32_dash_i32688 (    uint32_t  x630 ) {
    return ( (  cast689 ) ( (  x630 ) ) );
}

struct StrConcat_693 {
    struct PadZeroes_682  field0;
    struct Char_17  field1;
};

static struct StrConcat_693 StrConcat_693_StrConcat (  struct PadZeroes_682  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_693 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_692 {
    struct StrConcat_693  field0;
    struct PadZeroes_682  field1;
};

static struct StrConcat_692 StrConcat_692_StrConcat (  struct StrConcat_693  field0 ,  struct PadZeroes_682  field1 ) {
    return ( struct StrConcat_692 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_691 {
    struct StrConcat_692  field0;
    struct Char_17  field1;
};

static struct StrConcat_691 StrConcat_691_StrConcat (  struct StrConcat_692  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_691 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_690 {
    struct StrConcat_691  field0;
    struct PadZeroes_682  field1;
};

static struct StrConcat_690 StrConcat_690_StrConcat (  struct StrConcat_691  field0 ,  struct PadZeroes_682  field1 ) {
    return ( struct StrConcat_690 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_699 {
    struct PadZeroes_682  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_698 {
    struct StrConcatIter_699  f_left;
    struct PadZeroes_682  f_right;
};

struct StrConcatIter_697 {
    struct StrConcatIter_698  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_696 {
    struct StrConcatIter_697  f_left;
    struct PadZeroes_682  f_right;
};

static  struct PadZeroes_682   chars707 (    struct PadZeroes_682  self1541 ) {
    return (  self1541 );
}

static  struct StrConcatIter_699   into_dash_iter706 (    struct StrConcat_693  dref1413 ) {
    return ( (struct StrConcatIter_699) { .f_left = ( (  chars707 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_699   chars705 (    struct StrConcat_693  self1424 ) {
    return ( (  into_dash_iter706 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_698   into_dash_iter704 (    struct StrConcat_692  dref1413 ) {
    return ( (struct StrConcatIter_698) { .f_left = ( (  chars705 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars707 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_698   chars703 (    struct StrConcat_692  self1424 ) {
    return ( (  into_dash_iter704 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_697   into_dash_iter702 (    struct StrConcat_691  dref1413 ) {
    return ( (struct StrConcatIter_697) { .f_left = ( (  chars703 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_697   chars701 (    struct StrConcat_691  self1424 ) {
    return ( (  into_dash_iter702 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_696   into_dash_iter700 (    struct StrConcat_690  dref1413 ) {
    return ( (struct StrConcatIter_696) { .f_left = ( (  chars701 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars707 ) ( ( dref1413 .field1 ) ) ) } );
}

struct env715 {
    ;
    int32_t  base1150;
};

struct envunion716 {
    int32_t  (*fun) (  struct env715*  ,    int32_t  ,    int32_t  );
    struct env715 env;
};

static  int32_t   reduce714 (    struct Range_248  iterable1033 ,    int32_t  base1035 ,   struct envunion716  fun1037 ) {
    int32_t  x1038 = (  base1035 );
    struct RangeIter_251  it1039 = ( (  into_dash_iter253 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1040 = ( (  next255 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_254_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_254_Just_t ) {
                struct envunion716  temp717 = (  fun1037 );
                x1038 = ( temp717.fun ( &temp717.env ,  ( dref1040 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    int32_t  temp718;
    return (  temp718 );
}

static  int32_t   op_dash_mul720 (    int32_t  l212 ,    int32_t  r214 ) {
    return ( (  l212 ) * (  r214 ) );
}

static  int32_t   lam719 (   struct env715* env ,    int32_t  item1154 ,    int32_t  x1156 ) {
    return (  op_dash_mul720 ( (  x1156 ) , ( env->base1150 ) ) );
}

static  int32_t   pow713 (    int32_t  base1150 ,    int32_t  p1152 ) {
    struct env715 envinst715 = {
        .base1150 =  base1150 ,
    };
    return ( (  reduce714 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  (  op_dash_sub398 ( (  p1152 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral45 ( 1 ) ) ,  ( (struct envunion716){ .fun = (  int32_t  (*) (  struct env715*  ,    int32_t  ,    int32_t  ) )lam719 , .env =  envinst715 } ) ) );
}

static  struct Maybe_158   next712 (    struct PadZeroes_682 *  self1530 ) {
    if ( (  cmp99 ( ( ( * (  self1530 ) ) .f_len ) , (  from_dash_integral86 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    int32_t  trim_dash_down1531 = ( (  pow713 ) ( (  from_dash_integral45 ( 10 ) ) ,  (  op_dash_sub398 ( ( (  u8_dash_i32330 ) ( ( ( * (  self1530 ) ) .f_len ) ) ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
    int32_t  upper1532 = (  op_dash_div687 ( ( ( * (  self1530 ) ) .f_x ) , (  trim_dash_down1531 ) ) );
    int32_t  upper_dash_mask1533 = (  op_dash_mul720 ( (  op_dash_div687 ( (  upper1532 ) , (  from_dash_integral45 ( 10 ) ) ) ) , (  from_dash_integral45 ( 10 ) ) ) );
    uint8_t  digit1534 = ( (  i32_dash_u8685 ) ( (  op_dash_sub398 ( (  upper1532 ) , (  upper_dash_mask1533 ) ) ) ) );
    (*  self1530 ) .f_len = (  op_dash_sub338 ( ( ( * (  self1530 ) ) .f_len ) , (  from_dash_integral86 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1535 = ( (  from_dash_u8403 ) ( (  op_dash_add100 ( (  digit1534 ) , (  from_dash_integral86 ( 48 ) ) ) ) ) );
    return ( ( Maybe_158_Just ) ( (  digit_dash_char1535 ) ) );
}

static  struct Maybe_158   next711 (    struct StrConcatIter_699 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next712 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next710 (    struct StrConcatIter_698 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next711 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next712 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next709 (    struct StrConcatIter_697 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next710 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next708 (    struct StrConcatIter_696 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next709 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next712 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  size_t   reduce695 (    struct StrConcat_690  iterable1033 ,    size_t  base1035 ,    size_t (*  fun1037 )(    struct Char_17  ,    size_t  ) ) {
    size_t  x1038 = (  base1035 );
    struct StrConcatIter_696  it1039 = ( (  into_dash_iter700 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_158  dref1040 = ( (  next708 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_158_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_158_Just_t ) {
                x1038 = ( (  fun1037 ) ( ( dref1040 .stuff .Maybe_158_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    size_t  temp721;
    return (  temp721 );
}

static  size_t   lam722 (    struct Char_17  dref1045 ,    size_t  x1047 ) {
    return (  op_dash_add107 ( (  x1047 ) , (  from_dash_integral0 ( 1 ) ) ) );
}

static  size_t   count694 (    struct StrConcat_690  it1044 ) {
    return ( (  reduce695 ) ( (  it1044 ) ,  (  from_dash_integral0 ( 0 ) ) ,  (  lam722 ) ) );
}

struct Zip_724 {
    struct StrConcatIter_696  f_left_dash_it;
    struct FromIter_454  f_right_dash_it;
};

static  struct Zip_724   into_dash_iter725 (    struct Zip_724  self864 ) {
    return (  self864 );
}

static  struct StrConcatIter_696   into_dash_iter727 (    struct StrConcatIter_696  self1406 ) {
    return (  self1406 );
}

static  struct Zip_724   zip726 (    struct StrConcatIter_696  left875 ,    struct FromIter_454  right877 ) {
    struct StrConcatIter_696  left_dash_it878 = ( (  into_dash_iter727 ) ( (  left875 ) ) );
    struct FromIter_454  right_dash_it879 = ( (  into_dash_iter462 ) ( (  right877 ) ) );
    return ( (struct Zip_724) { .f_left_dash_it = (  left_dash_it878 ) , .f_right_dash_it = (  right_dash_it879 ) } );
}

static  struct StrConcatIter_696   chars728 (    struct StrConcat_690  self1424 ) {
    return ( (  into_dash_iter700 ) ( (  self1424 ) ) );
}

struct Tuple2_731 {
    struct Char_17  field0;
    int32_t  field1;
};

static struct Tuple2_731 Tuple2_731_Tuple2 (  struct Char_17  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_731 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_730 {
    enum {
        Maybe_730_None_t,
        Maybe_730_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_731  field0;
        } Maybe_730_Just_s;
    } stuff;
};

static struct Maybe_730 Maybe_730_Just (  struct Tuple2_731  field0 ) {
    return ( struct Maybe_730 ) { .tag = Maybe_730_Just_t, .stuff = { .Maybe_730_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_730   next732 (    struct Zip_724 *  self867 ) {
    struct Zip_724  copy868 = ( * (  self867 ) );
    while ( ( true ) ) {
        struct Maybe_158  dref869 = ( (  next708 ) ( ( & ( (  copy868 ) .f_left_dash_it ) ) ) );
        if ( dref869.tag == Maybe_158_None_t ) {
            return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
        }
        else {
            if ( dref869.tag == Maybe_158_Just_t ) {
                struct Maybe_254  dref871 = ( (  next459 ) ( ( & ( (  copy868 ) .f_right_dash_it ) ) ) );
                if ( dref871.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
                }
                else {
                    if ( dref871.tag == Maybe_254_Just_t ) {
                        ( (  next708 ) ( ( & ( ( * (  self867 ) ) .f_left_dash_it ) ) ) );
                        ( (  next459 ) ( ( & ( ( * (  self867 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_730_Just ) ( ( ( Tuple2_731_Tuple2 ) ( ( dref869 .stuff .Maybe_158_Just_s .field0 ) ,  ( dref871 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct Tuple2_735 {
    struct CharDestructured_80  field0;
    struct CharDestructured_80  field1;
};

static struct Tuple2_735 Tuple2_735_Tuple2 (  struct CharDestructured_80  field0 ,  struct CharDestructured_80  field1 ) {
    return ( struct Tuple2_735 ) { .field0 = field0 ,  .field1 = field1 };
};

static  bool   eq736 (    uint32_t  l106 ,    uint32_t  r108 ) {
    return ( (  l106 ) == (  r108 ) );
}

static  bool   eq734 (    struct Char_17  l697 ,    struct Char_17  r699 ) {
    if ( ( !  eq447 ( ( (  l697 ) .f_num_dash_bytes ) , ( (  r699 ) .f_num_dash_bytes ) ) ) ) {
        return ( false );
    }
    struct Tuple2_735  dref700 = ( ( Tuple2_735_Tuple2 ) ( ( (  destructure81 ) ( (  l697 ) ) ) ,  ( (  destructure81 ) ( (  r699 ) ) ) ) );
    if ( dref700 .field0.tag == CharDestructured_80_Ref_t && dref700 .field1.tag == CharDestructured_80_Ref_t ) {
        size_t  i703 = (  from_dash_integral0 ( 0 ) );
        while ( (  cmp56 ( (  i703 ) , ( ( dref700 .field0 .stuff .CharDestructured_80_Ref_s .field0 ) .f_num_dash_bytes ) ) == 0 ) ) {
            if ( ( !  eq82 ( ( * ( (uint8_t * ) ( ( (void*) ( ( dref700 .field0 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i703 ) ) ) ) ) , ( * ( (uint8_t * ) ( ( (void*) ( ( dref700 .field1 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) ) + ( (int64_t ) (  i703 ) ) ) ) ) ) ) ) {
                return ( false );
            }
            i703 = (  op_dash_add107 ( (  i703 ) , (  from_dash_integral0 ( 1 ) ) ) );
        }
        return ( true );
    }
    else {
        if ( dref700 .field0.tag == CharDestructured_80_Scalar_t && dref700 .field1.tag == CharDestructured_80_Scalar_t ) {
            return (  eq736 ( ( dref700 .field0 .stuff .CharDestructured_80_Scalar_s .field0 ) , ( dref700 .field1 .stuff .CharDestructured_80_Scalar_s .field0 ) ) );
        }
        else {
            if ( dref700 .field0.tag == CharDestructured_80_Scalar_t && dref700 .field1.tag == CharDestructured_80_Ref_t ) {
                return (  eq82 ( ( (  u32_dash_u892 ) ( ( dref700 .field0 .stuff .CharDestructured_80_Scalar_s .field0 ) ) ) , ( * ( ( dref700 .field1 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) ) ) );
            }
            else {
                if ( dref700 .field0.tag == CharDestructured_80_Ref_t && dref700 .field1.tag == CharDestructured_80_Scalar_t ) {
                    return (  eq82 ( ( (  u32_dash_u892 ) ( ( dref700 .field1 .stuff .CharDestructured_80_Scalar_s .field0 ) ) ) , ( * ( ( dref700 .field0 .stuff .CharDestructured_80_Ref_s .field0 ) .f_ptr ) ) ) );
                }
            }
        }
    }
}

struct Zip_739 {
    struct StrViewIter_155  f_left_dash_it;
    struct FromIter_454  f_right_dash_it;
};

static  struct Zip_739   into_dash_iter740 (    struct Zip_739  self864 ) {
    return (  self864 );
}

static  struct Zip_739   zip741 (    struct StrViewIter_155  left875 ,    struct FromIter_454  right877 ) {
    struct StrViewIter_155  left_dash_it878 = ( (  into_dash_iter157 ) ( (  left875 ) ) );
    struct FromIter_454  right_dash_it879 = ( (  into_dash_iter462 ) ( (  right877 ) ) );
    return ( (struct Zip_739) { .f_left_dash_it = (  left_dash_it878 ) , .f_right_dash_it = (  right_dash_it879 ) } );
}

static  struct Maybe_730   next743 (    struct Zip_739 *  self867 ) {
    struct Zip_739  copy868 = ( * (  self867 ) );
    while ( ( true ) ) {
        struct Maybe_158  dref869 = ( (  next159 ) ( ( & ( (  copy868 ) .f_left_dash_it ) ) ) );
        if ( dref869.tag == Maybe_158_None_t ) {
            return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
        }
        else {
            if ( dref869.tag == Maybe_158_Just_t ) {
                struct Maybe_254  dref871 = ( (  next459 ) ( ( & ( (  copy868 ) .f_right_dash_it ) ) ) );
                if ( dref871.tag == Maybe_254_None_t ) {
                    return ( (struct Maybe_730) { .tag = Maybe_730_None_t } );
                }
                else {
                    if ( dref871.tag == Maybe_254_Just_t ) {
                        ( (  next159 ) ( ( & ( ( * (  self867 ) ) .f_left_dash_it ) ) ) );
                        ( (  next459 ) ( ( & ( ( * (  self867 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_730_Just ) ( ( ( Tuple2_731_Tuple2 ) ( ( dref869 .stuff .Maybe_158_Just_s .field0 ) ,  ( dref871 .stuff .Maybe_254_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  bool   is_dash_whitespace744 (    struct Char_17  c2203 ) {
    return ( ( (  eq734 ( (  c2203 ) , ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) ) ) ) || (  eq734 ( (  c2203 ) , ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) || (  eq734 ( (  c2203 ) , ( (  from_dash_charlike95 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) );
}

static  enum Unit_4   set_dash_screen_dash_bg745 (    struct Screen_222 *  screen3228 ,    struct Color_225  c3230 ) {
    (*  screen3228 ) .f_default_dash_bg = (  c3230 );
    return ( Unit_4_Unit );
}

static  enum Unit_4   put_dash_char746 (    struct Screen_222 *  screen3261 ,    struct Char_17  c3263 ,    int32_t  x3265 ,    int32_t  y3267 ) {
    int32_t  w3268 = ( (  u32_dash_i32688 ) ( ( ( * ( ( * (  screen3261 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp256 ( (  x3265 ) , (  w3268 ) ) != 0 ) || (  cmp256 ( (  y3267 ) , ( (  u32_dash_i32688 ) ( ( ( * ( ( * (  screen3261 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp256 ( (  x3265 ) , (  from_dash_integral45 ( 0 ) ) ) == 0 ) ) || (  cmp256 ( (  y3267 ) , (  from_dash_integral45 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_4_Unit );
    }
    size_t  i3269 = ( (  i32_dash_size275 ) ( (  op_dash_add257 ( (  op_dash_mul720 ( (  y3267 ) , (  w3268 ) ) ) , (  x3265 ) ) ) ) );
    struct Color_225  fg3270 = ( ( * (  screen3261 ) ) .f_default_dash_fg );
    struct Color_225  bg3271 = ( ( * (  screen3261 ) ) .f_default_dash_bg );
    struct Char_17  c3272 = (  c3263 );
    ( (  set262 ) ( ( ( * (  screen3261 ) ) .f_current ) ,  (  i3269 ) ,  ( (struct Cell_224) { .f_c = (  c3272 ) , .f_fg = (  fg3270 ) , .f_bg = (  bg3271 ) } ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   cb737 (    struct Screen_222 *  screen3321 ,    struct StrView_24  s3323 ,    int32_t  x3325 ,    int32_t  y3327 ) {
    struct Color_225  og_dash_bg3328 = ( ( * (  screen3321 ) ) .f_default_dash_bg );
    struct Zip_739  temp738 =  into_dash_iter740 ( ( (  zip741 ) ( ( (  chars161 ) ( (  s3323 ) ) ) ,  ( (  from463 ) ( (  x3325 ) ) ) ) ) );
    while (true) {
        struct Maybe_730  __cond742 =  next743 (&temp738);
        if (  __cond742 .tag == 0 ) {
            break;
        }
        struct Tuple2_731  dref3329 =  __cond742 .stuff .Maybe_730_Just_s .field0;
        if ( ( (  is_dash_whitespace744 ) ( ( dref3329 .field0 ) ) ) ) {
            ( (  set_dash_screen_dash_bg745 ) ( (  screen3321 ) ,  (  og_dash_bg3328 ) ) );
            ( (  put_dash_char746 ) ( (  screen3321 ) ,  ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) ) ,  ( dref3329 .field1 ) ,  (  y3327 ) ) );
        } else {
            ( (  set_dash_screen_dash_bg745 ) ( (  screen3321 ) ,  ( ( * (  screen3321 ) ) .f_default_dash_fg ) ) );
            ( (  put_dash_char746 ) ( (  screen3321 ) ,  ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) ) ,  ( dref3329 .field1 ) ,  (  y3327 ) ) );
        }
    }
    ( (  set_dash_screen_dash_bg745 ) ( (  screen3321 ) ,  (  og_dash_bg3328 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   undefined748 (  ) {
    enum Unit_4  temp749;
    return (  temp749 );
}

static  enum Unit_4   unreachable747 (  ) {
    ( (  print482 ) ( ( (  from_dash_string94 ) ( ( "unreachable\n" ) ,  ( 12 ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral45 ( 1 ) ) ) );
    return ( (  undefined748 ) ( ) );
}

static  enum Unit_4   draw_dash_digit733 (    struct Screen_222 *  screen3334 ,    struct Char_17  digit3336 ,    int32_t  x3338 ,    int32_t  y3340 ) {
    if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "0" ) ,  ( 1 ) ) ) ) ) ) {
        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 0000 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "00  00" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 0000 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
    } else {
        if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "1" ) ,  ( 1 ) ) ) ) ) ) {
            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "1111  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  11  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "111111" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
        } else {
            if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "2" ) ,  ( 1 ) ) ) ) ) ) {
                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 2222 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "22  22" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "   22 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  22  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "222222" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
            } else {
                if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "3" ) ,  ( 1 ) ) ) ) ) ) {
                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 3333 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "33  33" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "   333" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "33  33" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 3333 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                } else {
                    if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "4" ) ,  ( 1 ) ) ) ) ) ) {
                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "44  44" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "44  44" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "444444" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "    44" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "    44" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                    } else {
                        if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "5" ) ,  ( 1 ) ) ) ) ) ) {
                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "555555" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "55    " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "55555 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "    55" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "55555 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                        } else {
                            if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "6" ) ,  ( 1 ) ) ) ) ) ) {
                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 6666 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "66    " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "66666 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "66  66" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 6666 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                            } else {
                                if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "7" ) ,  ( 1 ) ) ) ) ) ) {
                                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "777777" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "   77 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  77  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 77   " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                                    ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "77    " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                                } else {
                                    if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "8" ) ,  ( 1 ) ) ) ) ) ) {
                                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "88  88" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "88  88" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                                        ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 8888 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                                    } else {
                                        if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( "9" ) ,  ( 1 ) ) ) ) ) ) {
                                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 9999 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "99  99" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 99999" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "    99" ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                                            ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( " 9999 " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                                        } else {
                                            if ( (  eq734 ( (  digit3336 ) , ( (  from_dash_charlike95 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ) {
                                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  y3340 ) ) );
                                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  ::  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
                                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 2 ) ) ) ) ) );
                                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "  ::  " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 3 ) ) ) ) ) );
                                                ( (  cb737 ) ( (  screen3334 ) ,  ( (  from_dash_string94 ) ( ( "      " ) ,  ( 6 ) ) ) ,  (  x3338 ) ,  (  op_dash_add257 ( (  y3340 ) , (  from_dash_integral45 ( 4 ) ) ) ) ) );
                                            } else {
                                                ( (  unreachable747 ) ( ) );
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

static  int32_t   min751 (    int32_t  l1176 ,    int32_t  r1178 ) {
    if ( (  cmp256 ( (  l1176 ) , (  r1178 ) ) == 0 ) ) {
        return (  l1176 );
    } else {
        return (  r1178 );
    }
}

struct env753 {
    ;
    ;
    int32_t  y3281;
    struct Screen_222 *  screen3275;
    int32_t  x3284;
};

struct envunion754 {
    enum Unit_4  (*fun) (  struct env753*  ,    struct Tuple2_731  );
    struct env753 env;
};

static  enum Unit_4   for_dash_each752 (    struct Zip_724  iterable1014 ,   struct envunion754  fun1016 ) {
    struct Zip_724  temp755 = ( (  into_dash_iter725 ) ( (  iterable1014 ) ) );
    struct Zip_724 *  it1017 = ( &temp755 );
    while ( ( true ) ) {
        struct Maybe_730  dref1018 = ( (  next732 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_730_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_730_Just_t ) {
                struct envunion754  temp756 = (  fun1016 );
                ( temp756.fun ( &temp756.env ,  ( dref1018 .stuff .Maybe_730_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   lam757 (   struct env753* env ,    struct Tuple2_731  dref3286 ) {
    ( (  put_dash_char746 ) ( ( env->screen3275 ) ,  ( dref3286 .field0 ) ,  (  op_dash_add257 ( ( env->x3284 ) , ( dref3286 .field1 ) ) ) ,  ( env->y3281 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   draw_dash_str750 (    struct Screen_222 *  screen3275 ,    struct StrConcat_690  s3277 ,    int32_t  x3279 ,    int32_t  y3281 ) {
    int32_t  w3282 = ( (  u32_dash_i32688 ) ( ( ( * ( ( * (  screen3275 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp256 ( (  y3281 ) , (  from_dash_integral45 ( 0 ) ) ) == 0 ) || (  cmp256 ( (  y3281 ) , ( (  u32_dash_i32688 ) ( ( ( * ( ( * (  screen3275 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_4_Unit );
    }
    int32_t  i3283 = (  op_dash_add257 ( (  op_dash_mul720 ( (  y3281 ) , (  w3282 ) ) ) , (  x3279 ) ) );
    int32_t  x3284 = ( (  min751 ) ( (  x3279 ) ,  (  w3282 ) ) );
    size_t  max_dash_len3285 = ( (  i32_dash_size275 ) ( (  op_dash_sub398 ( (  w3282 ) , (  x3284 ) ) ) ) );
    struct env753 envinst753 = {
        .y3281 =  y3281 ,
        .screen3275 =  screen3275 ,
        .x3284 =  x3284 ,
    };
    ( (  for_dash_each752 ) ( ( (  zip726 ) ( ( (  chars728 ) ( (  s3277 ) ) ) ,  ( (  from463 ) ( (  from_dash_integral45 ( 0 ) ) ) ) ) ) ,  ( (struct envunion754){ .fun = (  enum Unit_4  (*) (  struct env753*  ,    struct Tuple2_731  ) )lam757 , .env =  envinst753 } ) ) );
    return ( Unit_4_Unit );
}

struct RenderState_759 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_225  f_fg;
    struct Color_225  f_bg;
    uint32_t  f_changes;
};

struct StrConcat_766 {
    struct StrView_24  field0;
    uint32_t  field1;
};

static struct StrConcat_766 StrConcat_766_StrConcat (  struct StrView_24  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_766 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_765 {
    struct StrConcat_766  field0;
    struct Char_17  field1;
};

static struct StrConcat_765 StrConcat_765_StrConcat (  struct StrConcat_766  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_765 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_764 {
    struct StrConcat_765  field0;
    uint32_t  field1;
};

static struct StrConcat_764 StrConcat_764_StrConcat (  struct StrConcat_765  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_764 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_763 {
    struct StrConcat_764  field0;
    struct Char_17  field1;
};

static struct StrConcat_763 StrConcat_763_StrConcat (  struct StrConcat_764  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_763 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_772 {
    uint32_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_771 {
    struct StrViewIter_155  f_left;
    struct IntStrIter_772  f_right;
};

struct StrConcatIter_770 {
    struct StrConcatIter_771  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_769 {
    struct StrConcatIter_770  f_left;
    struct IntStrIter_772  f_right;
};

struct StrConcatIter_768 {
    struct StrConcatIter_769  f_left;
    struct AppendIter_384  f_right;
};

static  struct StrConcatIter_768   into_dash_iter774 (    struct StrConcatIter_768  self1406 ) {
    return (  self1406 );
}

struct env782 {
    ;
    uint32_t  base1150;
};

struct envunion783 {
    uint32_t  (*fun) (  struct env782*  ,    int32_t  ,    uint32_t  );
    struct env782 env;
};

static  uint32_t   reduce781 (    struct Range_248  iterable1033 ,    uint32_t  base1035 ,   struct envunion783  fun1037 ) {
    uint32_t  x1038 = (  base1035 );
    struct RangeIter_251  it1039 = ( (  into_dash_iter253 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1040 = ( (  next255 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_254_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_254_Just_t ) {
                struct envunion783  temp784 = (  fun1037 );
                x1038 = ( temp784.fun ( &temp784.env ,  ( dref1040 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    uint32_t  temp785;
    return (  temp785 );
}

static  uint32_t   lam786 (   struct env782* env ,    int32_t  item1154 ,    uint32_t  x1156 ) {
    return (  op_dash_mul245 ( (  x1156 ) , ( env->base1150 ) ) );
}

static  uint32_t   pow780 (    uint32_t  base1150 ,    int32_t  p1152 ) {
    struct env782 envinst782 = {
        .base1150 =  base1150 ,
    };
    return ( (  reduce781 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  (  op_dash_sub398 ( (  p1152 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral90 ( 1 ) ) ,  ( (struct envunion783){ .fun = (  uint32_t  (*) (  struct env782*  ,    int32_t  ,    uint32_t  ) )lam786 , .env =  envinst782 } ) ) );
}

static  uint32_t   op_dash_div787 (    uint32_t  l240 ,    uint32_t  r242 ) {
    return ( (  l240 ) / (  r242 ) );
}

static  uint32_t   op_dash_sub788 (    uint32_t  l230 ,    uint32_t  r232 ) {
    return ( (  l230 ) - (  r232 ) );
}

static  struct Maybe_158   next779 (    struct IntStrIter_772 *  self1337 ) {
    if ( ( ( * (  self1337 ) ) .f_negative ) ) {
        (*  self1337 ) .f_negative = ( false );
        return ( ( Maybe_158_Just ) ( ( (  from_dash_charlike95 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp256 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    uint32_t  trim_dash_down1338 = ( (  pow780 ) ( (  from_dash_integral90 ( 10 ) ) ,  (  op_dash_sub398 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
    uint32_t  upper1339 = (  op_dash_div787 ( ( ( * (  self1337 ) ) .f_int ) , (  trim_dash_down1338 ) ) );
    uint32_t  upper_dash_mask1340 = (  op_dash_mul245 ( (  op_dash_div787 ( (  upper1339 ) , (  from_dash_integral90 ( 10 ) ) ) ) , (  from_dash_integral90 ( 10 ) ) ) );
    uint8_t  digit1341 = ( ( (  cast93 ) ( (  op_dash_sub788 ( (  upper1339 ) , (  upper_dash_mask1340 ) ) ) ) ) );
    (*  self1337 ) .f_len = (  op_dash_sub398 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1342 = ( (  from_dash_u8403 ) ( (  op_dash_add100 ( (  digit1341 ) , (  from_dash_integral86 ( 48 ) ) ) ) ) );
    return ( ( Maybe_158_Just ) ( (  digit_dash_char1342 ) ) );
}

static  struct Maybe_158   next778 (    struct StrConcatIter_771 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next159 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next779 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next777 (    struct StrConcatIter_770 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next778 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next776 (    struct StrConcatIter_769 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next777 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next779 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next775 (    struct StrConcatIter_768 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next776 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each767 (    struct StrConcatIter_768  iterable1014 ,    enum Unit_4 (*  fun1016 )(    struct Char_17  ) ) {
    struct StrConcatIter_768  temp773 = ( (  into_dash_iter774 ) ( (  iterable1014 ) ) );
    struct StrConcatIter_768 *  it1017 = ( &temp773 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next775 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                ( (  fun1016 ) ( ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   count_dash_digits799 (    uint32_t  self1345 ) {
    if ( (  eq736 ( (  self1345 ) , (  from_dash_integral90 ( 0 ) ) ) ) ) {
        return (  from_dash_integral45 ( 1 ) );
    }
    int32_t  digits1346 = (  from_dash_integral45 ( 0 ) );
    while ( (  cmp89 ( (  self1345 ) , (  from_dash_integral90 ( 0 ) ) ) == 2 ) ) {
        self1345 = (  op_dash_div787 ( (  self1345 ) , (  from_dash_integral90 ( 10 ) ) ) );
        digits1346 = (  op_dash_add257 ( (  digits1346 ) , (  from_dash_integral45 ( 1 ) ) ) );
    }
    return (  digits1346 );
}

static  struct IntStrIter_772   uint_dash_iter798 (    uint32_t  int1352 ) {
    return ( (struct IntStrIter_772) { .f_int = (  int1352 ) , .f_len = ( (  count_dash_digits799 ) ( (  int1352 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_772   chars797 (    uint32_t  self1364 ) {
    return ( (  uint_dash_iter798 ) ( (  self1364 ) ) );
}

static  struct StrConcatIter_771   into_dash_iter796 (    struct StrConcat_766  dref1413 ) {
    return ( (struct StrConcatIter_771) { .f_left = ( (  chars161 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars797 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_771   chars795 (    struct StrConcat_766  self1424 ) {
    return ( (  into_dash_iter796 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_770   into_dash_iter794 (    struct StrConcat_765  dref1413 ) {
    return ( (struct StrConcatIter_770) { .f_left = ( (  chars795 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_770   chars793 (    struct StrConcat_765  self1424 ) {
    return ( (  into_dash_iter794 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_769   into_dash_iter792 (    struct StrConcat_764  dref1413 ) {
    return ( (struct StrConcatIter_769) { .f_left = ( (  chars793 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars797 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_769   chars791 (    struct StrConcat_764  self1424 ) {
    return ( (  into_dash_iter792 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_768   into_dash_iter790 (    struct StrConcat_763  dref1413 ) {
    return ( (struct StrConcatIter_768) { .f_left = ( (  chars791 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_768   chars789 (    struct StrConcat_763  self1424 ) {
    return ( (  into_dash_iter790 ) ( (  self1424 ) ) );
}

static  enum Unit_4   print762 (    struct StrConcat_763  s2357 ) {
    ( (  for_dash_each767 ) ( ( (  chars789 ) ( (  s2357 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   move_dash_cursor_dash_to761 (    uint32_t  x2368 ,    uint32_t  y2370 ) {
    uint32_t  x2371 = (  op_dash_add572 ( (  x2368 ) , (  from_dash_integral90 ( 1 ) ) ) );
    uint32_t  y2372 = (  op_dash_add572 ( (  y2370 ) , (  from_dash_integral90 ( 1 ) ) ) );
    ( (  print762 ) ( ( ( StrConcat_763_StrConcat ) ( ( ( StrConcat_764_StrConcat ) ( ( ( StrConcat_765_StrConcat ) ( ( ( StrConcat_766_StrConcat ) ( ( (  from_dash_string94 ) ( ( "\x1b[" ) ,  ( 2 ) ) ) ,  (  y2372 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  (  x2371 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "H" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

struct Tuple2_807 {
    struct Color_225  field0;
    struct Color_225  field1;
};

static struct Tuple2_807 Tuple2_807_Tuple2 (  struct Color_225  field0 ,  struct Color_225  field1 ) {
    return ( struct Tuple2_807 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Color8_226 *   cast811 (    int32_t *  x346 ) {
    return ( (enum Color8_226 * ) (  x346 ) );
}

static  int32_t   cast_dash_on_dash_zeroed809 (    enum Color8_226  x552 ) {
    int32_t  temp810 = ( (  zeroed333 ) ( ) );
    int32_t *  y553 = ( &temp810 );
    enum Color8_226 *  yp554 = ( (  cast811 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  bool   eq808 (    enum Color8_226  l2396 ,    enum Color8_226  r2398 ) {
    return (  eq184 ( ( ( (  cast_dash_on_dash_zeroed809 ) ( (  l2396 ) ) ) ) , ( (  cast_dash_on_dash_zeroed809 ) ( (  r2398 ) ) ) ) );
}

static  enum Color16_227 *   cast815 (    int32_t *  x346 ) {
    return ( (enum Color16_227 * ) (  x346 ) );
}

static  int32_t   cast_dash_on_dash_zeroed813 (    enum Color16_227  x552 ) {
    int32_t  temp814 = ( (  zeroed333 ) ( ) );
    int32_t *  y553 = ( &temp814 );
    enum Color16_227 *  yp554 = ( (  cast815 ) ( (  y553 ) ) );
    (*  yp554 ) = (  x552 );
    return ( * (  y553 ) );
}

static  bool   eq812 (    enum Color16_227  l2402 ,    enum Color16_227  r2404 ) {
    return (  eq184 ( ( ( (  cast_dash_on_dash_zeroed813 ) ( (  l2402 ) ) ) ) , ( (  cast_dash_on_dash_zeroed813 ) ( (  r2404 ) ) ) ) );
}

static  bool   eq816 (    struct RGB_228  l2432 ,    struct RGB_228  r2434 ) {
    return ( ( (  eq82 ( ( (  l2432 ) .f_r ) , ( (  r2434 ) .f_r ) ) ) && (  eq82 ( ( (  l2432 ) .f_g ) , ( (  r2434 ) .f_g ) ) ) ) && (  eq82 ( ( (  l2432 ) .f_b ) , ( (  r2434 ) .f_b ) ) ) );
}

static  bool   eq806 (    struct Color_225  l2455 ,    struct Color_225  r2457 ) {
    return ( {  struct Tuple2_807  dref2458 = ( ( Tuple2_807_Tuple2 ) ( (  l2455 ) ,  (  r2457 ) ) ) ; dref2458 .field0.tag == Color_225_ColorDefault_t && dref2458 .field1.tag == Color_225_ColorDefault_t ? ( true ) : dref2458 .field0.tag == Color_225_Color8_t && dref2458 .field1.tag == Color_225_Color8_t ? (  eq808 ( ( dref2458 .field0 .stuff .Color_225_Color8_s .field0 ) , ( dref2458 .field1 .stuff .Color_225_Color8_s .field0 ) ) ) : dref2458 .field0.tag == Color_225_Color16_t && dref2458 .field1.tag == Color_225_Color16_t ? (  eq812 ( ( dref2458 .field0 .stuff .Color_225_Color16_s .field0 ) , ( dref2458 .field1 .stuff .Color_225_Color16_s .field0 ) ) ) : dref2458 .field0.tag == Color_225_Color256_t && dref2458 .field1.tag == Color_225_Color256_t ? (  eq82 ( ( dref2458 .field0 .stuff .Color_225_Color256_s .field0 ) , ( dref2458 .field1 .stuff .Color_225_Color256_s .field0 ) ) ) : dref2458 .field0.tag == Color_225_ColorRGB_t && dref2458 .field1.tag == Color_225_ColorRGB_t ? (  eq816 ( ( dref2458 .field0 .stuff .Color_225_ColorRGB_s .field0 ) , ( dref2458 .field1 .stuff .Color_225_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq805 (    struct Cell_224  l3163 ,    struct Cell_224  r3165 ) {
    if ( ( !  eq734 ( ( (  l3163 ) .f_c ) , ( (  r3165 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq806 ( ( (  l3163 ) .f_fg ) , ( (  r3165 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq806 ( ( (  l3163 ) .f_bg ) , ( (  r3165 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq804 (    struct Cell_224 *  dref143 ,    struct Cell_224 *  dref145 ) {
    return (  eq805 ( ( (* dref143 ) ) , ( (* dref145 ) ) ) );
}

static  enum Unit_4   set_dash_default_dash_fg819 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[39m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg8820 (    enum Color8_226  color2407 ) {
    enum Color8_226  dref2408 = (  color2407 );
    switch (  dref2408 ) {
        case Color8_226_Black8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Red8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Green8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Yellow8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Blue8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Magenta8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Cyan8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_White8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg16821 (    enum Color16_227  color2411 ) {
    enum Color16_227  dref2412 = (  color2411 );
    switch (  dref2412 ) {
        case Color16_227_Black16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[30m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Red16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[31m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Green16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[32m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Yellow16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[33m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Blue16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[34m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Magenta16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[35m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Cyan16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[36m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_White16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[37m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightBlack16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[90m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightRed16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[91m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightGreen16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[92m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightYellow16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[93m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightBlue16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[94m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightMagenta16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[95m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightCyan16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[96m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightWhite16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[97m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

struct StrConcat_825 {
    struct StrView_24  field0;
    uint8_t  field1;
};

static struct StrConcat_825 StrConcat_825_StrConcat (  struct StrView_24  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_825 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_824 {
    struct StrConcat_825  field0;
    struct Char_17  field1;
};

static struct StrConcat_824 StrConcat_824_StrConcat (  struct StrConcat_825  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_824 ) { .field0 = field0 ,  .field1 = field1 };
};

struct IntStrIter_829 {
    uint8_t  f_int;
    int32_t  f_len;
    bool  f_negative;
};

struct StrConcatIter_828 {
    struct StrViewIter_155  f_left;
    struct IntStrIter_829  f_right;
};

struct StrConcatIter_827 {
    struct StrConcatIter_828  f_left;
    struct AppendIter_384  f_right;
};

static  struct StrConcatIter_827   into_dash_iter831 (    struct StrConcatIter_827  self1406 ) {
    return (  self1406 );
}

struct env837 {
    uint8_t  base1150;
    ;
};

struct envunion838 {
    uint8_t  (*fun) (  struct env837*  ,    int32_t  ,    uint8_t  );
    struct env837 env;
};

static  uint8_t   reduce836 (    struct Range_248  iterable1033 ,    uint8_t  base1035 ,   struct envunion838  fun1037 ) {
    uint8_t  x1038 = (  base1035 );
    struct RangeIter_251  it1039 = ( (  into_dash_iter253 ) ( (  iterable1033 ) ) );
    while ( ( true ) ) {
        struct Maybe_254  dref1040 = ( (  next255 ) ( ( & (  it1039 ) ) ) );
        if ( dref1040.tag == Maybe_254_None_t ) {
            return (  x1038 );
        }
        else {
            if ( dref1040.tag == Maybe_254_Just_t ) {
                struct envunion838  temp839 = (  fun1037 );
                x1038 = ( temp839.fun ( &temp839.env ,  ( dref1040 .stuff .Maybe_254_Just_s .field0 ) ,  (  x1038 ) ) );
            }
        }
    }
    uint8_t  temp840;
    return (  temp840 );
}

static  uint8_t   op_dash_mul842 (    uint8_t  l255 ,    uint8_t  r257 ) {
    return ( (  l255 ) * (  r257 ) );
}

static  uint8_t   lam841 (   struct env837* env ,    int32_t  item1154 ,    uint8_t  x1156 ) {
    return (  op_dash_mul842 ( (  x1156 ) , ( env->base1150 ) ) );
}

static  uint8_t   pow835 (    uint8_t  base1150 ,    int32_t  p1152 ) {
    struct env837 envinst837 = {
        .base1150 =  base1150 ,
    };
    return ( (  reduce836 ) ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  (  op_dash_sub398 ( (  p1152 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral86 ( 1 ) ) ,  ( (struct envunion838){ .fun = (  uint8_t  (*) (  struct env837*  ,    int32_t  ,    uint8_t  ) )lam841 , .env =  envinst837 } ) ) );
}

static  uint8_t   op_dash_div843 (    uint8_t  l260 ,    uint8_t  r262 ) {
    return ( (  l260 ) / (  r262 ) );
}

static  uint8_t   cast844 (    uint8_t  x346 ) {
    return ( (uint8_t ) (  x346 ) );
}

static  struct Maybe_158   next834 (    struct IntStrIter_829 *  self1337 ) {
    if ( ( ( * (  self1337 ) ) .f_negative ) ) {
        (*  self1337 ) .f_negative = ( false );
        return ( ( Maybe_158_Just ) ( ( (  from_dash_charlike95 ) ( ( "-" ) ,  ( 1 ) ) ) ) );
    }
    if ( (  cmp256 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_158) { .tag = Maybe_158_None_t } );
    }
    uint8_t  trim_dash_down1338 = ( (  pow835 ) ( (  from_dash_integral86 ( 10 ) ) ,  (  op_dash_sub398 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 1 ) ) ) ) ) );
    uint8_t  upper1339 = (  op_dash_div843 ( ( ( * (  self1337 ) ) .f_int ) , (  trim_dash_down1338 ) ) );
    uint8_t  upper_dash_mask1340 = (  op_dash_mul842 ( (  op_dash_div843 ( (  upper1339 ) , (  from_dash_integral86 ( 10 ) ) ) ) , (  from_dash_integral86 ( 10 ) ) ) );
    uint8_t  digit1341 = ( ( (  cast844 ) ( (  op_dash_sub338 ( (  upper1339 ) , (  upper_dash_mask1340 ) ) ) ) ) );
    (*  self1337 ) .f_len = (  op_dash_sub398 ( ( ( * (  self1337 ) ) .f_len ) , (  from_dash_integral45 ( 1 ) ) ) );
    struct Char_17  digit_dash_char1342 = ( (  from_dash_u8403 ) ( (  op_dash_add100 ( (  digit1341 ) , (  from_dash_integral86 ( 48 ) ) ) ) ) );
    return ( ( Maybe_158_Just ) ( (  digit_dash_char1342 ) ) );
}

static  struct Maybe_158   next833 (    struct StrConcatIter_828 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next159 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next834 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next832 (    struct StrConcatIter_827 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next833 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each826 (    struct StrConcatIter_827  iterable1014 ,    enum Unit_4 (*  fun1016 )(    struct Char_17  ) ) {
    struct StrConcatIter_827  temp830 = ( (  into_dash_iter831 ) ( (  iterable1014 ) ) );
    struct StrConcatIter_827 *  it1017 = ( &temp830 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next832 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                ( (  fun1016 ) ( ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  int32_t   count_dash_digits851 (    uint8_t  self1345 ) {
    if ( (  eq82 ( (  self1345 ) , (  from_dash_integral86 ( 0 ) ) ) ) ) {
        return (  from_dash_integral45 ( 1 ) );
    }
    int32_t  digits1346 = (  from_dash_integral45 ( 0 ) );
    while ( (  cmp99 ( (  self1345 ) , (  from_dash_integral86 ( 0 ) ) ) == 2 ) ) {
        self1345 = (  op_dash_div843 ( (  self1345 ) , (  from_dash_integral86 ( 10 ) ) ) );
        digits1346 = (  op_dash_add257 ( (  digits1346 ) , (  from_dash_integral45 ( 1 ) ) ) );
    }
    return (  digits1346 );
}

static  struct IntStrIter_829   uint_dash_iter850 (    uint8_t  int1352 ) {
    return ( (struct IntStrIter_829) { .f_int = (  int1352 ) , .f_len = ( (  count_dash_digits851 ) ( (  int1352 ) ) ) , .f_negative = ( false ) } );
}

static  struct IntStrIter_829   chars849 (    uint8_t  self1370 ) {
    return ( (  uint_dash_iter850 ) ( (  self1370 ) ) );
}

static  struct StrConcatIter_828   into_dash_iter848 (    struct StrConcat_825  dref1413 ) {
    return ( (struct StrConcatIter_828) { .f_left = ( (  chars161 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars849 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_828   chars847 (    struct StrConcat_825  self1424 ) {
    return ( (  into_dash_iter848 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_827   into_dash_iter846 (    struct StrConcat_824  dref1413 ) {
    return ( (struct StrConcatIter_827) { .f_left = ( (  chars847 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_827   chars845 (    struct StrConcat_824  self1424 ) {
    return ( (  into_dash_iter846 ) ( (  self1424 ) ) );
}

static  enum Unit_4   print823 (    struct StrConcat_824  s2357 ) {
    ( (  for_dash_each826 ) ( ( (  chars845 ) ( (  s2357 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg256822 (    uint8_t  color2425 ) {
    ( (  print823 ) ( ( ( StrConcat_824_StrConcat ) ( ( ( StrConcat_825_StrConcat ) ( ( (  from_dash_string94 ) ( ( "\x1b[38;5;" ) ,  ( 7 ) ) ) ,  (  color2425 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

struct StrConcat_857 {
    struct StrConcat_824  field0;
    uint8_t  field1;
};

static struct StrConcat_857 StrConcat_857_StrConcat (  struct StrConcat_824  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_857 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_856 {
    struct StrConcat_857  field0;
    struct Char_17  field1;
};

static struct StrConcat_856 StrConcat_856_StrConcat (  struct StrConcat_857  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_856 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_855 {
    struct StrConcat_856  field0;
    uint8_t  field1;
};

static struct StrConcat_855 StrConcat_855_StrConcat (  struct StrConcat_856  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_855 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_854 {
    struct StrConcat_855  field0;
    struct Char_17  field1;
};

static struct StrConcat_854 StrConcat_854_StrConcat (  struct StrConcat_855  field0 ,  struct Char_17  field1 ) {
    return ( struct StrConcat_854 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcatIter_862 {
    struct StrConcatIter_827  f_left;
    struct IntStrIter_829  f_right;
};

struct StrConcatIter_861 {
    struct StrConcatIter_862  f_left;
    struct AppendIter_384  f_right;
};

struct StrConcatIter_860 {
    struct StrConcatIter_861  f_left;
    struct IntStrIter_829  f_right;
};

struct StrConcatIter_859 {
    struct StrConcatIter_860  f_left;
    struct AppendIter_384  f_right;
};

static  struct StrConcatIter_859   into_dash_iter864 (    struct StrConcatIter_859  self1406 ) {
    return (  self1406 );
}

static  struct Maybe_158   next868 (    struct StrConcatIter_862 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next832 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next834 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next867 (    struct StrConcatIter_861 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next868 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next866 (    struct StrConcatIter_860 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next867 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next834 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_158   next865 (    struct StrConcatIter_859 *  self1409 ) {
    struct Maybe_158  dref1410 = ( (  next866 ) ( ( & ( ( * (  self1409 ) ) .f_left ) ) ) );
    if ( dref1410.tag == Maybe_158_Just_t ) {
        return ( ( Maybe_158_Just ) ( ( dref1410 .stuff .Maybe_158_Just_s .field0 ) ) );
    }
    else {
        if ( dref1410.tag == Maybe_158_None_t ) {
            return ( (  next410 ) ( ( & ( ( * (  self1409 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_4   for_dash_each858 (    struct StrConcatIter_859  iterable1014 ,    enum Unit_4 (*  fun1016 )(    struct Char_17  ) ) {
    struct StrConcatIter_859  temp863 = ( (  into_dash_iter864 ) ( (  iterable1014 ) ) );
    struct StrConcatIter_859 *  it1017 = ( &temp863 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next865 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                ( (  fun1016 ) ( ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  struct StrConcatIter_862   into_dash_iter876 (    struct StrConcat_857  dref1413 ) {
    return ( (struct StrConcatIter_862) { .f_left = ( (  chars845 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars849 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_862   chars875 (    struct StrConcat_857  self1424 ) {
    return ( (  into_dash_iter876 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_861   into_dash_iter874 (    struct StrConcat_856  dref1413 ) {
    return ( (struct StrConcatIter_861) { .f_left = ( (  chars875 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_861   chars873 (    struct StrConcat_856  self1424 ) {
    return ( (  into_dash_iter874 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_860   into_dash_iter872 (    struct StrConcat_855  dref1413 ) {
    return ( (struct StrConcatIter_860) { .f_left = ( (  chars873 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars849 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_860   chars871 (    struct StrConcat_855  self1424 ) {
    return ( (  into_dash_iter872 ) ( (  self1424 ) ) );
}

static  struct StrConcatIter_859   into_dash_iter870 (    struct StrConcat_854  dref1413 ) {
    return ( (struct StrConcatIter_859) { .f_left = ( (  chars871 ) ( ( dref1413 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1413 .field1 ) ) ) } );
}

static  struct StrConcatIter_859   chars869 (    struct StrConcat_854  self1424 ) {
    return ( (  into_dash_iter870 ) ( (  self1424 ) ) );
}

static  enum Unit_4   print853 (    struct StrConcat_854  s2357 ) {
    ( (  for_dash_each858 ) ( ( (  chars869 ) ( (  s2357 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg_dash_rgb852 (    struct RGB_228  c2448 ) {
    ( (  print853 ) ( ( ( StrConcat_854_StrConcat ) ( ( ( StrConcat_855_StrConcat ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( ( StrConcat_825_StrConcat ) ( ( (  from_dash_string94 ) ( ( "\x1b[38;2;" ) ,  ( 7 ) ) ) ,  ( (  c2448 ) .f_r ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2448 ) .f_g ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2448 ) .f_b ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_fg818 (    struct Color_225  c2469 ) {
    struct Color_225  dref2470 = (  c2469 );
    if ( dref2470.tag == Color_225_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg819 ) ( ) );
    }
    else {
        if ( dref2470.tag == Color_225_Color8_t ) {
            ( (  set_dash_fg8820 ) ( ( dref2470 .stuff .Color_225_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2470.tag == Color_225_Color16_t ) {
                ( (  set_dash_fg16821 ) ( ( dref2470 .stuff .Color_225_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2470.tag == Color_225_Color256_t ) {
                    ( (  set_dash_fg256822 ) ( ( dref2470 .stuff .Color_225_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2470.tag == Color_225_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb852 ) ( ( dref2470 .stuff .Color_225_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_default_dash_bg878 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[49m" ) ,  ( 5 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg8879 (    enum Color8_226  color2415 ) {
    enum Color8_226  dref2416 = (  color2415 );
    switch (  dref2416 ) {
        case Color8_226_Black8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Red8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Green8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Yellow8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Blue8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Magenta8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_Cyan8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color8_226_White8 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg16880 (    enum Color16_227  color2419 ) {
    enum Color16_227  dref2420 = (  color2419 );
    switch (  dref2420 ) {
        case Color16_227_Black16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[40m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Red16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[41m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Green16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[42m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Yellow16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[43m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Blue16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[44m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Magenta16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[45m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_Cyan16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[46m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_White16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[47m" ) ,  ( 5 ) ) ) ) );
            break;
        }
        case Color16_227_BrightBlack16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[100m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightRed16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[101m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightGreen16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[102m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightYellow16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[103m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightBlue16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[104m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightMagenta16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[105m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightCyan16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[106m" ) ,  ( 6 ) ) ) ) );
            break;
        }
        case Color16_227_BrightWhite16 : {
            ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[107m" ) ,  ( 6 ) ) ) ) );
            break;
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg256881 (    uint8_t  color2428 ) {
    ( (  print823 ) ( ( ( StrConcat_824_StrConcat ) ( ( ( StrConcat_825_StrConcat ) ( ( (  from_dash_string94 ) ( ( "\x1b[48;5;" ) ,  ( 7 ) ) ) ,  (  color2428 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg_dash_rgb882 (    struct RGB_228  c2451 ) {
    ( (  print853 ) ( ( ( StrConcat_854_StrConcat ) ( ( ( StrConcat_855_StrConcat ) ( ( ( StrConcat_856_StrConcat ) ( ( ( StrConcat_857_StrConcat ) ( ( ( StrConcat_824_StrConcat ) ( ( ( StrConcat_825_StrConcat ) ( ( (  from_dash_string94 ) ( ( "\x1b[48;2;" ) ,  ( 7 ) ) ) ,  ( (  c2451 ) .f_r ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2451 ) .f_g ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ";" ) ,  ( 1 ) ) ) ) ) ,  ( (  c2451 ) .f_b ) ) ) ,  ( (  from_dash_charlike95 ) ( ( "m" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   set_dash_bg877 (    struct Color_225  c2477 ) {
    struct Color_225  dref2478 = (  c2477 );
    if ( dref2478.tag == Color_225_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg878 ) ( ) );
    }
    else {
        if ( dref2478.tag == Color_225_Color8_t ) {
            ( (  set_dash_bg8879 ) ( ( dref2478 .stuff .Color_225_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2478.tag == Color_225_Color16_t ) {
                ( (  set_dash_bg16880 ) ( ( dref2478 .stuff .Color_225_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2478.tag == Color_225_Color256_t ) {
                    ( (  set_dash_bg256881 ) ( ( dref2478 .stuff .Color_225_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2478.tag == Color_225_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb882 ) ( ( dref2478 .stuff .Color_225_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   emit_dash_cell817 (    struct RenderState_759 *  rs3191 ,    struct Cell_224 *  c3193 ,    uint32_t  x3195 ,    uint32_t  y3197 ) {
    if ( ( ( !  eq736 ( (  x3195 ) , ( ( * (  rs3191 ) ) .f_x ) ) ) || ( !  eq736 ( (  y3197 ) , ( ( * (  rs3191 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to761 ) ( (  x3195 ) ,  (  y3197 ) ) );
        (*  rs3191 ) .f_x = (  x3195 );
        (*  rs3191 ) .f_y = (  y3197 );
    }
    struct Char_17  char3198 = ( ( * (  c3193 ) ) .f_c );
    struct Color_225  bg3199 = ( ( * (  c3193 ) ) .f_bg );
    if ( ( ( (  eq734 ( (  char3198 ) , ( (  from_dash_charlike95 ) ( ( "\t" ) ,  ( 1 ) ) ) ) ) || (  eq734 ( (  char3198 ) , ( (  from_dash_charlike95 ) ( ( "\r" ) ,  ( 1 ) ) ) ) ) ) || (  eq734 ( (  char3198 ) , ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) ) {
        char3198 = ( (  from_dash_charlike95 ) ( ( " " ) ,  ( 1 ) ) );
        bg3199 = ( ( Color_225_Color8 ) ( ( Color8_226_Red8 ) ) );
    }
    if ( ( !  eq806 ( ( ( * (  rs3191 ) ) .f_fg ) , ( ( * (  c3193 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg818 ) ( ( ( * (  c3193 ) ) .f_fg ) ) );
        (*  rs3191 ) .f_fg = ( ( * (  c3193 ) ) .f_fg );
    }
    if ( ( !  eq806 ( ( ( * (  rs3191 ) ) .f_bg ) , (  bg3199 ) ) ) ) {
        ( (  set_dash_bg877 ) ( (  bg3199 ) ) );
        (*  rs3191 ) .f_bg = (  bg3199 );
    }
    ( (  print_dash_str78 ) ( (  char3198 ) ) );
    (*  rs3191 ) .f_x = (  op_dash_add572 ( ( ( * (  rs3191 ) ) .f_x ) , (  from_dash_integral90 ( 1 ) ) ) );
    return ( Unit_4_Unit );
}

static  uint32_t   i32_dash_u32883 (    int32_t  x579 ) {
    return ( (uint32_t ) (  x579 ) );
}

static  uint32_t   render_dash_screen758 (    struct Screen_222 *  screen3202 ) {
    int32_t  w3203 = ( (  u32_dash_i32688 ) ( ( ( * ( ( * (  screen3202 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h3204 = ( (  u32_dash_i32688 ) ( ( ( * ( ( * (  screen3202 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_759  temp760 = ( (struct RenderState_759) { .f_x = (  from_dash_integral90 ( 0 ) ) , .f_y = (  from_dash_integral90 ( 0 ) ) , .f_fg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) , .f_bg = ( (struct Color_225) { .tag = Color_225_ColorDefault_t } ) , .f_changes = (  from_dash_integral90 ( 0 ) ) } );
    struct RenderState_759 *  rs3205 = ( &temp760 );
    ( (  move_dash_cursor_dash_to761 ) ( (  from_dash_integral90 ( 0 ) ) ,  (  from_dash_integral90 ( 0 ) ) ) );
    struct RangeIter_251  temp800 =  into_dash_iter253 ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  (  op_dash_sub398 ( (  h3204 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_254  __cond801 =  next255 (&temp800);
        if (  __cond801 .tag == 0 ) {
            break;
        }
        int32_t  y3207 =  __cond801 .stuff .Maybe_254_Just_s .field0;
        struct RangeIter_251  temp802 =  into_dash_iter253 ( ( (  to259 ) ( (  from_dash_integral45 ( 0 ) ) ,  (  op_dash_sub398 ( (  w3203 ) , (  from_dash_integral45 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_254  __cond803 =  next255 (&temp802);
            if (  __cond803 .tag == 0 ) {
                break;
            }
            int32_t  x3209 =  __cond803 .stuff .Maybe_254_Just_s .field0;
            size_t  i3210 = ( (  i32_dash_size275 ) ( (  op_dash_add257 ( (  op_dash_mul720 ( (  y3207 ) , (  w3203 ) ) ) , (  x3209 ) ) ) ) );
            struct Cell_224 *  cur3211 = ( (  get_dash_ptr263 ) ( ( ( * (  screen3202 ) ) .f_current ) ,  (  i3210 ) ) );
            struct Cell_224 *  prev3212 = ( (  get_dash_ptr263 ) ( ( ( * (  screen3202 ) ) .f_previous ) ,  (  i3210 ) ) );
            if ( ( ( !  eq804 ( (  cur3211 ) , (  prev3212 ) ) ) || ( ( * (  screen3202 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs3205 ) .f_changes = (  op_dash_add572 ( ( ( * (  rs3205 ) ) .f_changes ) , (  from_dash_integral90 ( 1 ) ) ) );
                ( (  emit_dash_cell817 ) ( (  rs3205 ) ,  (  cur3211 ) ,  ( (  i32_dash_u32883 ) ( (  x3209 ) ) ) ,  ( (  i32_dash_u32883 ) ( (  y3207 ) ) ) ) );
                (*  prev3212 ) = ( * (  cur3211 ) );
            }
        }
    }
    (*  screen3202 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors163 ) ( ) );
    ( (  flush_dash_stdout166 ) ( ) );
    return ( ( * (  rs3205 ) ) .f_changes );
}

static  void *   cast_dash_ptr890 (    struct timespec * *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  size_t   size_dash_of891 (    struct timespec *  x340 ) {
    return ( sizeof( (  x340 ) ) );
}

static  struct timespec *   zeroed888 (  ) {
    struct timespec *  temp889;
    struct timespec *  x549 = (  temp889 );
    ( ( memset ) ( ( (  cast_dash_ptr890 ) ( ( & (  x549 ) ) ) ) ,  (  from_dash_integral45 ( 0 ) ) ,  ( (  size_dash_of891 ) ( (  x549 ) ) ) ) );
    return (  x549 );
}

static  struct timespec *   null_dash_ptr887 (  ) {
    return ( (  zeroed888 ) ( ) );
}

static  enum Unit_4   sync884 (    struct Tui_30 *  tui3078 ) {
    if ( (  eq736 ( ( ( * (  tui3078 ) ) .f_target_dash_fps ) , (  from_dash_integral90 ( 0 ) ) ) ) ) {
        return ( Unit_4_Unit );
    }
    int64_t  frame_dash_ns3079 = (  op_dash_div400 ( (  from_dash_integral296 ( 1000000000 ) ) , ( (  size_dash_i64160 ) ( ( (  u32_dash_size237 ) ( ( ( * (  tui3078 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp885 = ( (  undefined209 ) ( ) );
    struct timespec *  now3080 = ( &temp885 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic211 ) ( ) ) ,  (  now3080 ) ) );
    int64_t  elapsed_dash_ns3081 = (  op_dash_add339 ( (  op_dash_mul105 ( (  op_dash_sub402 ( ( ( * (  now3080 ) ) .tv_sec ) , ( ( ( * (  tui3078 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral296 ( 1000000000 ) ) ) ) , (  op_dash_sub402 ( ( ( * (  now3080 ) ) .tv_nsec ) , ( ( ( * (  tui3078 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns3082 = (  op_dash_sub402 ( (  frame_dash_ns3079 ) , (  elapsed_dash_ns3081 ) ) );
    if ( (  cmp417 ( (  sleep_dash_ns3082 ) , (  from_dash_integral296 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp886 = ( (struct timespec) { .tv_sec = (  from_dash_integral296 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns3082 ) } );
        struct timespec *  ts3083 = ( &temp886 );
        ( ( nanosleep ) ( (  ts3083 ) ,  ( (  null_dash_ptr887 ) ( ) ) ) );
    }
    struct timespec  temp892 = ( (  undefined209 ) ( ) );
    struct timespec *  last_dash_sync3084 = ( &temp892 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic211 ) ( ) ) ,  (  last_dash_sync3084 ) ) );
    (*  tui3078 ) .f_last_dash_sync = ( * (  last_dash_sync3084 ) );
    (*  tui3078 ) .f_fps_dash_count = (  op_dash_add572 ( ( ( * (  tui3078 ) ) .f_fps_dash_count ) , (  from_dash_integral90 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms3085 = (  op_dash_add339 ( (  op_dash_mul105 ( (  op_dash_sub402 ( ( ( ( * (  tui3078 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui3078 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral296 ( 1000 ) ) ) ) , (  op_dash_div400 ( (  op_dash_sub402 ( ( ( ( * (  tui3078 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui3078 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral296 ( 1000000 ) ) ) ) ) );
    if ( (  cmp417 ( (  fps_dash_elapsed_dash_ms3085 ) , (  from_dash_integral296 ( 1000 ) ) ) != 0 ) ) {
        (*  tui3078 ) .f_actual_dash_fps = ( ( * (  tui3078 ) ) .f_fps_dash_count );
        (*  tui3078 ) .f_fps_dash_count = (  from_dash_integral90 ( 0 ) );
        (*  tui3078 ) .f_fps_dash_ts = ( ( * (  tui3078 ) ) .f_last_dash_sync );
    }
    return ( Unit_4_Unit );
}

static  void *   cast_dash_ptr895 (    struct Cell_224 *  p349 ) {
    return ( (void * ) (  p349 ) );
}

static  enum Unit_4   free894 (    enum CAllocator_6  dref1863 ,    struct Slice_223  slice1865 ) {
    if (!(  dref1863 == CAllocator_6_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr895 ) ( ( (  slice1865 ) .f_ptr ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   free_dash_screen893 (    struct Screen_222 *  screen3182 ) {
    enum CAllocator_6  al3183 = ( ( * (  screen3182 ) ) .f_al );
    ( (  free894 ) ( (  al3183 ) ,  ( ( * (  screen3182 ) ) .f_current ) ) );
    ( (  free894 ) ( (  al3183 ) ,  ( ( * (  screen3182 ) ) .f_previous ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   disable_dash_mouse897 (  ) {
    ( (  print_dash_str69 ) ( ( (  from_dash_string94 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ,  ( 16 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   show_dash_cursor898 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[?25h" ) ,  ( 6 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   reset_dash_cursor_dash_position899 (  ) {
    ( (  print153 ) ( ( (  from_dash_string94 ) ( ( "\x1b[H" ) ,  ( 3 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   disable_dash_raw_dash_mode900 (    struct Termios_32 *  og_dash_termios3058 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno44 ) ( ) ) ,  ( (  tcsa_dash_flush151 ) ( ) ) ,  ( (  cast_dash_ptr46 ) ( (  og_dash_termios3058 ) ) ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   deinit896 (    struct Tui_30 *  tui3088 ) {
    ( (  disable_dash_mouse897 ) ( ) );
    ( (  show_dash_cursor898 ) ( ) );
    ( (  reset_dash_colors163 ) ( ) );
    ( (  clear_dash_screen164 ) ( ) );
    ( (  reset_dash_cursor_dash_position899 ) ( ) );
    ( (  disable_dash_raw_dash_mode900 ) ( ( & ( ( * (  tui3088 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout166 ) ( ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   for_dash_each903 (    struct StrConcatIter_382  iterable1014 ,    enum Unit_4 (*  fun1016 )(    struct Char_17  ) ) {
    struct StrConcatIter_382  temp904 = ( (  into_dash_iter389 ) ( (  iterable1014 ) ) );
    struct StrConcatIter_382 *  it1017 = ( &temp904 );
    while ( ( true ) ) {
        struct Maybe_158  dref1018 = ( (  next390 ) ( (  it1017 ) ) );
        if ( dref1018.tag == Maybe_158_None_t ) {
            return ( Unit_4_Unit );
        }
        else {
            if ( dref1018.tag == Maybe_158_Just_t ) {
                ( (  fun1016 ) ( ( dref1018 .stuff .Maybe_158_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_4_Unit );
}

static  enum Unit_4   print902 (    struct StrConcat_20  s2357 ) {
    ( (  for_dash_each903 ) ( ( (  chars413 ) ( (  s2357 ) ) ) ,  (  printf_dash_char79 ) ) );
    return ( Unit_4_Unit );
}

static  enum Unit_4   println901 (    int64_t  s2360 ) {
    ( (  print902 ) ( ( ( StrConcat_20_StrConcat ) ( (  s2360 ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ) );
    return ( Unit_4_Unit );
}

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1947 = ( (  from_dash_integral0 ( 8 ) ) );
    size_t  growth_dash_factor1948 = ( (  from_dash_integral0 ( 2 ) ) );
    size_t  shrink_dash_factor1949 = ( (  from_dash_integral0 ( 8 ) ) );
    struct env1 envinst1 = {
        .starting_dash_size1947 =  starting_dash_size1947 ,
        .growth_dash_factor1948 =  growth_dash_factor1948 ,
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
    bool *  should_dash_resize3068 = ( &temp25 );
    struct env26 envinst26 = {
        .should_dash_resize3068 =  should_dash_resize3068 ,
    };
    struct env27 envinst27 = {
        .should_dash_resize3068 =  should_dash_resize3068 ,
    };
    struct env28 envinst28 = {
        .envinst27 = envinst27 ,
    };
    struct env34 envinst34 = {
        .envinst27 = envinst27 ,
    };
    struct envunion38  temp37 = ( (struct envunion38){ .fun = (  struct Tui_30  (*) (  struct env26*  ) )mk39 , .env =  envinst26 } );
    struct Tui_30  temp36 = ( temp37.fun ( &temp37.env ) );
    struct Tui_30 *  tui3341 = ( &temp36 );
    enum CAllocator_6  al3342 = ( (  idc221 ) ( ) );
    struct Screen_222  temp229 = ( (  mk_dash_screen230 ) ( (  tui3341 ) ,  (  al3342 ) ) );
    struct Screen_222 *  screen3343 = ( &temp229 );
    struct Slice_292  args3346 = ( (  get293 ) ( ) );
    struct timespec  start_dash_time3347 = ( (  now207 ) ( ) );
    struct Maybe_173  dref3348 = ( (  try_dash_get297 ) ( (  args3346 ) ,  (  from_dash_integral0 ( 0 ) ) ) );
    if ( dref3348.tag == Maybe_173_Just_t ) {
        if ( (  eq183 ( ( dref3348 .stuff .Maybe_173_Just_s .field0 ) , ( (  from_dash_string70 ) ( ( "-p" ) ,  ( 2 ) ) ) ) ) ) {
            const char*  filename3350 = ( (  from_dash_string70 ) ( ( "timer-start" ) ,  ( 11 ) ) );
            struct Maybe_298  dref3351 = ( (  try_dash_read_dash_contents299 ) ( (  filename3350 ) ,  (  al3342 ) ) );
            if ( dref3351.tag == Maybe_298_Just_t ) {
                int64_t  num3353 = ( (  or_dash_fail313 ) ( ( (  parse_dash_int322 ) ( ( (  or_dash_fail341 ) ( ( (  head344 ) ( ( (  lines360 ) ( ( dref3351 .stuff .Maybe_298_Just_s .field0 ) ) ) ) ) ,  ( (  from_dash_string94 ) ( ( "empty timer file" ) ,  ( 16 ) ) ) ) ) ) ) ,  ( (  from_dash_string94 ) ( ( "could not parse first timestamp" ) ,  ( 31 ) ) ) ) );
                start_dash_time3347 = ( (struct timespec) { .tv_sec = (  num3353 ) , .tv_nsec = (  from_dash_integral296 ( 0 ) ) } );
                ( (  free361 ) ( ( dref3351 .stuff .Maybe_298_Just_s .field0 ) ,  (  al3342 ) ) );
            }
            else {
                if ( dref3351.tag == Maybe_298_None_t ) {
                    struct envunion365  temp364 = ( (struct envunion365){ .fun = (  const char*  (*) (  struct env22*  ,    struct StrConcat_20  ,    enum CAllocator_6  ) )mk_dash_const_dash_str366 , .env =  envinst22 } );
                    const char*  s3354 = ( temp364.fun ( &temp364.env ,  ( ( StrConcat_20_StrConcat ) ( ( (  start_dash_time3347 ) .tv_sec ) ,  ( (  from_dash_charlike95 ) ( ( "\n" ) ,  ( 1 ) ) ) ) ) ,  (  al3342 ) ) );
                    ( (  write_dash_contents471 ) ( (  filename3350 ) ,  (  s3354 ) ) );
                    ( (  free_dash_const_dash_str493 ) ( (  s3354 ) ,  (  al3342 ) ) );
                }
            }
        } else {
            int64_t  num3355 = ( (  or_dash_fail313 ) ( ( (  parse_dash_int497 ) ( ( dref3348 .stuff .Maybe_173_Just_s .field0 ) ) ) ,  ( (  from_dash_string94 ) ( ( "could not parse first timestamp" ) ,  ( 31 ) ) ) ) );
            start_dash_time3347 = ( (struct timespec) { .tv_sec = (  num3355 ) , .tv_nsec = (  from_dash_integral296 ( 0 ) ) } );
        }
    }
    else {
        if ( dref3348.tag == Maybe_173_None_t ) {
        }
    }
    struct Duration_504  last_dash_diff3356 = ( (  diff505 ) ( (  start_dash_time3347 ) ,  (  start_dash_time3347 ) ) );
    ( (  set_dash_screen_dash_fg506 ) ( (  screen3343 ) ,  ( ( Color_225_Color8 ) ( ( Color8_226_White8 ) ) ) ) );
    bool  running3357 = ( true );
    while ( (  running3357 ) ) {
        struct env509 envinst509 = {
            .envinst28 = envinst28 ,
            .tui3341 =  tui3341 ,
        };
        struct FunIter_508  temp507 =  into_dash_iter517 ( ( (  from_dash_function518 ) ( ( (struct envunion516){ .fun = (  struct Maybe_511  (*) (  struct env509*  ) )lam519 , .env =  envinst509 } ) ) ) );
        while (true) {
            struct Maybe_511  __cond660 =  next661 (&temp507);
            if (  __cond660 .tag == 0 ) {
                break;
            }
            struct InputEvent_512  ev3359 =  __cond660 .stuff .Maybe_511_Just_s .field0;
            struct InputEvent_512  dref3360 = (  ev3359 );
            if ( dref3360.tag == InputEvent_512_Key_t && dref3360 .stuff .InputEvent_512_Key_s .field0.tag == Key_513_Char_t ) {
                if ( (  eq574 ( ( dref3360 .stuff .InputEvent_512_Key_s .field0 .stuff .Key_513_Char_s .field0 ) , ( (  from_dash_charlike575 ) ( ( "q" ) ,  ( 1 ) ) ) ) ) ) {
                    running3357 = ( false );
                }
            }
            else {
                if ( true ) {
                }
            }
        }
        struct envunion664  temp663 = ( (struct envunion664){ .fun = (  bool  (*) (  struct env34*  ,    struct Screen_222 *  ) )resize_dash_screen_dash_if_dash_needed665 , .env =  envinst34 } );
        ( temp663.fun ( &temp663.env ,  (  screen3343 ) ) );
        struct Duration_504  diff3362 = ( (  diff505 ) ( ( (  now207 ) ( ) ) ,  (  start_dash_time3347 ) ) );
        if ( ( ( (  should_dash_redraw667 ) ( (  tui3341 ) ) ) || ( !  eq420 ( ( (  diff3362 ) .f_secs ) , ( (  last_dash_diff3356 ) .f_secs ) ) ) ) ) {
            last_dash_diff3356 = (  diff3362 );
            ( (  clear_dash_screen668 ) ( (  screen3343 ) ) );
            struct ClockTime_677  ct3363 = ( (  clock_dash_time_dash_from_dash_secs678 ) ( ( (  diff3362 ) .f_secs ) ) );
            struct PadZeroes_682  s3364 = ( (  pad_dash_zeroes683 ) ( ( (  u8_dash_i32330 ) ( ( (  ct3363 ) .f_s ) ) ) ,  (  from_dash_integral86 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_682  m3365 = ( (  pad_dash_zeroes683 ) ( ( (  u8_dash_i32330 ) ( ( (  ct3363 ) .f_m ) ) ) ,  (  from_dash_integral86 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_682  h3366 = ( (  pad_dash_zeroes683 ) ( ( (  u32_dash_i32688 ) ( ( (  ct3363 ) .f_h ) ) ) ,  (  from_dash_integral86 ( 2 ) ) ,  ( true ) ) );
            struct StrConcat_690  timer_dash_str3367 = ( ( StrConcat_690_StrConcat ) ( ( ( StrConcat_691_StrConcat ) ( ( ( StrConcat_692_StrConcat ) ( ( ( StrConcat_693_StrConcat ) ( (  h3366 ) ,  ( (  from_dash_charlike95 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  m3365 ) ) ) ,  ( (  from_dash_charlike95 ) ( ( ":" ) ,  ( 1 ) ) ) ) ) ,  (  s3364 ) ) );
            size_t  timer_dash_sz3368 = (  op_dash_sub260 ( (  op_dash_mul236 ( ( (  count694 ) ( (  timer_dash_str3367 ) ) ) , (  from_dash_integral0 ( 7 ) ) ) ) , (  from_dash_integral0 ( 1 ) ) ) );
            int32_t  timer_dash_h3369 = (  from_dash_integral45 ( 6 ) );
            int32_t  begin_dash_x3370 = (  op_dash_div687 ( (  op_dash_sub398 ( ( (  u32_dash_i32688 ) ( ( ( * (  tui3341 ) ) .f_width ) ) ) , ( (  size_dash_i3271 ) ( (  timer_dash_sz3368 ) ) ) ) ) , (  from_dash_integral45 ( 2 ) ) ) );
            int32_t  begin_dash_y3371 = (  op_dash_div687 ( (  op_dash_sub398 ( ( (  u32_dash_i32688 ) ( ( ( * (  tui3341 ) ) .f_height ) ) ) , (  timer_dash_h3369 ) ) ) , (  from_dash_integral45 ( 2 ) ) ) );
            if ( ( (  cmp256 ( (  begin_dash_x3370 ) , (  from_dash_integral45 ( 0 ) ) ) != 0 ) && (  cmp256 ( (  begin_dash_y3371 ) , (  from_dash_integral45 ( 0 ) ) ) != 0 ) ) ) {
                struct Zip_724  temp723 =  into_dash_iter725 ( ( (  zip726 ) ( ( (  chars728 ) ( (  timer_dash_str3367 ) ) ) ,  ( (  from463 ) ( (  from_dash_integral45 ( 0 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_730  __cond729 =  next732 (&temp723);
                    if (  __cond729 .tag == 0 ) {
                        break;
                    }
                    struct Tuple2_731  dref3372 =  __cond729 .stuff .Maybe_730_Just_s .field0;
                    ( (  draw_dash_digit733 ) ( (  screen3343 ) ,  ( dref3372 .field0 ) ,  (  op_dash_add257 ( (  begin_dash_x3370 ) , (  op_dash_mul720 ( ( dref3372 .field1 ) , (  from_dash_integral45 ( 7 ) ) ) ) ) ) ,  (  begin_dash_y3371 ) ) );
                }
            } else {
                size_t  timer_dash_sz3375 = ( (  count694 ) ( (  timer_dash_str3367 ) ) );
                int32_t  timer_dash_h3376 = (  from_dash_integral45 ( 1 ) );
                int32_t  begin_dash_x3377 = (  op_dash_div687 ( (  op_dash_sub398 ( ( (  u32_dash_i32688 ) ( ( ( * (  tui3341 ) ) .f_width ) ) ) , ( (  size_dash_i3271 ) ( (  timer_dash_sz3375 ) ) ) ) ) , (  from_dash_integral45 ( 2 ) ) ) );
                int32_t  begin_dash_y3378 = (  op_dash_div687 ( (  op_dash_sub398 ( ( (  u32_dash_i32688 ) ( ( ( * (  tui3341 ) ) .f_height ) ) ) , (  timer_dash_h3376 ) ) ) , (  from_dash_integral45 ( 2 ) ) ) );
                ( (  draw_dash_str750 ) ( (  screen3343 ) ,  (  timer_dash_str3367 ) ,  (  begin_dash_x3377 ) ,  (  begin_dash_y3378 ) ) );
            }
            ( (  render_dash_screen758 ) ( (  screen3343 ) ) );
        }
        ( (  sync884 ) ( (  tui3341 ) ) );
    }
    ( (  free_dash_screen893 ) ( (  screen3343 ) ) );
    ( (  deinit896 ) ( (  tui3341 ) ) );
    ( (  println901 ) ( ( (  start_dash_time3347 ) .tv_sec ) ) );
}
