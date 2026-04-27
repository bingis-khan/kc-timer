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
static  const char*   from_dash_charlike0 (    const char*  s46 ) {
    return (  s46 );
}

static  char   from_dash_charlike1 (    const char*  s49 ) {
    return ( * ( ( (char * ) (  s49 ) ) ) );
}

static  int64_t   from_dash_integral2 (    int64_t  x57 ) {
    return (  x57 );
}

static  int32_t   from_dash_integral3 (    int64_t  x60 ) {
    return ( (int32_t ) (  x60 ) );
}

static  uint32_t   from_dash_integral4 (    int64_t  x63 ) {
    return ( (uint32_t ) (  x63 ) );
}

static  uint16_t   from_dash_integral5 (    int64_t  x66 ) {
    return ( (uint16_t ) (  x66 ) );
}

static  uint8_t   from_dash_integral6 (    int64_t  x72 ) {
    return ( (uint8_t ) (  x72 ) );
}

static  uint64_t   from_dash_integral7 (    int64_t  x75 ) {
    return ( (uint64_t ) (  x75 ) );
}

static  size_t   from_dash_integral8 (    int64_t  x78 ) {
    return ( (size_t ) (  x78 ) );
}

static  bool   eq9 (    int64_t  l89 ,    int64_t  r91 ) {
    return ( (  l89 ) == (  r91 ) );
}

static  bool   eq10 (    int32_t  l94 ,    int32_t  r96 ) {
    return ( (  l94 ) == (  r96 ) );
}

static  bool   eq11 (    uint32_t  l99 ,    uint32_t  r101 ) {
    return ( (  l99 ) == (  r101 ) );
}

static  bool   eq12 (    uint8_t  l104 ,    uint8_t  r106 ) {
    return ( (  l104 ) == (  r106 ) );
}

static  bool   eq13 (    uint16_t  l109 ,    uint16_t  r111 ) {
    return ( (  l109 ) == (  r111 ) );
}

static  bool   eq14 (    size_t  l114 ,    size_t  r116 ) {
    return ( (  l114 ) == (  r116 ) );
}

static  bool   eq15 (    char  l129 ,    char  r131 ) {
    return ( (  l129 ) == (  r131 ) );
}

enum Color8_19 {
    Color8_19_Black8,
    Color8_19_Red8,
    Color8_19_Green8,
    Color8_19_Yellow8,
    Color8_19_Blue8,
    Color8_19_Magenta8,
    Color8_19_Cyan8,
    Color8_19_White8,
};

enum Color16_20 {
    Color16_20_Black16,
    Color16_20_Red16,
    Color16_20_Green16,
    Color16_20_Yellow16,
    Color16_20_Blue16,
    Color16_20_Magenta16,
    Color16_20_Cyan16,
    Color16_20_White16,
    Color16_20_BrightBlack16,
    Color16_20_BrightRed16,
    Color16_20_BrightGreen16,
    Color16_20_BrightYellow16,
    Color16_20_BrightBlue16,
    Color16_20_BrightMagenta16,
    Color16_20_BrightCyan16,
    Color16_20_BrightWhite16,
};

struct RGB_21 {
    uint8_t  f_r;
    uint8_t  f_g;
    uint8_t  f_b;
};

struct Color_18 {
    enum {
        Color_18_ColorDefault_t,
        Color_18_Color8_t,
        Color_18_Color16_t,
        Color_18_Color256_t,
        Color_18_ColorRGB_t,
    } tag;
    union {
        struct {
            enum Color8_19  field0;
        } Color_18_Color8_s;
        struct {
            enum Color16_20  field0;
        } Color_18_Color16_s;
        struct {
            uint8_t  field0;
        } Color_18_Color256_s;
        struct {
            struct RGB_21  field0;
        } Color_18_ColorRGB_s;
    } stuff;
};

static struct Color_18 Color_18_Color8 (  enum Color8_19  field0 ) {
    return ( struct Color_18 ) { .tag = Color_18_Color8_t, .stuff = { .Color_18_Color8_s = { .field0 = field0 } } };
};

static struct Color_18 Color_18_Color16 (  enum Color16_20  field0 ) {
    return ( struct Color_18 ) { .tag = Color_18_Color16_t, .stuff = { .Color_18_Color16_s = { .field0 = field0 } } };
};

static struct Color_18 Color_18_Color256 (  uint8_t  field0 ) {
    return ( struct Color_18 ) { .tag = Color_18_Color256_t, .stuff = { .Color_18_Color256_s = { .field0 = field0 } } };
};

static struct Color_18 Color_18_ColorRGB (  struct RGB_21  field0 ) {
    return ( struct Color_18 ) { .tag = Color_18_ColorRGB_t, .stuff = { .Color_18_ColorRGB_s = { .field0 = field0 } } };
};

struct Cell_17 {
    char  f_c;
    struct Color_18  f_fg;
    struct Color_18  f_bg;
};

struct Tuple2_24 {
    struct Color_18  field0;
    struct Color_18  field1;
};

static struct Tuple2_24 Tuple2_24_Tuple2 (  struct Color_18  field0 ,  struct Color_18  field1 ) {
    return ( struct Tuple2_24 ) { .field0 = field0 ,  .field1 = field1 };
};

static  void *   cast_dash_ptr30 (    int32_t *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  size_t   size_dash_of31 (    int32_t  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  int32_t   zeroed28 (  ) {
    int32_t  temp29;
    int32_t  x503 = (  temp29 );
    ( ( memset ) ( ( (  cast_dash_ptr30 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of31 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  enum Color8_19 *   cast32 (    int32_t *  x493 ) {
    return ( (enum Color8_19 * ) (  x493 ) );
}

static  int32_t   cast_dash_on_dash_zeroed26 (    enum Color8_19  x506 ) {
    int32_t  temp27 = ( (  zeroed28 ) ( ) );
    int32_t *  y507 = ( &temp27 );
    enum Color8_19 *  yp508 = ( (  cast32 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  bool   eq25 (    enum Color8_19  l2066 ,    enum Color8_19  r2068 ) {
    return (  eq10 ( ( ( (  cast_dash_on_dash_zeroed26 ) ( (  l2066 ) ) ) ) , ( (  cast_dash_on_dash_zeroed26 ) ( (  r2068 ) ) ) ) );
}

static  enum Color16_20 *   cast36 (    int32_t *  x493 ) {
    return ( (enum Color16_20 * ) (  x493 ) );
}

static  int32_t   cast_dash_on_dash_zeroed34 (    enum Color16_20  x506 ) {
    int32_t  temp35 = ( (  zeroed28 ) ( ) );
    int32_t *  y507 = ( &temp35 );
    enum Color16_20 *  yp508 = ( (  cast36 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  bool   eq33 (    enum Color16_20  l2072 ,    enum Color16_20  r2074 ) {
    return (  eq10 ( ( ( (  cast_dash_on_dash_zeroed34 ) ( (  l2072 ) ) ) ) , ( (  cast_dash_on_dash_zeroed34 ) ( (  r2074 ) ) ) ) );
}

static  bool   eq37 (    struct RGB_21  l2102 ,    struct RGB_21  r2104 ) {
    return ( ( (  eq12 ( ( (  l2102 ) .f_r ) , ( (  r2104 ) .f_r ) ) ) && (  eq12 ( ( (  l2102 ) .f_g ) , ( (  r2104 ) .f_g ) ) ) ) && (  eq12 ( ( (  l2102 ) .f_b ) , ( (  r2104 ) .f_b ) ) ) );
}

static  bool   eq23 (    struct Color_18  l2125 ,    struct Color_18  r2127 ) {
    return ( {  struct Tuple2_24  dref2128 = ( ( Tuple2_24_Tuple2 ) ( (  l2125 ) ,  (  r2127 ) ) ) ; dref2128 .field0.tag == Color_18_ColorDefault_t && dref2128 .field1.tag == Color_18_ColorDefault_t ? ( true ) : dref2128 .field0.tag == Color_18_Color8_t && dref2128 .field1.tag == Color_18_Color8_t ? (  eq25 ( ( dref2128 .field0 .stuff .Color_18_Color8_s .field0 ) , ( dref2128 .field1 .stuff .Color_18_Color8_s .field0 ) ) ) : dref2128 .field0.tag == Color_18_Color16_t && dref2128 .field1.tag == Color_18_Color16_t ? (  eq33 ( ( dref2128 .field0 .stuff .Color_18_Color16_s .field0 ) , ( dref2128 .field1 .stuff .Color_18_Color16_s .field0 ) ) ) : dref2128 .field0.tag == Color_18_Color256_t && dref2128 .field1.tag == Color_18_Color256_t ? (  eq12 ( ( dref2128 .field0 .stuff .Color_18_Color256_s .field0 ) , ( dref2128 .field1 .stuff .Color_18_Color256_s .field0 ) ) ) : dref2128 .field0.tag == Color_18_ColorRGB_t && dref2128 .field1.tag == Color_18_ColorRGB_t ? (  eq37 ( ( dref2128 .field0 .stuff .Color_18_ColorRGB_s .field0 ) , ( dref2128 .field1 .stuff .Color_18_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq22 (    struct Cell_17  l2749 ,    struct Cell_17  r2751 ) {
    if ( ( !  eq15 ( ( (  l2749 ) .f_c ) , ( (  r2751 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq23 ( ( (  l2749 ) .f_fg ) , ( (  r2751 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq23 ( ( (  l2749 ) .f_bg ) , ( (  r2751 ) .f_bg ) ) ) ) {
        return ( false );
    }
    return ( true );
}

static  bool   eq16 (    struct Cell_17 *  dref141 ,    struct Cell_17 *  dref143 ) {
    return (  eq22 ( ( (* dref141 ) ) , ( (* dref143 ) ) ) );
}

enum Ordering_39 {
    Ordering_39_LT,
    Ordering_39_EQ,
    Ordering_39_GT,
};

static int64_t builtin_int64_tcmp (int64_t l, int64_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_39   cmp38 (    int64_t  l147 ,    int64_t  r149 ) {
    return ( builtin_int64_tcmp( (  l147 ) , (  r149 ) ) );
}

static size_t builtin_size_tcmp (size_t l, size_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_39   cmp40 (    size_t  l152 ,    size_t  r154 ) {
    return ( builtin_size_tcmp( (  l152 ) , (  r154 ) ) );
}

static int32_t builtin_int32_tcmp (int32_t l, int32_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_39   cmp41 (    int32_t  l157 ,    int32_t  r159 ) {
    return ( builtin_int32_tcmp( (  l157 ) , (  r159 ) ) );
}

static uint8_t builtin_uint8_tcmp (uint8_t l, uint8_t r) {
    return (l < r) ? 0 : (l == r) ? 1 : 2;
}

static  enum Ordering_39   cmp42 (    uint8_t  l167 ,    uint8_t  r169 ) {
    return ( builtin_uint8_tcmp( (  l167 ) , (  r169 ) ) );
}

static  int64_t   op_dash_add43 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) + (  r179 ) );
}

static  int64_t   op_dash_sub44 (    int64_t  l182 ,    int64_t  r184 ) {
    return ( (  l182 ) - (  r184 ) );
}

static  int64_t   op_dash_mul45 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) * (  r189 ) );
}

static  int64_t   op_dash_div46 (    int64_t  l192 ,    int64_t  r194 ) {
    return ( (  l192 ) / (  r194 ) );
}

static  int64_t   op_dash_neg47 (    int64_t  l197 ) {
    return ( (  from_dash_integral2 ( 0 ) ) - (  l197 ) );
}

static  int32_t   op_dash_add48 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) + (  r202 ) );
}

static  int32_t   op_dash_sub49 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) - (  r207 ) );
}

static  int32_t   op_dash_mul50 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) * (  r212 ) );
}

static  int32_t   op_dash_div51 (    int32_t  l215 ,    int32_t  r217 ) {
    return ( (  l215 ) / (  r217 ) );
}

static  int32_t   op_dash_neg52 (    int32_t  x220 ) {
    return ( (  from_dash_integral3 ( 0 ) ) - (  x220 ) );
}

static  uint32_t   op_dash_add53 (    uint32_t  l223 ,    uint32_t  r225 ) {
    return ( (  l223 ) + (  r225 ) );
}

static  uint32_t   op_dash_mul54 (    uint32_t  l233 ,    uint32_t  r235 ) {
    return ( (  l233 ) * (  r235 ) );
}

static  uint8_t   op_dash_add55 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) + (  r245 ) );
}

static  uint8_t   op_dash_sub56 (    uint8_t  l248 ,    uint8_t  r250 ) {
    return ( (  l248 ) - (  r250 ) );
}

static  size_t   op_dash_add57 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) + (  r265 ) );
}

static  size_t   op_dash_sub58 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) - (  r270 ) );
}

static  size_t   op_dash_mul59 (    size_t  l273 ,    size_t  r275 ) {
    return ( (  l273 ) * (  r275 ) );
}

struct Array_62 {
    uint32_t _arr [4];
};

struct SmolArray_61 {
    struct Array_62  f_arr;
};

static  struct SmolArray_61   from_dash_listlike60 (    struct Array_62  arr307 ) {
    return ( (struct SmolArray_61) { .f_arr = (  arr307 ) } );
}

struct Array_65 {
    uint32_t _arr [5];
};

struct SmolArray_64 {
    struct Array_65  f_arr;
};

static  struct SmolArray_64   from_dash_listlike63 (    struct Array_65  arr307 ) {
    return ( (struct SmolArray_64) { .f_arr = (  arr307 ) } );
}

struct Array_68 {
    uint32_t _arr [1];
};

struct SmolArray_67 {
    struct Array_68  f_arr;
};

static  struct SmolArray_67   from_dash_listlike66 (    struct Array_68  arr307 ) {
    return ( (struct SmolArray_67) { .f_arr = (  arr307 ) } );
}

static  int32_t   clock_dash_monotonic69 (  ) {
    return (  from_dash_integral3 ( 1 ) );
}

static  int32_t   seek_dash_set70 (  ) {
    return (  from_dash_integral3 ( 0 ) );
}

static  int32_t   seek_dash_end71 (  ) {
    return (  from_dash_integral3 ( 2 ) );
}

static  int32_t   stdout_dash_fileno72 (  ) {
    return (  from_dash_integral3 ( 1 ) );
}

static  int32_t   stdin_dash_fileno73 (  ) {
    return (  from_dash_integral3 ( 0 ) );
}

static  uint32_t   echo74 (  ) {
    return (  from_dash_integral4 ( 8 ) );
}

static  uint32_t   icanon75 (  ) {
    return (  from_dash_integral4 ( 2 ) );
}

static  uint32_t   isig76 (  ) {
    return (  from_dash_integral4 ( 1 ) );
}

static  uint32_t   iexten77 (  ) {
    return (  from_dash_integral4 ( 32768 ) );
}

static  uint32_t   brkint78 (  ) {
    return (  from_dash_integral4 ( 2 ) );
}

static  uint32_t   icrnl79 (  ) {
    return (  from_dash_integral4 ( 256 ) );
}

static  uint32_t   inpck80 (  ) {
    return (  from_dash_integral4 ( 16 ) );
}

static  uint32_t   istrip81 (  ) {
    return (  from_dash_integral4 ( 32 ) );
}

static  uint32_t   ixon82 (  ) {
    return (  from_dash_integral4 ( 1024 ) );
}

static  uint32_t   opost83 (  ) {
    return (  from_dash_integral4 ( 1 ) );
}

static  uint32_t   cs884 (  ) {
    return (  from_dash_integral4 ( 48 ) );
}

static  size_t   vmin85 (  ) {
    return (  from_dash_integral8 ( 6 ) );
}

static  size_t   vtime86 (  ) {
    return (  from_dash_integral8 ( 5 ) );
}

static  int32_t   tcsa_dash_flush87 (  ) {
    return (  from_dash_integral3 ( 2 ) );
}

static  uint64_t   tiocgwinsz88 (  ) {
    return (  from_dash_integral7 ( 21523 ) );
}

struct Array_91 {
    uint8_t _arr [32];
};

struct Termios_90 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_91  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_90   undefined89 (  ) {
    struct Termios_90  temp92;
    return (  temp92 );
}

static  struct timespec   undefined93 (  ) {
    struct timespec  temp94;
    return (  temp94 );
}

static  struct Cell_17   undefined95 (  ) {
    struct Cell_17  temp96;
    return (  temp96 );
}

static  char   undefined97 (  ) {
    char  temp98;
    return (  temp98 );
}

struct Slice_101 {
    char *  f_ptr;
    size_t  f_count;
};

struct DynStr_100 {
    struct Slice_101  f_contents;
};

static  struct DynStr_100   undefined99 (  ) {
    struct DynStr_100  temp102;
    return (  temp102 );
}

static  int64_t   undefined103 (  ) {
    int64_t  temp104;
    return (  temp104 );
}

static  bool   undefined105 (  ) {
    bool  temp106;
    return (  temp106 );
}

enum MouseButton_108 {
    MouseButton_108_MouseLeft,
    MouseButton_108_MouseMiddle,
    MouseButton_108_MouseRight,
    MouseButton_108_ScrollUp,
    MouseButton_108_ScrollDown,
};

static  enum MouseButton_108   undefined107 (  ) {
    enum MouseButton_108  temp109;
    return (  temp109 );
}

static  uint8_t   undefined110 (  ) {
    uint8_t  temp111;
    return (  temp111 );
}

enum Unit_113 {
    Unit_113_Unit,
};

static  enum Unit_113   undefined112 (  ) {
    enum Unit_113  temp114;
    return (  temp114 );
}

static  uint8_t *   offset_dash_ptr115 (    uint8_t *  x480 ,    int64_t  count482 ) {
    uint8_t  temp116;
    return ( (uint8_t * ) ( ( (void*) (  x480 ) ) + (  op_dash_mul45 ( (  count482 ) , ( (int64_t ) ( sizeof( ( (  temp116 ) ) ) ) ) ) ) ) );
}

static  uint32_t *   offset_dash_ptr117 (    uint32_t *  x480 ,    int64_t  count482 ) {
    uint32_t  temp118;
    return ( (uint32_t * ) ( ( (void*) (  x480 ) ) + (  op_dash_mul45 ( (  count482 ) , ( (int64_t ) ( sizeof( ( (  temp118 ) ) ) ) ) ) ) ) );
}

static  struct Cell_17 *   offset_dash_ptr119 (    struct Cell_17 *  x480 ,    int64_t  count482 ) {
    struct Cell_17  temp120;
    return ( (struct Cell_17 * ) ( ( (void*) (  x480 ) ) + (  op_dash_mul45 ( (  count482 ) , ( (int64_t ) ( sizeof( ( (  temp120 ) ) ) ) ) ) ) ) );
}

static  const char* *   offset_dash_ptr121 (    const char* *  x480 ,    int64_t  count482 ) {
    const char*  temp122;
    return ( (const char* * ) ( ( (void*) (  x480 ) ) + (  op_dash_mul45 ( (  count482 ) , ( (int64_t ) ( sizeof( ( (  temp122 ) ) ) ) ) ) ) ) );
}

static  char *   offset_dash_ptr123 (    char *  x480 ,    int64_t  count482 ) {
    char  temp124;
    return ( (char * ) ( ( (void*) (  x480 ) ) + (  op_dash_mul45 ( (  count482 ) , ( (int64_t ) ( sizeof( ( (  temp124 ) ) ) ) ) ) ) ) );
}

struct TypeSize_126 {
    size_t  f_size;
};

static  struct TypeSize_126   get_dash_typesize125 (  ) {
    struct Cell_17  temp127;
    return ( (struct TypeSize_126) { .f_size = ( sizeof( ( (  temp127 ) ) ) ) } );
}

struct TypeSize_129 {
    size_t  f_size;
};

static  struct TypeSize_129   get_dash_typesize128 (  ) {
    char  temp130;
    return ( (struct TypeSize_129) { .f_size = ( sizeof( ( (  temp130 ) ) ) ) } );
}

struct Winsize_132 {
    uint16_t  f_ws_dash_row;
    uint16_t  f_ws_dash_col;
    uint16_t  f_ws_dash_xpixel;
    uint16_t  f_ws_dash_ypixel;
};

static  size_t   size_dash_of131 (    struct Winsize_132  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of133 (    uint32_t  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of134 (    FILE *  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of135 (    enum Unit_113 *  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of136 (    size_t  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of137 (    char  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of138 (    char *  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of139 (    int64_t  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

struct Array_141 {
    char _arr [32];
};

static  size_t   size_dash_of140 (    struct Array_141  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  size_t   size_dash_of142 (    struct timespec *  x487 ) {
    return ( sizeof( (  x487 ) ) );
}

static  uint16_t *   cast143 (    uint32_t *  x493 ) {
    return ( (uint16_t * ) (  x493 ) );
}

static  enum Unit_113 *   cast144 (    const char*  x493 ) {
    return ( (enum Unit_113 * ) (  x493 ) );
}

static  uint32_t *   cast145 (    size_t *  x493 ) {
    return ( (uint32_t * ) (  x493 ) );
}

static  char *   cast146 (    int32_t *  x493 ) {
    return ( (char * ) (  x493 ) );
}

static  const char*   cast147 (    char *  x493 ) {
    return ( (const char* ) (  x493 ) );
}

static  char   cast148 (    int64_t  x493 ) {
    return ( (char ) (  x493 ) );
}

static  char *   cast149 (    const char*  x493 ) {
    return ( (char * ) (  x493 ) );
}

static  char   cast150 (    int32_t  x493 ) {
    return ( (char ) (  x493 ) );
}

static  uint8_t *   cast151 (    int64_t *  x493 ) {
    return ( (uint8_t * ) (  x493 ) );
}

static  uint8_t   cast152 (    char  x493 ) {
    return ( (uint8_t ) (  x493 ) );
}

static  int32_t   cast153 (    uint32_t  x493 ) {
    return ( (int32_t ) (  x493 ) );
}

static  char *   cast154 (    struct Array_141 *  x493 ) {
    return ( (char * ) (  x493 ) );
}

static  uint8_t *   cast155 (    int32_t *  x493 ) {
    return ( (uint8_t * ) (  x493 ) );
}

static  void *   cast_dash_ptr156 (    struct Winsize_132 *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  void *   cast_dash_ptr157 (    uint32_t *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  struct termios *   cast_dash_ptr158 (    struct Termios_90 *  p496 ) {
    return ( (struct termios * ) (  p496 ) );
}

static  uint8_t *   cast_dash_ptr159 (    struct Array_91 *  p496 ) {
    return ( (uint8_t * ) (  p496 ) );
}

static  uint32_t *   cast_dash_ptr160 (    struct Array_62 *  p496 ) {
    return ( (uint32_t * ) (  p496 ) );
}

static  uint32_t *   cast_dash_ptr161 (    struct Array_65 *  p496 ) {
    return ( (uint32_t * ) (  p496 ) );
}

static  uint32_t *   cast_dash_ptr162 (    struct Array_68 *  p496 ) {
    return ( (uint32_t * ) (  p496 ) );
}

static  void *   cast_dash_ptr163 (    FILE * *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  void *   cast_dash_ptr164 (    enum Unit_113 * *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  struct Cell_17 *   cast_dash_ptr165 (    void *  p496 ) {
    return ( (struct Cell_17 * ) (  p496 ) );
}

static  void *   cast_dash_ptr166 (    size_t *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  char *   cast_dash_ptr167 (    void *  p496 ) {
    return ( (char * ) (  p496 ) );
}

static  void *   cast_dash_ptr168 (    char *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  void *   cast_dash_ptr169 (    char * *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  void *   cast_dash_ptr170 (    enum Unit_113 *  p496 ) {
    return ( (void * ) (  p496 ) );
}

struct Pollfd_172 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr171 (    struct Pollfd_172 *  p496 ) {
    return ( (struct pollfd * ) (  p496 ) );
}

static  void *   cast_dash_ptr173 (    int64_t *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  char *   cast_dash_ptr174 (    struct Array_141 *  p496 ) {
    return ( (char * ) (  p496 ) );
}

static  void *   cast_dash_ptr175 (    struct Array_141 *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  void *   cast_dash_ptr176 (    struct timespec * *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  void *   cast_dash_ptr177 (    struct Cell_17 *  p496 ) {
    return ( (void * ) (  p496 ) );
}

static  struct Winsize_132   zeroed178 (  ) {
    struct Winsize_132  temp179;
    struct Winsize_132  x503 = (  temp179 );
    ( ( memset ) ( ( (  cast_dash_ptr156 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of131 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  uint32_t   zeroed180 (  ) {
    uint32_t  temp181;
    uint32_t  x503 = (  temp181 );
    ( ( memset ) ( ( (  cast_dash_ptr157 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of133 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  FILE *   zeroed182 (  ) {
    FILE *  temp183;
    FILE *  x503 = (  temp183 );
    ( ( memset ) ( ( (  cast_dash_ptr163 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of134 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  enum Unit_113 *   zeroed184 (  ) {
    enum Unit_113 *  temp185;
    enum Unit_113 *  x503 = (  temp185 );
    ( ( memset ) ( ( (  cast_dash_ptr164 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of135 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  size_t   zeroed186 (  ) {
    size_t  temp187;
    size_t  x503 = (  temp187 );
    ( ( memset ) ( ( (  cast_dash_ptr166 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of136 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  char   zeroed188 (  ) {
    char  temp189;
    char  x503 = (  temp189 );
    ( ( memset ) ( ( (  cast_dash_ptr168 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of137 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  char *   zeroed190 (  ) {
    char *  temp191;
    char *  x503 = (  temp191 );
    ( ( memset ) ( ( (  cast_dash_ptr169 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of138 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  int64_t   zeroed192 (  ) {
    int64_t  temp193;
    int64_t  x503 = (  temp193 );
    ( ( memset ) ( ( (  cast_dash_ptr173 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of139 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  struct Array_141   zeroed194 (  ) {
    struct Array_141  temp195;
    struct Array_141  x503 = (  temp195 );
    ( ( memset ) ( ( (  cast_dash_ptr175 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of140 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  struct timespec *   zeroed196 (  ) {
    struct timespec *  temp197;
    struct timespec *  x503 = (  temp197 );
    ( ( memset ) ( ( (  cast_dash_ptr176 ) ( ( & (  x503 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of142 ) ( (  x503 ) ) ) ) );
    return (  x503 );
}

static  uint32_t   cast_dash_on_dash_zeroed198 (    uint16_t  x506 ) {
    uint32_t  temp199 = ( (  zeroed180 ) ( ) );
    uint32_t *  y507 = ( &temp199 );
    uint16_t *  yp508 = ( (  cast143 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  size_t   cast_dash_on_dash_zeroed200 (    uint32_t  x506 ) {
    size_t  temp201 = ( (  zeroed186 ) ( ) );
    size_t *  y507 = ( &temp201 );
    uint32_t *  yp508 = ( (  cast145 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  int32_t   cast_dash_on_dash_zeroed202 (    char  x506 ) {
    int32_t  temp203 = ( (  zeroed28 ) ( ) );
    int32_t *  y507 = ( &temp203 );
    char *  yp508 = ( (  cast146 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  int64_t   cast_dash_on_dash_zeroed204 (    uint8_t  x506 ) {
    int64_t  temp205 = ( (  zeroed192 ) ( ) );
    int64_t *  y507 = ( &temp205 );
    uint8_t *  yp508 = ( (  cast151 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  int32_t   cast_dash_on_dash_zeroed206 (    uint8_t  x506 ) {
    int32_t  temp207 = ( (  zeroed28 ) ( ) );
    int32_t *  y507 = ( &temp207 );
    uint8_t *  yp508 = ( (  cast155 ) ( (  y507 ) ) );
    (*  yp508 ) = (  x506 );
    return ( * (  y507 ) );
}

static  FILE *   null_dash_ptr208 (  ) {
    return ( (  zeroed182 ) ( ) );
}

static  enum Unit_113 *   null_dash_ptr209 (  ) {
    return ( (  zeroed184 ) ( ) );
}

static  char *   null_dash_ptr210 (  ) {
    return ( (  zeroed190 ) ( ) );
}

static  struct timespec *   null_dash_ptr211 (  ) {
    return ( (  zeroed196 ) ( ) );
}

static  bool   is_dash_ptr_dash_null212 (    FILE *  p513 ) {
    return ( (  p513 ) == ( (  null_dash_ptr208 ) ( ) ) );
}

static  bool   ptr_dash_eq213 (    enum Unit_113 *  l519 ,    enum Unit_113 *  r521 ) {
    return ( (  l519 ) == (  r521 ) );
}

struct Maybe_215 {
    enum {
        Maybe_215_None_t,
        Maybe_215_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_215_Just_s;
    } stuff;
};

static struct Maybe_215 Maybe_215_Just (  const char*  field0 ) {
    return ( struct Maybe_215 ) { .tag = Maybe_215_Just_t, .stuff = { .Maybe_215_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_215   from_dash_nullable_dash_c_dash_str214 (    const char*  s524 ) {
    if ( ( (  ptr_dash_eq213 ) ( ( (  cast144 ) ( (  s524 ) ) ) ,  ( ( (  null_dash_ptr209 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_215) { .tag = Maybe_215_None_t } );
    } else {
        return ( ( Maybe_215_Just ) ( (  s524 ) ) );
    }
}

static  int64_t   size_dash_i64216 (    size_t  x527 ) {
    return ( (int64_t ) (  x527 ) );
}

static  uint8_t   i32_dash_u8217 (    int32_t  x530 ) {
    return ( (uint8_t ) (  x530 ) );
}

static  uint32_t   i32_dash_u32218 (    int32_t  x533 ) {
    return ( (uint32_t ) (  x533 ) );
}

static  int64_t   i32_dash_i64219 (    int32_t  x536 ) {
    return ( (int64_t ) (  x536 ) );
}

static  size_t   i32_dash_size220 (    int32_t  x539 ) {
    return ( (size_t ) ( (int64_t ) (  x539 ) ) );
}

static  uint8_t   i64_dash_u8221 (    int64_t  x542 ) {
    return ( (uint8_t ) (  x542 ) );
}

static  int32_t   i64_dash_i32222 (    int64_t  x545 ) {
    return ( (int32_t ) (  x545 ) );
}

static  uint32_t   i64_dash_u32223 (    int64_t  x548 ) {
    return ( (uint32_t ) (  x548 ) );
}

static  int32_t   size_dash_i32224 (    size_t  x554 ) {
    return ( (int32_t ) (  x554 ) );
}

static  uint32_t   u16_dash_u32225 (    uint16_t  x560 ) {
    return ( (  cast_dash_on_dash_zeroed198 ) ( (  x560 ) ) );
}

static  size_t   u32_dash_size226 (    uint32_t  x566 ) {
    return ( (  cast_dash_on_dash_zeroed200 ) ( (  x566 ) ) );
}

static  int32_t   u32_dash_i32227 (    uint32_t  x575 ) {
    return ( (  cast153 ) ( (  x575 ) ) );
}

static  int64_t   u8_dash_i64228 (    uint8_t  x581 ) {
    return ( (  cast_dash_on_dash_zeroed204 ) ( (  x581 ) ) );
}

static  int32_t   u8_dash_i32229 (    uint8_t  x584 ) {
    return ( (  cast_dash_on_dash_zeroed206 ) ( (  x584 ) ) );
}

struct SliceIter_232 {
    struct Slice_101  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_231 {
    struct SliceIter_232  f_s;
};

static  struct Scanner_231   into_dash_iter233 (    struct Scanner_231  self2582 ) {
    return (  self2582 );
}

static  struct Scanner_231   into_dash_iter230 (    struct Scanner_231 *  self590 ) {
    return ( (  into_dash_iter233 ) ( ( * (  self590 ) ) ) );
}

enum EmptyIter_235 {
    EmptyIter_235_EmptyIter,
};

static  enum EmptyIter_235   nil234 (  ) {
    return ( EmptyIter_235_EmptyIter );
}

static  enum EmptyIter_235   into_dash_iter236 (    enum EmptyIter_235  self595 ) {
    return (  self595 );
}

struct Maybe_238 {
    enum {
        Maybe_238_None_t,
        Maybe_238_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_238_Just_s;
    } stuff;
};

static struct Maybe_238 Maybe_238_Just (  char  field0 ) {
    return ( struct Maybe_238 ) { .tag = Maybe_238_Just_t, .stuff = { .Maybe_238_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_238   next237 (    enum EmptyIter_235 *  dref597 ) {
    return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
}

struct ConstStrIter_241 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_240 {
    struct ConstStrIter_241  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_240 Map_240_Map (  struct ConstStrIter_241  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_240 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_240   into_dash_iter239 (    struct Map_240  self601 ) {
    return (  self601 );
}

struct Maybe_243 {
    enum {
        Maybe_243_None_t,
        Maybe_243_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_243_Just_s;
    } stuff;
};

static struct Maybe_243 Maybe_243_Just (  uint32_t  field0 ) {
    return ( struct Maybe_243 ) { .tag = Maybe_243_Just_t, .stuff = { .Maybe_243_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_238   next244 (    struct ConstStrIter_241 *  self1119 ) {
    if ( (  cmp40 ( ( ( * (  self1119 ) ) .f_i ) , ( (  i32_dash_size220 ) ( ( ( strlen ) ( ( ( * (  self1119 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    char *  char_dash_ptr1120 = ( ( (  cast149 ) ( ( ( * (  self1119 ) ) .f_ogstr ) ) ) );
    char  c1121 = ( * ( (  offset_dash_ptr123 ) ( (  char_dash_ptr1120 ) ,  ( (  size_dash_i64216 ) ( ( ( * (  self1119 ) ) .f_i ) ) ) ) ) );
    (*  self1119 ) .f_i = (  op_dash_add57 ( ( ( * (  self1119 ) ) .f_i ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_238_Just ) ( (  c1121 ) ) );
}

static  struct Maybe_243   next242 (    struct Map_240 *  dref603 ) {
    struct Maybe_238  dref606 = ( (  next244 ) ( ( & ( (* dref603 ) .field0 ) ) ) );
    if ( dref606.tag == Maybe_238_None_t ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    else {
        if ( dref606.tag == Maybe_238_Just_t ) {
            return ( ( Maybe_243_Just ) ( ( ( (* dref603 ) .field1 ) ( ( dref606 .stuff .Maybe_238_Just_s .field0 ) ) ) ) );
        }
    }
}

static  struct ConstStrIter_241   into_dash_iter246 (    const char*  self1113 ) {
    return ( (struct ConstStrIter_241) { .f_ogstr = (  self1113 ) , .f_i = (  from_dash_integral8 ( 0 ) ) } );
}

static  struct Map_240   map245 (    const char*  iterable610 ,    uint32_t (*  fun612 )(    char  ) ) {
    struct ConstStrIter_241  it613 = ( (  into_dash_iter246 ) ( (  iterable610 ) ) );
    return ( ( Map_240_Map ) ( (  it613 ) ,  (  fun612 ) ) );
}

struct Range_248 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_248 Range_248_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_248 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_248   to247 (    int32_t  from679 ,    int32_t  to681 ) {
    return ( ( Range_248_Range ) ( (  from679 ) ,  (  to681 ) ) );
}

struct RangeIter_250 {
    struct Range_248  field0;
    int32_t  field1;
};

static struct RangeIter_250 RangeIter_250_RangeIter (  struct Range_248  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_250 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_250   into_dash_iter249 (    struct Range_248  dref688 ) {
    return ( ( RangeIter_250_RangeIter ) ( ( ( Range_248_Range ) ( ( dref688 .field0 ) ,  ( dref688 .field1 ) ) ) ,  ( dref688 .field0 ) ) );
}

struct Maybe_252 {
    enum {
        Maybe_252_None_t,
        Maybe_252_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_252_Just_s;
    } stuff;
};

static struct Maybe_252 Maybe_252_Just (  int32_t  field0 ) {
    return ( struct Maybe_252 ) { .tag = Maybe_252_Just_t, .stuff = { .Maybe_252_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_252   next251 (    struct RangeIter_250 *  self696 ) {
    struct RangeIter_250  dref697 = ( * (  self696 ) );
    if ( true ) {
        if ( (  cmp41 ( ( dref697 .field1 ) , ( dref697 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_252) { .tag = Maybe_252_None_t } );
        }
        struct Maybe_252  x701 = ( ( Maybe_252_Just ) ( ( dref697 .field1 ) ) );
        (*  self696 ) = ( ( RangeIter_250_RangeIter ) ( ( ( Range_248_Range ) ( ( dref697 .field0 .field0 ) ,  ( dref697 .field0 .field1 ) ) ) ,  (  op_dash_add48 ( ( dref697 .field1 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
        return (  x701 );
    }
}

struct FromIter_254 {
    int32_t  f_from;
};

static  struct FromIter_254   from253 (    int32_t  f705 ) {
    return ( (struct FromIter_254) { .f_from = (  f705 ) } );
}

static  struct FromIter_254   into_dash_iter255 (    struct FromIter_254  it708 ) {
    return (  it708 );
}

static  struct Maybe_252   next256 (    struct FromIter_254 *  dref710 ) {
    int32_t  v712 = ( ( (* dref710 ) ) .f_from );
    (* dref710 ) .f_from = (  op_dash_add48 ( ( ( (* dref710 ) ) .f_from ) , (  from_dash_integral3 ( 1 ) ) ) );
    return ( ( Maybe_252_Just ) ( (  v712 ) ) );
}

struct Zip_258 {
    struct SliceIter_232  f_left_dash_it;
    struct FromIter_254  f_right_dash_it;
};

static  struct Zip_258   into_dash_iter257 (    struct Zip_258  self716 ) {
    return (  self716 );
}

struct PadZeroes_265 {
    int32_t  f_x;
    uint8_t  f_len;
};

struct AppendIter_266 {
    enum EmptyIter_235  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_264 {
    struct PadZeroes_265  f_left;
    struct AppendIter_266  f_right;
};

struct StrConcatIter_263 {
    struct StrConcatIter_264  f_left;
    struct PadZeroes_265  f_right;
};

struct StrConcatIter_262 {
    struct StrConcatIter_263  f_left;
    struct AppendIter_266  f_right;
};

struct StrConcatIter_261 {
    struct StrConcatIter_262  f_left;
    struct PadZeroes_265  f_right;
};

struct Zip_260 {
    struct StrConcatIter_261  f_left_dash_it;
    struct FromIter_254  f_right_dash_it;
};

static  struct Zip_260   into_dash_iter259 (    struct Zip_260  self716 ) {
    return (  self716 );
}

struct Zip_268 {
    struct ConstStrIter_241  f_left_dash_it;
    struct FromIter_254  f_right_dash_it;
};

static  struct Zip_268   into_dash_iter267 (    struct Zip_268  self716 ) {
    return (  self716 );
}

struct Tuple2_271 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_271 Tuple2_271_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_271 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_270 {
    enum {
        Maybe_270_None_t,
        Maybe_270_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_271  field0;
        } Maybe_270_Just_s;
    } stuff;
};

static struct Maybe_270 Maybe_270_Just (  struct Tuple2_271  field0 ) {
    return ( struct Maybe_270 ) { .tag = Maybe_270_Just_t, .stuff = { .Maybe_270_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_238   next272 (    struct SliceIter_232 *  self1514 ) {
    size_t  off1515 = ( ( * (  self1514 ) ) .f_current_dash_offset );
    if ( (  cmp40 ( (  op_dash_add57 ( (  off1515 ) , (  from_dash_integral8 ( 1 ) ) ) ) , ( ( ( * (  self1514 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    char  elem1516 = ( * ( (  offset_dash_ptr123 ) ( ( ( ( * (  self1514 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  off1515 ) ) ) ) ) );
    (*  self1514 ) .f_current_dash_offset = (  op_dash_add57 ( (  off1515 ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_238_Just ) ( (  elem1516 ) ) );
}

static  struct Maybe_270   next269 (    struct Zip_258 *  self719 ) {
    struct Zip_258  copy720 = ( * (  self719 ) );
    while ( ( true ) ) {
        struct Maybe_238  dref721 = ( (  next272 ) ( ( & ( (  copy720 ) .f_left_dash_it ) ) ) );
        if ( dref721.tag == Maybe_238_None_t ) {
            return ( (struct Maybe_270) { .tag = Maybe_270_None_t } );
        }
        else {
            if ( dref721.tag == Maybe_238_Just_t ) {
                struct Maybe_252  dref723 = ( (  next256 ) ( ( & ( (  copy720 ) .f_right_dash_it ) ) ) );
                if ( dref723.tag == Maybe_252_None_t ) {
                    return ( (struct Maybe_270) { .tag = Maybe_270_None_t } );
                }
                else {
                    if ( dref723.tag == Maybe_252_Just_t ) {
                        ( (  next272 ) ( ( & ( ( * (  self719 ) ) .f_left_dash_it ) ) ) );
                        ( (  next256 ) ( ( & ( ( * (  self719 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_270_Just ) ( ( ( Tuple2_271_Tuple2 ) ( ( dref721 .stuff .Maybe_238_Just_s .field0 ) ,  ( dref723 .stuff .Maybe_252_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

struct env281 {
    ;
    int32_t  base980;
};

struct funenv281 {
    int32_t  (*fun) (  struct env281  ,    int32_t  ,    int32_t  );
    struct env281 env;
};

static  int32_t   reduce280 (    struct Range_248  iterable863 ,    int32_t  base865 ,   struct funenv281  fun867 ) {
    int32_t  x868 = (  base865 );
    struct RangeIter_250  it869 = ( (  into_dash_iter249 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_252  dref870 = ( (  next251 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_252_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_252_Just_t ) {
                struct funenv281  temp282 = (  fun867 );
                x868 = ( temp282.fun ( temp282.env ,  ( dref870 .stuff .Maybe_252_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    int32_t  temp283;
    return (  temp283 );
}

static  int32_t   lam281 (   struct env281 env ,    int32_t  item984 ,    int32_t  x986 ) {
    return (  op_dash_mul50 ( (  x986 ) , ( env.base980 ) ) );
}

static  int32_t   pow279 (    int32_t  base980 ,    int32_t  p982 ) {
    struct env281 envinst281 = {
        .base980 =  base980 ,
    };
    return ( (  reduce280 ) ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  p982 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral3 ( 1 ) ) ,  ( (struct funenv281){ .fun = lam281, .env = envinst281 } ) ) );
}

static  struct Maybe_238   next278 (    struct PadZeroes_265 *  self1300 ) {
    if ( (  cmp42 ( ( ( * (  self1300 ) ) .f_len ) , (  from_dash_integral6 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    int32_t  trim_dash_down1301 = ( (  pow279 ) ( (  from_dash_integral3 ( 10 ) ) ,  (  op_dash_sub49 ( ( (  u8_dash_i32229 ) ( ( ( * (  self1300 ) ) .f_len ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
    int32_t  upper1302 = (  op_dash_div51 ( ( ( * (  self1300 ) ) .f_x ) , (  trim_dash_down1301 ) ) );
    int32_t  upper_dash_mask1303 = (  op_dash_mul50 ( (  op_dash_div51 ( (  upper1302 ) , (  from_dash_integral3 ( 10 ) ) ) ) , (  from_dash_integral3 ( 10 ) ) ) );
    int32_t  digit1304 = (  op_dash_sub49 ( (  upper1302 ) , (  upper_dash_mask1303 ) ) );
    (*  self1300 ) .f_len = (  op_dash_sub56 ( ( ( * (  self1300 ) ) .f_len ) , (  from_dash_integral6 ( 1 ) ) ) );
    char  digit_dash_char1305 = ( (  cast150 ) ( (  op_dash_add48 ( (  digit1304 ) , (  from_dash_integral3 ( 48 ) ) ) ) ) );
    return ( ( Maybe_238_Just ) ( (  digit_dash_char1305 ) ) );
}

static  struct Maybe_238   next284 (    struct AppendIter_266 *  self827 ) {
    struct Maybe_238  dref828 = ( (  next237 ) ( ( & ( ( * (  self827 ) ) .f_it ) ) ) );
    if ( dref828.tag == Maybe_238_Just_t ) {
        return ( ( Maybe_238_Just ) ( ( dref828 .stuff .Maybe_238_Just_s .field0 ) ) );
    }
    else {
        if ( dref828.tag == Maybe_238_None_t ) {
            if ( ( ! ( ( * (  self827 ) ) .f_appended ) ) ) {
                (*  self827 ) .f_appended = ( true );
                return ( ( Maybe_238_Just ) ( ( ( * (  self827 ) ) .f_elem ) ) );
            }
            return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
        }
    }
}

static  struct Maybe_238   next277 (    struct StrConcatIter_264 *  self1211 ) {
    struct Maybe_238  dref1212 = ( (  next278 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_238_Just_t ) {
        return ( ( Maybe_238_Just ) ( ( dref1212 .stuff .Maybe_238_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_238_None_t ) {
            return ( (  next284 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_238   next276 (    struct StrConcatIter_263 *  self1211 ) {
    struct Maybe_238  dref1212 = ( (  next277 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_238_Just_t ) {
        return ( ( Maybe_238_Just ) ( ( dref1212 .stuff .Maybe_238_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_238_None_t ) {
            return ( (  next278 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_238   next275 (    struct StrConcatIter_262 *  self1211 ) {
    struct Maybe_238  dref1212 = ( (  next276 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_238_Just_t ) {
        return ( ( Maybe_238_Just ) ( ( dref1212 .stuff .Maybe_238_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_238_None_t ) {
            return ( (  next284 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_238   next274 (    struct StrConcatIter_261 *  self1211 ) {
    struct Maybe_238  dref1212 = ( (  next275 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_238_Just_t ) {
        return ( ( Maybe_238_Just ) ( ( dref1212 .stuff .Maybe_238_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_238_None_t ) {
            return ( (  next278 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  struct Maybe_270   next273 (    struct Zip_260 *  self719 ) {
    struct Zip_260  copy720 = ( * (  self719 ) );
    while ( ( true ) ) {
        struct Maybe_238  dref721 = ( (  next274 ) ( ( & ( (  copy720 ) .f_left_dash_it ) ) ) );
        if ( dref721.tag == Maybe_238_None_t ) {
            return ( (struct Maybe_270) { .tag = Maybe_270_None_t } );
        }
        else {
            if ( dref721.tag == Maybe_238_Just_t ) {
                struct Maybe_252  dref723 = ( (  next256 ) ( ( & ( (  copy720 ) .f_right_dash_it ) ) ) );
                if ( dref723.tag == Maybe_252_None_t ) {
                    return ( (struct Maybe_270) { .tag = Maybe_270_None_t } );
                }
                else {
                    if ( dref723.tag == Maybe_252_Just_t ) {
                        ( (  next274 ) ( ( & ( ( * (  self719 ) ) .f_left_dash_it ) ) ) );
                        ( (  next256 ) ( ( & ( ( * (  self719 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_270_Just ) ( ( ( Tuple2_271_Tuple2 ) ( ( dref721 .stuff .Maybe_238_Just_s .field0 ) ,  ( dref723 .stuff .Maybe_252_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  struct Maybe_270   next285 (    struct Zip_268 *  self719 ) {
    struct Zip_268  copy720 = ( * (  self719 ) );
    while ( ( true ) ) {
        struct Maybe_238  dref721 = ( (  next244 ) ( ( & ( (  copy720 ) .f_left_dash_it ) ) ) );
        if ( dref721.tag == Maybe_238_None_t ) {
            return ( (struct Maybe_270) { .tag = Maybe_270_None_t } );
        }
        else {
            if ( dref721.tag == Maybe_238_Just_t ) {
                struct Maybe_252  dref723 = ( (  next256 ) ( ( & ( (  copy720 ) .f_right_dash_it ) ) ) );
                if ( dref723.tag == Maybe_252_None_t ) {
                    return ( (struct Maybe_270) { .tag = Maybe_270_None_t } );
                }
                else {
                    if ( dref723.tag == Maybe_252_Just_t ) {
                        ( (  next244 ) ( ( & ( ( * (  self719 ) ) .f_left_dash_it ) ) ) );
                        ( (  next256 ) ( ( & ( ( * (  self719 ) ) .f_right_dash_it ) ) ) );
                        return ( ( Maybe_270_Just ) ( ( ( Tuple2_271_Tuple2 ) ( ( dref721 .stuff .Maybe_238_Just_s .field0 ) ,  ( dref723 .stuff .Maybe_252_Just_s .field0 ) ) ) ) );
                    }
                }
            }
        }
    }
}

static  struct SliceIter_232   into_dash_iter287 (    struct Slice_101  self1508 ) {
    return ( (struct SliceIter_232) { .f_slice = (  self1508 ) , .f_current_dash_offset = (  from_dash_integral8 ( 0 ) ) } );
}

static  struct Zip_258   zip286 (    struct Slice_101  left727 ,    struct FromIter_254  right729 ) {
    struct SliceIter_232  left_dash_it730 = ( (  into_dash_iter287 ) ( (  left727 ) ) );
    struct FromIter_254  right_dash_it731 = ( (  into_dash_iter255 ) ( (  right729 ) ) );
    return ( (struct Zip_258) { .f_left_dash_it = (  left_dash_it730 ) , .f_right_dash_it = (  right_dash_it731 ) } );
}

static  struct StrConcatIter_261   into_dash_iter289 (    struct StrConcatIter_261  self1208 ) {
    return (  self1208 );
}

static  struct Zip_260   zip288 (    struct StrConcatIter_261  left727 ,    struct FromIter_254  right729 ) {
    struct StrConcatIter_261  left_dash_it730 = ( (  into_dash_iter289 ) ( (  left727 ) ) );
    struct FromIter_254  right_dash_it731 = ( (  into_dash_iter255 ) ( (  right729 ) ) );
    return ( (struct Zip_260) { .f_left_dash_it = (  left_dash_it730 ) , .f_right_dash_it = (  right_dash_it731 ) } );
}

static  struct ConstStrIter_241   into_dash_iter291 (    struct ConstStrIter_241  self1116 ) {
    return (  self1116 );
}

static  struct Zip_268   zip290 (    struct ConstStrIter_241  left727 ,    struct FromIter_254  right729 ) {
    struct ConstStrIter_241  left_dash_it730 = ( (  into_dash_iter291 ) ( (  left727 ) ) );
    struct FromIter_254  right_dash_it731 = ( (  into_dash_iter255 ) ( (  right729 ) ) );
    return ( (struct Zip_268) { .f_left_dash_it = (  left_dash_it730 ) , .f_right_dash_it = (  right_dash_it731 ) } );
}

struct TakeWhile_293 {
    struct Scanner_231  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_293   into_dash_iter292 (    struct TakeWhile_293  self766 ) {
    return (  self766 );
}

static  struct Maybe_238   next295 (    struct Scanner_231 *  self2579 ) {
    return ( (  next272 ) ( ( & ( ( * (  self2579 ) ) .f_s ) ) ) );
}

static  struct Maybe_238   next294 (    struct TakeWhile_293 *  self769 ) {
    struct Maybe_238  mx770 = ( (  next295 ) ( ( & ( ( * (  self769 ) ) .f_it ) ) ) );
    struct Maybe_238  dref771 = (  mx770 );
    if ( dref771.tag == Maybe_238_None_t ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    else {
        if ( dref771.tag == Maybe_238_Just_t ) {
            if ( ( ( ( * (  self769 ) ) .f_pred ) ( ( dref771 .stuff .Maybe_238_Just_s .field0 ) ) ) ) {
                return ( ( Maybe_238_Just ) ( ( dref771 .stuff .Maybe_238_Just_s .field0 ) ) );
            } else {
                return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
            }
        }
    }
}

static  struct TakeWhile_293   take_dash_while296 (    struct Scanner_231 *  it775 ,    bool (*  pred777 )(    char  ) ) {
    return ( (struct TakeWhile_293) { .f_it = ( (  into_dash_iter230 ) ( (  it775 ) ) ) , .f_pred = (  pred777 ) } );
}

static  struct AppendIter_266   append297 (    enum EmptyIter_235  it811 ,    char  e813 ) {
    return ( (struct AppendIter_266) { .f_it = ( (  into_dash_iter236 ) ( (  it811 ) ) ) , .f_elem = (  e813 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_266   cons298 (    enum EmptyIter_235  it816 ,    char  e818 ) {
    return ( (  append297 ) ( (  it816 ) ,  (  e818 ) ) );
}

static  struct AppendIter_266   single299 (    char  e821 ) {
    return ( (  cons298 ) ( ( (  nil234 ) ( ) ) ,  (  e821 ) ) );
}

struct env304 {
    ;
    ;
    ;
    bool *  should_dash_resize2654;
};

enum ColorPalette_306 {
    ColorPalette_306_Palette8,
    ColorPalette_306_Palette16,
    ColorPalette_306_Palette256,
    ColorPalette_306_PaletteRGB,
};

struct Tui_305 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_306  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_90  f_orig_dash_termios;
    bool  f_should_dash_redraw;
};

struct funenv304 {
    bool  (*fun) (  struct env304  ,    struct Tui_305 *  );
    struct env304 env;
};

struct env303 {
    struct env304 envinst304;
    ;
};

struct Key_309 {
    enum {
        Key_309_Escape_t,
        Key_309_Enter_t,
        Key_309_Tab_t,
        Key_309_Backspace_t,
        Key_309_Char_t,
        Key_309_Ctrl_t,
        Key_309_Up_t,
        Key_309_Down_t,
        Key_309_Left_t,
        Key_309_Right_t,
        Key_309_Home_t,
        Key_309_End_t,
        Key_309_PageUp_t,
        Key_309_PageDown_t,
        Key_309_Delete_t,
        Key_309_Insert_t,
        Key_309_F1_t,
        Key_309_F2_t,
        Key_309_F3_t,
        Key_309_F4_t,
        Key_309_F5_t,
        Key_309_F6_t,
        Key_309_F7_t,
        Key_309_F8_t,
        Key_309_F9_t,
        Key_309_F10_t,
        Key_309_F11_t,
        Key_309_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_309_Char_s;
        struct {
            char  field0;
        } Key_309_Ctrl_s;
    } stuff;
};

static struct Key_309 Key_309_Char (  char  field0 ) {
    return ( struct Key_309 ) { .tag = Key_309_Char_t, .stuff = { .Key_309_Char_s = { .field0 = field0 } } };
};

static struct Key_309 Key_309_Ctrl (  char  field0 ) {
    return ( struct Key_309 ) { .tag = Key_309_Ctrl_t, .stuff = { .Key_309_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_310 {
    enum MouseButton_108  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_308 {
    enum {
        InputEvent_308_Key_t,
        InputEvent_308_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_309  field0;
        } InputEvent_308_Key_s;
        struct {
            struct MouseEvent_310  field0;
        } InputEvent_308_Mouse_s;
    } stuff;
};

static struct InputEvent_308 InputEvent_308_Key (  struct Key_309  field0 ) {
    return ( struct InputEvent_308 ) { .tag = InputEvent_308_Key_t, .stuff = { .InputEvent_308_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_308 InputEvent_308_Mouse (  struct MouseEvent_310  field0 ) {
    return ( struct InputEvent_308 ) { .tag = InputEvent_308_Mouse_t, .stuff = { .InputEvent_308_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_307 {
    enum {
        Maybe_307_None_t,
        Maybe_307_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_308  field0;
        } Maybe_307_Just_s;
    } stuff;
};

static struct Maybe_307 Maybe_307_Just (  struct InputEvent_308  field0 ) {
    return ( struct Maybe_307 ) { .tag = Maybe_307_Just_t, .stuff = { .Maybe_307_Just_s = { .field0 = field0 } } };
};

struct funenv303 {
    struct Maybe_307  (*fun) (  struct env303  ,    struct Tui_305 *  );
    struct env303 env;
};

struct env302 {
    struct env303 envinst303;
    struct Tui_305 *  tui2927;
};

struct funenv302 {
    struct Maybe_307  (*fun) (  struct env302  );
    struct env302 env;
};

struct FunIter_301 {
    struct funenv302  f_fun;
    bool  f_finished;
};

static  struct FunIter_301   into_dash_iter300 (    struct FunIter_301  self833 ) {
    return (  self833 );
}

static  struct Maybe_307   next311 (    struct FunIter_301 *  self836 ) {
    if ( ( ( * (  self836 ) ) .f_finished ) ) {
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    struct funenv302  temp312 = ( ( * (  self836 ) ) .f_fun );
    struct Maybe_307  dref837 = ( temp312.fun ( temp312.env ) );
    if ( dref837.tag == Maybe_307_Just_t ) {
        return ( ( Maybe_307_Just ) ( ( dref837 .stuff .Maybe_307_Just_s .field0 ) ) );
    }
    else {
        if ( dref837.tag == Maybe_307_None_t ) {
            (*  self836 ) .f_finished = ( true );
            return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
        }
    }
}

static  struct FunIter_301   from_dash_function313 (   struct funenv302  fun841 ) {
    return ( (struct FunIter_301) { .f_fun = (  fun841 ) , .f_finished = ( false ) } );
}

struct Slice_316 {
    struct Cell_17 *  f_ptr;
    size_t  f_count;
};

struct env315 {
    struct Cell_17 (*  fun1593 )(    struct Cell_17  );
    ;
    ;
    ;
    struct Slice_316  s1591;
};

struct funenv315 {
    enum Unit_113  (*fun) (  struct env315  ,    int32_t  );
    struct env315 env;
};

static  enum Unit_113   for_dash_each314 (    struct Range_248  iterable844 ,   struct funenv315  fun846 ) {
    struct RangeIter_250  temp317 = ( (  into_dash_iter249 ) ( (  iterable844 ) ) );
    struct RangeIter_250 *  it847 = ( &temp317 );
    while ( ( true ) ) {
        struct Maybe_252  dref848 = ( (  next251 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_252_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_252_Just_t ) {
                struct funenv315  temp318 = (  fun846 );
                ( temp318.fun ( temp318.env ,  ( dref848 .stuff .Maybe_252_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct env320 {
    struct Cell_17 (*  fun1593 )(    struct Cell_17  );
    ;
    ;
    ;
    struct Slice_316  s1591;
};

struct funenv320 {
    enum Unit_113  (*fun) (  struct env320  ,    int32_t  );
    struct env320 env;
};

static  enum Unit_113   for_dash_each319 (    struct Range_248  iterable844 ,   struct funenv320  fun846 ) {
    struct RangeIter_250  temp321 = ( (  into_dash_iter249 ) ( (  iterable844 ) ) );
    struct RangeIter_250 *  it847 = ( &temp321 );
    while ( ( true ) ) {
        struct Maybe_252  dref848 = ( (  next251 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_252_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_252_Just_t ) {
                struct funenv320  temp322 = (  fun846 );
                ( temp322.fun ( temp322.env ,  ( dref848 .stuff .Maybe_252_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct env324 {
    struct Slice_101  new_dash_slice1728;
    ;
    ;
};

struct funenv324 {
    enum Unit_113  (*fun) (  struct env324  ,    struct Tuple2_271  );
    struct env324 env;
};

static  enum Unit_113   for_dash_each323 (    struct Zip_258  iterable844 ,   struct funenv324  fun846 ) {
    struct Zip_258  temp325 = ( (  into_dash_iter257 ) ( (  iterable844 ) ) );
    struct Zip_258 *  it847 = ( &temp325 );
    while ( ( true ) ) {
        struct Maybe_270  dref848 = ( (  next269 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_270_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_270_Just_t ) {
                struct funenv324  temp326 = (  fun846 );
                ( temp326.fun ( temp326.env ,  ( dref848 .stuff .Maybe_270_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct IntStrIter_329 {
    int64_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_328 {
    struct IntStrIter_329  f_left;
    struct AppendIter_266  f_right;
};

enum CAllocator_333 {
    CAllocator_333_CAllocator,
};

struct List_332 {
    enum CAllocator_333  f_al;
    struct Slice_101  f_elements;
    size_t  f_count;
};

struct StrBuilder_331 {
    struct List_332  f_chars;
};

struct env335 {
    ;
    size_t  growth_dash_factor1723;
    ;
    size_t  starting_dash_size1722;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct funenv335 {
    enum Unit_113  (*fun) (  struct env335  ,    struct List_332 *  );
    struct env335 env;
};

struct env334 {
    struct env335 envinst335;
    ;
    ;
    ;
    ;
    ;
};

struct funenv334 {
    enum Unit_113  (*fun) (  struct env334  ,    struct List_332 *  ,    char  );
    struct env334 env;
};

struct env330 {
    struct StrBuilder_331 *  builder2200;
    struct env334 envinst334;
};

struct funenv330 {
    enum Unit_113  (*fun) (  struct env330  ,    char  );
    struct env330 env;
};

static  struct StrConcatIter_328   into_dash_iter337 (    struct StrConcatIter_328  self1208 ) {
    return (  self1208 );
}

struct env342 {
    ;
    int64_t  base980;
};

struct funenv342 {
    int64_t  (*fun) (  struct env342  ,    int32_t  ,    int64_t  );
    struct env342 env;
};

static  int64_t   reduce341 (    struct Range_248  iterable863 ,    int64_t  base865 ,   struct funenv342  fun867 ) {
    int64_t  x868 = (  base865 );
    struct RangeIter_250  it869 = ( (  into_dash_iter249 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_252  dref870 = ( (  next251 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_252_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_252_Just_t ) {
                struct funenv342  temp343 = (  fun867 );
                x868 = ( temp343.fun ( temp343.env ,  ( dref870 .stuff .Maybe_252_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    int64_t  temp344;
    return (  temp344 );
}

static  int64_t   lam342 (   struct env342 env ,    int32_t  item984 ,    int64_t  x986 ) {
    return (  op_dash_mul45 ( (  x986 ) , ( env.base980 ) ) );
}

static  int64_t   pow340 (    int64_t  base980 ,    int32_t  p982 ) {
    struct env342 envinst342 = {
        .base980 =  base980 ,
    };
    return ( (  reduce341 ) ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  p982 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral2 ( 1 ) ) ,  ( (struct funenv342){ .fun = lam342, .env = envinst342 } ) ) );
}

static  struct Maybe_238   next339 (    struct IntStrIter_329 *  self1145 ) {
    if ( (  cmp41 ( ( ( * (  self1145 ) ) .f_len ) , (  from_dash_integral3 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    int64_t  trim_dash_down1146 = ( (  pow340 ) ( (  from_dash_integral2 ( 10 ) ) ,  (  op_dash_sub49 ( ( ( * (  self1145 ) ) .f_len ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
    int64_t  upper1147 = (  op_dash_div46 ( ( ( * (  self1145 ) ) .f_int ) , (  trim_dash_down1146 ) ) );
    int64_t  upper_dash_mask1148 = (  op_dash_mul45 ( (  op_dash_div46 ( (  upper1147 ) , (  from_dash_integral2 ( 10 ) ) ) ) , (  from_dash_integral2 ( 10 ) ) ) );
    int64_t  digit1149 = (  op_dash_sub44 ( (  upper1147 ) , (  upper_dash_mask1148 ) ) );
    (*  self1145 ) .f_len = (  op_dash_sub49 ( ( ( * (  self1145 ) ) .f_len ) , (  from_dash_integral3 ( 1 ) ) ) );
    char  digit_dash_char1150 = ( (  cast148 ) ( (  op_dash_add43 ( (  digit1149 ) , (  from_dash_integral2 ( 48 ) ) ) ) ) );
    return ( ( Maybe_238_Just ) ( (  digit_dash_char1150 ) ) );
}

static  struct Maybe_238   next338 (    struct StrConcatIter_328 *  self1211 ) {
    struct Maybe_238  dref1212 = ( (  next339 ) ( ( & ( ( * (  self1211 ) ) .f_left ) ) ) );
    if ( dref1212.tag == Maybe_238_Just_t ) {
        return ( ( Maybe_238_Just ) ( ( dref1212 .stuff .Maybe_238_Just_s .field0 ) ) );
    }
    else {
        if ( dref1212.tag == Maybe_238_None_t ) {
            return ( (  next284 ) ( ( & ( ( * (  self1211 ) ) .f_right ) ) ) );
        }
    }
}

static  enum Unit_113   for_dash_each327 (    struct StrConcatIter_328  iterable844 ,   struct funenv330  fun846 ) {
    struct StrConcatIter_328  temp336 = ( (  into_dash_iter337 ) ( (  iterable844 ) ) );
    struct StrConcatIter_328 *  it847 = ( &temp336 );
    while ( ( true ) ) {
        struct Maybe_238  dref848 = ( (  next338 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_238_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_238_Just_t ) {
                struct funenv330  temp345 = (  fun846 );
                ( temp345.fun ( temp345.env ,  ( dref848 .stuff .Maybe_238_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct env347 {
    ;
    struct Scanner_231 *  it956;
};

struct funenv347 {
    struct Maybe_238  (*fun) (  struct env347  ,    int32_t  );
    struct env347 env;
};

static  enum Unit_113   for_dash_each346 (    struct Range_248  iterable844 ,   struct funenv347  fun846 ) {
    struct RangeIter_250  temp348 = ( (  into_dash_iter249 ) ( (  iterable844 ) ) );
    struct RangeIter_250 *  it847 = ( &temp348 );
    while ( ( true ) ) {
        struct Maybe_252  dref848 = ( (  next251 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_252_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_252_Just_t ) {
                struct funenv347  temp349 = (  fun846 );
                ( temp349.fun ( temp349.env ,  ( dref848 .stuff .Maybe_252_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct env351 {
    struct Cell_17 (*  fun1593 )(    struct Cell_17  );
    ;
    ;
    ;
    struct Slice_316  s1591;
};

struct funenv351 {
    enum Unit_113  (*fun) (  struct env351  ,    int32_t  );
    struct env351 env;
};

static  enum Unit_113   for_dash_each350 (    struct Range_248  iterable844 ,   struct funenv351  fun846 ) {
    struct RangeIter_250  temp352 = ( (  into_dash_iter249 ) ( (  iterable844 ) ) );
    struct RangeIter_250 *  it847 = ( &temp352 );
    while ( ( true ) ) {
        struct Maybe_252  dref848 = ( (  next251 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_252_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_252_Just_t ) {
                struct funenv351  temp353 = (  fun846 );
                ( temp353.fun ( temp353.env ,  ( dref848 .stuff .Maybe_252_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct Screen_356 {
    enum CAllocator_333  f_al;
    struct Tui_305 *  f_tui;
    struct Slice_316  f_current;
    struct Slice_316  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_18  f_default_dash_fg;
    struct Color_18  f_default_dash_bg;
};

struct env355 {
    ;
    int32_t  y2867;
    struct Screen_356 *  screen2861;
    int32_t  x2870;
    ;
};

struct funenv355 {
    enum Unit_113  (*fun) (  struct env355  ,    struct Tuple2_271  );
    struct env355 env;
};

static  enum Unit_113   for_dash_each354 (    struct Zip_260  iterable844 ,   struct funenv355  fun846 ) {
    struct Zip_260  temp357 = ( (  into_dash_iter259 ) ( (  iterable844 ) ) );
    struct Zip_260 *  it847 = ( &temp357 );
    while ( ( true ) ) {
        struct Maybe_270  dref848 = ( (  next273 ) ( (  it847 ) ) );
        if ( dref848.tag == Maybe_270_None_t ) {
            return ( Unit_113_Unit );
        }
        else {
            if ( dref848.tag == Maybe_270_Just_t ) {
                struct funenv355  temp358 = (  fun846 );
                ( temp358.fun ( temp358.env ,  ( dref848 .stuff .Maybe_270_Just_s .field0 ) ) );
            }
        }
    }
    return ( Unit_113_Unit );
}

struct SmolArrayIter_360 {
    struct SmolArray_61  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_360   into_dash_iter361 (    struct SmolArray_61  self1872 ) {
    return ( (struct SmolArrayIter_360) { .f_backing = (  self1872 ) , .f_cur = (  from_dash_integral8 ( 0 ) ) } );
}

struct StrConcat_369 {
    const char*  field0;
    size_t  field1;
};

static struct StrConcat_369 StrConcat_369_StrConcat (  const char*  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_369 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_368 {
    struct StrConcat_369  field0;
    const char*  field1;
};

static struct StrConcat_368 StrConcat_368_StrConcat (  struct StrConcat_369  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_368 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_367 {
    struct StrConcat_368  field0;
    int32_t  field1;
};

static struct StrConcat_367 StrConcat_367_StrConcat (  struct StrConcat_368  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_366 {
    struct StrConcat_367  field0;
    char  field1;
};

static struct StrConcat_366 StrConcat_366_StrConcat (  struct StrConcat_367  field0 ,  char  field1 ) {
    return ( struct StrConcat_366 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_372 {
    const char*  field0;
    struct StrConcat_366  field1;
};

static struct StrConcat_372 StrConcat_372_StrConcat (  const char*  field0 ,  struct StrConcat_366  field1 ) {
    return ( struct StrConcat_372 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_371 {
    struct StrConcat_372  field0;
    char  field1;
};

static struct StrConcat_371 StrConcat_371_StrConcat (  struct StrConcat_372  field0 ,  char  field1 ) {
    return ( struct StrConcat_371 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str374 (    const char*  self1124 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1124 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str379 (    size_t  self1181 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1181 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str378 (    struct StrConcat_369  self1220 ) {
    struct StrConcat_369  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str379 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str377 (    struct StrConcat_368  self1220 ) {
    struct StrConcat_368  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str378 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str374 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str380 (    int32_t  self1157 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1157 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str376 (    struct StrConcat_367  self1220 ) {
    struct StrConcat_367  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str377 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str380 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str381 (    char  self1130 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1130 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str375 (    struct StrConcat_366  self1220 ) {
    struct StrConcat_366  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str376 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str373 (    struct StrConcat_372  self1220 ) {
    struct StrConcat_372  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str375 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str370 (    struct StrConcat_371  self1220 ) {
    struct StrConcat_371  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str373 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic365 (    struct StrConcat_366  errmsg1397 ) {
    ( (  print_dash_str370 ) ( ( ( StrConcat_371_StrConcat ) ( ( ( StrConcat_372_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1397 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  uint32_t *   get_dash_ptr364 (    struct Array_62 *  arr1834 ,    size_t  i1837 ) {
    if ( ( (  cmp40 ( (  i1837 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1837 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic365 ) ( ( ( StrConcat_366_StrConcat ) ( ( ( StrConcat_367_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to array at index " ) ,  (  i1837 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1838 = ( ( (  cast_dash_ptr160 ) ( (  arr1834 ) ) ) );
    return ( (  offset_dash_ptr117 ) ( (  p1838 ) ,  ( (int64_t ) (  i1837 ) ) ) );
}

static  uint32_t   get363 (    struct Array_62 *  arr1841 ,    size_t  i1844 ) {
    return ( * ( (  get_dash_ptr364 ) ( (  arr1841 ) ,  (  i1844 ) ) ) );
}

static  struct Maybe_243   next362 (    struct SmolArrayIter_360 *  self1879 ) {
    if ( (  cmp40 ( ( ( * (  self1879 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    uint32_t  e1881 = ( (  get363 ) ( ( & ( ( ( * (  self1879 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1879 ) ) .f_cur ) ) );
    (*  self1879 ) .f_cur = (  op_dash_add57 ( ( ( * (  self1879 ) ) .f_cur ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_243_Just ) ( (  e1881 ) ) );
}

static  uint32_t   reduce359 (    struct SmolArray_61  iterable863 ,    uint32_t  base865 ,    uint32_t (*  fun867 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x868 = (  base865 );
    struct SmolArrayIter_360  it869 = ( (  into_dash_iter361 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_243  dref870 = ( (  next362 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_243_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_243_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_243_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    uint32_t  temp382;
    return (  temp382 );
}

struct SmolArrayIter_384 {
    struct SmolArray_64  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_384   into_dash_iter385 (    struct SmolArray_64  self1872 ) {
    return ( (struct SmolArrayIter_384) { .f_backing = (  self1872 ) , .f_cur = (  from_dash_integral8 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr388 (    struct Array_65 *  arr1834 ,    size_t  i1837 ) {
    if ( ( (  cmp40 ( (  i1837 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1837 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic365 ) ( ( ( StrConcat_366_StrConcat ) ( ( ( StrConcat_367_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to array at index " ) ,  (  i1837 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1838 = ( ( (  cast_dash_ptr161 ) ( (  arr1834 ) ) ) );
    return ( (  offset_dash_ptr117 ) ( (  p1838 ) ,  ( (int64_t ) (  i1837 ) ) ) );
}

static  uint32_t   get387 (    struct Array_65 *  arr1841 ,    size_t  i1844 ) {
    return ( * ( (  get_dash_ptr388 ) ( (  arr1841 ) ,  (  i1844 ) ) ) );
}

static  struct Maybe_243   next386 (    struct SmolArrayIter_384 *  self1879 ) {
    if ( (  cmp40 ( ( ( * (  self1879 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    uint32_t  e1881 = ( (  get387 ) ( ( & ( ( ( * (  self1879 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1879 ) ) .f_cur ) ) );
    (*  self1879 ) .f_cur = (  op_dash_add57 ( ( ( * (  self1879 ) ) .f_cur ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_243_Just ) ( (  e1881 ) ) );
}

static  uint32_t   reduce383 (    struct SmolArray_64  iterable863 ,    uint32_t  base865 ,    uint32_t (*  fun867 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x868 = (  base865 );
    struct SmolArrayIter_384  it869 = ( (  into_dash_iter385 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_243  dref870 = ( (  next386 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_243_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_243_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_243_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    uint32_t  temp389;
    return (  temp389 );
}

struct SmolArrayIter_391 {
    struct SmolArray_67  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_391   into_dash_iter392 (    struct SmolArray_67  self1872 ) {
    return ( (struct SmolArrayIter_391) { .f_backing = (  self1872 ) , .f_cur = (  from_dash_integral8 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr395 (    struct Array_68 *  arr1834 ,    size_t  i1837 ) {
    if ( ( (  cmp40 ( (  i1837 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1837 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic365 ) ( ( ( StrConcat_366_StrConcat ) ( ( ( StrConcat_367_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to array at index " ) ,  (  i1837 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1838 = ( ( (  cast_dash_ptr162 ) ( (  arr1834 ) ) ) );
    return ( (  offset_dash_ptr117 ) ( (  p1838 ) ,  ( (int64_t ) (  i1837 ) ) ) );
}

static  uint32_t   get394 (    struct Array_68 *  arr1841 ,    size_t  i1844 ) {
    return ( * ( (  get_dash_ptr395 ) ( (  arr1841 ) ,  (  i1844 ) ) ) );
}

static  struct Maybe_243   next393 (    struct SmolArrayIter_391 *  self1879 ) {
    if ( (  cmp40 ( ( ( * (  self1879 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_243) { .tag = Maybe_243_None_t } );
    }
    uint32_t  e1881 = ( (  get394 ) ( ( & ( ( ( * (  self1879 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1879 ) ) .f_cur ) ) );
    (*  self1879 ) .f_cur = (  op_dash_add57 ( ( ( * (  self1879 ) ) .f_cur ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_243_Just ) ( (  e1881 ) ) );
}

static  uint32_t   reduce390 (    struct SmolArray_67  iterable863 ,    uint32_t  base865 ,    uint32_t (*  fun867 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x868 = (  base865 );
    struct SmolArrayIter_391  it869 = ( (  into_dash_iter392 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_243  dref870 = ( (  next393 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_243_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_243_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_243_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    uint32_t  temp396;
    return (  temp396 );
}

struct Maybe_398 {
    enum {
        Maybe_398_None_t,
        Maybe_398_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_398_Just_s;
    } stuff;
};

static struct Maybe_398 Maybe_398_Just (  int64_t  field0 ) {
    return ( struct Maybe_398 ) { .tag = Maybe_398_Just_t, .stuff = { .Maybe_398_Just_s = { .field0 = field0 } } };
};

static  struct SliceIter_232   into_dash_iter399 (    struct SliceIter_232  self1511 ) {
    return (  self1511 );
}

static  struct Maybe_398   reduce397 (    struct SliceIter_232  iterable863 ,    struct Maybe_398  base865 ,    struct Maybe_398 (*  fun867 )(    char  ,    struct Maybe_398  ) ) {
    struct Maybe_398  x868 = (  base865 );
    struct SliceIter_232  it869 = ( (  into_dash_iter399 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref870 = ( (  next272 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_238_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_238_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_238_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    struct Maybe_398  temp400;
    return (  temp400 );
}

static  struct Maybe_398   reduce401 (    struct ConstStrIter_241  iterable863 ,    struct Maybe_398  base865 ,    struct Maybe_398 (*  fun867 )(    char  ,    struct Maybe_398  ) ) {
    struct Maybe_398  x868 = (  base865 );
    struct ConstStrIter_241  it869 = ( (  into_dash_iter291 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref870 = ( (  next244 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_238_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_238_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_238_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    struct Maybe_398  temp402;
    return (  temp402 );
}

static  struct Maybe_398   reduce403 (    struct TakeWhile_293  iterable863 ,    struct Maybe_398  base865 ,    struct Maybe_398 (*  fun867 )(    char  ,    struct Maybe_398  ) ) {
    struct Maybe_398  x868 = (  base865 );
    struct TakeWhile_293  it869 = ( (  into_dash_iter292 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref870 = ( (  next294 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_238_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_238_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_238_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    struct Maybe_398  temp404;
    return (  temp404 );
}

static  size_t   reduce405 (    struct TakeWhile_293  iterable863 ,    size_t  base865 ,    size_t (*  fun867 )(    char  ,    size_t  ) ) {
    size_t  x868 = (  base865 );
    struct TakeWhile_293  it869 = ( (  into_dash_iter292 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref870 = ( (  next294 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_238_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_238_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_238_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    size_t  temp406;
    return (  temp406 );
}

static  uint32_t   reduce407 (    struct Map_240  iterable863 ,    uint32_t  base865 ,    uint32_t (*  fun867 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x868 = (  base865 );
    struct Map_240  it869 = ( (  into_dash_iter239 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_243  dref870 = ( (  next242 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_243_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_243_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_243_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    uint32_t  temp408;
    return (  temp408 );
}

struct StrConcat_413 {
    struct PadZeroes_265  field0;
    char  field1;
};

static struct StrConcat_413 StrConcat_413_StrConcat (  struct PadZeroes_265  field0 ,  char  field1 ) {
    return ( struct StrConcat_413 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_412 {
    struct StrConcat_413  field0;
    struct PadZeroes_265  field1;
};

static struct StrConcat_412 StrConcat_412_StrConcat (  struct StrConcat_413  field0 ,  struct PadZeroes_265  field1 ) {
    return ( struct StrConcat_412 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_411 {
    struct StrConcat_412  field0;
    char  field1;
};

static struct StrConcat_411 StrConcat_411_StrConcat (  struct StrConcat_412  field0 ,  char  field1 ) {
    return ( struct StrConcat_411 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_410 {
    struct StrConcat_411  field0;
    struct PadZeroes_265  field1;
};

static struct StrConcat_410 StrConcat_410_StrConcat (  struct StrConcat_411  field0 ,  struct PadZeroes_265  field1 ) {
    return ( struct StrConcat_410 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct PadZeroes_265   chars421 (    struct PadZeroes_265  self1311 ) {
    return (  self1311 );
}

static  struct AppendIter_266   chars422 (    char  self1133 ) {
    return ( (  single299 ) ( (  self1133 ) ) );
}

static  struct StrConcatIter_264   into_dash_iter420 (    struct StrConcat_413  dref1215 ) {
    return ( (struct StrConcatIter_264) { .f_left = ( (  chars421 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars422 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_264   chars419 (    struct StrConcat_413  self1226 ) {
    return ( (  into_dash_iter420 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_263   into_dash_iter418 (    struct StrConcat_412  dref1215 ) {
    return ( (struct StrConcatIter_263) { .f_left = ( (  chars419 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_263   chars417 (    struct StrConcat_412  self1226 ) {
    return ( (  into_dash_iter418 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_262   into_dash_iter416 (    struct StrConcat_411  dref1215 ) {
    return ( (struct StrConcatIter_262) { .f_left = ( (  chars417 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars422 ) ( ( dref1215 .field1 ) ) ) } );
}

static  struct StrConcatIter_262   chars415 (    struct StrConcat_411  self1226 ) {
    return ( (  into_dash_iter416 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_261   into_dash_iter414 (    struct StrConcat_410  dref1215 ) {
    return ( (struct StrConcatIter_261) { .f_left = ( (  chars415 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars421 ) ( ( dref1215 .field1 ) ) ) } );
}

static  size_t   reduce409 (    struct StrConcat_410  iterable863 ,    size_t  base865 ,    size_t (*  fun867 )(    char  ,    size_t  ) ) {
    size_t  x868 = (  base865 );
    struct StrConcatIter_261  it869 = ( (  into_dash_iter414 ) ( (  iterable863 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref870 = ( (  next274 ) ( ( & (  it869 ) ) ) );
        if ( dref870.tag == Maybe_238_None_t ) {
            return (  x868 );
        }
        else {
            if ( dref870.tag == Maybe_238_Just_t ) {
                x868 = ( (  fun867 ) ( ( dref870 .stuff .Maybe_238_Just_s .field0 ) ,  (  x868 ) ) );
            }
        }
    }
    size_t  temp423;
    return (  temp423 );
}

static  size_t   lam425 (    char  dref875 ,    size_t  x877 ) {
    return (  op_dash_add57 ( (  x877 ) , (  from_dash_integral8 ( 1 ) ) ) );
}

static  size_t   count424 (    struct TakeWhile_293  it874 ) {
    return ( (  reduce405 ) ( (  it874 ) ,  (  from_dash_integral8 ( 0 ) ) ,  (  lam425 ) ) );
}

static  size_t   lam427 (    char  dref875 ,    size_t  x877 ) {
    return (  op_dash_add57 ( (  x877 ) , (  from_dash_integral8 ( 1 ) ) ) );
}

static  size_t   count426 (    struct StrConcat_410  it874 ) {
    return ( (  reduce409 ) ( (  it874 ) ,  (  from_dash_integral8 ( 0 ) ) ,  (  lam427 ) ) );
}

struct Maybe_429 {
    enum {
        Maybe_429_None_t,
        Maybe_429_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_100  field0;
        } Maybe_429_Just_s;
    } stuff;
};

static struct Maybe_429 Maybe_429_Just (  struct DynStr_100  field0 ) {
    return ( struct Maybe_429 ) { .tag = Maybe_429_Just_t, .stuff = { .Maybe_429_Just_s = { .field0 = field0 } } };
};

struct LineIter_430 {
    struct DynStr_100  f_og;
    size_t  f_last;
};

struct StrConcat_435 {
    struct StrConcat_368  field0;
    size_t  field1;
};

static struct StrConcat_435 StrConcat_435_StrConcat (  struct StrConcat_368  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_435 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_434 {
    struct StrConcat_435  field0;
    char  field1;
};

static struct StrConcat_434 StrConcat_434_StrConcat (  struct StrConcat_435  field0 ,  char  field1 ) {
    return ( struct StrConcat_434 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_439 {
    const char*  field0;
    struct StrConcat_434  field1;
};

static struct StrConcat_439 StrConcat_439_StrConcat (  const char*  field0 ,  struct StrConcat_434  field1 ) {
    return ( struct StrConcat_439 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_438 {
    struct StrConcat_439  field0;
    char  field1;
};

static struct StrConcat_438 StrConcat_438_StrConcat (  struct StrConcat_439  field0 ,  char  field1 ) {
    return ( struct StrConcat_438 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str442 (    struct StrConcat_435  self1220 ) {
    struct StrConcat_435  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str377 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str379 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str441 (    struct StrConcat_434  self1220 ) {
    struct StrConcat_434  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str442 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str440 (    struct StrConcat_439  self1220 ) {
    struct StrConcat_439  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str441 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str437 (    struct StrConcat_438  self1220 ) {
    struct StrConcat_438  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str440 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic436 (    struct StrConcat_434  errmsg1397 ) {
    ( (  print_dash_str437 ) ( ( ( StrConcat_438_StrConcat ) ( ( ( StrConcat_439_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1397 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  char   or_dash_fail433 (    struct Maybe_238  x1410 ,    struct StrConcat_434  errmsg1412 ) {
    struct Maybe_238  dref1413 = (  x1410 );
    if ( dref1413.tag == Maybe_238_None_t ) {
        ( (  panic436 ) ( (  errmsg1412 ) ) );
        return ( (  undefined97 ) ( ) );
    }
    else {
        if ( dref1413.tag == Maybe_238_Just_t ) {
            return ( dref1413 .stuff .Maybe_238_Just_s .field0 );
        }
    }
}

static  struct Maybe_238   try_dash_get443 (    struct Slice_101  slice1449 ,    size_t  i1451 ) {
    if ( ( (  cmp40 ( (  i1451 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1451 ) , ( (  slice1449 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    char *  elem_dash_ptr1452 = ( (  offset_dash_ptr123 ) ( ( (  slice1449 ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  i1451 ) ) ) ) );
    return ( ( Maybe_238_Just ) ( ( * (  elem_dash_ptr1452 ) ) ) );
}

static  char   get432 (    struct Slice_101  slice1455 ,    size_t  i1457 ) {
    return ( (  or_dash_fail433 ) ( ( (  try_dash_get443 ) ( (  slice1455 ) ,  (  i1457 ) ) ) ,  ( ( StrConcat_434_StrConcat ) ( ( ( StrConcat_435_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1457 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1455 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar444 (  ) {
    return ( (  zeroed188 ) ( ) );
}

static  char   newline445 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  size_t   min448 (    size_t  l1006 ,    size_t  r1008 ) {
    if ( (  cmp40 ( (  l1006 ) , (  r1008 ) ) == 0 ) ) {
        return (  l1006 );
    } else {
        return (  r1008 );
    }
}

static  struct Slice_101   subslice447 (    struct Slice_101  slice1468 ,    size_t  from1470 ,    size_t  to1472 ) {
    char *  begin_dash_ptr1473 = ( (  offset_dash_ptr123 ) ( ( (  slice1468 ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  from1470 ) ) ) ) );
    if ( ( (  cmp40 ( (  from1470 ) , (  to1472 ) ) != 0 ) || (  cmp40 ( (  from1470 ) , ( (  slice1468 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_101) { .f_ptr = (  begin_dash_ptr1473 ) , .f_count = (  from_dash_integral8 ( 0 ) ) } );
    }
    size_t  count1474 = (  op_dash_sub58 ( ( (  min448 ) ( (  to1472 ) ,  ( (  slice1468 ) .f_count ) ) ) , (  from1470 ) ) );
    return ( (struct Slice_101) { .f_ptr = (  begin_dash_ptr1473 ) , .f_count = (  count1474 ) } );
}

static  struct DynStr_100   substr446 (    struct DynStr_100  s1670 ,    size_t  from1672 ,    size_t  to1674 ) {
    return ( (struct DynStr_100) { .f_contents = ( (  subslice447 ) ( ( (  s1670 ) .f_contents ) ,  (  from1672 ) ,  (  to1674 ) ) ) } );
}

static  struct Maybe_429   next431 (    struct LineIter_430 *  self1942 ) {
    if ( ( (  cmp40 ( ( ( * (  self1942 ) ) .f_last ) , ( ( ( ( * (  self1942 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq15 ( ( (  get432 ) ( ( ( ( * (  self1942 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1942 ) ) .f_last ) ) ) , ( (  nullchar444 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_429) { .tag = Maybe_429_None_t } );
    }
    size_t  i1943 = ( ( * (  self1942 ) ) .f_last );
    while ( ( (  cmp40 ( (  i1943 ) , ( ( ( ( * (  self1942 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq15 ( ( (  get432 ) ( ( ( ( * (  self1942 ) ) .f_og ) .f_contents ) ,  (  i1943 ) ) ) , ( (  newline445 ) ( ) ) ) ) ) ) {
        i1943 = (  op_dash_add57 ( (  i1943 ) , (  from_dash_integral8 ( 1 ) ) ) );
    }
    struct DynStr_100  line1944 = ( (  substr446 ) ( ( ( * (  self1942 ) ) .f_og ) ,  ( ( * (  self1942 ) ) .f_last ) ,  (  i1943 ) ) );
    if ( (  cmp40 ( (  i1943 ) , ( ( ( ( * (  self1942 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1943 = (  op_dash_add57 ( (  i1943 ) , (  from_dash_integral8 ( 1 ) ) ) );
    }
    (*  self1942 ) .f_last = (  i1943 );
    return ( ( Maybe_429_Just ) ( (  line1944 ) ) );
}

static  struct LineIter_430   into_dash_iter450 (    struct LineIter_430  self1939 ) {
    return (  self1939 );
}

static  struct Maybe_429   head428 (    struct LineIter_430  it912 ) {
    struct LineIter_430  temp449 = ( (  into_dash_iter450 ) ( (  it912 ) ) );
    return ( (  next431 ) ( ( &temp449 ) ) );
}

static  struct Maybe_238   head451 (    struct SliceIter_232  it912 ) {
    struct SliceIter_232  temp452 = ( (  into_dash_iter399 ) ( (  it912 ) ) );
    return ( (  next272 ) ( ( &temp452 ) ) );
}

static  struct Maybe_238   head453 (    struct ConstStrIter_241  it912 ) {
    struct ConstStrIter_241  temp454 = ( (  into_dash_iter291 ) ( (  it912 ) ) );
    return ( (  next244 ) ( ( &temp454 ) ) );
}

static  struct Maybe_238   head455 (    struct TakeWhile_293  it912 ) {
    struct TakeWhile_293  temp456 = ( (  into_dash_iter292 ) ( (  it912 ) ) );
    return ( (  next294 ) ( ( &temp456 ) ) );
}

static  bool   null457 (    struct TakeWhile_293  it921 ) {
    struct Maybe_238  dref922 = ( (  head455 ) ( (  it921 ) ) );
    if ( dref922.tag == Maybe_238_None_t ) {
        return ( true );
    }
    else {
        if ( true ) {
            return ( false );
        }
    }
}

static  struct Maybe_238   lam347 (   struct env347 env ,    int32_t  dref959 ) {
    return ( (  next295 ) ( ( env.it956 ) ) );
}

static  enum Unit_113   drop_prime_458 (    struct Scanner_231 *  it956 ,    size_t  n958 ) {
    struct env347 envinst347 = {
        .it956 =  it956 ,
    };
    ( (  for_dash_each346 ) ( ( (  to247 ) ( (  from_dash_integral3 ( 1 ) ) ,  ( (  size_dash_i32224 ) ( (  n958 ) ) ) ) ) ,  ( (struct funenv347){ .fun = lam347, .env = envinst347 } ) ) );
    return ( Unit_113_Unit );
}

struct Tuple2_460 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_460 Tuple2_460_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_460 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst459 (    struct Tuple2_460  dref1020 ) {
    return ( dref1020 .field0 );
}

static  uint32_t   snd461 (    struct Tuple2_460  dref1023 ) {
    return ( dref1023 .field1 );
}

static  int64_t   mod462 (    int64_t  l999 ,    int64_t  d1001 ) {
    int64_t  r1002 = (  op_dash_div46 ( (  l999 ) , (  d1001 ) ) );
    int64_t  m1003 = (  op_dash_sub44 ( (  l999 ) , (  op_dash_mul45 ( (  r1002 ) , (  d1001 ) ) ) ) );
    if ( (  cmp38 ( (  m1003 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add43 ( (  d1001 ) , (  m1003 ) ) );
    } else {
        return (  m1003 );
    }
}

static  int32_t   min463 (    int32_t  l1006 ,    int32_t  r1008 ) {
    if ( (  cmp41 ( (  l1006 ) , (  r1008 ) ) == 0 ) ) {
        return (  l1006 );
    } else {
        return (  r1008 );
    }
}

static  uint8_t   max464 (    uint8_t  l1071 ,    uint8_t  r1073 ) {
    if ( (  cmp42 ( (  l1071 ) , (  r1073 ) ) == 2 ) ) {
        return (  l1071 );
    } else {
        return (  r1073 );
    }
}

static  struct ConstStrIter_241   chars465 (    const char*  self1127 ) {
    return ( (  into_dash_iter246 ) ( (  self1127 ) ) );
}

static  int32_t   count_dash_digits466 (    int64_t  self1153 ) {
    if ( (  eq9 ( (  self1153 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
        return (  from_dash_integral3 ( 1 ) );
    }
    int32_t  digits1154 = (  from_dash_integral3 ( 0 ) );
    while ( (  cmp38 ( (  self1153 ) , (  from_dash_integral2 ( 0 ) ) ) == 2 ) ) {
        self1153 = (  op_dash_div46 ( (  self1153 ) , (  from_dash_integral2 ( 10 ) ) ) );
        digits1154 = (  op_dash_add48 ( (  digits1154 ) , (  from_dash_integral3 ( 1 ) ) ) );
    }
    return (  digits1154 );
}

static  int32_t   count_dash_digits467 (    int32_t  self1153 ) {
    if ( (  eq10 ( (  self1153 ) , (  from_dash_integral3 ( 0 ) ) ) ) ) {
        return (  from_dash_integral3 ( 1 ) );
    }
    int32_t  digits1154 = (  from_dash_integral3 ( 0 ) );
    while ( (  cmp41 ( (  self1153 ) , (  from_dash_integral3 ( 0 ) ) ) == 2 ) ) {
        self1153 = (  op_dash_div51 ( (  self1153 ) , (  from_dash_integral3 ( 10 ) ) ) );
        digits1154 = (  op_dash_add48 ( (  digits1154 ) , (  from_dash_integral3 ( 1 ) ) ) );
    }
    return (  digits1154 );
}

static  enum Unit_113   print_dash_str468 (    uint32_t  self1163 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1163 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str469 (    uint8_t  self1169 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32229 ) ( (  self1169 ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str470 (    int64_t  self1175 ) {
    ( ( printf ) ( ( "%ld" ) ,  (  self1175 ) ) );
    return ( Unit_113_Unit );
}

static  struct IntStrIter_329   chars471 (    int64_t  self1178 ) {
    return ( (struct IntStrIter_329) { .f_int = (  self1178 ) , .f_len = ( (  count_dash_digits466 ) ( (  self1178 ) ) ) } );
}

struct StrConcat_473 {
    int64_t  field0;
    char  field1;
};

static struct StrConcat_473 StrConcat_473_StrConcat (  int64_t  field0 ,  char  field1 ) {
    return ( struct StrConcat_473 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_328   into_dash_iter472 (    struct StrConcat_473  dref1215 ) {
    return ( (struct StrConcatIter_328) { .f_left = ( (  chars471 ) ( ( dref1215 .field0 ) ) ) , .f_right = ( (  chars422 ) ( ( dref1215 .field1 ) ) ) } );
}

struct StrConcat_476 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_476 StrConcat_476_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_476 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_475 {
    struct StrConcat_476  field0;
    char  field1;
};

static struct StrConcat_475 StrConcat_475_StrConcat (  struct StrConcat_476  field0 ,  char  field1 ) {
    return ( struct StrConcat_475 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str477 (    struct StrConcat_476  self1220 ) {
    struct StrConcat_476  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str374 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str474 (    struct StrConcat_475  self1220 ) {
    struct StrConcat_475  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str477 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_480 {
    const char*  field0;
    struct StrConcat_476  field1;
};

static struct StrConcat_480 StrConcat_480_StrConcat (  const char*  field0 ,  struct StrConcat_476  field1 ) {
    return ( struct StrConcat_480 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_479 {
    struct StrConcat_480  field0;
    char  field1;
};

static struct StrConcat_479 StrConcat_479_StrConcat (  struct StrConcat_480  field0 ,  char  field1 ) {
    return ( struct StrConcat_479 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str481 (    struct StrConcat_480  self1220 ) {
    struct StrConcat_480  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str477 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str478 (    struct StrConcat_479  self1220 ) {
    struct StrConcat_479  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str481 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_483 {
    const char*  field0;
    int64_t  field1;
};

static struct StrConcat_483 StrConcat_483_StrConcat (  const char*  field0 ,  int64_t  field1 ) {
    return ( struct StrConcat_483 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str482 (    struct StrConcat_483  self1220 ) {
    struct StrConcat_483  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str470 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_486 {
    const char*  field0;
    struct StrConcat_483  field1;
};

static struct StrConcat_486 StrConcat_486_StrConcat (  const char*  field0 ,  struct StrConcat_483  field1 ) {
    return ( struct StrConcat_486 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_485 {
    struct StrConcat_486  field0;
    char  field1;
};

static struct StrConcat_485 StrConcat_485_StrConcat (  struct StrConcat_486  field0 ,  char  field1 ) {
    return ( struct StrConcat_485 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str487 (    struct StrConcat_486  self1220 ) {
    struct StrConcat_486  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str482 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str484 (    struct StrConcat_485  self1220 ) {
    struct StrConcat_485  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str487 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_490 {
    char  field0;
    char  field1;
};

static struct StrConcat_490 StrConcat_490_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_490 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_489 {
    struct StrConcat_490  field0;
    const char*  field1;
};

static struct StrConcat_489 StrConcat_489_StrConcat (  struct StrConcat_490  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_489 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str491 (    struct StrConcat_490  self1220 ) {
    struct StrConcat_490  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str381 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str488 (    struct StrConcat_489  self1220 ) {
    struct StrConcat_489  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str491 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str374 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_494 {
    const char*  field0;
    struct StrConcat_489  field1;
};

static struct StrConcat_494 StrConcat_494_StrConcat (  const char*  field0 ,  struct StrConcat_489  field1 ) {
    return ( struct StrConcat_494 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_493 {
    struct StrConcat_494  field0;
    char  field1;
};

static struct StrConcat_493 StrConcat_493_StrConcat (  struct StrConcat_494  field0 ,  char  field1 ) {
    return ( struct StrConcat_493 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str495 (    struct StrConcat_494  self1220 ) {
    struct StrConcat_494  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str488 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str492 (    struct StrConcat_493  self1220 ) {
    struct StrConcat_493  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str495 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_500 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_500 StrConcat_500_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_500 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_499 {
    struct StrConcat_500  field0;
    char  field1;
};

static struct StrConcat_499 StrConcat_499_StrConcat (  struct StrConcat_500  field0 ,  char  field1 ) {
    return ( struct StrConcat_499 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_498 {
    struct StrConcat_499  field0;
    uint32_t  field1;
};

static struct StrConcat_498 StrConcat_498_StrConcat (  struct StrConcat_499  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_498 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_497 {
    struct StrConcat_498  field0;
    char  field1;
};

static struct StrConcat_497 StrConcat_497_StrConcat (  struct StrConcat_498  field0 ,  char  field1 ) {
    return ( struct StrConcat_497 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str503 (    struct StrConcat_500  self1220 ) {
    struct StrConcat_500  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str468 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str502 (    struct StrConcat_499  self1220 ) {
    struct StrConcat_499  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str503 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str501 (    struct StrConcat_498  self1220 ) {
    struct StrConcat_498  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str502 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str468 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str496 (    struct StrConcat_497  self1220 ) {
    struct StrConcat_497  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str501 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_506 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_506 StrConcat_506_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_506 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_505 {
    struct StrConcat_506  field0;
    char  field1;
};

static struct StrConcat_505 StrConcat_505_StrConcat (  struct StrConcat_506  field0 ,  char  field1 ) {
    return ( struct StrConcat_505 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str507 (    struct StrConcat_506  self1220 ) {
    struct StrConcat_506  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str374 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str469 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str504 (    struct StrConcat_505  self1220 ) {
    struct StrConcat_505  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str507 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_512 {
    struct StrConcat_505  field0;
    uint8_t  field1;
};

static struct StrConcat_512 StrConcat_512_StrConcat (  struct StrConcat_505  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_512 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_511 {
    struct StrConcat_512  field0;
    char  field1;
};

static struct StrConcat_511 StrConcat_511_StrConcat (  struct StrConcat_512  field0 ,  char  field1 ) {
    return ( struct StrConcat_511 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_510 {
    struct StrConcat_511  field0;
    uint8_t  field1;
};

static struct StrConcat_510 StrConcat_510_StrConcat (  struct StrConcat_511  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_510 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_509 {
    struct StrConcat_510  field0;
    char  field1;
};

static struct StrConcat_509 StrConcat_509_StrConcat (  struct StrConcat_510  field0 ,  char  field1 ) {
    return ( struct StrConcat_509 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str515 (    struct StrConcat_512  self1220 ) {
    struct StrConcat_512  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str504 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str469 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str514 (    struct StrConcat_511  self1220 ) {
    struct StrConcat_511  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str515 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str513 (    struct StrConcat_510  self1220 ) {
    struct StrConcat_510  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str514 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str469 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str508 (    struct StrConcat_509  self1220 ) {
    struct StrConcat_509  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str513 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str516 (    struct StrConcat_473  self1220 ) {
    struct StrConcat_473  dref1221 = (  self1220 );
    if ( true ) {
        ( (  print_dash_str470 ) ( ( dref1221 .field0 ) ) );
        ( (  print_dash_str381 ) ( ( dref1221 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  struct StrConcatIter_328   chars517 (    struct StrConcat_473  self1226 ) {
    return ( (  into_dash_iter472 ) ( (  self1226 ) ) );
}

static  struct StrConcatIter_261   chars518 (    struct StrConcat_410  self1226 ) {
    return ( (  into_dash_iter414 ) ( (  self1226 ) ) );
}

static  struct PadZeroes_265   pad_dash_zeroes519 (    int32_t  x1314 ,    uint8_t  num_dash_zeroes1316 ,    bool  trim_dash_larger1318 ) {
    return ( (struct PadZeroes_265) { .f_x = (  x1314 ) , .f_len = ( ( ! (  trim_dash_larger1318 ) ) ? (  num_dash_zeroes1316 ) : ( (  max464 ) ( (  num_dash_zeroes1316 ) ,  ( (  i32_dash_u8217 ) ( ( (  count_dash_digits467 ) ( (  x1314 ) ) ) ) ) ) ) ) } );
}

static  struct TakeWhile_293   chars520 (    struct TakeWhile_293  self1336 ) {
    return (  self1336 );
}

static  int32_t   char_dash_i32521 (    char  c1363 ) {
    return ( (  cast_dash_on_dash_zeroed202 ) ( (  c1363 ) ) );
}

static  uint8_t   char_dash_u8522 (    char  c1366 ) {
    return ( (  cast152 ) ( (  c1366 ) ) );
}

static  char   i32_dash_char523 (    int32_t  i1369 ) {
    return ( (  cast150 ) ( (  i1369 ) ) );
}

static  bool   eq524 (    const char*  l1382 ,    const char*  r1384 ) {
    return (  eq10 ( ( ( strcmp ) ( (  l1382 ) ,  (  r1384 ) ) ) , (  from_dash_integral3 ( 0 ) ) ) );
}

static  enum Ordering_39   cmp525 (    char  l1387 ,    char  r1389 ) {
    return ( (  cmp41 ) ( ( (  char_dash_i32521 ) ( (  l1387 ) ) ) ,  ( (  char_dash_i32521 ) ( (  r1389 ) ) ) ) );
}

static  bool   unreachable526 (  ) {
    ( (  print_dash_str374 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( (  undefined105 ) ( ) );
}

static  enum Unit_113   unreachable527 (  ) {
    ( (  print_dash_str374 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( (  undefined112 ) ( ) );
}

static  enum Unit_113   panic528 (    const char*  errmsg1397 ) {
    ( (  print_dash_str474 ) ( ( ( StrConcat_475_StrConcat ) ( ( ( StrConcat_476_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1397 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic529 (    struct StrConcat_476  errmsg1397 ) {
    ( (  print_dash_str478 ) ( ( ( StrConcat_479_StrConcat ) ( ( ( StrConcat_480_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1397 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic530 (    struct StrConcat_489  errmsg1397 ) {
    ( (  print_dash_str492 ) ( ( ( StrConcat_493_StrConcat ) ( ( ( StrConcat_494_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1397 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  enum MouseButton_108   panic_prime_531 (    struct StrConcat_483  errmsg1400 ) {
    ( (  print_dash_str484 ) ( ( ( StrConcat_485_StrConcat ) ( ( ( StrConcat_486_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1400 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( (  undefined107 ) ( ) );
}

struct Maybe_533 {
    enum {
        Maybe_533_None_t,
        Maybe_533_Just_t,
    } tag;
    union {
        struct {
            struct Cell_17  field0;
        } Maybe_533_Just_s;
    } stuff;
};

static struct Maybe_533 Maybe_533_Just (  struct Cell_17  field0 ) {
    return ( struct Maybe_533 ) { .tag = Maybe_533_Just_t, .stuff = { .Maybe_533_Just_s = { .field0 = field0 } } };
};

static  struct Cell_17   or_dash_fail532 (    struct Maybe_533  x1410 ,    struct StrConcat_434  errmsg1412 ) {
    struct Maybe_533  dref1413 = (  x1410 );
    if ( dref1413.tag == Maybe_533_None_t ) {
        ( (  panic436 ) ( (  errmsg1412 ) ) );
        return ( (  undefined95 ) ( ) );
    }
    else {
        if ( dref1413.tag == Maybe_533_Just_t ) {
            return ( dref1413 .stuff .Maybe_533_Just_s .field0 );
        }
    }
}

static  struct DynStr_100   or_dash_fail534 (    struct Maybe_429  x1410 ,    const char*  errmsg1412 ) {
    struct Maybe_429  dref1413 = (  x1410 );
    if ( dref1413.tag == Maybe_429_None_t ) {
        ( (  panic528 ) ( (  errmsg1412 ) ) );
        return ( (  undefined99 ) ( ) );
    }
    else {
        if ( dref1413.tag == Maybe_429_Just_t ) {
            return ( dref1413 .stuff .Maybe_429_Just_s .field0 );
        }
    }
}

static  int64_t   or_dash_fail535 (    struct Maybe_398  x1410 ,    const char*  errmsg1412 ) {
    struct Maybe_398  dref1413 = (  x1410 );
    if ( dref1413.tag == Maybe_398_None_t ) {
        ( (  panic528 ) ( (  errmsg1412 ) ) );
        return ( (  undefined103 ) ( ) );
    }
    else {
        if ( dref1413.tag == Maybe_398_Just_t ) {
            return ( dref1413 .stuff .Maybe_398_Just_s .field0 );
        }
    }
}

struct Maybe_537 {
    enum {
        Maybe_537_None_t,
        Maybe_537_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_537_Just_s;
    } stuff;
};

static struct Maybe_537 Maybe_537_Just (  uint8_t  field0 ) {
    return ( struct Maybe_537 ) { .tag = Maybe_537_Just_t, .stuff = { .Maybe_537_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail536 (    struct Maybe_537  x1410 ,    struct StrConcat_489  errmsg1412 ) {
    struct Maybe_537  dref1413 = (  x1410 );
    if ( dref1413.tag == Maybe_537_None_t ) {
        ( (  panic530 ) ( (  errmsg1412 ) ) );
        return ( (  undefined110 ) ( ) );
    }
    else {
        if ( dref1413.tag == Maybe_537_Just_t ) {
            return ( dref1413 .stuff .Maybe_537_Just_s .field0 );
        }
    }
}

static  struct Slice_101   empty538 (  ) {
    return ( (struct Slice_101) { .f_ptr = ( (  null_dash_ptr210 ) ( ) ) , .f_count = (  from_dash_integral8 ( 0 ) ) } );
}

static  struct Cell_17 *   get_dash_ptr539 (    struct Slice_316  slice1443 ,    size_t  i1445 ) {
    if ( ( (  cmp40 ( (  i1445 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1445 ) , ( (  slice1443 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic436 ) ( ( ( StrConcat_434_StrConcat ) ( ( ( StrConcat_435_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1445 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1443 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_17 *  elem_dash_ptr1446 = ( (  offset_dash_ptr119 ) ( ( (  slice1443 ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  i1445 ) ) ) ) );
    return (  elem_dash_ptr1446 );
}

static  char *   get_dash_ptr540 (    struct Slice_101  slice1443 ,    size_t  i1445 ) {
    if ( ( (  cmp40 ( (  i1445 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1445 ) , ( (  slice1443 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic436 ) ( ( ( StrConcat_434_StrConcat ) ( ( ( StrConcat_435_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1445 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1443 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1446 = ( (  offset_dash_ptr123 ) ( ( (  slice1443 ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  i1445 ) ) ) ) );
    return (  elem_dash_ptr1446 );
}

static  struct Maybe_533   try_dash_get541 (    struct Slice_316  slice1449 ,    size_t  i1451 ) {
    if ( ( (  cmp40 ( (  i1451 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1451 ) , ( (  slice1449 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_533) { .tag = Maybe_533_None_t } );
    }
    struct Cell_17 *  elem_dash_ptr1452 = ( (  offset_dash_ptr119 ) ( ( (  slice1449 ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  i1451 ) ) ) ) );
    return ( ( Maybe_533_Just ) ( ( * (  elem_dash_ptr1452 ) ) ) );
}

struct Slice_543 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_215   try_dash_get542 (    struct Slice_543  slice1449 ,    size_t  i1451 ) {
    if ( ( (  cmp40 ( (  i1451 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1451 ) , ( (  slice1449 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_215) { .tag = Maybe_215_None_t } );
    }
    const char* *  elem_dash_ptr1452 = ( (  offset_dash_ptr121 ) ( ( (  slice1449 ) .f_ptr ) ,  ( (  size_dash_i64216 ) ( (  i1451 ) ) ) ) );
    return ( ( Maybe_215_Just ) ( ( * (  elem_dash_ptr1452 ) ) ) );
}

static  struct Cell_17   get544 (    struct Slice_316  slice1455 ,    size_t  i1457 ) {
    return ( (  or_dash_fail532 ) ( ( (  try_dash_get541 ) ( (  slice1455 ) ,  (  i1457 ) ) ) ,  ( ( StrConcat_434_StrConcat ) ( ( ( StrConcat_435_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1457 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1455 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_113   set545 (    struct Slice_316  slice1460 ,    size_t  i1462 ,    struct Cell_17  x1464 ) {
    struct Cell_17 *  ep1465 = ( (  get_dash_ptr539 ) ( (  slice1460 ) ,  (  i1462 ) ) );
    (*  ep1465 ) = (  x1464 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set546 (    struct Slice_101  slice1460 ,    size_t  i1462 ,    char  x1464 ) {
    char *  ep1465 = ( (  get_dash_ptr540 ) ( (  slice1460 ) ,  (  i1462 ) ) );
    (*  ep1465 ) = (  x1464 );
    return ( Unit_113_Unit );
}

static  struct Cell_17   elem_dash_get547 (    struct Slice_316  self1553 ,    size_t  idx1555 ) {
    return ( (  get544 ) ( (  self1553 ) ,  (  idx1555 ) ) );
}

static  char   elem_dash_get548 (    struct Slice_101  self1553 ,    size_t  idx1555 ) {
    return ( (  get432 ) ( (  self1553 ) ,  (  idx1555 ) ) );
}

static  enum Unit_113   lam315 (   struct env315 env ,    int32_t  i1595 ) {
    return ( (  set545 ) ( ( env.s1591 ) ,  ( (  i32_dash_size220 ) ( (  i1595 ) ) ) ,  ( ( env.fun1593 ) ( (  elem_dash_get547 ( ( env.s1591 ) , ( (  i32_dash_size220 ) ( (  i1595 ) ) ) ) ) ) ) ) );
}

static  enum Unit_113   map549 (    struct Slice_316  s1591 ,    struct Cell_17 (*  fun1593 )(    struct Cell_17  ) ) {
    struct env315 envinst315 = {
        .fun1593 =  fun1593 ,
        .s1591 =  s1591 ,
    };
    ( (  for_dash_each314 ) ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i32224 ) ( (  op_dash_sub58 ( ( (  s1591 ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv315){ .fun = lam315, .env = envinst315 } ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   lam320 (   struct env320 env ,    int32_t  i1595 ) {
    return ( (  set545 ) ( ( env.s1591 ) ,  ( (  i32_dash_size220 ) ( (  i1595 ) ) ) ,  ( ( env.fun1593 ) ( (  elem_dash_get547 ( ( env.s1591 ) , ( (  i32_dash_size220 ) ( (  i1595 ) ) ) ) ) ) ) ) );
}

static  enum Unit_113   map550 (    struct Slice_316  s1591 ,    struct Cell_17 (*  fun1593 )(    struct Cell_17  ) ) {
    struct env320 envinst320 = {
        .fun1593 =  fun1593 ,
        .s1591 =  s1591 ,
    };
    ( (  for_dash_each319 ) ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i32224 ) ( (  op_dash_sub58 ( ( (  s1591 ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv320){ .fun = lam320, .env = envinst320 } ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   lam351 (   struct env351 env ,    int32_t  i1595 ) {
    return ( (  set545 ) ( ( env.s1591 ) ,  ( (  i32_dash_size220 ) ( (  i1595 ) ) ) ,  ( ( env.fun1593 ) ( (  elem_dash_get547 ( ( env.s1591 ) , ( (  i32_dash_size220 ) ( (  i1595 ) ) ) ) ) ) ) ) );
}

static  enum Unit_113   map551 (    struct Slice_316  s1591 ,    struct Cell_17 (*  fun1593 )(    struct Cell_17  ) ) {
    struct env351 envinst351 = {
        .fun1593 =  fun1593 ,
        .s1591 =  s1591 ,
    };
    ( (  for_dash_each350 ) ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i32224 ) ( (  op_dash_sub58 ( ( (  s1591 ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv351){ .fun = lam351, .env = envinst351 } ) ) );
    return ( Unit_113_Unit );
}

static  enum CAllocator_333   idc552 (  ) {
    return ( CAllocator_333_CAllocator );
}

static  struct Slice_316   allocate553 (    enum CAllocator_333  dref1622 ,    size_t  count1624 ) {
    if (!(  dref1622 == CAllocator_333_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1625 = ( ( ( (  get_dash_typesize125 ) ( ) ) ) .f_size );
    struct Cell_17 *  ptr1626 = ( (  cast_dash_ptr165 ) ( ( ( malloc ) ( (  op_dash_mul59 ( (  size1625 ) , (  count1624 ) ) ) ) ) ) );
    return ( (struct Slice_316) { .f_ptr = (  ptr1626 ) , .f_count = (  count1624 ) } );
}

static  struct Slice_101   allocate554 (    enum CAllocator_333  dref1622 ,    size_t  count1624 ) {
    if (!(  dref1622 == CAllocator_333_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1625 = ( ( ( (  get_dash_typesize128 ) ( ) ) ) .f_size );
    char *  ptr1626 = ( (  cast_dash_ptr167 ) ( ( ( malloc ) ( (  op_dash_mul59 ( (  size1625 ) , (  count1624 ) ) ) ) ) ) );
    return ( (struct Slice_101) { .f_ptr = (  ptr1626 ) , .f_count = (  count1624 ) } );
}

static  enum Unit_113   free555 (    enum CAllocator_333  dref1628 ,    struct Slice_101  slice1630 ) {
    if (!(  dref1628 == CAllocator_333_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr168 ) ( ( (  slice1630 ) .f_ptr ) ) ) ) );
    return ( Unit_113_Unit );
}

struct Slice_557 {
    enum Unit_113 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_113   free556 (    enum CAllocator_333  dref1628 ,    struct Slice_557  slice1630 ) {
    if (!(  dref1628 == CAllocator_333_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr170 ) ( ( (  slice1630 ) .f_ptr ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   free558 (    enum CAllocator_333  dref1628 ,    struct Slice_316  slice1630 ) {
    if (!(  dref1628 == CAllocator_333_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr177 ) ( ( (  slice1630 ) .f_ptr ) ) ) ) );
    return ( Unit_113_Unit );
}

static  struct List_332   mk559 (    enum CAllocator_333  al1717 ) {
    struct Slice_101  elements1718 = ( (  empty538 ) ( ) );
    return ( (struct List_332) { .f_al = (  al1717 ) , .f_elements = (  elements1718 ) , .f_count = (  from_dash_integral8 ( 0 ) ) } );
}

static  enum Unit_113   lam324 (   struct env324 env ,    struct Tuple2_271  dref1729 ) {
    return ( (  set546 ) ( ( env.new_dash_slice1728 ) ,  ( (  i32_dash_size220 ) ( ( dref1729 .field1 ) ) ) ,  ( dref1729 .field0 ) ) );
}

static  enum Unit_113   grow_dash_if_dash_full335 (   struct env335 env ,    struct List_332 *  list1727 ) {
    if ( (  eq14 ( ( ( * (  list1727 ) ) .f_count ) , (  from_dash_integral8 ( 0 ) ) ) ) ) {
        (*  list1727 ) .f_elements = ( (  allocate554 ) ( ( ( * (  list1727 ) ) .f_al ) ,  ( env.starting_dash_size1722 ) ) );
    } else {
        if ( (  eq14 ( ( ( * (  list1727 ) ) .f_count ) , ( ( ( * (  list1727 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_101  new_dash_slice1728 = ( (  allocate554 ) ( ( ( * (  list1727 ) ) .f_al ) ,  (  op_dash_mul59 ( ( ( * (  list1727 ) ) .f_count ) , ( env.growth_dash_factor1723 ) ) ) ) );
            struct env324 envinst324 = {
                .new_dash_slice1728 =  new_dash_slice1728 ,
            };
            ( (  for_dash_each323 ) ( ( (  zip286 ) ( ( ( * (  list1727 ) ) .f_elements ) ,  ( (  from253 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv324){ .fun = lam324, .env = envinst324 } ) ) );
            ( (  free555 ) ( ( ( * (  list1727 ) ) .f_al ) ,  ( ( * (  list1727 ) ) .f_elements ) ) );
            (*  list1727 ) .f_elements = (  new_dash_slice1728 );
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   add334 (   struct env334 env ,    struct List_332 *  list1734 ,    char  elem1736 ) {
    struct funenv335  temp560 = ( (struct funenv335){ .fun = grow_dash_if_dash_full335, .env =  env.envinst335  } );
    ( temp560.fun ( temp560.env ,  (  list1734 ) ) );
    ( (  set546 ) ( ( ( * (  list1734 ) ) .f_elements ) ,  ( ( * (  list1734 ) ) .f_count ) ,  (  elem1736 ) ) );
    (*  list1734 ) .f_count = (  op_dash_add57 ( ( ( * (  list1734 ) ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  struct SliceIter_232   chars561 (    struct DynStr_100  self1664 ) {
    return ( (  into_dash_iter287 ) ( ( (  self1664 ) .f_contents ) ) );
}

static  enum Unit_113   free562 (    struct DynStr_100  s1816 ,    enum CAllocator_333  al1818 ) {
    ( (  free555 ) ( (  al1818 ) ,  ( (struct Slice_101) { .f_ptr = ( ( (  s1816 ) .f_contents ) .f_ptr ) , .f_count = (  from_dash_integral8 ( 0 ) ) } ) ) );
    return ( Unit_113_Unit );
}

static  uint8_t *   get_dash_ptr563 (    struct Array_91 *  arr1834 ,    size_t  i1837 ) {
    if ( ( (  cmp40 ( (  i1837 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1837 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic365 ) ( ( ( StrConcat_366_StrConcat ) ( ( ( StrConcat_367_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to array at index " ) ,  (  i1837 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1838 = ( ( (  cast_dash_ptr159 ) ( (  arr1834 ) ) ) );
    return ( (  offset_dash_ptr115 ) ( (  p1838 ) ,  ( (int64_t ) (  i1837 ) ) ) );
}

static  char *   get_dash_ptr564 (    struct Array_141 *  arr1834 ,    size_t  i1837 ) {
    if ( ( (  cmp40 ( (  i1837 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1837 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic365 ) ( ( ( StrConcat_366_StrConcat ) ( ( ( StrConcat_367_StrConcat ) ( ( ( StrConcat_368_StrConcat ) ( ( ( StrConcat_369_StrConcat ) ( ( "Access to array at index " ) ,  (  i1837 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1838 = ( ( (  cast_dash_ptr174 ) ( (  arr1834 ) ) ) );
    return ( (  offset_dash_ptr123 ) ( (  p1838 ) ,  ( (int64_t ) (  i1837 ) ) ) );
}

static  enum Unit_113   set565 (    struct Array_91 *  arr1847 ,    size_t  i1850 ,    uint8_t  e1852 ) {
    uint8_t *  p1853 = ( (  get_dash_ptr563 ) ( (  arr1847 ) ,  (  i1850 ) ) );
    (*  p1853 ) = (  e1852 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set566 (    struct Array_141 *  arr1847 ,    size_t  i1850 ,    char  e1852 ) {
    char *  p1853 = ( (  get_dash_ptr564 ) ( (  arr1847 ) ,  (  i1850 ) ) );
    (*  p1853 ) = (  e1852 );
    return ( Unit_113_Unit );
}

static  struct Slice_101   as_dash_slice567 (    struct Array_141 *  arr1856 ) {
    return ( (struct Slice_101) { .f_ptr = ( (  cast154 ) ( (  arr1856 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace568 (    char  c1917 ) {
    return ( ( (  eq15 ( (  c1917 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq15 ( (  c1917 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq15 ( (  c1917 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  struct LineIter_430   lines569 (    struct DynStr_100  s1936 ) {
    return ( (struct LineIter_430) { .f_og = (  s1936 ) , .f_last = (  from_dash_integral8 ( 0 ) ) } );
}

static  bool   is_dash_digit570 (    char  c1965 ) {
    return ( (  cmp41 ( ( (  char_dash_i32521 ) ( (  c1965 ) ) ) , ( (  char_dash_i32521 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp41 ( ( (  char_dash_i32521 ) ( (  c1965 ) ) ) , ( (  char_dash_i32521 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_252   parse_dash_digit571 (    char  c1968 ) {
    if ( ( (  is_dash_digit570 ) ( (  c1968 ) ) ) ) {
        return ( ( Maybe_252_Just ) ( (  op_dash_sub49 ( ( (  char_dash_i32521 ) ( (  c1968 ) ) ) , ( (  char_dash_i32521 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_252) { .tag = Maybe_252_None_t } );
    }
}

static  struct Maybe_398   sequence_dash_maybe573 (    char  e1974 ,    struct Maybe_398  b1976 ) {
    struct Maybe_398  dref1977 = (  b1976 );
    if ( dref1977.tag == Maybe_398_None_t ) {
        return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
    }
    else {
        if ( dref1977.tag == Maybe_398_Just_t ) {
            struct Maybe_252  dref1979 = ( (  parse_dash_digit571 ) ( (  e1974 ) ) );
            if ( dref1979.tag == Maybe_252_None_t ) {
                return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
            }
            else {
                if ( dref1979.tag == Maybe_252_Just_t ) {
                    return ( ( Maybe_398_Just ) ( (  op_dash_add43 ( (  op_dash_mul45 ( ( dref1977 .stuff .Maybe_398_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i64219 ) ( ( dref1979 .stuff .Maybe_252_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_398   parse_dash_int572 (    struct DynStr_100  s1971 ) {
    struct SliceIter_232  cs1981 = ( (  chars561 ) ( (  s1971 ) ) );
    struct Maybe_238  dref1982 = ( (  head451 ) ( (  cs1981 ) ) );
    if ( dref1982.tag == Maybe_238_Just_t ) {
        return ( (  reduce397 ) ( (  cs1981 ) ,  ( ( Maybe_398_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe573 ) ) );
    }
    else {
        if ( dref1982.tag == Maybe_238_None_t ) {
            return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
        }
    }
}

static  struct Maybe_398   sequence_dash_maybe575 (    char  e1974 ,    struct Maybe_398  b1976 ) {
    struct Maybe_398  dref1977 = (  b1976 );
    if ( dref1977.tag == Maybe_398_None_t ) {
        return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
    }
    else {
        if ( dref1977.tag == Maybe_398_Just_t ) {
            struct Maybe_252  dref1979 = ( (  parse_dash_digit571 ) ( (  e1974 ) ) );
            if ( dref1979.tag == Maybe_252_None_t ) {
                return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
            }
            else {
                if ( dref1979.tag == Maybe_252_Just_t ) {
                    return ( ( Maybe_398_Just ) ( (  op_dash_add43 ( (  op_dash_mul45 ( ( dref1977 .stuff .Maybe_398_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i64219 ) ( ( dref1979 .stuff .Maybe_252_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_398   parse_dash_int574 (    const char*  s1971 ) {
    struct ConstStrIter_241  cs1981 = ( (  chars465 ) ( (  s1971 ) ) );
    struct Maybe_238  dref1982 = ( (  head453 ) ( (  cs1981 ) ) );
    if ( dref1982.tag == Maybe_238_Just_t ) {
        return ( (  reduce401 ) ( (  cs1981 ) ,  ( ( Maybe_398_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe575 ) ) );
    }
    else {
        if ( dref1982.tag == Maybe_238_None_t ) {
            return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
        }
    }
}

static  struct Maybe_398   sequence_dash_maybe577 (    char  e1974 ,    struct Maybe_398  b1976 ) {
    struct Maybe_398  dref1977 = (  b1976 );
    if ( dref1977.tag == Maybe_398_None_t ) {
        return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
    }
    else {
        if ( dref1977.tag == Maybe_398_Just_t ) {
            struct Maybe_252  dref1979 = ( (  parse_dash_digit571 ) ( (  e1974 ) ) );
            if ( dref1979.tag == Maybe_252_None_t ) {
                return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
            }
            else {
                if ( dref1979.tag == Maybe_252_Just_t ) {
                    return ( ( Maybe_398_Just ) ( (  op_dash_add43 ( (  op_dash_mul45 ( ( dref1977 .stuff .Maybe_398_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i64219 ) ( ( dref1979 .stuff .Maybe_252_Just_s .field0 ) ) ) ) ) ) );
                }
            }
        }
    }
}

static  struct Maybe_398   parse_dash_int576 (    struct TakeWhile_293  s1971 ) {
    struct TakeWhile_293  cs1981 = ( (  chars520 ) ( (  s1971 ) ) );
    struct Maybe_238  dref1982 = ( (  head455 ) ( (  cs1981 ) ) );
    if ( dref1982.tag == Maybe_238_Just_t ) {
        return ( (  reduce403 ) ( (  cs1981 ) ,  ( ( Maybe_398_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe577 ) ) );
    }
    else {
        if ( dref1982.tag == Maybe_238_None_t ) {
            return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
        }
    }
}

static  struct Maybe_537   hex_dash_digit578 (    char  c2011 ) {
    if ( ( (  cmp525 ( (  c2011 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp525 ( (  c2011 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_537_Just ) ( (  op_dash_sub56 ( ( (  char_dash_u8522 ) ( (  c2011 ) ) ) , ( (  char_dash_u8522 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp525 ( (  c2011 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp525 ( (  c2011 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_537_Just ) ( (  op_dash_add55 ( (  op_dash_sub56 ( ( (  char_dash_u8522 ) ( (  c2011 ) ) ) , ( (  char_dash_u8522 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral6 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp525 ( (  c2011 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp525 ( (  c2011 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_537_Just ) ( (  op_dash_add55 ( (  op_dash_sub56 ( ( (  char_dash_u8522 ) ( (  c2011 ) ) ) , ( (  char_dash_u8522 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral6 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_537) { .tag = Maybe_537_None_t } );
}

static  uint32_t   lam580 (    char  c2016 ) {
    return ( (  from_dash_integral4 ) ( ( (  u8_dash_i64228 ) ( ( (  or_dash_fail536 ) ( ( (  hex_dash_digit578 ) ( (  c2016 ) ) ) ,  ( ( StrConcat_489_StrConcat ) ( ( ( StrConcat_490_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c2016 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam581 (    uint32_t  elem2018 ,    uint32_t  b2020 ) {
    return (  op_dash_add53 ( (  op_dash_mul54 ( (  b2020 ) , (  from_dash_integral4 ( 16 ) ) ) ) , (  elem2018 ) ) );
}

static  uint32_t   from_dash_hex579 (    const char*  arr2014 ) {
    return ( (  reduce407 ) ( ( (  map245 ) ( (  arr2014 ) ,  (  lam580 ) ) ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  lam581 ) ) );
}

static  struct Maybe_215   get582 (    const char*  s2057 ) {
    return ( (  from_dash_nullable_dash_c_dash_str214 ) ( ( ( getenv ) ( (  s2057 ) ) ) ) );
}

static  enum Unit_113   println583 (    int64_t  s2026 ) {
    ( (  print_dash_str516 ) ( ( ( StrConcat_473_StrConcat ) ( (  s2026 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   show_dash_cursor584 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   hide_dash_cursor585 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   move_dash_cursor_dash_to586 (    uint32_t  x2034 ,    uint32_t  y2036 ) {
    uint32_t  x2037 = (  op_dash_add53 ( (  x2034 ) , (  from_dash_integral4 ( 1 ) ) ) );
    uint32_t  y2038 = (  op_dash_add53 ( (  y2036 ) , (  from_dash_integral4 ( 1 ) ) ) );
    ( (  print_dash_str496 ) ( ( ( StrConcat_497_StrConcat ) ( ( ( StrConcat_498_StrConcat ) ( ( ( StrConcat_499_StrConcat ) ( ( ( StrConcat_500_StrConcat ) ( ( "\x1b[" ) ,  (  y2038 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x2037 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   reset_dash_cursor_dash_position587 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[H" ) ) );
    return ( Unit_113_Unit );
}

static  struct Tuple2_460   get_dash_dimensions588 (  ) {
    struct Winsize_132  temp589 = ( ( (  zeroed178 ) ( ) ) );
    struct Winsize_132 *  ws2042 = ( &temp589 );
    if ( ( (  eq10 ( ( ( ioctl ) ( ( (  stdout_dash_fileno72 ) ( ) ) ,  ( (  tiocgwinsz88 ) ( ) ) ,  (  ws2042 ) ) ) , (  op_dash_neg52 ( (  from_dash_integral3 ( 1 ) ) ) ) ) ) || (  eq13 ( ( ( * (  ws2042 ) ) .f_ws_dash_col ) , (  from_dash_integral5 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_460_Tuple2 ) ( (  from_dash_integral4 ( 80 ) ) ,  (  from_dash_integral4 ( 24 ) ) ) );
    }
    return ( ( Tuple2_460_Tuple2 ) ( ( (  u16_dash_u32225 ) ( ( ( * (  ws2042 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32225 ) ( ( ( * (  ws2042 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_113   set_dash_default_dash_fg590 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_default_dash_bg591 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_113_Unit );
}

static  enum ColorPalette_306   query_dash_palette592 (  ) {
    struct Maybe_215  colorterm2058 = ( (  get582 ) ( ( "COLORTERM" ) ) );
    struct Maybe_215  dref2059 = (  colorterm2058 );
    if ( dref2059.tag == Maybe_215_Just_t ) {
        if ( ( (  eq524 ( ( dref2059 .stuff .Maybe_215_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq524 ( ( dref2059 .stuff .Maybe_215_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_306_PaletteRGB );
        }
    }
    else {
        if ( dref2059.tag == Maybe_215_None_t ) {
        }
    }
    struct Maybe_215  dref2061 = ( (  get582 ) ( ( "TERM" ) ) );
    if ( dref2061.tag == Maybe_215_Just_t ) {
        if ( (  eq524 ( ( dref2061 .stuff .Maybe_215_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_306_Palette8 );
        }
    }
    else {
        if ( dref2061.tag == Maybe_215_None_t ) {
        }
    }
    return ( ColorPalette_306_Palette16 );
}

static  enum Unit_113   set_dash_fg8593 (    enum Color8_19  color2077 ) {
    enum Color8_19  dref2078 = (  color2077 );
    switch (  dref2078 ) {
        case Color8_19_Black8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color8_19_Red8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color8_19_Green8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color8_19_Yellow8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color8_19_Blue8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color8_19_Magenta8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color8_19_Cyan8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color8_19_White8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[37m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg16594 (    enum Color16_20  color2081 ) {
    enum Color16_20  dref2082 = (  color2081 );
    switch (  dref2082 ) {
        case Color16_20_Black16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color16_20_Red16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color16_20_Green16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color16_20_Yellow16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color16_20_Blue16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color16_20_Magenta16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color16_20_Cyan16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color16_20_White16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[37m" ) ) );
            break;
        }
        case Color16_20_BrightBlack16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[90m" ) ) );
            break;
        }
        case Color16_20_BrightRed16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[91m" ) ) );
            break;
        }
        case Color16_20_BrightGreen16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[92m" ) ) );
            break;
        }
        case Color16_20_BrightYellow16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[93m" ) ) );
            break;
        }
        case Color16_20_BrightBlue16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[94m" ) ) );
            break;
        }
        case Color16_20_BrightMagenta16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[95m" ) ) );
            break;
        }
        case Color16_20_BrightCyan16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[96m" ) ) );
            break;
        }
        case Color16_20_BrightWhite16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[97m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg8595 (    enum Color8_19  color2085 ) {
    enum Color8_19  dref2086 = (  color2085 );
    switch (  dref2086 ) {
        case Color8_19_Black8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color8_19_Red8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color8_19_Green8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color8_19_Yellow8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color8_19_Blue8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color8_19_Magenta8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color8_19_Cyan8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color8_19_White8 : {
            ( (  print_dash_str374 ) ( ( "\x1b[47m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg16596 (    enum Color16_20  color2089 ) {
    enum Color16_20  dref2090 = (  color2089 );
    switch (  dref2090 ) {
        case Color16_20_Black16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color16_20_Red16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color16_20_Green16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color16_20_Yellow16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color16_20_Blue16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color16_20_Magenta16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color16_20_Cyan16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color16_20_White16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[47m" ) ) );
            break;
        }
        case Color16_20_BrightBlack16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[100m" ) ) );
            break;
        }
        case Color16_20_BrightRed16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[101m" ) ) );
            break;
        }
        case Color16_20_BrightGreen16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[102m" ) ) );
            break;
        }
        case Color16_20_BrightYellow16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[103m" ) ) );
            break;
        }
        case Color16_20_BrightBlue16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[104m" ) ) );
            break;
        }
        case Color16_20_BrightMagenta16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[105m" ) ) );
            break;
        }
        case Color16_20_BrightCyan16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[106m" ) ) );
            break;
        }
        case Color16_20_BrightWhite16 : {
            ( (  print_dash_str374 ) ( ( "\x1b[107m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   reset_dash_colors597 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   clear_dash_screen598 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg256599 (    uint8_t  color2095 ) {
    ( (  print_dash_str504 ) ( ( ( StrConcat_505_StrConcat ) ( ( ( StrConcat_506_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color2095 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg256600 (    uint8_t  color2098 ) {
    ( (  print_dash_str504 ) ( ( ( StrConcat_505_StrConcat ) ( ( ( StrConcat_506_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color2098 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg_dash_rgb601 (    struct RGB_21  c2118 ) {
    ( (  print_dash_str508 ) ( ( ( StrConcat_509_StrConcat ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_512_StrConcat ) ( ( ( StrConcat_505_StrConcat ) ( ( ( StrConcat_506_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c2118 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2118 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2118 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg_dash_rgb602 (    struct RGB_21  c2121 ) {
    ( (  print_dash_str508 ) ( ( ( StrConcat_509_StrConcat ) ( ( ( StrConcat_510_StrConcat ) ( ( ( StrConcat_511_StrConcat ) ( ( ( StrConcat_512_StrConcat ) ( ( ( StrConcat_505_StrConcat ) ( ( ( StrConcat_506_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c2121 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2121 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c2121 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg603 (    struct Color_18  c2139 ) {
    struct Color_18  dref2140 = (  c2139 );
    if ( dref2140.tag == Color_18_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg590 ) ( ) );
    }
    else {
        if ( dref2140.tag == Color_18_Color8_t ) {
            ( (  set_dash_fg8593 ) ( ( dref2140 .stuff .Color_18_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2140.tag == Color_18_Color16_t ) {
                ( (  set_dash_fg16594 ) ( ( dref2140 .stuff .Color_18_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2140.tag == Color_18_Color256_t ) {
                    ( (  set_dash_fg256599 ) ( ( dref2140 .stuff .Color_18_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2140.tag == Color_18_ColorRGB_t ) {
                        ( (  set_dash_fg_dash_rgb601 ) ( ( dref2140 .stuff .Color_18_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg604 (    struct Color_18  c2147 ) {
    struct Color_18  dref2148 = (  c2147 );
    if ( dref2148.tag == Color_18_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg591 ) ( ) );
    }
    else {
        if ( dref2148.tag == Color_18_Color8_t ) {
            ( (  set_dash_bg8595 ) ( ( dref2148 .stuff .Color_18_Color8_s .field0 ) ) );
        }
        else {
            if ( dref2148.tag == Color_18_Color16_t ) {
                ( (  set_dash_bg16596 ) ( ( dref2148 .stuff .Color_18_Color16_s .field0 ) ) );
            }
            else {
                if ( dref2148.tag == Color_18_Color256_t ) {
                    ( (  set_dash_bg256600 ) ( ( dref2148 .stuff .Color_18_Color256_s .field0 ) ) );
                }
                else {
                    if ( dref2148.tag == Color_18_ColorRGB_t ) {
                        ( (  set_dash_bg_dash_rgb602 ) ( ( dref2148 .stuff .Color_18_ColorRGB_s .field0 ) ) );
                    }
                }
            }
        }
    }
    return ( Unit_113_Unit );
}

struct env605 {
    ;
    ;
    ;
    ;
    struct env334 envinst334;
    ;
    ;
};

static  enum Unit_113   lam330 (   struct env330 env ,    char  c2204 ) {
    struct funenv334  temp606 = ( (struct funenv334){ .fun = add334, .env =  env.envinst334  } );
    return ( temp606.fun ( temp606.env ,  ( & ( ( * ( env.builder2200 ) ) .f_chars ) ) ,  (  c2204 ) ) );
}

static  enum Unit_113   write605 (   struct env605 env ,    struct StrBuilder_331 *  builder2200 ,    struct StrConcat_473  s2202 ) {
    struct env330 envinst330 = {
        .builder2200 =  builder2200 ,
        .envinst334 = env.envinst334 ,
    };
    ( (  for_dash_each327 ) ( ( (  chars517 ) ( (  s2202 ) ) ) ,  ( (struct funenv330){ .fun = lam330, .env = envinst330 } ) ) );
    return ( Unit_113_Unit );
}

struct env607 {
    ;
    struct env334 envinst334;
    ;
};

static  enum Unit_113   write_dash_char607 (   struct env607 env ,    struct StrBuilder_331 *  builder2212 ,    char  c2214 ) {
    struct funenv334  temp608 = ( (struct funenv334){ .fun = add334, .env =  env.envinst334  } );
    ( temp608.fun ( temp608.env ,  ( & ( ( * (  builder2212 ) ) .f_chars ) ) ,  (  c2214 ) ) );
    return ( Unit_113_Unit );
}

static  struct StrBuilder_331   mk609 (    enum CAllocator_333  al2228 ) {
    return ( (struct StrBuilder_331) { .f_chars = ( (  mk559 ) ( (  al2228 ) ) ) } );
}

static  struct DynStr_100   as_dash_str610 (    struct StrBuilder_331 *  builder2234 ) {
    return ( (struct DynStr_100) { .f_contents = ( (  subslice447 ) ( ( ( ( * (  builder2234 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral8 ( 0 ) ) ,  ( ( ( * (  builder2234 ) ) .f_chars ) .f_count ) ) ) } );
}

struct funenv605 {
    enum Unit_113  (*fun) (  struct env605  ,    struct StrBuilder_331 *  ,    struct StrConcat_473  );
    struct env605 env;
};

struct funenv607 {
    enum Unit_113  (*fun) (  struct env607  ,    struct StrBuilder_331 *  ,    char  );
    struct env607 env;
};

struct env611 {
    ;
    struct env605 envinst605;
    ;
    ;
    struct env607 envinst607;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

static  struct DynStr_100   mk_dash_dyn_dash_str611 (   struct env611 env ,    struct StrConcat_473  s2254 ,    enum CAllocator_333  al2256 ) {
    struct StrBuilder_331  temp612 = ( (  mk609 ) ( (  al2256 ) ) );
    struct StrBuilder_331 *  sb2257 = ( &temp612 );
    struct funenv605  temp613 = ( (struct funenv605){ .fun = write605, .env =  env.envinst605  } );
    ( temp613.fun ( temp613.env ,  (  sb2257 ) ,  (  s2254 ) ) );
    struct funenv607  temp614 = ( (struct funenv607){ .fun = write_dash_char607, .env =  env.envinst607  } );
    ( temp614.fun ( temp614.env ,  (  sb2257 ) ,  ( (  nullchar444 ) ( ) ) ) );
    struct DynStr_100  dynstr2258 = ( (  as_dash_str610 ) ( (  sb2257 ) ) );
    return ( (struct DynStr_100) { .f_contents = ( (struct Slice_101) { .f_ptr = ( ( (  dynstr2258 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub58 ( ( ( (  dynstr2258 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) } ) } );
}

struct funenv611 {
    struct DynStr_100  (*fun) (  struct env611  ,    struct StrConcat_473  ,    enum CAllocator_333  );
    struct env611 env;
};

struct env615 {
    ;
    ;
    ;
    struct env611 envinst611;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str615 (   struct env615 env ,    struct StrConcat_473  s2261 ,    enum CAllocator_333  al2263 ) {
    struct funenv611  temp616 = ( (struct funenv611){ .fun = mk_dash_dyn_dash_str611, .env =  env.envinst611  } );
    return ( ( (  cast147 ) ( ( ( ( temp616.fun ( temp616.env ,  (  s2261 ) ,  (  al2263 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  enum Unit_113   free_dash_const_dash_str617 (    const char*  s2266 ,    enum CAllocator_333  al2268 ) {
    ( (  free556 ) ( (  al2268 ) ,  ( (struct Slice_557) { .f_ptr = ( (enum Unit_113 * ) (  s2266 ) ) , .f_count = (  from_dash_integral8 ( 0 ) ) } ) ) );
    return ( Unit_113_Unit );
}

static  uint32_t   u32_dash_or618 (    uint32_t  l2271 ,    uint32_t  r2273 ) {
    return ( (  l2271 ) | (  r2273 ) );
}

static  uint32_t   u32_dash_ors619 (    struct SmolArray_61  vals2276 ) {
    return ( (  reduce359 ) ( (  vals2276 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  u32_dash_or618 ) ) );
}

static  uint32_t   u32_dash_ors620 (    struct SmolArray_64  vals2276 ) {
    return ( (  reduce383 ) ( (  vals2276 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  u32_dash_or618 ) ) );
}

static  uint32_t   u32_dash_ors621 (    struct SmolArray_67  vals2276 ) {
    return ( (  reduce390 ) ( (  vals2276 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  u32_dash_or618 ) ) );
}

static  uint32_t   u32_dash_and622 (    uint32_t  l2279 ,    uint32_t  r2281 ) {
    return ( (  l2279 ) & (  r2281 ) );
}

static  uint32_t   u32_dash_neg623 (    uint32_t  l2284 ) {
    return ( ~ (  l2284 ) );
}

static  struct Maybe_429   try_dash_read_dash_contents624 (    const char*  filename2387 ,    enum CAllocator_333  al2389 ) {
    FILE *  file2390 = ( ( fopen ) ( (  filename2387 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null212 ) ( (  file2390 ) ) ) ) {
        return ( (struct Maybe_429) { .tag = Maybe_429_None_t } );
    }
    ( ( fseek ) ( (  file2390 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_end71 ) ( ) ) ) );
    int32_t  file_dash_size2391 = ( ( ftell ) ( (  file2390 ) ) );
    ( ( fseek ) ( (  file2390 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_set70 ) ( ) ) ) );
    struct Slice_101  file_dash_buf2392 = ( ( (  allocate554 ) ( (  al2389 ) ,  (  op_dash_add57 ( ( (  i32_dash_size220 ) ( (  file_dash_size2391 ) ) ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2392 ) .f_ptr ) ,  (  from_dash_integral3 ( 1 ) ) ,  (  file_dash_size2391 ) ,  (  file2390 ) ) );
    ( (  set546 ) ( (  file_dash_buf2392 ) ,  ( (  i32_dash_size220 ) ( (  file_dash_size2391 ) ) ) ,  ( (  nullchar444 ) ( ) ) ) );
    ( ( fclose ) ( (  file2390 ) ) );
    struct DynStr_100  str2393 = ( (struct DynStr_100) { .f_contents = (  file_dash_buf2392 ) } );
    return ( ( Maybe_429_Just ) ( (  str2393 ) ) );
}

static  bool   try_dash_write_dash_contents625 (    const char*  filename2401 ,    const char*  contents2403 ) {
    FILE *  file2404 = ( ( fopen ) ( (  filename2401 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null212 ) ( (  file2404 ) ) ) ) {
        return ( false );
    }
    struct ConstStrIter_241  it2405 = ( (  chars465 ) ( (  contents2403 ) ) );
    while ( ( true ) ) {
        struct Maybe_238  dref2406 = ( (  next244 ) ( ( & (  it2405 ) ) ) );
        if ( dref2406.tag == Maybe_238_None_t ) {
            ( ( fclose ) ( (  file2404 ) ) );
            return ( true );
        }
        else {
            if ( dref2406.tag == Maybe_238_Just_t ) {
                int32_t  chars_dash_written2408 = ( ( fprintf ) ( (  file2404 ) ,  ( "%c" ) ,  ( dref2406 .stuff .Maybe_238_Just_s .field0 ) ) );
                if ( (  cmp41 ( (  chars_dash_written2408 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) ) {
                    return ( false );
                }
            }
        }
    }
    return ( (  unreachable526 ) ( ) );
}

static  enum Unit_113   write_dash_contents626 (    const char*  filename2411 ,    const char*  contents2413 ) {
    if ( ( ! ( (  try_dash_write_dash_contents625 ) ( (  filename2411 ) ,  (  contents2413 ) ) ) ) ) {
        ( (  panic529 ) ( ( ( StrConcat_476_StrConcat ) ( ( "could not write to file " ) ,  (  filename2411 ) ) ) ) );
    }
    return ( Unit_113_Unit );
}

static  struct Scanner_231   mk627 (    struct DynStr_100  s2585 ) {
    return ( (struct Scanner_231) { .f_s = ( (  chars561 ) ( (  s2585 ) ) ) } );
}

static  struct Maybe_398   scan_dash_int628 (    struct Scanner_231 *  sc2588 ) {
    struct TakeWhile_293  digit_dash_chars2589 = ( (  take_dash_while296 ) ( (  sc2588 ) ,  (  is_dash_digit570 ) ) );
    if ( ( (  null457 ) ( (  digit_dash_chars2589 ) ) ) ) {
        return ( (struct Maybe_398) { .tag = Maybe_398_None_t } );
    }
    ( (  drop_prime_458 ) ( (  sc2588 ) ,  ( (  count424 ) ( (  digit_dash_chars2589 ) ) ) ) );
    return ( (  parse_dash_int576 ) ( (  digit_dash_chars2589 ) ) );
}

static  struct timespec   now629 (  ) {
    struct timespec  temp630 = ( (  undefined93 ) ( ) );
    struct timespec *  t2602 = ( &temp630 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic69 ) ( ) ) ,  (  t2602 ) ) );
    return ( * (  t2602 ) );
}

struct Duration_632 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  struct Duration_632   diff631 (    struct timespec  l2617 ,    struct timespec  r2619 ) {
    int64_t  secdiff2620 = (  op_dash_sub44 ( ( (  l2617 ) .tv_sec ) , ( (  r2619 ) .tv_sec ) ) );
    int64_t  nsdiff2621 = (  op_dash_sub44 ( ( (  l2617 ) .tv_nsec ) , ( (  r2619 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2622 = (  from_dash_integral2 ( 1000000000 ) );
    if ( (  cmp38 ( (  nsdiff2621 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp38 ( (  secdiff2620 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_632) { .f_secs = (  secdiff2620 ) , .f_nsecs = (  op_dash_neg47 ( (  nsdiff2621 ) ) ) } );
        } else {
            if ( (  eq9 ( (  secdiff2620 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
                return ( (struct Duration_632) { .f_secs = (  from_dash_integral2 ( 0 ) ) , .f_nsecs = (  nsdiff2621 ) } );
            } else {
                return ( (struct Duration_632) { .f_secs = (  op_dash_sub44 ( (  secdiff2620 ) , (  from_dash_integral2 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add43 ( (  ns_dash_in_dash_secs2622 ) , (  nsdiff2621 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp38 ( (  secdiff2620 ) , (  from_dash_integral2 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_632) { .f_secs = (  secdiff2620 ) , .f_nsecs = (  nsdiff2621 ) } );
        } else {
            return ( (struct Duration_632) { .f_secs = (  op_dash_sub44 ( (  secdiff2620 ) , (  from_dash_integral2 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub44 ( (  ns_dash_in_dash_secs2622 ) , (  nsdiff2621 ) ) ) } );
        }
    }
}

static  struct Termios_90   enable_dash_raw_dash_mode633 (  ) {
    struct Termios_90  temp634 = ( (  undefined89 ) ( ) );
    struct Termios_90 *  orig_dash_termios2640 = ( &temp634 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  cast_dash_ptr158 ) ( (  orig_dash_termios2640 ) ) ) ) );
    struct Termios_90  raw2641 = ( * (  orig_dash_termios2640 ) );
    raw2641 .f_c_dash_lflag = ( (  u32_dash_and622 ) ( ( (  raw2641 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg623 ) ( ( (  u32_dash_ors619 ) ( ( (  from_dash_listlike60 ) ( ( (struct Array_62) { ._arr = { ( (  echo74 ) ( ) ) , ( (  icanon75 ) ( ) ) , ( (  isig76 ) ( ) ) , ( ( (  iexten77 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2641 .f_c_dash_iflag = ( (  u32_dash_and622 ) ( ( (  raw2641 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg623 ) ( ( (  u32_dash_ors620 ) ( ( (  from_dash_listlike63 ) ( ( (struct Array_65) { ._arr = { ( (  brkint78 ) ( ) ) , ( (  icrnl79 ) ( ) ) , ( (  inpck80 ) ( ) ) , ( (  istrip81 ) ( ) ) , ( ( (  ixon82 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2641 .f_c_dash_oflag = ( (  u32_dash_and622 ) ( ( (  raw2641 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg623 ) ( ( (  u32_dash_ors621 ) ( ( (  from_dash_listlike66 ) ( ( (struct Array_68) { ._arr = { ( ( (  opost83 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2641 .f_c_dash_cflag = ( (  u32_dash_or618 ) ( ( (  raw2641 ) .f_c_dash_cflag ) ,  ( (  cs884 ) ( ) ) ) );
    ( (  set565 ) ( ( & ( (  raw2641 ) .f_c_dash_cc ) ) ,  ( (  vmin85 ) ( ) ) ,  (  from_dash_integral6 ( 0 ) ) ) );
    ( (  set565 ) ( ( & ( (  raw2641 ) .f_c_dash_cc ) ) ,  ( (  vtime86 ) ( ) ) ,  (  from_dash_integral6 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  tcsa_dash_flush87 ) ( ) ) ,  ( (  cast_dash_ptr158 ) ( ( & (  raw2641 ) ) ) ) ) );
    return ( * (  orig_dash_termios2640 ) );
}

static  enum Unit_113   disable_dash_raw_dash_mode635 (    struct Termios_90 *  og_dash_termios2644 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  tcsa_dash_flush87 ) ( ) ) ,  ( (  cast_dash_ptr158 ) ( (  og_dash_termios2644 ) ) ) ) );
    return ( Unit_113_Unit );
}

static  struct Maybe_238   read_dash_byte636 (    int32_t  timeout_dash_ms2648 ) {
    struct Pollfd_172  pfd2649 = ( (struct Pollfd_172) { .f_fd = (  from_dash_integral3 ( 0 ) ) , .f_events = (  from_dash_integral5 ( 1 ) ) , .f_revents = (  from_dash_integral5 ( 0 ) ) } );
    if ( (  cmp41 ( ( ( poll ) ( ( (  cast_dash_ptr171 ) ( ( & (  pfd2649 ) ) ) ) ,  (  from_dash_integral3 ( 1 ) ) ,  (  timeout_dash_ms2648 ) ) ) , (  from_dash_integral3 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    char  c2650 = ( ( (  zeroed188 ) ( ) ) );
    if ( (  cmp41 ( ( ( read ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  cast_dash_ptr168 ) ( ( & (  c2650 ) ) ) ) ,  (  from_dash_integral8 ( 1 ) ) ) ) , (  from_dash_integral3 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_238) { .tag = Maybe_238_None_t } );
    }
    return ( ( Maybe_238_Just ) ( (  c2650 ) ) );
}

static  enum Unit_113   flush_dash_stdout637 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr208 ) ( ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   enable_dash_mouse638 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   disable_dash_mouse639 (  ) {
    ( (  print_dash_str374 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_113_Unit );
}

struct env641 {
    ;
    ;
    ;
    ;
    ;
    ;
    bool *  should_dash_resize2654;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct env642 {
    bool *  should_dash_resize2654;
};

struct funenv642 {
    enum Unit_113  (*fun) (  struct env642  ,    int32_t  );
    struct env642 env;
};

struct funenv642  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig643 ) {
    struct funenv642  temp644 = _intr_sigarr [  __intr__sig643 ];
    temp644.fun ( temp644.env ,  __intr__sig643 );
}

static  enum Unit_113  _intr_register_signal (    int32_t  __intr__sig645 ,   struct funenv642  __intr__fun646 ) {
    _intr_sigarr [  __intr__sig645 ] =  __intr__fun646;
    signal(  __intr__sig645 , _intr_sighandle );
    return Unit_113_Unit;
}

static  enum Unit_113   lam642 (   struct env642 env ,    int32_t  dref2661 ) {
    (* env.should_dash_resize2654 ) = ( true );
    return ( Unit_113_Unit );
}

static  struct Tui_305   mk641 (   struct env641 env ) {
    struct Termios_90  og_dash_termios2656 = ( (  enable_dash_raw_dash_mode633 ) ( ) );
    ( (  hide_dash_cursor585 ) ( ) );
    ( (  reset_dash_colors597 ) ( ) );
    ( (  clear_dash_screen598 ) ( ) );
    ( (  enable_dash_mouse638 ) ( ) );
    ( (  flush_dash_stdout637 ) ( ) );
    enum ColorPalette_306  palette2657 = ( (  query_dash_palette592 ) ( ) );
    struct Tuple2_460  dims2658 = ( (  get_dash_dimensions588 ) ( ) );
    uint32_t  fps2659 = (  from_dash_integral4 ( 60 ) );
    struct timespec  last_dash_sync2660 = ( (  now629 ) ( ) );
    struct env642 envinst642 = {
        .should_dash_resize2654 = env.should_dash_resize2654 ,
    };
    ( _intr_register_signal ( (  from_dash_integral3 ( 28 ) ) , ( (struct funenv642){ .fun = lam642, .env = envinst642 } ) ) );
    return ( (struct Tui_305) { .f_width = ( (  fst459 ) ( (  dims2658 ) ) ) , .f_height = ( (  snd461 ) ( (  dims2658 ) ) ) , .f_target_dash_fps = (  fps2659 ) , .f_actual_dash_fps = (  from_dash_integral4 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2660 ) , .f_fps_dash_ts = (  last_dash_sync2660 ) , .f_fps_dash_count = (  from_dash_integral4 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2656 ) , .f_palette = (  palette2657 ) , .f_should_dash_redraw = ( true ) } );
}

static  enum Unit_113   sync647 (    struct Tui_305 *  tui2664 ) {
    if ( (  eq11 ( ( ( * (  tui2664 ) ) .f_target_dash_fps ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        return ( Unit_113_Unit );
    }
    int64_t  frame_dash_ns2665 = (  op_dash_div46 ( (  from_dash_integral2 ( 1000000000 ) ) , ( (  size_dash_i64216 ) ( ( (  u32_dash_size226 ) ( ( ( * (  tui2664 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp648 = ( (  undefined93 ) ( ) );
    struct timespec *  now2666 = ( &temp648 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic69 ) ( ) ) ,  (  now2666 ) ) );
    int64_t  elapsed_dash_ns2667 = (  op_dash_add43 ( (  op_dash_mul45 ( (  op_dash_sub44 ( ( ( * (  now2666 ) ) .tv_sec ) , ( ( ( * (  tui2664 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral2 ( 1000000000 ) ) ) ) , (  op_dash_sub44 ( ( ( * (  now2666 ) ) .tv_nsec ) , ( ( ( * (  tui2664 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2668 = (  op_dash_sub44 ( (  frame_dash_ns2665 ) , (  elapsed_dash_ns2667 ) ) );
    if ( (  cmp38 ( (  sleep_dash_ns2668 ) , (  from_dash_integral2 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp649 = ( (struct timespec) { .tv_sec = (  from_dash_integral2 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2668 ) } );
        struct timespec *  ts2669 = ( &temp649 );
        ( ( nanosleep ) ( (  ts2669 ) ,  ( (  null_dash_ptr211 ) ( ) ) ) );
    }
    struct timespec  temp650 = ( (  undefined93 ) ( ) );
    struct timespec *  last_dash_sync2670 = ( &temp650 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic69 ) ( ) ) ,  (  last_dash_sync2670 ) ) );
    (*  tui2664 ) .f_last_dash_sync = ( * (  last_dash_sync2670 ) );
    (*  tui2664 ) .f_fps_dash_count = (  op_dash_add53 ( ( ( * (  tui2664 ) ) .f_fps_dash_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2671 = (  op_dash_add43 ( (  op_dash_mul45 ( (  op_dash_sub44 ( ( ( ( * (  tui2664 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2664 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral2 ( 1000 ) ) ) ) , (  op_dash_div46 ( (  op_dash_sub44 ( ( ( ( * (  tui2664 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2664 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral2 ( 1000000 ) ) ) ) ) );
    if ( (  cmp38 ( (  fps_dash_elapsed_dash_ms2671 ) , (  from_dash_integral2 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2664 ) .f_actual_dash_fps = ( ( * (  tui2664 ) ) .f_fps_dash_count );
        (*  tui2664 ) .f_fps_dash_count = (  from_dash_integral4 ( 0 ) );
        (*  tui2664 ) .f_fps_dash_ts = ( ( * (  tui2664 ) ) .f_last_dash_sync );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   deinit651 (    struct Tui_305 *  tui2674 ) {
    ( (  disable_dash_mouse639 ) ( ) );
    ( (  show_dash_cursor584 ) ( ) );
    ( (  reset_dash_colors597 ) ( ) );
    ( (  clear_dash_screen598 ) ( ) );
    ( (  reset_dash_cursor_dash_position587 ) ( ) );
    ( (  disable_dash_raw_dash_mode635 ) ( ( & ( ( * (  tui2674 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout637 ) ( ) );
    return ( Unit_113_Unit );
}

static  enum MouseButton_108   btn_dash_to_dash_mouse_dash_button652 (    int64_t  btn2686 ) {
    return ( {  int32_t  dref2687 = ( (  i64_dash_i32222 ) ( (  btn2686 ) ) ) ;  dref2687 == 0 ? ( MouseButton_108_MouseLeft ) :  dref2687 == 1 ? ( MouseButton_108_MouseMiddle ) :  dref2687 == 2 ? ( MouseButton_108_MouseRight ) :  dref2687 == 64 ? ( MouseButton_108_ScrollUp ) :  dref2687 == 65 ? ( MouseButton_108_ScrollDown ) : ( (  panic_prime_531 ) ( ( ( StrConcat_483_StrConcat ) ( ( "incorrect mouse button code: " ) ,  (  btn2686 ) ) ) ) ) ; } );
}

struct Maybe_654 {
    enum {
        Maybe_654_None_t,
        Maybe_654_Just_t,
    } tag;
    union {
        struct {
            struct Key_309  field0;
        } Maybe_654_Just_s;
    } stuff;
};

static struct Maybe_654 Maybe_654_Just (  struct Key_309  field0 ) {
    return ( struct Maybe_654 ) { .tag = Maybe_654_Just_t, .stuff = { .Maybe_654_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_654   parse_dash_ss3653 (    char  c2690 ) {
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_Up_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_Down_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_Right_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_Left_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_Home_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_End_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_F1_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_F2_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_F3_t } ) ) );
    }
    if ( (  eq15 ( (  c2690 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_654_Just ) ( ( (struct Key_309) { .tag = Key_309_F4_t } ) ) );
    }
    return ( (struct Maybe_654) { .tag = Maybe_654_None_t } );
}

static  struct Maybe_307   parse_dash_csi655 (    struct DynStr_100  seq2693 ) {
    if ( (  eq14 ( ( ( (  seq2693 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    char  last2694 = (  elem_dash_get548 ( ( (  seq2693 ) .f_contents ) , (  op_dash_sub58 ( ( ( (  seq2693 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) );
    if ( ( (  eq15 ( (  elem_dash_get548 ( ( (  seq2693 ) .f_contents ) , (  from_dash_integral8 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_231  temp656 = ( (  mk627 ) ( ( (  substr446 ) ( (  seq2693 ) ,  (  from_dash_integral8 ( 1 ) ) ,  ( ( (  seq2693 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_231 *  sc2695 = ( &temp656 );
        struct Maybe_398  dref2696 = ( (  scan_dash_int628 ) ( (  sc2695 ) ) );
        if ( dref2696.tag == Maybe_398_None_t ) {
            return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
        }
        else {
            if ( dref2696.tag == Maybe_398_Just_t ) {
                ( (  next295 ) ( (  sc2695 ) ) );
                struct Maybe_398  dref2698 = ( (  scan_dash_int628 ) ( (  sc2695 ) ) );
                if ( dref2698.tag == Maybe_398_None_t ) {
                    return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
                }
                else {
                    if ( dref2698.tag == Maybe_398_Just_t ) {
                        ( (  next295 ) ( (  sc2695 ) ) );
                        struct Maybe_398  dref2700 = ( (  scan_dash_int628 ) ( (  sc2695 ) ) );
                        if ( dref2700.tag == Maybe_398_None_t ) {
                            return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
                        }
                        else {
                            if ( dref2700.tag == Maybe_398_Just_t ) {
                                return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Mouse ) ( ( (struct MouseEvent_310) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button652 ) ( ( dref2696 .stuff .Maybe_398_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub49 ( ( (  i64_dash_i32222 ) ( ( dref2698 .stuff .Maybe_398_Just_s .field0 ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) , .f_y = (  op_dash_sub49 ( ( (  i64_dash_i32222 ) ( ( dref2700 .stuff .Maybe_398_Just_s .field0 ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) , .f_pressed = (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                            }
                        }
                    }
                }
            }
        }
    }
    if ( (  eq14 ( ( ( (  seq2693 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) {
        if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Up_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Down_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Right_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Left_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Home_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    if ( (  eq15 ( (  last2694 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_231  temp657 = ( (  mk627 ) ( (  seq2693 ) ) );
        struct Scanner_231 *  sc2702 = ( &temp657 );
        struct Maybe_398  dref2703 = ( (  scan_dash_int628 ) ( (  sc2702 ) ) );
        if ( dref2703.tag == Maybe_398_None_t ) {
            return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
        }
        else {
            if ( dref2703.tag == Maybe_398_Just_t ) {
                return ( {  int32_t  dref2705 = ( (  i64_dash_i32222 ) ( ( dref2703 .stuff .Maybe_398_Just_s .field0 ) ) ) ;  dref2705 == 1 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Home_t } ) ) ) ) ) :  dref2705 == 2 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Insert_t } ) ) ) ) ) :  dref2705 == 3 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Delete_t } ) ) ) ) ) :  dref2705 == 4 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_End_t } ) ) ) ) ) :  dref2705 == 5 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_PageUp_t } ) ) ) ) ) :  dref2705 == 6 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_PageDown_t } ) ) ) ) ) :  dref2705 == 15 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F5_t } ) ) ) ) ) :  dref2705 == 17 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F6_t } ) ) ) ) ) :  dref2705 == 18 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F7_t } ) ) ) ) ) :  dref2705 == 19 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F8_t } ) ) ) ) ) :  dref2705 == 20 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F9_t } ) ) ) ) ) :  dref2705 == 21 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F10_t } ) ) ) ) ) :  dref2705 == 23 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F11_t } ) ) ) ) ) :  dref2705 == 24 ? ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_F12_t } ) ) ) ) ) : ( (struct Maybe_307) { .tag = Maybe_307_None_t } ) ; } );
            }
        }
    }
    return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
}

static  struct Maybe_307   read_dash_key658 (  ) {
    char  temp659 = ( (  undefined97 ) ( ) );
    char *  ch2707 = ( &temp659 );
    struct Maybe_238  dref2708 = ( (  read_dash_byte636 ) ( (  from_dash_integral3 ( 0 ) ) ) );
    if ( dref2708.tag == Maybe_238_None_t ) {
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    else {
        if ( dref2708.tag == Maybe_238_Just_t ) {
            (*  ch2707 ) = ( dref2708 .stuff .Maybe_238_Just_s .field0 );
        }
    }
    if ( (  eq12 ( ( (  char_dash_u8522 ) ( ( * (  ch2707 ) ) ) ) , (  from_dash_integral6 ( 13 ) ) ) ) ) {
        return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Enter_t } ) ) ) ) );
    }
    if ( (  eq12 ( ( (  char_dash_u8522 ) ( ( * (  ch2707 ) ) ) ) , (  from_dash_integral6 ( 127 ) ) ) ) ) {
        return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp42 ( ( (  char_dash_u8522 ) ( ( * (  ch2707 ) ) ) ) , (  from_dash_integral6 ( 27 ) ) ) == 0 ) && ( !  eq12 ( ( (  char_dash_u8522 ) ( ( * (  ch2707 ) ) ) ) , (  from_dash_integral6 ( 9 ) ) ) ) ) ) {
        char  letter2710 = ( (  i32_dash_char523 ) ( ( (  u32_dash_i32227 ) ( ( (  u32_dash_or618 ) ( ( (  i32_dash_u32218 ) ( ( (  char_dash_i32521 ) ( ( * (  ch2707 ) ) ) ) ) ) ,  ( (  from_dash_hex579 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( ( Key_309_Ctrl ) ( (  letter2710 ) ) ) ) ) ) );
    }
    if ( ( !  eq12 ( ( (  char_dash_u8522 ) ( ( * (  ch2707 ) ) ) ) , (  from_dash_integral6 ( 27 ) ) ) ) ) {
        if ( (  cmp42 ( ( (  char_dash_u8522 ) ( ( * (  ch2707 ) ) ) ) , (  from_dash_integral6 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key658 ) ( ) );
        } else {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( ( Key_309_Char ) ( ( * (  ch2707 ) ) ) ) ) ) ) );
        }
    }
    char  temp660 = ( (  undefined97 ) ( ) );
    char *  ch22711 = ( &temp660 );
    struct Maybe_238  dref2712 = ( (  read_dash_byte636 ) ( (  from_dash_integral3 ( 50 ) ) ) );
    if ( dref2712.tag == Maybe_238_None_t ) {
        return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Escape_t } ) ) ) ) );
    }
    else {
        if ( dref2712.tag == Maybe_238_Just_t ) {
            (*  ch22711 ) = ( dref2712 .stuff .Maybe_238_Just_s .field0 );
        }
    }
    if ( (  eq15 ( ( * (  ch22711 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_141  temp661 = ( ( (  zeroed194 ) ( ) ) );
        struct Array_141 *  seq2714 = ( &temp661 );
        int32_t  slen2715 = (  from_dash_integral3 ( 0 ) );
        while ( (  cmp41 ( (  slen2715 ) , (  from_dash_integral3 ( 31 ) ) ) == 0 ) ) {
            char  temp662 = ( (  undefined97 ) ( ) );
            char *  sc2716 = ( &temp662 );
            struct Maybe_238  dref2717 = ( (  read_dash_byte636 ) ( (  from_dash_integral3 ( 50 ) ) ) );
            if ( dref2717.tag == Maybe_238_None_t ) {
                break;
            }
            else {
                if ( dref2717.tag == Maybe_238_Just_t ) {
                    (*  sc2716 ) = ( dref2717 .stuff .Maybe_238_Just_s .field0 );
                }
            }
            ( (  set566 ) ( (  seq2714 ) ,  ( (  i32_dash_size220 ) ( (  slen2715 ) ) ) ,  ( * (  sc2716 ) ) ) );
            slen2715 = (  op_dash_add48 ( (  slen2715 ) , (  from_dash_integral3 ( 1 ) ) ) );
            if ( ( (  cmp42 ( ( (  char_dash_u8522 ) ( ( * (  sc2716 ) ) ) ) , (  from_dash_integral6 ( 64 ) ) ) != 0 ) && (  cmp42 ( ( (  char_dash_u8522 ) ( ( * (  sc2716 ) ) ) ) , (  from_dash_integral6 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi655 ) ( ( (struct DynStr_100) { .f_contents = ( (  subslice447 ) ( ( (  as_dash_slice567 ) ( (  seq2714 ) ) ) ,  (  from_dash_integral8 ( 0 ) ) ,  ( (  i32_dash_size220 ) ( (  slen2715 ) ) ) ) ) } ) ) );
    }
    if ( (  eq15 ( ( * (  ch22711 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp663 = ( (  undefined97 ) ( ) );
        char *  sc2719 = ( &temp663 );
        struct Maybe_238  dref2720 = ( (  read_dash_byte636 ) ( (  from_dash_integral3 ( 50 ) ) ) );
        if ( dref2720.tag == Maybe_238_None_t ) {
            return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Escape_t } ) ) ) ) );
        }
        else {
            if ( dref2720.tag == Maybe_238_Just_t ) {
                (*  sc2719 ) = ( dref2720 .stuff .Maybe_238_Just_s .field0 );
            }
        }
        struct Maybe_654  dref2722 = ( (  parse_dash_ss3653 ) ( ( * (  sc2719 ) ) ) );
        if ( dref2722.tag == Maybe_654_None_t ) {
            return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
        }
        else {
            if ( dref2722.tag == Maybe_654_Just_t ) {
                return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( dref2722 .stuff .Maybe_654_Just_s .field0 ) ) ) ) );
            }
        }
    }
    return ( ( Maybe_307_Just ) ( ( ( InputEvent_308_Key ) ( ( (struct Key_309) { .tag = Key_309_Escape_t } ) ) ) ) );
}

static  bool   update_dash_dimensions304 (   struct env304 env ,    struct Tui_305 *  tui2726 ) {
    if ( ( ! ( * ( env.should_dash_resize2654 ) ) ) ) {
        return ( false );
    }
    (*  tui2726 ) .f_should_dash_redraw = ( true );
    (* env.should_dash_resize2654 ) = ( false );
    struct Tuple2_460  dim2727 = ( (  get_dash_dimensions588 ) ( ) );
    uint32_t  w2728 = ( (  fst459 ) ( (  dim2727 ) ) );
    uint32_t  h2729 = ( (  snd461 ) ( (  dim2727 ) ) );
    (*  tui2726 ) .f_width = (  w2728 );
    (*  tui2726 ) .f_height = (  h2729 );
    return ( true );
}

static  struct Maybe_307   read_dash_event303 (   struct env303 env ,    struct Tui_305 *  tui2732 ) {
    struct funenv304  temp664 = ( (struct funenv304){ .fun = update_dash_dimensions304, .env =  env.envinst304  } );
    ( temp664.fun ( temp664.env ,  (  tui2732 ) ) );
    struct Maybe_307  dref2733 = ( (  read_dash_key658 ) ( ) );
    if ( dref2733.tag == Maybe_307_None_t ) {
        return ( (struct Maybe_307) { .tag = Maybe_307_None_t } );
    }
    else {
        if ( dref2733.tag == Maybe_307_Just_t ) {
            (*  tui2732 ) .f_should_dash_redraw = ( true );
            return ( ( Maybe_307_Just ) ( ( dref2733 .stuff .Maybe_307_Just_s .field0 ) ) );
        }
    }
}

static  bool   should_dash_redraw665 (    struct Tui_305 *  tui2737 ) {
    bool  redraw2738 = ( ( * (  tui2737 ) ) .f_should_dash_redraw );
    (*  tui2737 ) .f_should_dash_redraw = ( false );
    return (  redraw2738 );
}

static  struct Cell_17   lam667 (    struct Cell_17  dref2763 ) {
    return ( (struct Cell_17) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  struct Cell_17   lam668 (    struct Cell_17  dref2765 ) {
    return ( (struct Cell_17) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  struct Screen_356   mk_dash_screen666 (    struct Tui_305 *  tui2759 ,    enum CAllocator_333  al2761 ) {
    struct Slice_316  cur2762 = ( (  allocate553 ) ( (  al2761 ) ,  ( (  u32_dash_size226 ) ( (  op_dash_mul54 ( ( ( * (  tui2759 ) ) .f_width ) , ( ( * (  tui2759 ) ) .f_height ) ) ) ) ) ) );
    ( (  map549 ) ( (  cur2762 ) ,  (  lam667 ) ) );
    struct Slice_316  prev2764 = ( (  allocate553 ) ( (  al2761 ) ,  ( (  u32_dash_size226 ) ( (  op_dash_mul54 ( ( ( * (  tui2759 ) ) .f_width ) , ( ( * (  tui2759 ) ) .f_height ) ) ) ) ) ) );
    ( (  map550 ) ( (  prev2764 ) ,  (  lam668 ) ) );
    return ( (struct Screen_356) { .f_current = (  cur2762 ) , .f_previous = (  prev2764 ) , .f_al = (  al2761 ) , .f_tui = (  tui2759 ) , .f_requires_dash_full_dash_redraw = ( true ) , .f_default_dash_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  enum Unit_113   free_dash_screen669 (    struct Screen_356 *  screen2768 ) {
    enum CAllocator_333  al2769 = ( ( * (  screen2768 ) ) .f_al );
    ( (  free558 ) ( (  al2769 ) ,  ( ( * (  screen2768 ) ) .f_current ) ) );
    ( (  free558 ) ( (  al2769 ) ,  ( ( * (  screen2768 ) ) .f_previous ) ) );
    return ( Unit_113_Unit );
}

static  struct Cell_17   lam671 (    struct Cell_17  dref2773 ) {
    return ( (struct Cell_17) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  enum Unit_113   clear_dash_screen670 (    struct Screen_356 *  screen2772 ) {
    ( (  map551 ) ( ( ( * (  screen2772 ) ) .f_current ) ,  (  lam671 ) ) );
    return ( Unit_113_Unit );
}

struct RenderState_673 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_18  f_fg;
    struct Color_18  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_113   emit_dash_cell672 (    struct RenderState_673 *  rs2777 ,    struct Cell_17 *  c2779 ,    uint32_t  x2781 ,    uint32_t  y2783 ) {
    if ( ( ( !  eq11 ( (  x2781 ) , ( ( * (  rs2777 ) ) .f_x ) ) ) || ( !  eq11 ( (  y2783 ) , ( ( * (  rs2777 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to586 ) ( (  x2781 ) ,  (  y2783 ) ) );
        (*  rs2777 ) .f_x = (  x2781 );
        (*  rs2777 ) .f_y = (  y2783 );
    }
    char  char2784 = ( ( * (  c2779 ) ) .f_c );
    struct Color_18  bg2785 = ( ( * (  c2779 ) ) .f_bg );
    if ( ( ( (  eq15 ( (  char2784 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq15 ( (  char2784 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq15 ( (  char2784 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2784 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2785 = ( ( Color_18_Color8 ) ( ( Color8_19_Red8 ) ) );
    }
    if ( ( !  eq23 ( ( ( * (  rs2777 ) ) .f_fg ) , ( ( * (  c2779 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg603 ) ( ( ( * (  c2779 ) ) .f_fg ) ) );
        (*  rs2777 ) .f_fg = ( ( * (  c2779 ) ) .f_fg );
    }
    if ( ( !  eq23 ( ( ( * (  rs2777 ) ) .f_bg ) , (  bg2785 ) ) ) ) {
        ( (  set_dash_bg604 ) ( (  bg2785 ) ) );
        (*  rs2777 ) .f_bg = (  bg2785 );
    }
    ( (  print_dash_str381 ) ( (  char2784 ) ) );
    (*  rs2777 ) .f_x = (  op_dash_add53 ( ( ( * (  rs2777 ) ) .f_x ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  uint32_t   render_dash_screen674 (    struct Screen_356 *  screen2788 ) {
    int32_t  w2789 = ( (  u32_dash_i32227 ) ( ( ( * ( ( * (  screen2788 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2790 = ( (  u32_dash_i32227 ) ( ( ( * ( ( * (  screen2788 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_673  temp675 = ( (struct RenderState_673) { .f_x = (  from_dash_integral4 ( 0 ) ) , .f_y = (  from_dash_integral4 ( 0 ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_changes = (  from_dash_integral4 ( 0 ) ) } );
    struct RenderState_673 *  rs2791 = ( &temp675 );
    ( (  move_dash_cursor_dash_to586 ) ( (  from_dash_integral4 ( 0 ) ) ,  (  from_dash_integral4 ( 0 ) ) ) );
    struct RangeIter_250  temp676 =  into_dash_iter249 ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  h2790 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_252  __cond677 =  next251 (&temp676);
        if (  __cond677 .tag == 0 ) {
            break;
        }
        int32_t  y2793 =  __cond677 .stuff .Maybe_252_Just_s .field0;
        struct RangeIter_250  temp678 =  into_dash_iter249 ( ( (  to247 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  w2789 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_252  __cond679 =  next251 (&temp678);
            if (  __cond679 .tag == 0 ) {
                break;
            }
            int32_t  x2795 =  __cond679 .stuff .Maybe_252_Just_s .field0;
            size_t  i2796 = ( (  i32_dash_size220 ) ( (  op_dash_add48 ( (  op_dash_mul50 ( (  y2793 ) , (  w2789 ) ) ) , (  x2795 ) ) ) ) );
            struct Cell_17 *  cur2797 = ( (  get_dash_ptr539 ) ( ( ( * (  screen2788 ) ) .f_current ) ,  (  i2796 ) ) );
            struct Cell_17 *  prev2798 = ( (  get_dash_ptr539 ) ( ( ( * (  screen2788 ) ) .f_previous ) ,  (  i2796 ) ) );
            if ( ( ( !  eq16 ( (  cur2797 ) , (  prev2798 ) ) ) || ( ( * (  screen2788 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2791 ) .f_changes = (  op_dash_add53 ( ( ( * (  rs2791 ) ) .f_changes ) , (  from_dash_integral4 ( 1 ) ) ) );
                ( (  emit_dash_cell672 ) ( (  rs2791 ) ,  (  cur2797 ) ,  ( (  i32_dash_u32218 ) ( (  x2795 ) ) ) ,  ( (  i32_dash_u32218 ) ( (  y2793 ) ) ) ) );
                (*  prev2798 ) = ( * (  cur2797 ) );
            }
        }
    }
    (*  screen2788 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors597 ) ( ) );
    ( (  flush_dash_stdout637 ) ( ) );
    return ( ( * (  rs2791 ) ) .f_changes );
}

struct env680 {
    ;
    ;
    struct env304 envinst304;
    ;
    ;
    ;
};

static  bool   resize_dash_screen_dash_if_dash_needed680 (   struct env680 env ,    struct Screen_356 *  screen2801 ) {
    struct Tui_305 *  tui2802 = ( ( * (  screen2801 ) ) .f_tui );
    struct funenv304  temp681 = ( (struct funenv304){ .fun = update_dash_dimensions304, .env =  env.envinst304  } );
    ( temp681.fun ( temp681.env ,  (  tui2802 ) ) );
    if ( ( ! ( ( * (  tui2802 ) ) .f_should_dash_redraw ) ) ) {
        return ( false );
    }
    (*  screen2801 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2803 = ( ( * ( ( * (  screen2801 ) ) .f_tui ) ) .f_width );
    uint32_t  h2804 = ( ( * ( ( * (  screen2801 ) ) .f_tui ) ) .f_height );
    size_t  nusz2805 = ( (  u32_dash_size226 ) ( (  op_dash_mul54 ( (  w2803 ) , (  h2804 ) ) ) ) );
    if ( (  cmp40 ( (  nusz2805 ) , ( ( ( * (  screen2801 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_356  nuscreen2806 = ( (  mk_dash_screen666 ) ( (  tui2802 ) ,  ( ( * (  screen2801 ) ) .f_al ) ) );
    (*  screen2801 ) .f_current = ( (  nuscreen2806 ) .f_current );
    (*  screen2801 ) .f_previous = ( (  nuscreen2806 ) .f_previous );
    return ( true );
}

static  enum Unit_113   set_dash_screen_dash_fg682 (    struct Screen_356 *  screen2809 ,    struct Color_18  c2811 ) {
    (*  screen2809 ) .f_default_dash_fg = (  c2811 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_screen_dash_bg683 (    struct Screen_356 *  screen2814 ,    struct Color_18  c2816 ) {
    (*  screen2814 ) .f_default_dash_bg = (  c2816 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   put_dash_char684 (    struct Screen_356 *  screen2847 ,    char  c2849 ,    int32_t  x2851 ,    int32_t  y2853 ) {
    int32_t  w2854 = ( (  u32_dash_i32227 ) ( ( ( * ( ( * (  screen2847 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp41 ( (  x2851 ) , (  w2854 ) ) != 0 ) || (  cmp41 ( (  y2853 ) , ( (  u32_dash_i32227 ) ( ( ( * ( ( * (  screen2847 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp41 ( (  x2851 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) ) || (  cmp41 ( (  y2853 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_113_Unit );
    }
    size_t  i2855 = ( (  i32_dash_size220 ) ( (  op_dash_add48 ( (  op_dash_mul50 ( (  y2853 ) , (  w2854 ) ) ) , (  x2851 ) ) ) ) );
    struct Color_18  fg2856 = ( ( * (  screen2847 ) ) .f_default_dash_fg );
    struct Color_18  bg2857 = ( ( * (  screen2847 ) ) .f_default_dash_bg );
    char  c2858 = (  c2849 );
    ( (  set545 ) ( ( ( * (  screen2847 ) ) .f_current ) ,  (  i2855 ) ,  ( (struct Cell_17) { .f_c = (  c2858 ) , .f_fg = (  fg2856 ) , .f_bg = (  bg2857 ) } ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   lam355 (   struct env355 env ,    struct Tuple2_271  dref2872 ) {
    ( (  put_dash_char684 ) ( ( env.screen2861 ) ,  ( dref2872 .field0 ) ,  (  op_dash_add48 ( ( env.x2870 ) , ( dref2872 .field1 ) ) ) ,  ( env.y2867 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   draw_dash_str685 (    struct Screen_356 *  screen2861 ,    struct StrConcat_410  s2863 ,    int32_t  x2865 ,    int32_t  y2867 ) {
    int32_t  w2868 = ( (  u32_dash_i32227 ) ( ( ( * ( ( * (  screen2861 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp41 ( (  y2867 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) || (  cmp41 ( (  y2867 ) , ( (  u32_dash_i32227 ) ( ( ( * ( ( * (  screen2861 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_113_Unit );
    }
    int32_t  i2869 = (  op_dash_add48 ( (  op_dash_mul50 ( (  y2867 ) , (  w2868 ) ) ) , (  x2865 ) ) );
    int32_t  x2870 = ( (  min463 ) ( (  x2865 ) ,  (  w2868 ) ) );
    size_t  max_dash_len2871 = ( (  i32_dash_size220 ) ( (  op_dash_sub49 ( (  w2868 ) , (  x2870 ) ) ) ) );
    struct env355 envinst355 = {
        .y2867 =  y2867 ,
        .screen2861 =  screen2861 ,
        .x2870 =  x2870 ,
    };
    ( (  for_dash_each354 ) ( ( (  zip288 ) ( ( (  chars518 ) ( (  s2863 ) ) ) ,  ( (  from253 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv355){ .fun = lam355, .env = envinst355 } ) ) );
    return ( Unit_113_Unit );
}

static  struct Slice_543   get686 (  ) {
    return ( (struct Slice_543) { .f_ptr = ( (  offset_dash_ptr121 ) ( ( _global_argv ) ,  (  from_dash_integral2 ( 1 ) ) ) ) , .f_count = (  op_dash_sub58 ( ( _global_argc ) , (  from_dash_integral8 ( 1 ) ) ) ) } );
}

struct ClockTime_688 {
    uint32_t  f_h;
    uint8_t  f_m;
    uint8_t  f_s;
};

static  struct ClockTime_688   clock_dash_time_dash_from_dash_secs687 (    int64_t  secs2901 ) {
    if ( (  cmp38 ( (  secs2901 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        ( (  panic528 ) ( ( "negative seconds!" ) ) );
    }
    uint8_t  s2902 = ( (  i64_dash_u8221 ) ( ( (  mod462 ) ( (  secs2901 ) ,  (  from_dash_integral2 ( 60 ) ) ) ) ) );
    uint8_t  m2903 = ( (  i64_dash_u8221 ) ( ( (  mod462 ) ( (  op_dash_div46 ( (  secs2901 ) , (  from_dash_integral2 ( 60 ) ) ) ) ,  (  from_dash_integral2 ( 60 ) ) ) ) ) );
    uint32_t  h2904 = ( (  i64_dash_u32223 ) ( (  op_dash_div46 ( (  secs2901 ) , (  op_dash_mul45 ( (  from_dash_integral2 ( 60 ) ) , (  from_dash_integral2 ( 60 ) ) ) ) ) ) ) );
    return ( (struct ClockTime_688) { .f_h = (  h2904 ) , .f_m = (  m2903 ) , .f_s = (  s2902 ) } );
}

static  enum Unit_113   cb689 (    struct Screen_356 *  screen2907 ,    const char*  s2909 ,    int32_t  x2911 ,    int32_t  y2913 ) {
    struct Color_18  og_dash_bg2914 = ( ( * (  screen2907 ) ) .f_default_dash_bg );
    struct Zip_268  temp690 =  into_dash_iter267 ( ( (  zip290 ) ( ( (  chars465 ) ( (  s2909 ) ) ) ,  ( (  from253 ) ( (  x2911 ) ) ) ) ) );
    while (true) {
        struct Maybe_270  __cond691 =  next285 (&temp690);
        if (  __cond691 .tag == 0 ) {
            break;
        }
        struct Tuple2_271  dref2915 =  __cond691 .stuff .Maybe_270_Just_s .field0;
        if ( ( (  is_dash_whitespace568 ) ( ( dref2915 .field0 ) ) ) ) {
            ( (  set_dash_screen_dash_bg683 ) ( (  screen2907 ) ,  (  og_dash_bg2914 ) ) );
            ( (  put_dash_char684 ) ( (  screen2907 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  ( dref2915 .field1 ) ,  (  y2913 ) ) );
        } else {
            ( (  set_dash_screen_dash_bg683 ) ( (  screen2907 ) ,  ( ( * (  screen2907 ) ) .f_default_dash_fg ) ) );
            ( (  put_dash_char684 ) ( (  screen2907 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  ( dref2915 .field1 ) ,  (  y2913 ) ) );
        }
    }
    ( (  set_dash_screen_dash_bg683 ) ( (  screen2907 ) ,  (  og_dash_bg2914 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   draw_dash_digit692 (    struct Screen_356 *  screen2920 ,    char  digit2922 ,    int32_t  x2924 ,    int32_t  y2926 ) {
    if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) {
        ( (  cb689 ) ( (  screen2920 ) ,  ( " 0000 " ) ,  (  x2924 ) ,  (  y2926 ) ) );
        ( (  cb689 ) ( (  screen2920 ) ,  ( "00  00" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
        ( (  cb689 ) ( (  screen2920 ) ,  ( "00  00" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
        ( (  cb689 ) ( (  screen2920 ) ,  ( "00  00" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
        ( (  cb689 ) ( (  screen2920 ) ,  ( " 0000 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
    } else {
        if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "1" ) ) ) ) ) ) {
            ( (  cb689 ) ( (  screen2920 ) ,  ( "1111  " ) ,  (  x2924 ) ,  (  y2926 ) ) );
            ( (  cb689 ) ( (  screen2920 ) ,  ( "  11  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
            ( (  cb689 ) ( (  screen2920 ) ,  ( "  11  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
            ( (  cb689 ) ( (  screen2920 ) ,  ( "  11  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
            ( (  cb689 ) ( (  screen2920 ) ,  ( "111111" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
        } else {
            if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "2" ) ) ) ) ) ) {
                ( (  cb689 ) ( (  screen2920 ) ,  ( " 2222 " ) ,  (  x2924 ) ,  (  y2926 ) ) );
                ( (  cb689 ) ( (  screen2920 ) ,  ( "22  22" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                ( (  cb689 ) ( (  screen2920 ) ,  ( "   22 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                ( (  cb689 ) ( (  screen2920 ) ,  ( "  22  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                ( (  cb689 ) ( (  screen2920 ) ,  ( "222222" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
            } else {
                if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "3" ) ) ) ) ) ) {
                    ( (  cb689 ) ( (  screen2920 ) ,  ( " 3333 " ) ,  (  x2924 ) ,  (  y2926 ) ) );
                    ( (  cb689 ) ( (  screen2920 ) ,  ( "33  33" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                    ( (  cb689 ) ( (  screen2920 ) ,  ( "   333" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                    ( (  cb689 ) ( (  screen2920 ) ,  ( "33  33" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                    ( (  cb689 ) ( (  screen2920 ) ,  ( " 3333 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                } else {
                    if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "4" ) ) ) ) ) ) {
                        ( (  cb689 ) ( (  screen2920 ) ,  ( "44  44" ) ,  (  x2924 ) ,  (  y2926 ) ) );
                        ( (  cb689 ) ( (  screen2920 ) ,  ( "44  44" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                        ( (  cb689 ) ( (  screen2920 ) ,  ( "444444" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                        ( (  cb689 ) ( (  screen2920 ) ,  ( "    44" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                        ( (  cb689 ) ( (  screen2920 ) ,  ( "    44" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                    } else {
                        if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "5" ) ) ) ) ) ) {
                            ( (  cb689 ) ( (  screen2920 ) ,  ( "555555" ) ,  (  x2924 ) ,  (  y2926 ) ) );
                            ( (  cb689 ) ( (  screen2920 ) ,  ( "55    " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                            ( (  cb689 ) ( (  screen2920 ) ,  ( "55555 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                            ( (  cb689 ) ( (  screen2920 ) ,  ( "    55" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                            ( (  cb689 ) ( (  screen2920 ) ,  ( "55555 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                        } else {
                            if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "6" ) ) ) ) ) ) {
                                ( (  cb689 ) ( (  screen2920 ) ,  ( " 6666 " ) ,  (  x2924 ) ,  (  y2926 ) ) );
                                ( (  cb689 ) ( (  screen2920 ) ,  ( "66    " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                ( (  cb689 ) ( (  screen2920 ) ,  ( "66666 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                ( (  cb689 ) ( (  screen2920 ) ,  ( "66  66" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                ( (  cb689 ) ( (  screen2920 ) ,  ( " 6666 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                            } else {
                                if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "7" ) ) ) ) ) ) {
                                    ( (  cb689 ) ( (  screen2920 ) ,  ( "777777" ) ,  (  x2924 ) ,  (  y2926 ) ) );
                                    ( (  cb689 ) ( (  screen2920 ) ,  ( "   77 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                    ( (  cb689 ) ( (  screen2920 ) ,  ( "  77  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                    ( (  cb689 ) ( (  screen2920 ) ,  ( " 77   " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                    ( (  cb689 ) ( (  screen2920 ) ,  ( "77    " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                } else {
                                    if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "8" ) ) ) ) ) ) {
                                        ( (  cb689 ) ( (  screen2920 ) ,  ( " 8888 " ) ,  (  x2924 ) ,  (  y2926 ) ) );
                                        ( (  cb689 ) ( (  screen2920 ) ,  ( "88  88" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                        ( (  cb689 ) ( (  screen2920 ) ,  ( " 8888 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                        ( (  cb689 ) ( (  screen2920 ) ,  ( "88  88" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                        ( (  cb689 ) ( (  screen2920 ) ,  ( " 8888 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                    } else {
                                        if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) {
                                            ( (  cb689 ) ( (  screen2920 ) ,  ( " 9999 " ) ,  (  x2924 ) ,  (  y2926 ) ) );
                                            ( (  cb689 ) ( (  screen2920 ) ,  ( "99  99" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                            ( (  cb689 ) ( (  screen2920 ) ,  ( " 99999" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                            ( (  cb689 ) ( (  screen2920 ) ,  ( "    99" ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                            ( (  cb689 ) ( (  screen2920 ) ,  ( " 9999 " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                        } else {
                                            if ( (  eq15 ( (  digit2922 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                                ( (  cb689 ) ( (  screen2920 ) ,  ( "      " ) ,  (  x2924 ) ,  (  y2926 ) ) );
                                                ( (  cb689 ) ( (  screen2920 ) ,  ( "  ::  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                                ( (  cb689 ) ( (  screen2920 ) ,  ( "      " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                                ( (  cb689 ) ( (  screen2920 ) ,  ( "  ::  " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                                ( (  cb689 ) ( (  screen2920 ) ,  ( "      " ) ,  (  x2924 ) ,  (  op_dash_add48 ( (  y2926 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                            } else {
                                                ( (  unreachable527 ) ( ) );
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
    return ( Unit_113_Unit );
}

struct funenv641 {
    struct Tui_305  (*fun) (  struct env641  );
    struct env641 env;
};

struct funenv615 {
    const char*  (*fun) (  struct env615  ,    struct StrConcat_473  ,    enum CAllocator_333  );
    struct env615 env;
};

static  struct Maybe_307   lam302 (   struct env302 env ) {
    struct funenv303  temp698 = ( (struct funenv303){ .fun = read_dash_event303, .env =  env.envinst303  } );
    return ( temp698.fun ( temp698.env ,  ( env.tui2927 ) ) );
}

struct funenv680 {
    bool  (*fun) (  struct env680  ,    struct Screen_356 *  );
    struct env680 env;
};

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1722 = ( (  from_dash_integral8 ( 8 ) ) );
    size_t  growth_dash_factor1723 = ( (  from_dash_integral8 ( 2 ) ) );
    size_t  shrink_dash_factor1724 = ( (  from_dash_integral8 ( 8 ) ) );
    struct env335 envinst335 = {
        .growth_dash_factor1723 =  growth_dash_factor1723 ,
        .starting_dash_size1722 =  starting_dash_size1722 ,
    };
    struct env334 envinst334 = {
        .envinst335 = envinst335 ,
    };
    struct env605 envinst605 = {
        .envinst334 = envinst334 ,
    };
    struct env607 envinst607 = {
        .envinst334 = envinst334 ,
    };
    struct env611 envinst611 = {
        .envinst605 = envinst605 ,
        .envinst607 = envinst607 ,
    };
    struct env615 envinst615 = {
        .envinst611 = envinst611 ,
    };
    bool  temp640 = ( false );
    bool *  should_dash_resize2654 = ( &temp640 );
    struct env641 envinst641 = {
        .should_dash_resize2654 =  should_dash_resize2654 ,
    };
    struct env304 envinst304 = {
        .should_dash_resize2654 =  should_dash_resize2654 ,
    };
    struct env303 envinst303 = {
        .envinst304 = envinst304 ,
    };
    struct env680 envinst680 = {
        .envinst304 = envinst304 ,
    };
    struct funenv641  temp694 = ( (struct funenv641){ .fun = mk641, .env =  envinst641  } );
    struct Tui_305  temp693 = ( temp694.fun ( temp694.env ) );
    struct Tui_305 *  tui2927 = ( &temp693 );
    enum CAllocator_333  al2928 = ( (  idc552 ) ( ) );
    struct Screen_356  temp695 = ( (  mk_dash_screen666 ) ( (  tui2927 ) ,  (  al2928 ) ) );
    struct Screen_356 *  screen2929 = ( &temp695 );
    struct Slice_543  args2932 = ( (  get686 ) ( ) );
    struct timespec  start_dash_time2933 = ( (  now629 ) ( ) );
    struct Maybe_215  dref2934 = ( (  try_dash_get542 ) ( (  args2932 ) ,  (  from_dash_integral8 ( 0 ) ) ) );
    if ( dref2934.tag == Maybe_215_Just_t ) {
        if ( (  eq524 ( ( dref2934 .stuff .Maybe_215_Just_s .field0 ) , ( "-p" ) ) ) ) {
            const char*  filename2936 = ( "timer-start" );
            struct Maybe_429  dref2937 = ( (  try_dash_read_dash_contents624 ) ( (  filename2936 ) ,  (  al2928 ) ) );
            if ( dref2937.tag == Maybe_429_Just_t ) {
                int64_t  num2939 = ( (  or_dash_fail535 ) ( ( (  parse_dash_int572 ) ( ( (  or_dash_fail534 ) ( ( (  head428 ) ( ( (  lines569 ) ( ( dref2937 .stuff .Maybe_429_Just_s .field0 ) ) ) ) ) ,  ( "empty timer file" ) ) ) ) ) ,  ( "could not parse first timestamp" ) ) );
                start_dash_time2933 = ( (struct timespec) { .tv_sec = (  num2939 ) , .tv_nsec = (  from_dash_integral2 ( 0 ) ) } );
                ( (  free562 ) ( ( dref2937 .stuff .Maybe_429_Just_s .field0 ) ,  (  al2928 ) ) );
            }
            else {
                if ( dref2937.tag == Maybe_429_None_t ) {
                    struct funenv615  temp696 = ( (struct funenv615){ .fun = mk_dash_const_dash_str615, .env =  envinst615  } );
                    const char*  s2940 = ( temp696.fun ( temp696.env ,  ( ( StrConcat_473_StrConcat ) ( ( (  start_dash_time2933 ) .tv_sec ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ,  (  al2928 ) ) );
                    ( (  write_dash_contents626 ) ( (  filename2936 ) ,  (  s2940 ) ) );
                    ( (  free_dash_const_dash_str617 ) ( (  s2940 ) ,  (  al2928 ) ) );
                }
            }
        } else {
            int64_t  num2941 = ( (  or_dash_fail535 ) ( ( (  parse_dash_int574 ) ( ( dref2934 .stuff .Maybe_215_Just_s .field0 ) ) ) ,  ( "could not parse first timestamp" ) ) );
            start_dash_time2933 = ( (struct timespec) { .tv_sec = (  num2941 ) , .tv_nsec = (  from_dash_integral2 ( 0 ) ) } );
        }
    }
    else {
        if ( dref2934.tag == Maybe_215_None_t ) {
        }
    }
    struct Duration_632  last_dash_diff2942 = ( (  diff631 ) ( (  start_dash_time2933 ) ,  (  start_dash_time2933 ) ) );
    ( (  set_dash_screen_dash_fg682 ) ( (  screen2929 ) ,  ( ( Color_18_Color8 ) ( ( Color8_19_White8 ) ) ) ) );
    bool  running2943 = ( true );
    while ( (  running2943 ) ) {
        struct env302 envinst302 = {
            .envinst303 = envinst303 ,
            .tui2927 =  tui2927 ,
        };
        struct FunIter_301  temp697 =  into_dash_iter300 ( ( (  from_dash_function313 ) ( ( (struct funenv302){ .fun = lam302, .env = envinst302 } ) ) ) );
        while (true) {
            struct Maybe_307  __cond699 =  next311 (&temp697);
            if (  __cond699 .tag == 0 ) {
                break;
            }
            struct InputEvent_308  ev2945 =  __cond699 .stuff .Maybe_307_Just_s .field0;
            struct InputEvent_308  dref2946 = (  ev2945 );
            if ( dref2946.tag == InputEvent_308_Key_t && dref2946 .stuff .InputEvent_308_Key_s .field0.tag == Key_309_Char_t ) {
                if ( (  eq15 ( ( dref2946 .stuff .InputEvent_308_Key_s .field0 .stuff .Key_309_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                    running2943 = ( false );
                }
            }
            else {
                if ( true ) {
                }
            }
        }
        struct funenv680  temp700 = ( (struct funenv680){ .fun = resize_dash_screen_dash_if_dash_needed680, .env =  envinst680  } );
        ( temp700.fun ( temp700.env ,  (  screen2929 ) ) );
        struct Duration_632  diff2948 = ( (  diff631 ) ( ( (  now629 ) ( ) ) ,  (  start_dash_time2933 ) ) );
        if ( ( ( (  should_dash_redraw665 ) ( (  tui2927 ) ) ) || ( !  eq9 ( ( (  diff2948 ) .f_secs ) , ( (  last_dash_diff2942 ) .f_secs ) ) ) ) ) {
            last_dash_diff2942 = (  diff2948 );
            ( (  clear_dash_screen670 ) ( (  screen2929 ) ) );
            struct ClockTime_688  ct2949 = ( (  clock_dash_time_dash_from_dash_secs687 ) ( ( (  diff2948 ) .f_secs ) ) );
            struct PadZeroes_265  s2950 = ( (  pad_dash_zeroes519 ) ( ( (  u8_dash_i32229 ) ( ( (  ct2949 ) .f_s ) ) ) ,  (  from_dash_integral6 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_265  m2951 = ( (  pad_dash_zeroes519 ) ( ( (  u8_dash_i32229 ) ( ( (  ct2949 ) .f_m ) ) ) ,  (  from_dash_integral6 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_265  h2952 = ( (  pad_dash_zeroes519 ) ( ( (  u32_dash_i32227 ) ( ( (  ct2949 ) .f_h ) ) ) ,  (  from_dash_integral6 ( 2 ) ) ,  ( true ) ) );
            struct StrConcat_410  timer_dash_str2953 = ( ( StrConcat_410_StrConcat ) ( ( ( StrConcat_411_StrConcat ) ( ( ( StrConcat_412_StrConcat ) ( ( ( StrConcat_413_StrConcat ) ( (  h2952 ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  m2951 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  s2950 ) ) );
            size_t  timer_dash_sz2954 = (  op_dash_sub58 ( (  op_dash_mul59 ( ( (  count426 ) ( (  timer_dash_str2953 ) ) ) , (  from_dash_integral8 ( 7 ) ) ) ) , (  from_dash_integral8 ( 1 ) ) ) );
            int32_t  timer_dash_h2955 = (  from_dash_integral3 ( 6 ) );
            int32_t  begin_dash_x2956 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32227 ) ( ( ( * (  tui2927 ) ) .f_width ) ) ) , ( (  size_dash_i32224 ) ( (  timer_dash_sz2954 ) ) ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
            int32_t  begin_dash_y2957 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32227 ) ( ( ( * (  tui2927 ) ) .f_height ) ) ) , (  timer_dash_h2955 ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
            if ( ( (  cmp41 ( (  begin_dash_x2956 ) , (  from_dash_integral3 ( 0 ) ) ) != 0 ) && (  cmp41 ( (  begin_dash_y2957 ) , (  from_dash_integral3 ( 0 ) ) ) != 0 ) ) ) {
                struct Zip_260  temp701 =  into_dash_iter259 ( ( (  zip288 ) ( ( (  chars518 ) ( (  timer_dash_str2953 ) ) ) ,  ( (  from253 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_270  __cond702 =  next273 (&temp701);
                    if (  __cond702 .tag == 0 ) {
                        break;
                    }
                    struct Tuple2_271  dref2958 =  __cond702 .stuff .Maybe_270_Just_s .field0;
                    ( (  draw_dash_digit692 ) ( (  screen2929 ) ,  ( dref2958 .field0 ) ,  (  op_dash_add48 ( (  begin_dash_x2956 ) , (  op_dash_mul50 ( ( dref2958 .field1 ) , (  from_dash_integral3 ( 7 ) ) ) ) ) ) ,  (  begin_dash_y2957 ) ) );
                }
            } else {
                size_t  timer_dash_sz2961 = ( (  count426 ) ( (  timer_dash_str2953 ) ) );
                int32_t  timer_dash_h2962 = (  from_dash_integral3 ( 1 ) );
                int32_t  begin_dash_x2963 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32227 ) ( ( ( * (  tui2927 ) ) .f_width ) ) ) , ( (  size_dash_i32224 ) ( (  timer_dash_sz2961 ) ) ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
                int32_t  begin_dash_y2964 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32227 ) ( ( ( * (  tui2927 ) ) .f_height ) ) ) , (  timer_dash_h2962 ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
                ( (  draw_dash_str685 ) ( (  screen2929 ) ,  (  timer_dash_str2953 ) ,  (  begin_dash_x2963 ) ,  (  begin_dash_y2964 ) ) );
            }
            ( (  render_dash_screen674 ) ( (  screen2929 ) ) );
        }
        ( (  sync647 ) ( (  tui2927 ) ) );
    }
    ( (  free_dash_screen669 ) ( (  screen2929 ) ) );
    ( (  deinit651 ) ( (  tui2927 ) ) );
    ( (  println583 ) ( ( (  start_dash_time2933 ) .tv_sec ) ) );
}
