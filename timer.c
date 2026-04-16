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

static  void *   cast_dash_ptr30 (    int32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  size_t   size_dash_of31 (    int32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  int32_t   zeroed28 (  ) {
    int32_t  temp29;
    int32_t  x473 = (  temp29 );
    ( ( memset ) ( ( (  cast_dash_ptr30 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of31 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Color8_19 *   cast32 (    int32_t *  x463 ) {
    return ( (enum Color8_19 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed26 (    enum Color8_19  x476 ) {
    int32_t  temp27 = ( (  zeroed28 ) ( ) );
    int32_t *  y477 = ( &temp27 );
    enum Color8_19 *  yp478 = ( (  cast32 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq25 (    enum Color8_19  l1898 ,    enum Color8_19  r1900 ) {
    return (  eq10 ( ( ( (  cast_dash_on_dash_zeroed26 ) ( (  l1898 ) ) ) ) , ( (  cast_dash_on_dash_zeroed26 ) ( (  r1900 ) ) ) ) );
}

static  enum Color16_20 *   cast36 (    int32_t *  x463 ) {
    return ( (enum Color16_20 * ) (  x463 ) );
}

static  int32_t   cast_dash_on_dash_zeroed34 (    enum Color16_20  x476 ) {
    int32_t  temp35 = ( (  zeroed28 ) ( ) );
    int32_t *  y477 = ( &temp35 );
    enum Color16_20 *  yp478 = ( (  cast36 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  bool   eq33 (    enum Color16_20  l1904 ,    enum Color16_20  r1906 ) {
    return (  eq10 ( ( ( (  cast_dash_on_dash_zeroed34 ) ( (  l1904 ) ) ) ) , ( (  cast_dash_on_dash_zeroed34 ) ( (  r1906 ) ) ) ) );
}

static  bool   eq37 (    struct RGB_21  l1934 ,    struct RGB_21  r1936 ) {
    return ( ( (  eq12 ( ( (  l1934 ) .f_r ) , ( (  r1936 ) .f_r ) ) ) && (  eq12 ( ( (  l1934 ) .f_g ) , ( (  r1936 ) .f_g ) ) ) ) && (  eq12 ( ( (  l1934 ) .f_b ) , ( (  r1936 ) .f_b ) ) ) );
}

static  bool   eq23 (    struct Color_18  l1957 ,    struct Color_18  r1959 ) {
    return ( {  struct Tuple2_24  dref1960 = ( ( Tuple2_24_Tuple2 ) ( (  l1957 ) ,  (  r1959 ) ) ) ; dref1960 .field0.tag == Color_18_ColorDefault_t && dref1960 .field1.tag == Color_18_ColorDefault_t ? ( true ) : dref1960 .field0.tag == Color_18_Color8_t && dref1960 .field1.tag == Color_18_Color8_t ? (  eq25 ( ( dref1960 .field0 .stuff .Color_18_Color8_s .field0 ) , ( dref1960 .field1 .stuff .Color_18_Color8_s .field0 ) ) ) : dref1960 .field0.tag == Color_18_Color16_t && dref1960 .field1.tag == Color_18_Color16_t ? (  eq33 ( ( dref1960 .field0 .stuff .Color_18_Color16_s .field0 ) , ( dref1960 .field1 .stuff .Color_18_Color16_s .field0 ) ) ) : dref1960 .field0.tag == Color_18_Color256_t && dref1960 .field1.tag == Color_18_Color256_t ? (  eq12 ( ( dref1960 .field0 .stuff .Color_18_Color256_s .field0 ) , ( dref1960 .field1 .stuff .Color_18_Color256_s .field0 ) ) ) : dref1960 .field0.tag == Color_18_ColorRGB_t && dref1960 .field1.tag == Color_18_ColorRGB_t ? (  eq37 ( ( dref1960 .field0 .stuff .Color_18_ColorRGB_s .field0 ) , ( dref1960 .field1 .stuff .Color_18_ColorRGB_s .field0 ) ) ) : ( false ) ; } );
}

static  bool   eq22 (    struct Cell_17  l2390 ,    struct Cell_17  r2392 ) {
    if ( ( !  eq15 ( ( (  l2390 ) .f_c ) , ( (  r2392 ) .f_c ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq23 ( ( (  l2390 ) .f_fg ) , ( (  r2392 ) .f_fg ) ) ) ) {
        return ( false );
    }
    if ( ( !  eq23 ( ( (  l2390 ) .f_bg ) , ( (  r2392 ) .f_bg ) ) ) ) {
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

static  int64_t   op_dash_add43 (    int64_t  l172 ,    int64_t  r174 ) {
    return ( (  l172 ) + (  r174 ) );
}

static  int64_t   op_dash_sub44 (    int64_t  l177 ,    int64_t  r179 ) {
    return ( (  l177 ) - (  r179 ) );
}

static  int64_t   op_dash_mul45 (    int64_t  l182 ,    int64_t  r184 ) {
    return ( (  l182 ) * (  r184 ) );
}

static  int64_t   op_dash_div46 (    int64_t  l187 ,    int64_t  r189 ) {
    return ( (  l187 ) / (  r189 ) );
}

static  int64_t   op_dash_neg47 (    int64_t  l192 ) {
    return ( (  from_dash_integral2 ( 0 ) ) - (  l192 ) );
}

static  int32_t   op_dash_add48 (    int32_t  l195 ,    int32_t  r197 ) {
    return ( (  l195 ) + (  r197 ) );
}

static  int32_t   op_dash_sub49 (    int32_t  l200 ,    int32_t  r202 ) {
    return ( (  l200 ) - (  r202 ) );
}

static  int32_t   op_dash_mul50 (    int32_t  l205 ,    int32_t  r207 ) {
    return ( (  l205 ) * (  r207 ) );
}

static  int32_t   op_dash_div51 (    int32_t  l210 ,    int32_t  r212 ) {
    return ( (  l210 ) / (  r212 ) );
}

static  int32_t   op_dash_neg52 (    int32_t  x215 ) {
    return ( (  from_dash_integral3 ( 0 ) ) - (  x215 ) );
}

static  uint32_t   op_dash_add53 (    uint32_t  l218 ,    uint32_t  r220 ) {
    return ( (  l218 ) + (  r220 ) );
}

static  uint32_t   op_dash_mul54 (    uint32_t  l228 ,    uint32_t  r230 ) {
    return ( (  l228 ) * (  r230 ) );
}

static  uint8_t   op_dash_add55 (    uint8_t  l238 ,    uint8_t  r240 ) {
    return ( (  l238 ) + (  r240 ) );
}

static  uint8_t   op_dash_sub56 (    uint8_t  l243 ,    uint8_t  r245 ) {
    return ( (  l243 ) - (  r245 ) );
}

static  size_t   op_dash_add57 (    size_t  l258 ,    size_t  r260 ) {
    return ( (  l258 ) + (  r260 ) );
}

static  size_t   op_dash_sub58 (    size_t  l263 ,    size_t  r265 ) {
    return ( (  l263 ) - (  r265 ) );
}

static  size_t   op_dash_mul59 (    size_t  l268 ,    size_t  r270 ) {
    return ( (  l268 ) * (  r270 ) );
}

struct Array_62 {
    uint32_t _arr [4];
};

struct SmolArray_61 {
    struct Array_62  f_arr;
};

static  struct SmolArray_61   from_dash_listlike60 (    struct Array_62  arr301 ) {
    return ( (struct SmolArray_61) { .f_arr = (  arr301 ) } );
}

struct Array_65 {
    uint32_t _arr [5];
};

struct SmolArray_64 {
    struct Array_65  f_arr;
};

static  struct SmolArray_64   from_dash_listlike63 (    struct Array_65  arr301 ) {
    return ( (struct SmolArray_64) { .f_arr = (  arr301 ) } );
}

struct Array_68 {
    uint32_t _arr [1];
};

struct SmolArray_67 {
    struct Array_68  f_arr;
};

static  struct SmolArray_67   from_dash_listlike66 (    struct Array_68  arr301 ) {
    return ( (struct SmolArray_67) { .f_arr = (  arr301 ) } );
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

static  struct timespec   undefined89 (  ) {
    struct timespec  temp90;
    return (  temp90 );
}

struct Array_93 {
    uint8_t _arr [32];
};

struct Termios_92 {
    uint32_t  f_c_dash_iflag;
    uint32_t  f_c_dash_oflag;
    uint32_t  f_c_dash_cflag;
    uint32_t  f_c_dash_lflag;
    uint8_t  f_c_dash_line;
    struct Array_93  f_c_dash_cc;
    uint32_t  f_c_dash_ispeed;
    uint32_t  f_c_dash_ospeed;
};

static  struct Termios_92   undefined91 (  ) {
    struct Termios_92  temp94;
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

static  uint32_t *   offset_dash_ptr115 (    uint32_t *  x450 ,    int64_t  count452 ) {
    uint32_t  temp116;
    return ( (uint32_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul45 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp116 ) ) ) ) ) ) ) ) );
}

static  uint8_t *   offset_dash_ptr117 (    uint8_t *  x450 ,    int64_t  count452 ) {
    uint8_t  temp118;
    return ( (uint8_t * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul45 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp118 ) ) ) ) ) ) ) ) );
}

static  struct Cell_17 *   offset_dash_ptr119 (    struct Cell_17 *  x450 ,    int64_t  count452 ) {
    struct Cell_17  temp120;
    return ( (struct Cell_17 * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul45 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp120 ) ) ) ) ) ) ) ) );
}

static  const char* *   offset_dash_ptr121 (    const char* *  x450 ,    int64_t  count452 ) {
    const char*  temp122;
    return ( (const char* * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul45 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp122 ) ) ) ) ) ) ) ) );
}

static  char *   offset_dash_ptr123 (    char *  x450 ,    int64_t  count452 ) {
    char  temp124;
    return ( (char * ) ( ( (void*) (  x450 ) ) + (  op_dash_mul45 ( (  count452 ) , ( (int64_t ) ( sizeof( ( (  temp124 ) ) ) ) ) ) ) ) );
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

static  size_t   size_dash_of131 (    struct Winsize_132  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of133 (    uint32_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of134 (    enum Unit_113 *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of135 (    FILE *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of136 (    size_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of137 (    char  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of138 (    char *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

struct Array_140 {
    char _arr [32];
};

static  size_t   size_dash_of139 (    struct Array_140  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of141 (    int64_t  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  size_t   size_dash_of142 (    struct timespec *  x457 ) {
    return ( sizeof( (  x457 ) ) );
}

static  uint16_t *   cast143 (    uint32_t *  x463 ) {
    return ( (uint16_t * ) (  x463 ) );
}

static  uint32_t *   cast144 (    struct Array_65 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast145 (    struct Array_62 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint32_t *   cast146 (    struct Array_68 *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  uint8_t *   cast147 (    struct Array_93 *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  enum Unit_113 *   cast148 (    const char*  x463 ) {
    return ( (enum Unit_113 * ) (  x463 ) );
}

static  uint32_t *   cast149 (    size_t *  x463 ) {
    return ( (uint32_t * ) (  x463 ) );
}

static  char *   cast150 (    int32_t *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char   cast151 (    int64_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  const char*   cast152 (    char *  x463 ) {
    return ( (const char* ) (  x463 ) );
}

static  char *   cast153 (    const char*  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  char *   cast154 (    struct Array_140 *  x463 ) {
    return ( (char * ) (  x463 ) );
}

static  int32_t   cast155 (    uint32_t  x463 ) {
    return ( (int32_t ) (  x463 ) );
}

static  uint8_t *   cast156 (    int64_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  uint8_t   cast157 (    char  x463 ) {
    return ( (uint8_t ) (  x463 ) );
}

static  char   cast158 (    int32_t  x463 ) {
    return ( (char ) (  x463 ) );
}

static  uint8_t *   cast159 (    int32_t *  x463 ) {
    return ( (uint8_t * ) (  x463 ) );
}

static  void *   cast_dash_ptr160 (    struct Winsize_132 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr161 (    uint32_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct termios *   cast_dash_ptr162 (    struct Termios_92 *  p466 ) {
    return ( (struct termios * ) (  p466 ) );
}

static  void *   cast_dash_ptr163 (    enum Unit_113 * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr164 (    FILE * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct Cell_17 *   cast_dash_ptr165 (    void *  p466 ) {
    return ( (struct Cell_17 * ) (  p466 ) );
}

static  void *   cast_dash_ptr166 (    size_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  char *   cast_dash_ptr167 (    void *  p466 ) {
    return ( (char * ) (  p466 ) );
}

static  void *   cast_dash_ptr168 (    char *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr169 (    char * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr170 (    enum Unit_113 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr171 (    struct Array_140 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

struct Pollfd_173 {
    int32_t  f_fd;
    uint16_t  f_events;
    uint16_t  f_revents;
};

static  struct pollfd *   cast_dash_ptr172 (    struct Pollfd_173 *  p466 ) {
    return ( (struct pollfd * ) (  p466 ) );
}

static  void *   cast_dash_ptr174 (    int64_t *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr175 (    struct timespec * *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  void *   cast_dash_ptr176 (    struct Cell_17 *  p466 ) {
    return ( (void * ) (  p466 ) );
}

static  struct Winsize_132   zeroed177 (  ) {
    struct Winsize_132  temp178;
    struct Winsize_132  x473 = (  temp178 );
    ( ( memset ) ( ( (  cast_dash_ptr160 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of131 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   zeroed179 (  ) {
    uint32_t  temp180;
    uint32_t  x473 = (  temp180 );
    ( ( memset ) ( ( (  cast_dash_ptr161 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of133 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  enum Unit_113 *   zeroed181 (  ) {
    enum Unit_113 *  temp182;
    enum Unit_113 *  x473 = (  temp182 );
    ( ( memset ) ( ( (  cast_dash_ptr163 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of134 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  FILE *   zeroed183 (  ) {
    FILE *  temp184;
    FILE *  x473 = (  temp184 );
    ( ( memset ) ( ( (  cast_dash_ptr164 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of135 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  size_t   zeroed185 (  ) {
    size_t  temp186;
    size_t  x473 = (  temp186 );
    ( ( memset ) ( ( (  cast_dash_ptr166 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of136 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char   zeroed187 (  ) {
    char  temp188;
    char  x473 = (  temp188 );
    ( ( memset ) ( ( (  cast_dash_ptr168 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of137 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  char *   zeroed189 (  ) {
    char *  temp190;
    char *  x473 = (  temp190 );
    ( ( memset ) ( ( (  cast_dash_ptr169 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of138 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct Array_140   zeroed191 (  ) {
    struct Array_140  temp192;
    struct Array_140  x473 = (  temp192 );
    ( ( memset ) ( ( (  cast_dash_ptr171 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of139 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  int64_t   zeroed193 (  ) {
    int64_t  temp194;
    int64_t  x473 = (  temp194 );
    ( ( memset ) ( ( (  cast_dash_ptr174 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of141 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  struct timespec *   zeroed195 (  ) {
    struct timespec *  temp196;
    struct timespec *  x473 = (  temp196 );
    ( ( memset ) ( ( (  cast_dash_ptr175 ) ( ( & (  x473 ) ) ) ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_of142 ) ( (  x473 ) ) ) ) );
    return (  x473 );
}

static  uint32_t   cast_dash_on_dash_zeroed197 (    uint16_t  x476 ) {
    uint32_t  temp198 = ( (  zeroed179 ) ( ) );
    uint32_t *  y477 = ( &temp198 );
    uint16_t *  yp478 = ( (  cast143 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  size_t   cast_dash_on_dash_zeroed199 (    uint32_t  x476 ) {
    size_t  temp200 = ( (  zeroed185 ) ( ) );
    size_t *  y477 = ( &temp200 );
    uint32_t *  yp478 = ( (  cast149 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed201 (    char  x476 ) {
    int32_t  temp202 = ( (  zeroed28 ) ( ) );
    int32_t *  y477 = ( &temp202 );
    char *  yp478 = ( (  cast150 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int64_t   cast_dash_on_dash_zeroed203 (    uint8_t  x476 ) {
    int64_t  temp204 = ( (  zeroed193 ) ( ) );
    int64_t *  y477 = ( &temp204 );
    uint8_t *  yp478 = ( (  cast156 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  int32_t   cast_dash_on_dash_zeroed205 (    uint8_t  x476 ) {
    int32_t  temp206 = ( (  zeroed28 ) ( ) );
    int32_t *  y477 = ( &temp206 );
    uint8_t *  yp478 = ( (  cast159 ) ( (  y477 ) ) );
    (*  yp478 ) = (  x476 );
    return ( * (  y477 ) );
}

static  enum Unit_113 *   null_dash_ptr207 (  ) {
    return ( (  zeroed181 ) ( ) );
}

static  FILE *   null_dash_ptr208 (  ) {
    return ( (  zeroed183 ) ( ) );
}

static  char *   null_dash_ptr209 (  ) {
    return ( (  zeroed189 ) ( ) );
}

static  struct timespec *   null_dash_ptr210 (  ) {
    return ( (  zeroed195 ) ( ) );
}

static  bool   is_dash_ptr_dash_null211 (    FILE *  p482 ) {
    return ( (  p482 ) == ( (  null_dash_ptr208 ) ( ) ) );
}

static  bool   ptr_dash_eq212 (    enum Unit_113 *  l488 ,    enum Unit_113 *  r490 ) {
    return ( (  l488 ) == (  r490 ) );
}

struct Maybe_214 {
    enum {
        Maybe_214_None_t,
        Maybe_214_Just_t,
    } tag;
    union {
        struct {
            const char*  field0;
        } Maybe_214_Just_s;
    } stuff;
};

static struct Maybe_214 Maybe_214_Just (  const char*  field0 ) {
    return ( struct Maybe_214 ) { .tag = Maybe_214_Just_t, .stuff = { .Maybe_214_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_214   from_dash_nullable_dash_c_dash_str213 (    const char*  s493 ) {
    if ( ( (  ptr_dash_eq212 ) ( ( (  cast148 ) ( (  s493 ) ) ) ,  ( ( (  null_dash_ptr207 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_214) { .tag = Maybe_214_None_t } );
    } else {
        return ( ( Maybe_214_Just ) ( (  s493 ) ) );
    }
}

static  int64_t   size_dash_i64215 (    size_t  x496 ) {
    return ( (int64_t ) (  x496 ) );
}

static  uint8_t   i32_dash_u8216 (    int32_t  x499 ) {
    return ( (uint8_t ) (  x499 ) );
}

static  uint32_t   i32_dash_u32217 (    int32_t  x502 ) {
    return ( (uint32_t ) (  x502 ) );
}

static  int64_t   i32_dash_i64218 (    int32_t  x505 ) {
    return ( (int64_t ) (  x505 ) );
}

static  size_t   i32_dash_size219 (    int32_t  x508 ) {
    return ( (size_t ) ( (int64_t ) (  x508 ) ) );
}

static  uint8_t   i64_dash_u8220 (    int64_t  x511 ) {
    return ( (uint8_t ) (  x511 ) );
}

static  int32_t   i64_dash_i32221 (    int64_t  x514 ) {
    return ( (int32_t ) (  x514 ) );
}

static  uint32_t   i64_dash_u32222 (    int64_t  x517 ) {
    return ( (uint32_t ) (  x517 ) );
}

static  int32_t   size_dash_i32223 (    size_t  x523 ) {
    return ( (int32_t ) (  x523 ) );
}

static  uint32_t   u16_dash_u32224 (    uint16_t  x529 ) {
    return ( (  cast_dash_on_dash_zeroed197 ) ( (  x529 ) ) );
}

static  size_t   u32_dash_size225 (    uint32_t  x535 ) {
    return ( (  cast_dash_on_dash_zeroed199 ) ( (  x535 ) ) );
}

static  int32_t   u32_dash_i32226 (    uint32_t  x544 ) {
    return ( (  cast155 ) ( (  x544 ) ) );
}

static  int64_t   u8_dash_i64227 (    uint8_t  x550 ) {
    return ( (  cast_dash_on_dash_zeroed203 ) ( (  x550 ) ) );
}

static  int32_t   u8_dash_i32228 (    uint8_t  x553 ) {
    return ( (  cast_dash_on_dash_zeroed205 ) ( (  x553 ) ) );
}

struct SliceIter_231 {
    struct Slice_101  f_slice;
    size_t  f_current_dash_offset;
};

struct Scanner_230 {
    struct SliceIter_231  f_s;
};

static  struct Scanner_230   into_dash_iter232 (    struct Scanner_230  self2250 ) {
    return (  self2250 );
}

static  struct Scanner_230   into_dash_iter229 (    struct Scanner_230 *  self556 ) {
    return ( (  into_dash_iter232 ) ( ( * (  self556 ) ) ) );
}

enum EmptyIter_234 {
    EmptyIter_234_EmptyIter,
};

static  enum EmptyIter_234   nil233 (  ) {
    return ( EmptyIter_234_EmptyIter );
}

static  enum EmptyIter_234   into_dash_iter235 (    enum EmptyIter_234  self561 ) {
    return (  self561 );
}

struct Maybe_237 {
    enum {
        Maybe_237_None_t,
        Maybe_237_Just_t,
    } tag;
    union {
        struct {
            char  field0;
        } Maybe_237_Just_s;
    } stuff;
};

static struct Maybe_237 Maybe_237_Just (  char  field0 ) {
    return ( struct Maybe_237 ) { .tag = Maybe_237_Just_t, .stuff = { .Maybe_237_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_237   next236 (    enum EmptyIter_234 *  dref563 ) {
    return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
}

struct ConstStrIter_240 {
    const char*  f_ogstr;
    size_t  f_i;
};

struct Map_239 {
    struct ConstStrIter_240  field0;
    uint32_t (*  field1 )(    char  );
};

static struct Map_239 Map_239_Map (  struct ConstStrIter_240  field0 ,  uint32_t (*  field1 )(    char  ) ) {
    return ( struct Map_239 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Map_239   into_dash_iter238 (    struct Map_239  self567 ) {
    return (  self567 );
}

struct Maybe_242 {
    enum {
        Maybe_242_None_t,
        Maybe_242_Just_t,
    } tag;
    union {
        struct {
            uint32_t  field0;
        } Maybe_242_Just_s;
    } stuff;
};

static struct Maybe_242 Maybe_242_Just (  uint32_t  field0 ) {
    return ( struct Maybe_242 ) { .tag = Maybe_242_Just_t, .stuff = { .Maybe_242_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_237   next243 (    struct ConstStrIter_240 *  self1015 ) {
    if ( (  cmp40 ( ( ( * (  self1015 ) ) .f_i ) , ( (  i32_dash_size219 ) ( ( ( strlen ) ( ( ( * (  self1015 ) ) .f_ogstr ) ) ) ) ) ) != 0 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    char *  char_dash_ptr1016 = ( ( (  cast153 ) ( ( ( * (  self1015 ) ) .f_ogstr ) ) ) );
    char  c1017 = ( * ( (  offset_dash_ptr123 ) ( (  char_dash_ptr1016 ) ,  ( (  size_dash_i64215 ) ( ( ( * (  self1015 ) ) .f_i ) ) ) ) ) );
    (*  self1015 ) .f_i = (  op_dash_add57 ( ( ( * (  self1015 ) ) .f_i ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  c1017 ) ) );
}

static  struct Maybe_242   next241 (    struct Map_239 *  dref569 ) {
    struct Maybe_237  dref572 = ( (  next243 ) ( ( & ( (* dref569 ) .field0 ) ) ) );
    if ( dref572.tag == Maybe_237_None_t ) {
        return ( (struct Maybe_242) { .tag = Maybe_242_None_t } );
    }
    else if ( dref572.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_242_Just ) ( ( ( (* dref569 ) .field1 ) ( ( dref572 .stuff .Maybe_237_Just_s .field0 ) ) ) ) );
    }
}

static  struct ConstStrIter_240   into_dash_iter245 (    const char*  self1009 ) {
    return ( (struct ConstStrIter_240) { .f_ogstr = (  self1009 ) , .f_i = (  from_dash_integral8 ( 0 ) ) } );
}

static  struct Map_239   map244 (    const char*  iterable576 ,    uint32_t (*  fun578 )(    char  ) ) {
    struct ConstStrIter_240  it579 = ( (  into_dash_iter245 ) ( (  iterable576 ) ) );
    return ( ( Map_239_Map ) ( (  it579 ) ,  (  fun578 ) ) );
}

struct Range_247 {
    int32_t  field0;
    int32_t  field1;
};

static struct Range_247 Range_247_Range (  int32_t  field0 ,  int32_t  field1 ) {
    return ( struct Range_247 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct Range_247   to246 (    int32_t  from645 ,    int32_t  to647 ) {
    return ( ( Range_247_Range ) ( (  from645 ) ,  (  to647 ) ) );
}

struct RangeIter_249 {
    struct Range_247  field0;
    int32_t  field1;
};

static struct RangeIter_249 RangeIter_249_RangeIter (  struct Range_247  field0 ,  int32_t  field1 ) {
    return ( struct RangeIter_249 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct RangeIter_249   into_dash_iter248 (    struct Range_247  dref654 ) {
    return ( ( RangeIter_249_RangeIter ) ( ( ( Range_247_Range ) ( ( dref654 .field0 ) ,  ( dref654 .field1 ) ) ) ,  ( dref654 .field0 ) ) );
}

struct Maybe_251 {
    enum {
        Maybe_251_None_t,
        Maybe_251_Just_t,
    } tag;
    union {
        struct {
            int32_t  field0;
        } Maybe_251_Just_s;
    } stuff;
};

static struct Maybe_251 Maybe_251_Just (  int32_t  field0 ) {
    return ( struct Maybe_251 ) { .tag = Maybe_251_Just_t, .stuff = { .Maybe_251_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_251   next250 (    struct RangeIter_249 *  self662 ) {
    struct RangeIter_249  dref663 = ( * (  self662 ) );
    if ( true ) {
        if ( (  cmp41 ( ( dref663 .field1 ) , ( dref663 .field0 .field1 ) ) == 2 ) ) {
            return ( (struct Maybe_251) { .tag = Maybe_251_None_t } );
        }
        struct Maybe_251  x667 = ( ( Maybe_251_Just ) ( ( dref663 .field1 ) ) );
        (*  self662 ) = ( ( RangeIter_249_RangeIter ) ( ( ( Range_247_Range ) ( ( dref663 .field0 .field0 ) ,  ( dref663 .field0 .field1 ) ) ) ,  (  op_dash_add48 ( ( dref663 .field1 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
        return (  x667 );
    }
}

struct FromIter_253 {
    int32_t  f_from;
};

static  struct FromIter_253   from252 (    int32_t  f671 ) {
    return ( (struct FromIter_253) { .f_from = (  f671 ) } );
}

static  struct FromIter_253   into_dash_iter254 (    struct FromIter_253  it674 ) {
    return (  it674 );
}

static  struct Maybe_251   next255 (    struct FromIter_253 *  dref676 ) {
    int32_t  v678 = ( ( (* dref676 ) ) .f_from );
    (* dref676 ) .f_from = (  op_dash_add48 ( ( ( (* dref676 ) ) .f_from ) , (  from_dash_integral3 ( 1 ) ) ) );
    return ( ( Maybe_251_Just ) ( (  v678 ) ) );
}

struct Zip_257 {
    struct SliceIter_231  f_left_dash_it;
    struct FromIter_253  f_right_dash_it;
};

static  struct Zip_257   into_dash_iter256 (    struct Zip_257  self682 ) {
    return (  self682 );
}

struct PadZeroes_264 {
    int32_t  f_x;
    uint8_t  f_len;
};

struct AppendIter_265 {
    enum EmptyIter_234  f_it;
    char  f_elem;
    bool  f_appended;
};

struct StrConcatIter_263 {
    struct PadZeroes_264  f_left;
    struct AppendIter_265  f_right;
};

struct StrConcatIter_262 {
    struct StrConcatIter_263  f_left;
    struct PadZeroes_264  f_right;
};

struct StrConcatIter_261 {
    struct StrConcatIter_262  f_left;
    struct AppendIter_265  f_right;
};

struct StrConcatIter_260 {
    struct StrConcatIter_261  f_left;
    struct PadZeroes_264  f_right;
};

struct Zip_259 {
    struct StrConcatIter_260  f_left_dash_it;
    struct FromIter_253  f_right_dash_it;
};

static  struct Zip_259   into_dash_iter258 (    struct Zip_259  self682 ) {
    return (  self682 );
}

struct Zip_267 {
    struct ConstStrIter_240  f_left_dash_it;
    struct FromIter_253  f_right_dash_it;
};

static  struct Zip_267   into_dash_iter266 (    struct Zip_267  self682 ) {
    return (  self682 );
}

struct Tuple2_270 {
    char  field0;
    int32_t  field1;
};

static struct Tuple2_270 Tuple2_270_Tuple2 (  char  field0 ,  int32_t  field1 ) {
    return ( struct Tuple2_270 ) { .field0 = field0 ,  .field1 = field1 };
};

struct Maybe_269 {
    enum {
        Maybe_269_None_t,
        Maybe_269_Just_t,
    } tag;
    union {
        struct {
            struct Tuple2_270  field0;
        } Maybe_269_Just_s;
    } stuff;
};

static struct Maybe_269 Maybe_269_Just (  struct Tuple2_270  field0 ) {
    return ( struct Maybe_269 ) { .tag = Maybe_269_Just_t, .stuff = { .Maybe_269_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_237   next271 (    struct SliceIter_231 *  self1420 ) {
    size_t  off1421 = ( ( * (  self1420 ) ) .f_current_dash_offset );
    if ( (  cmp40 ( (  op_dash_add57 ( (  off1421 ) , (  from_dash_integral8 ( 1 ) ) ) ) , ( ( ( * (  self1420 ) ) .f_slice ) .f_count ) ) == 2 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    char  elem1422 = ( * ( (  offset_dash_ptr123 ) ( ( ( ( * (  self1420 ) ) .f_slice ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  off1421 ) ) ) ) ) );
    (*  self1420 ) .f_current_dash_offset = (  op_dash_add57 ( (  off1421 ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_237_Just ) ( (  elem1422 ) ) );
}

static  struct Maybe_269   next268 (    struct Zip_257 *  self685 ) {
    struct Zip_257  copy686 = ( * (  self685 ) );
    while ( ( true ) ) {
        struct Maybe_237  dref687 = ( (  next271 ) ( ( & ( (  copy686 ) .f_left_dash_it ) ) ) );
        if ( dref687.tag == Maybe_237_None_t ) {
            return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
        }
        else if ( dref687.tag == Maybe_237_Just_t ) {
            struct Maybe_251  dref689 = ( (  next255 ) ( ( & ( (  copy686 ) .f_right_dash_it ) ) ) );
            if ( dref689.tag == Maybe_251_None_t ) {
                return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
            }
            else if ( dref689.tag == Maybe_251_Just_t ) {
                ( (  next271 ) ( ( & ( ( * (  self685 ) ) .f_left_dash_it ) ) ) );
                ( (  next255 ) ( ( & ( ( * (  self685 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_269_Just ) ( ( ( Tuple2_270_Tuple2 ) ( ( dref687 .stuff .Maybe_237_Just_s .field0 ) ,  ( dref689 .stuff .Maybe_251_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

struct env280 {
    ;
    int32_t  base932;
};

struct funenv280 {
    int32_t  (*fun) (  struct env280  ,    int32_t  ,    int32_t  );
    struct env280 env;
};

static  int32_t   reduce279 (    struct Range_247  iterable821 ,    int32_t  base823 ,   struct funenv280  fun825 ) {
    int32_t  x826 = (  base823 );
    struct RangeIter_249  it827 = ( (  into_dash_iter248 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_251  dref828 = ( (  next250 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_251_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_251_Just_t ) {
            struct funenv280  temp281 = (  fun825 );
            x826 = ( temp281.fun ( temp281.env ,  ( dref828 .stuff .Maybe_251_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    int32_t  temp282;
    return (  temp282 );
}

static  int32_t   lam280 (   struct env280 env ,    int32_t  item936 ,    int32_t  x938 ) {
    return (  op_dash_mul50 ( (  x938 ) , ( env.base932 ) ) );
}

static  int32_t   pow278 (    int32_t  base932 ,    int32_t  p934 ) {
    struct env280 envinst280 = {
        .base932 =  base932 ,
    };
    return ( (  reduce279 ) ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  p934 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral3 ( 1 ) ) ,  ( (struct funenv280){ .fun = lam280, .env = envinst280 } ) ) );
}

static  struct Maybe_237   next277 (    struct PadZeroes_264 *  self1191 ) {
    if ( (  cmp42 ( ( ( * (  self1191 ) ) .f_len ) , (  from_dash_integral6 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    int32_t  trim_dash_down1192 = ( (  pow278 ) ( (  from_dash_integral3 ( 10 ) ) ,  (  op_dash_sub49 ( ( (  u8_dash_i32228 ) ( ( ( * (  self1191 ) ) .f_len ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
    int32_t  upper1193 = (  op_dash_div51 ( ( ( * (  self1191 ) ) .f_x ) , (  trim_dash_down1192 ) ) );
    int32_t  upper_dash_mask1194 = (  op_dash_mul50 ( (  op_dash_div51 ( (  upper1193 ) , (  from_dash_integral3 ( 10 ) ) ) ) , (  from_dash_integral3 ( 10 ) ) ) );
    int32_t  digit1195 = (  op_dash_sub49 ( (  upper1193 ) , (  upper_dash_mask1194 ) ) );
    (*  self1191 ) .f_len = (  op_dash_sub56 ( ( ( * (  self1191 ) ) .f_len ) , (  from_dash_integral6 ( 1 ) ) ) );
    char  digit_dash_char1196 = ( (  cast158 ) ( (  op_dash_add48 ( (  digit1195 ) , (  from_dash_integral3 ( 48 ) ) ) ) ) );
    return ( ( Maybe_237_Just ) ( (  digit_dash_char1196 ) ) );
}

static  struct Maybe_237   next283 (    struct AppendIter_265 *  self785 ) {
    struct Maybe_237  dref786 = ( (  next236 ) ( ( & ( ( * (  self785 ) ) .f_it ) ) ) );
    if ( dref786.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_237_Just ) ( ( dref786 .stuff .Maybe_237_Just_s .field0 ) ) );
    }
    else if ( dref786.tag == Maybe_237_None_t ) {
        if ( ( ! ( ( * (  self785 ) ) .f_appended ) ) ) {
            (*  self785 ) .f_appended = ( true );
            return ( ( Maybe_237_Just ) ( ( ( * (  self785 ) ) .f_elem ) ) );
        }
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
}

static  struct Maybe_237   next276 (    struct StrConcatIter_263 *  self1102 ) {
    struct Maybe_237  dref1103 = ( (  next277 ) ( ( & ( ( * (  self1102 ) ) .f_left ) ) ) );
    if ( dref1103.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_237_Just ) ( ( dref1103 .stuff .Maybe_237_Just_s .field0 ) ) );
    }
    else if ( dref1103.tag == Maybe_237_None_t ) {
        return ( (  next283 ) ( ( & ( ( * (  self1102 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_237   next275 (    struct StrConcatIter_262 *  self1102 ) {
    struct Maybe_237  dref1103 = ( (  next276 ) ( ( & ( ( * (  self1102 ) ) .f_left ) ) ) );
    if ( dref1103.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_237_Just ) ( ( dref1103 .stuff .Maybe_237_Just_s .field0 ) ) );
    }
    else if ( dref1103.tag == Maybe_237_None_t ) {
        return ( (  next277 ) ( ( & ( ( * (  self1102 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_237   next274 (    struct StrConcatIter_261 *  self1102 ) {
    struct Maybe_237  dref1103 = ( (  next275 ) ( ( & ( ( * (  self1102 ) ) .f_left ) ) ) );
    if ( dref1103.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_237_Just ) ( ( dref1103 .stuff .Maybe_237_Just_s .field0 ) ) );
    }
    else if ( dref1103.tag == Maybe_237_None_t ) {
        return ( (  next283 ) ( ( & ( ( * (  self1102 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_237   next273 (    struct StrConcatIter_260 *  self1102 ) {
    struct Maybe_237  dref1103 = ( (  next274 ) ( ( & ( ( * (  self1102 ) ) .f_left ) ) ) );
    if ( dref1103.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_237_Just ) ( ( dref1103 .stuff .Maybe_237_Just_s .field0 ) ) );
    }
    else if ( dref1103.tag == Maybe_237_None_t ) {
        return ( (  next277 ) ( ( & ( ( * (  self1102 ) ) .f_right ) ) ) );
    }
}

static  struct Maybe_269   next272 (    struct Zip_259 *  self685 ) {
    struct Zip_259  copy686 = ( * (  self685 ) );
    while ( ( true ) ) {
        struct Maybe_237  dref687 = ( (  next273 ) ( ( & ( (  copy686 ) .f_left_dash_it ) ) ) );
        if ( dref687.tag == Maybe_237_None_t ) {
            return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
        }
        else if ( dref687.tag == Maybe_237_Just_t ) {
            struct Maybe_251  dref689 = ( (  next255 ) ( ( & ( (  copy686 ) .f_right_dash_it ) ) ) );
            if ( dref689.tag == Maybe_251_None_t ) {
                return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
            }
            else if ( dref689.tag == Maybe_251_Just_t ) {
                ( (  next273 ) ( ( & ( ( * (  self685 ) ) .f_left_dash_it ) ) ) );
                ( (  next255 ) ( ( & ( ( * (  self685 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_269_Just ) ( ( ( Tuple2_270_Tuple2 ) ( ( dref687 .stuff .Maybe_237_Just_s .field0 ) ,  ( dref689 .stuff .Maybe_251_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct Maybe_269   next284 (    struct Zip_267 *  self685 ) {
    struct Zip_267  copy686 = ( * (  self685 ) );
    while ( ( true ) ) {
        struct Maybe_237  dref687 = ( (  next243 ) ( ( & ( (  copy686 ) .f_left_dash_it ) ) ) );
        if ( dref687.tag == Maybe_237_None_t ) {
            return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
        }
        else if ( dref687.tag == Maybe_237_Just_t ) {
            struct Maybe_251  dref689 = ( (  next255 ) ( ( & ( (  copy686 ) .f_right_dash_it ) ) ) );
            if ( dref689.tag == Maybe_251_None_t ) {
                return ( (struct Maybe_269) { .tag = Maybe_269_None_t } );
            }
            else if ( dref689.tag == Maybe_251_Just_t ) {
                ( (  next243 ) ( ( & ( ( * (  self685 ) ) .f_left_dash_it ) ) ) );
                ( (  next255 ) ( ( & ( ( * (  self685 ) ) .f_right_dash_it ) ) ) );
                return ( ( Maybe_269_Just ) ( ( ( Tuple2_270_Tuple2 ) ( ( dref687 .stuff .Maybe_237_Just_s .field0 ) ,  ( dref689 .stuff .Maybe_251_Just_s .field0 ) ) ) ) );
            }
        }
    }
}

static  struct SliceIter_231   into_dash_iter286 (    struct Slice_101  self1414 ) {
    return ( (struct SliceIter_231) { .f_slice = (  self1414 ) , .f_current_dash_offset = (  from_dash_integral8 ( 0 ) ) } );
}

static  struct Zip_257   zip285 (    struct Slice_101  left693 ,    struct FromIter_253  right695 ) {
    struct SliceIter_231  left_dash_it696 = ( (  into_dash_iter286 ) ( (  left693 ) ) );
    struct FromIter_253  right_dash_it697 = ( (  into_dash_iter254 ) ( (  right695 ) ) );
    return ( (struct Zip_257) { .f_left_dash_it = (  left_dash_it696 ) , .f_right_dash_it = (  right_dash_it697 ) } );
}

static  struct StrConcatIter_260   into_dash_iter288 (    struct StrConcatIter_260  self1099 ) {
    return (  self1099 );
}

static  struct Zip_259   zip287 (    struct StrConcatIter_260  left693 ,    struct FromIter_253  right695 ) {
    struct StrConcatIter_260  left_dash_it696 = ( (  into_dash_iter288 ) ( (  left693 ) ) );
    struct FromIter_253  right_dash_it697 = ( (  into_dash_iter254 ) ( (  right695 ) ) );
    return ( (struct Zip_259) { .f_left_dash_it = (  left_dash_it696 ) , .f_right_dash_it = (  right_dash_it697 ) } );
}

static  struct ConstStrIter_240   into_dash_iter290 (    struct ConstStrIter_240  self1012 ) {
    return (  self1012 );
}

static  struct Zip_267   zip289 (    struct ConstStrIter_240  left693 ,    struct FromIter_253  right695 ) {
    struct ConstStrIter_240  left_dash_it696 = ( (  into_dash_iter290 ) ( (  left693 ) ) );
    struct FromIter_253  right_dash_it697 = ( (  into_dash_iter254 ) ( (  right695 ) ) );
    return ( (struct Zip_267) { .f_left_dash_it = (  left_dash_it696 ) , .f_right_dash_it = (  right_dash_it697 ) } );
}

struct TakeWhile_292 {
    struct Scanner_230  f_it;
    bool (*  f_pred )(    char  );
};

static  struct TakeWhile_292   into_dash_iter291 (    struct TakeWhile_292  self727 ) {
    return (  self727 );
}

static  struct Maybe_237   next294 (    struct Scanner_230 *  self2247 ) {
    return ( (  next271 ) ( ( & ( ( * (  self2247 ) ) .f_s ) ) ) );
}

static  struct Maybe_237   next293 (    struct TakeWhile_292 *  self730 ) {
    struct Maybe_237  mx731 = ( (  next294 ) ( ( & ( ( * (  self730 ) ) .f_it ) ) ) );
    struct Maybe_237  dref732 = (  mx731 );
    if ( dref732.tag == Maybe_237_None_t ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    else if ( dref732.tag == Maybe_237_Just_t ) {
        if ( ( ( ( * (  self730 ) ) .f_pred ) ( ( dref732 .stuff .Maybe_237_Just_s .field0 ) ) ) ) {
            return ( ( Maybe_237_Just ) ( ( dref732 .stuff .Maybe_237_Just_s .field0 ) ) );
        } else {
            return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
        }
    }
}

static  struct TakeWhile_292   take_dash_while295 (    struct Scanner_230 *  it736 ,    bool (*  pred738 )(    char  ) ) {
    return ( (struct TakeWhile_292) { .f_it = ( (  into_dash_iter229 ) ( (  it736 ) ) ) , .f_pred = (  pred738 ) } );
}

static  struct AppendIter_265   append296 (    enum EmptyIter_234  it769 ,    char  e771 ) {
    return ( (struct AppendIter_265) { .f_it = ( (  into_dash_iter235 ) ( (  it769 ) ) ) , .f_elem = (  e771 ) , .f_appended = ( false ) } );
}

static  struct AppendIter_265   cons297 (    enum EmptyIter_234  it774 ,    char  e776 ) {
    return ( (  append296 ) ( (  it774 ) ,  (  e776 ) ) );
}

static  struct AppendIter_265   single298 (    char  e779 ) {
    return ( (  cons297 ) ( ( (  nil233 ) ( ) ) ,  (  e779 ) ) );
}

struct Key_303 {
    enum {
        Key_303_Escape_t,
        Key_303_Enter_t,
        Key_303_Tab_t,
        Key_303_Backspace_t,
        Key_303_Char_t,
        Key_303_Ctrl_t,
        Key_303_Up_t,
        Key_303_Down_t,
        Key_303_Left_t,
        Key_303_Right_t,
        Key_303_Home_t,
        Key_303_End_t,
        Key_303_PageUp_t,
        Key_303_PageDown_t,
        Key_303_Delete_t,
        Key_303_Insert_t,
        Key_303_F1_t,
        Key_303_F2_t,
        Key_303_F3_t,
        Key_303_F4_t,
        Key_303_F5_t,
        Key_303_F6_t,
        Key_303_F7_t,
        Key_303_F8_t,
        Key_303_F9_t,
        Key_303_F10_t,
        Key_303_F11_t,
        Key_303_F12_t,
    } tag;
    union {
        struct {
            char  field0;
        } Key_303_Char_s;
        struct {
            char  field0;
        } Key_303_Ctrl_s;
    } stuff;
};

static struct Key_303 Key_303_Char (  char  field0 ) {
    return ( struct Key_303 ) { .tag = Key_303_Char_t, .stuff = { .Key_303_Char_s = { .field0 = field0 } } };
};

static struct Key_303 Key_303_Ctrl (  char  field0 ) {
    return ( struct Key_303 ) { .tag = Key_303_Ctrl_t, .stuff = { .Key_303_Ctrl_s = { .field0 = field0 } } };
};

struct MouseEvent_304 {
    enum MouseButton_108  f_button;
    int32_t  f_x;
    int32_t  f_y;
    bool  f_pressed;
};

struct InputEvent_302 {
    enum {
        InputEvent_302_Key_t,
        InputEvent_302_Mouse_t,
    } tag;
    union {
        struct {
            struct Key_303  field0;
        } InputEvent_302_Key_s;
        struct {
            struct MouseEvent_304  field0;
        } InputEvent_302_Mouse_s;
    } stuff;
};

static struct InputEvent_302 InputEvent_302_Key (  struct Key_303  field0 ) {
    return ( struct InputEvent_302 ) { .tag = InputEvent_302_Key_t, .stuff = { .InputEvent_302_Key_s = { .field0 = field0 } } };
};

static struct InputEvent_302 InputEvent_302_Mouse (  struct MouseEvent_304  field0 ) {
    return ( struct InputEvent_302 ) { .tag = InputEvent_302_Mouse_t, .stuff = { .InputEvent_302_Mouse_s = { .field0 = field0 } } };
};

struct Maybe_301 {
    enum {
        Maybe_301_None_t,
        Maybe_301_Just_t,
    } tag;
    union {
        struct {
            struct InputEvent_302  field0;
        } Maybe_301_Just_s;
    } stuff;
};

static struct Maybe_301 Maybe_301_Just (  struct InputEvent_302  field0 ) {
    return ( struct Maybe_301 ) { .tag = Maybe_301_Just_t, .stuff = { .Maybe_301_Just_s = { .field0 = field0 } } };
};

struct FunIter_300 {
    struct Maybe_301 (*  f_fun )(  );
    bool  f_finished;
};

static  struct FunIter_300   into_dash_iter299 (    struct FunIter_300  self791 ) {
    return (  self791 );
}

static  struct Maybe_301   next305 (    struct FunIter_300 *  self794 ) {
    if ( ( ( * (  self794 ) ) .f_finished ) ) {
        return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
    }
    struct Maybe_301  dref795 = ( ( ( * (  self794 ) ) .f_fun ) ( ) );
    if ( dref795.tag == Maybe_301_Just_t ) {
        return ( ( Maybe_301_Just ) ( ( dref795 .stuff .Maybe_301_Just_s .field0 ) ) );
    }
    else if ( dref795.tag == Maybe_301_None_t ) {
        (*  self794 ) .f_finished = ( true );
        return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
    }
}

static  struct FunIter_300   from_dash_function306 (    struct Maybe_301 (*  fun799 )(  ) ) {
    return ( (struct FunIter_300) { .f_fun = (  fun799 ) , .f_finished = ( false ) } );
}

struct Slice_309 {
    struct Cell_17 *  f_ptr;
    size_t  f_count;
};

struct env308 {
    struct Cell_17 (*  fun1488 )(    struct Cell_17  );
    ;
    ;
    struct Slice_309  s1486;
    ;
};

struct funenv308 {
    enum Unit_113  (*fun) (  struct env308  ,    int32_t  );
    struct env308 env;
};

static  enum Unit_113   for_dash_each307 (    struct Range_247  iterable802 ,   struct funenv308  fun804 ) {
    struct RangeIter_249  temp310 = ( (  into_dash_iter248 ) ( (  iterable802 ) ) );
    struct RangeIter_249 *  it805 = ( &temp310 );
    while ( ( true ) ) {
        struct Maybe_251  dref806 = ( (  next250 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_251_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_251_Just_t ) {
            struct funenv308  temp311 = (  fun804 );
            ( temp311.fun ( temp311.env ,  ( dref806 .stuff .Maybe_251_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

struct env313 {
    struct Cell_17 (*  fun1488 )(    struct Cell_17  );
    ;
    ;
    struct Slice_309  s1486;
    ;
};

struct funenv313 {
    enum Unit_113  (*fun) (  struct env313  ,    int32_t  );
    struct env313 env;
};

static  enum Unit_113   for_dash_each312 (    struct Range_247  iterable802 ,   struct funenv313  fun804 ) {
    struct RangeIter_249  temp314 = ( (  into_dash_iter248 ) ( (  iterable802 ) ) );
    struct RangeIter_249 *  it805 = ( &temp314 );
    while ( ( true ) ) {
        struct Maybe_251  dref806 = ( (  next250 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_251_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_251_Just_t ) {
            struct funenv313  temp315 = (  fun804 );
            ( temp315.fun ( temp315.env ,  ( dref806 .stuff .Maybe_251_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

struct IntStrIter_318 {
    int64_t  f_int;
    int32_t  f_len;
};

struct StrConcatIter_317 {
    struct IntStrIter_318  f_left;
    struct AppendIter_265  f_right;
};

enum CAllocator_322 {
    CAllocator_322_CAllocator,
};

struct List_321 {
    enum CAllocator_322  f_al;
    struct Slice_101  f_elements;
    size_t  f_count;
};

struct StrBuilder_320 {
    struct List_321  f_chars;
};

struct env324 {
    ;
    ;
    ;
    size_t  growth_dash_factor1741;
    size_t  starting_dash_size1740;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
};

struct funenv324 {
    enum Unit_113  (*fun) (  struct env324  ,    struct List_321 *  );
    struct env324 env;
};

struct env323 {
    ;
    ;
    ;
    ;
    ;
    struct env324 envinst324;
};

struct funenv323 {
    enum Unit_113  (*fun) (  struct env323  ,    struct List_321 *  ,    char  );
    struct env323 env;
};

struct env319 {
    struct StrBuilder_320 *  builder2032;
    struct env323 envinst323;
};

struct funenv319 {
    enum Unit_113  (*fun) (  struct env319  ,    char  );
    struct env319 env;
};

static  struct StrConcatIter_317   into_dash_iter326 (    struct StrConcatIter_317  self1099 ) {
    return (  self1099 );
}

struct env331 {
    int64_t  base932;
    ;
};

struct funenv331 {
    int64_t  (*fun) (  struct env331  ,    int32_t  ,    int64_t  );
    struct env331 env;
};

static  int64_t   reduce330 (    struct Range_247  iterable821 ,    int64_t  base823 ,   struct funenv331  fun825 ) {
    int64_t  x826 = (  base823 );
    struct RangeIter_249  it827 = ( (  into_dash_iter248 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_251  dref828 = ( (  next250 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_251_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_251_Just_t ) {
            struct funenv331  temp332 = (  fun825 );
            x826 = ( temp332.fun ( temp332.env ,  ( dref828 .stuff .Maybe_251_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    int64_t  temp333;
    return (  temp333 );
}

static  int64_t   lam331 (   struct env331 env ,    int32_t  item936 ,    int64_t  x938 ) {
    return (  op_dash_mul45 ( (  x938 ) , ( env.base932 ) ) );
}

static  int64_t   pow329 (    int64_t  base932 ,    int32_t  p934 ) {
    struct env331 envinst331 = {
        .base932 =  base932 ,
    };
    return ( (  reduce330 ) ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  p934 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) ,  (  from_dash_integral2 ( 1 ) ) ,  ( (struct funenv331){ .fun = lam331, .env = envinst331 } ) ) );
}

static  struct Maybe_237   next328 (    struct IntStrIter_318 *  self1036 ) {
    if ( (  cmp41 ( ( ( * (  self1036 ) ) .f_len ) , (  from_dash_integral3 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    int64_t  trim_dash_down1037 = ( (  pow329 ) ( (  from_dash_integral2 ( 10 ) ) ,  (  op_dash_sub49 ( ( ( * (  self1036 ) ) .f_len ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
    int64_t  upper1038 = (  op_dash_div46 ( ( ( * (  self1036 ) ) .f_int ) , (  trim_dash_down1037 ) ) );
    int64_t  upper_dash_mask1039 = (  op_dash_mul45 ( (  op_dash_div46 ( (  upper1038 ) , (  from_dash_integral2 ( 10 ) ) ) ) , (  from_dash_integral2 ( 10 ) ) ) );
    int64_t  digit1040 = (  op_dash_sub44 ( (  upper1038 ) , (  upper_dash_mask1039 ) ) );
    (*  self1036 ) .f_len = (  op_dash_sub49 ( ( ( * (  self1036 ) ) .f_len ) , (  from_dash_integral3 ( 1 ) ) ) );
    char  digit_dash_char1041 = ( (  cast151 ) ( (  op_dash_add43 ( (  digit1040 ) , (  from_dash_integral2 ( 48 ) ) ) ) ) );
    return ( ( Maybe_237_Just ) ( (  digit_dash_char1041 ) ) );
}

static  struct Maybe_237   next327 (    struct StrConcatIter_317 *  self1102 ) {
    struct Maybe_237  dref1103 = ( (  next328 ) ( ( & ( ( * (  self1102 ) ) .f_left ) ) ) );
    if ( dref1103.tag == Maybe_237_Just_t ) {
        return ( ( Maybe_237_Just ) ( ( dref1103 .stuff .Maybe_237_Just_s .field0 ) ) );
    }
    else if ( dref1103.tag == Maybe_237_None_t ) {
        return ( (  next283 ) ( ( & ( ( * (  self1102 ) ) .f_right ) ) ) );
    }
}

static  enum Unit_113   for_dash_each316 (    struct StrConcatIter_317  iterable802 ,   struct funenv319  fun804 ) {
    struct StrConcatIter_317  temp325 = ( (  into_dash_iter326 ) ( (  iterable802 ) ) );
    struct StrConcatIter_317 *  it805 = ( &temp325 );
    while ( ( true ) ) {
        struct Maybe_237  dref806 = ( (  next327 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_237_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_237_Just_t ) {
            struct funenv319  temp334 = (  fun804 );
            ( temp334.fun ( temp334.env ,  ( dref806 .stuff .Maybe_237_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

struct env336 {
    struct Slice_101  new_dash_slice1746;
    ;
    ;
};

struct funenv336 {
    enum Unit_113  (*fun) (  struct env336  ,    struct Tuple2_270  );
    struct env336 env;
};

static  enum Unit_113   for_dash_each335 (    struct Zip_257  iterable802 ,   struct funenv336  fun804 ) {
    struct Zip_257  temp337 = ( (  into_dash_iter256 ) ( (  iterable802 ) ) );
    struct Zip_257 *  it805 = ( &temp337 );
    while ( ( true ) ) {
        struct Maybe_269  dref806 = ( (  next268 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_269_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_269_Just_t ) {
            struct funenv336  temp338 = (  fun804 );
            ( temp338.fun ( temp338.env ,  ( dref806 .stuff .Maybe_269_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

struct env340 {
    struct Scanner_230 *  it908;
    ;
};

struct funenv340 {
    struct Maybe_237  (*fun) (  struct env340  ,    int32_t  );
    struct env340 env;
};

static  enum Unit_113   for_dash_each339 (    struct Range_247  iterable802 ,   struct funenv340  fun804 ) {
    struct RangeIter_249  temp341 = ( (  into_dash_iter248 ) ( (  iterable802 ) ) );
    struct RangeIter_249 *  it805 = ( &temp341 );
    while ( ( true ) ) {
        struct Maybe_251  dref806 = ( (  next250 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_251_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_251_Just_t ) {
            struct funenv340  temp342 = (  fun804 );
            ( temp342.fun ( temp342.env ,  ( dref806 .stuff .Maybe_251_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

struct env344 {
    struct Cell_17 (*  fun1488 )(    struct Cell_17  );
    ;
    ;
    struct Slice_309  s1486;
    ;
};

struct funenv344 {
    enum Unit_113  (*fun) (  struct env344  ,    int32_t  );
    struct env344 env;
};

static  enum Unit_113   for_dash_each343 (    struct Range_247  iterable802 ,   struct funenv344  fun804 ) {
    struct RangeIter_249  temp345 = ( (  into_dash_iter248 ) ( (  iterable802 ) ) );
    struct RangeIter_249 *  it805 = ( &temp345 );
    while ( ( true ) ) {
        struct Maybe_251  dref806 = ( (  next250 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_251_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_251_Just_t ) {
            struct funenv344  temp346 = (  fun804 );
            ( temp346.fun ( temp346.env ,  ( dref806 .stuff .Maybe_251_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

enum ColorPalette_351 {
    ColorPalette_351_Palette8,
    ColorPalette_351_Palette16,
    ColorPalette_351_Palette256,
    ColorPalette_351_PaletteRGB,
};

struct Tui_350 {
    uint32_t  f_width;
    uint32_t  f_height;
    uint32_t  f_target_dash_fps;
    uint32_t  f_actual_dash_fps;
    enum ColorPalette_351  f_palette;
    struct timespec  f_last_dash_sync;
    struct timespec  f_fps_dash_ts;
    uint32_t  f_fps_dash_count;
    struct Termios_92  f_orig_dash_termios;
};

struct Screen_349 {
    enum CAllocator_322  f_al;
    struct Tui_350 *  f_tui;
    struct Slice_309  f_current;
    struct Slice_309  f_previous;
    bool  f_requires_dash_full_dash_redraw;
    struct Color_18  f_default_dash_fg;
    struct Color_18  f_default_dash_bg;
};

struct env348 {
    ;
    ;
    int32_t  y2508;
    struct Screen_349 *  screen2502;
    int32_t  x2511;
};

struct funenv348 {
    enum Unit_113  (*fun) (  struct env348  ,    struct Tuple2_270  );
    struct env348 env;
};

static  enum Unit_113   for_dash_each347 (    struct Zip_259  iterable802 ,   struct funenv348  fun804 ) {
    struct Zip_259  temp352 = ( (  into_dash_iter258 ) ( (  iterable802 ) ) );
    struct Zip_259 *  it805 = ( &temp352 );
    while ( ( true ) ) {
        struct Maybe_269  dref806 = ( (  next272 ) ( (  it805 ) ) );
        if ( dref806.tag == Maybe_269_None_t ) {
            return ( Unit_113_Unit );
        }
        else if ( dref806.tag == Maybe_269_Just_t ) {
            struct funenv348  temp353 = (  fun804 );
            ( temp353.fun ( temp353.env ,  ( dref806 .stuff .Maybe_269_Just_s .field0 ) ) );
        }
    }
    return ( Unit_113_Unit );
}

struct SmolArrayIter_355 {
    struct SmolArray_64  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_355   into_dash_iter356 (    struct SmolArray_64  self1590 ) {
    return ( (struct SmolArrayIter_355) { .f_backing = (  self1590 ) , .f_cur = (  from_dash_integral8 ( 0 ) ) } );
}

struct StrConcat_364 {
    const char*  field0;
    size_t  field1;
};

static struct StrConcat_364 StrConcat_364_StrConcat (  const char*  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_364 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_363 {
    struct StrConcat_364  field0;
    const char*  field1;
};

static struct StrConcat_363 StrConcat_363_StrConcat (  struct StrConcat_364  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_363 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_362 {
    struct StrConcat_363  field0;
    int32_t  field1;
};

static struct StrConcat_362 StrConcat_362_StrConcat (  struct StrConcat_363  field0 ,  int32_t  field1 ) {
    return ( struct StrConcat_362 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_361 {
    struct StrConcat_362  field0;
    char  field1;
};

static struct StrConcat_361 StrConcat_361_StrConcat (  struct StrConcat_362  field0 ,  char  field1 ) {
    return ( struct StrConcat_361 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_367 {
    const char*  field0;
    struct StrConcat_361  field1;
};

static struct StrConcat_367 StrConcat_367_StrConcat (  const char*  field0 ,  struct StrConcat_361  field1 ) {
    return ( struct StrConcat_367 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_366 {
    struct StrConcat_367  field0;
    char  field1;
};

static struct StrConcat_366 StrConcat_366_StrConcat (  struct StrConcat_367  field0 ,  char  field1 ) {
    return ( struct StrConcat_366 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str369 (    const char*  self1020 ) {
    ( ( printf ) ( ( "%s" ) ,  (  self1020 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str374 (    size_t  self1072 ) {
    ( ( printf ) ( ( "%lu" ) ,  (  self1072 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str373 (    struct StrConcat_364  self1111 ) {
    struct StrConcat_364  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str374 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str372 (    struct StrConcat_363  self1111 ) {
    struct StrConcat_363  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str373 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str369 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str375 (    int32_t  self1048 ) {
    ( ( printf ) ( ( "%d" ) ,  (  self1048 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str371 (    struct StrConcat_362  self1111 ) {
    struct StrConcat_362  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str372 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str375 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str376 (    char  self1026 ) {
    ( ( printf ) ( ( "%c" ) ,  (  self1026 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str370 (    struct StrConcat_361  self1111 ) {
    struct StrConcat_361  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str371 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str368 (    struct StrConcat_367  self1111 ) {
    struct StrConcat_367  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str370 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str365 (    struct StrConcat_366  self1111 ) {
    struct StrConcat_366  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str368 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic360 (    struct StrConcat_361  errmsg1288 ) {
    ( (  print_dash_str365 ) ( ( ( StrConcat_366_StrConcat ) ( ( ( StrConcat_367_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1288 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  uint32_t *   get_dash_ptr359 (    struct Array_65 *  arr1562 ,    size_t  i1565 ) {
    if ( ( (  cmp40 ( (  i1565 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1565 ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) ) {
        ( (  panic360 ) ( ( ( StrConcat_361_StrConcat ) ( ( ( StrConcat_362_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to array at index " ) ,  (  i1565 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 5 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1566 = ( ( (  cast144 ) ( (  arr1562 ) ) ) );
    return ( (  offset_dash_ptr115 ) ( (  p1566 ) ,  ( (int64_t ) (  i1565 ) ) ) );
}

static  uint32_t   get358 (    struct Array_65 *  arr1569 ,    size_t  i1572 ) {
    return ( * ( (  get_dash_ptr359 ) ( (  arr1569 ) ,  (  i1572 ) ) ) );
}

static  struct Maybe_242   next357 (    struct SmolArrayIter_355 *  self1597 ) {
    if ( (  cmp40 ( ( ( * (  self1597 ) ) .f_cur ) , ( (size_t ) ( 5 ) ) ) != 0 ) ) {
        return ( (struct Maybe_242) { .tag = Maybe_242_None_t } );
    }
    uint32_t  e1599 = ( (  get358 ) ( ( & ( ( ( * (  self1597 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1597 ) ) .f_cur ) ) );
    (*  self1597 ) .f_cur = (  op_dash_add57 ( ( ( * (  self1597 ) ) .f_cur ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_242_Just ) ( (  e1599 ) ) );
}

static  uint32_t   reduce354 (    struct SmolArray_64  iterable821 ,    uint32_t  base823 ,    uint32_t (*  fun825 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x826 = (  base823 );
    struct SmolArrayIter_355  it827 = ( (  into_dash_iter356 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_242  dref828 = ( (  next357 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_242_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_242_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_242_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    uint32_t  temp377;
    return (  temp377 );
}

struct SmolArrayIter_379 {
    struct SmolArray_61  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_379   into_dash_iter380 (    struct SmolArray_61  self1590 ) {
    return ( (struct SmolArrayIter_379) { .f_backing = (  self1590 ) , .f_cur = (  from_dash_integral8 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr383 (    struct Array_62 *  arr1562 ,    size_t  i1565 ) {
    if ( ( (  cmp40 ( (  i1565 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1565 ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) ) {
        ( (  panic360 ) ( ( ( StrConcat_361_StrConcat ) ( ( ( StrConcat_362_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to array at index " ) ,  (  i1565 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 4 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1566 = ( ( (  cast145 ) ( (  arr1562 ) ) ) );
    return ( (  offset_dash_ptr115 ) ( (  p1566 ) ,  ( (int64_t ) (  i1565 ) ) ) );
}

static  uint32_t   get382 (    struct Array_62 *  arr1569 ,    size_t  i1572 ) {
    return ( * ( (  get_dash_ptr383 ) ( (  arr1569 ) ,  (  i1572 ) ) ) );
}

static  struct Maybe_242   next381 (    struct SmolArrayIter_379 *  self1597 ) {
    if ( (  cmp40 ( ( ( * (  self1597 ) ) .f_cur ) , ( (size_t ) ( 4 ) ) ) != 0 ) ) {
        return ( (struct Maybe_242) { .tag = Maybe_242_None_t } );
    }
    uint32_t  e1599 = ( (  get382 ) ( ( & ( ( ( * (  self1597 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1597 ) ) .f_cur ) ) );
    (*  self1597 ) .f_cur = (  op_dash_add57 ( ( ( * (  self1597 ) ) .f_cur ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_242_Just ) ( (  e1599 ) ) );
}

static  uint32_t   reduce378 (    struct SmolArray_61  iterable821 ,    uint32_t  base823 ,    uint32_t (*  fun825 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x826 = (  base823 );
    struct SmolArrayIter_379  it827 = ( (  into_dash_iter380 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_242  dref828 = ( (  next381 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_242_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_242_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_242_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    uint32_t  temp384;
    return (  temp384 );
}

struct SmolArrayIter_386 {
    struct SmolArray_67  f_backing;
    size_t  f_cur;
};

static  struct SmolArrayIter_386   into_dash_iter387 (    struct SmolArray_67  self1590 ) {
    return ( (struct SmolArrayIter_386) { .f_backing = (  self1590 ) , .f_cur = (  from_dash_integral8 ( 0 ) ) } );
}

static  uint32_t *   get_dash_ptr390 (    struct Array_68 *  arr1562 ,    size_t  i1565 ) {
    if ( ( (  cmp40 ( (  i1565 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1565 ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) ) {
        ( (  panic360 ) ( ( ( StrConcat_361_StrConcat ) ( ( ( StrConcat_362_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to array at index " ) ,  (  i1565 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 1 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint32_t *  p1566 = ( ( (  cast146 ) ( (  arr1562 ) ) ) );
    return ( (  offset_dash_ptr115 ) ( (  p1566 ) ,  ( (int64_t ) (  i1565 ) ) ) );
}

static  uint32_t   get389 (    struct Array_68 *  arr1569 ,    size_t  i1572 ) {
    return ( * ( (  get_dash_ptr390 ) ( (  arr1569 ) ,  (  i1572 ) ) ) );
}

static  struct Maybe_242   next388 (    struct SmolArrayIter_386 *  self1597 ) {
    if ( (  cmp40 ( ( ( * (  self1597 ) ) .f_cur ) , ( (size_t ) ( 1 ) ) ) != 0 ) ) {
        return ( (struct Maybe_242) { .tag = Maybe_242_None_t } );
    }
    uint32_t  e1599 = ( (  get389 ) ( ( & ( ( ( * (  self1597 ) ) .f_backing ) .f_arr ) ) ,  ( ( * (  self1597 ) ) .f_cur ) ) );
    (*  self1597 ) .f_cur = (  op_dash_add57 ( ( ( * (  self1597 ) ) .f_cur ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( ( Maybe_242_Just ) ( (  e1599 ) ) );
}

static  uint32_t   reduce385 (    struct SmolArray_67  iterable821 ,    uint32_t  base823 ,    uint32_t (*  fun825 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x826 = (  base823 );
    struct SmolArrayIter_386  it827 = ( (  into_dash_iter387 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_242  dref828 = ( (  next388 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_242_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_242_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_242_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    uint32_t  temp391;
    return (  temp391 );
}

struct Maybe_393 {
    enum {
        Maybe_393_None_t,
        Maybe_393_Just_t,
    } tag;
    union {
        struct {
            int64_t  field0;
        } Maybe_393_Just_s;
    } stuff;
};

static struct Maybe_393 Maybe_393_Just (  int64_t  field0 ) {
    return ( struct Maybe_393 ) { .tag = Maybe_393_Just_t, .stuff = { .Maybe_393_Just_s = { .field0 = field0 } } };
};

static  struct SliceIter_231   into_dash_iter394 (    struct SliceIter_231  self1417 ) {
    return (  self1417 );
}

static  struct Maybe_393   reduce392 (    struct SliceIter_231  iterable821 ,    struct Maybe_393  base823 ,    struct Maybe_393 (*  fun825 )(    char  ,    struct Maybe_393  ) ) {
    struct Maybe_393  x826 = (  base823 );
    struct SliceIter_231  it827 = ( (  into_dash_iter394 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_237  dref828 = ( (  next271 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_237_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_237_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_237_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    struct Maybe_393  temp395;
    return (  temp395 );
}

static  struct Maybe_393   reduce396 (    struct ConstStrIter_240  iterable821 ,    struct Maybe_393  base823 ,    struct Maybe_393 (*  fun825 )(    char  ,    struct Maybe_393  ) ) {
    struct Maybe_393  x826 = (  base823 );
    struct ConstStrIter_240  it827 = ( (  into_dash_iter290 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_237  dref828 = ( (  next243 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_237_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_237_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_237_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    struct Maybe_393  temp397;
    return (  temp397 );
}

static  struct Maybe_393   reduce398 (    struct TakeWhile_292  iterable821 ,    struct Maybe_393  base823 ,    struct Maybe_393 (*  fun825 )(    char  ,    struct Maybe_393  ) ) {
    struct Maybe_393  x826 = (  base823 );
    struct TakeWhile_292  it827 = ( (  into_dash_iter291 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_237  dref828 = ( (  next293 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_237_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_237_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_237_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    struct Maybe_393  temp399;
    return (  temp399 );
}

static  size_t   reduce400 (    struct TakeWhile_292  iterable821 ,    size_t  base823 ,    size_t (*  fun825 )(    char  ,    size_t  ) ) {
    size_t  x826 = (  base823 );
    struct TakeWhile_292  it827 = ( (  into_dash_iter291 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_237  dref828 = ( (  next293 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_237_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_237_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_237_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    size_t  temp401;
    return (  temp401 );
}

static  uint32_t   reduce402 (    struct Map_239  iterable821 ,    uint32_t  base823 ,    uint32_t (*  fun825 )(    uint32_t  ,    uint32_t  ) ) {
    uint32_t  x826 = (  base823 );
    struct Map_239  it827 = ( (  into_dash_iter238 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_242  dref828 = ( (  next241 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_242_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_242_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_242_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    uint32_t  temp403;
    return (  temp403 );
}

struct StrConcat_408 {
    struct PadZeroes_264  field0;
    char  field1;
};

static struct StrConcat_408 StrConcat_408_StrConcat (  struct PadZeroes_264  field0 ,  char  field1 ) {
    return ( struct StrConcat_408 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_407 {
    struct StrConcat_408  field0;
    struct PadZeroes_264  field1;
};

static struct StrConcat_407 StrConcat_407_StrConcat (  struct StrConcat_408  field0 ,  struct PadZeroes_264  field1 ) {
    return ( struct StrConcat_407 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_406 {
    struct StrConcat_407  field0;
    char  field1;
};

static struct StrConcat_406 StrConcat_406_StrConcat (  struct StrConcat_407  field0 ,  char  field1 ) {
    return ( struct StrConcat_406 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_405 {
    struct StrConcat_406  field0;
    struct PadZeroes_264  field1;
};

static struct StrConcat_405 StrConcat_405_StrConcat (  struct StrConcat_406  field0 ,  struct PadZeroes_264  field1 ) {
    return ( struct StrConcat_405 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct PadZeroes_264   chars416 (    struct PadZeroes_264  self1202 ) {
    return (  self1202 );
}

static  struct AppendIter_265   chars417 (    char  self1029 ) {
    return ( (  single298 ) ( (  self1029 ) ) );
}

static  struct StrConcatIter_263   into_dash_iter415 (    struct StrConcat_408  dref1106 ) {
    return ( (struct StrConcatIter_263) { .f_left = ( (  chars416 ) ( ( dref1106 .field0 ) ) ) , .f_right = ( (  chars417 ) ( ( dref1106 .field1 ) ) ) } );
}

static  struct StrConcatIter_263   chars414 (    struct StrConcat_408  self1117 ) {
    return ( (  into_dash_iter415 ) ( (  self1117 ) ) );
}

static  struct StrConcatIter_262   into_dash_iter413 (    struct StrConcat_407  dref1106 ) {
    return ( (struct StrConcatIter_262) { .f_left = ( (  chars414 ) ( ( dref1106 .field0 ) ) ) , .f_right = ( (  chars416 ) ( ( dref1106 .field1 ) ) ) } );
}

static  struct StrConcatIter_262   chars412 (    struct StrConcat_407  self1117 ) {
    return ( (  into_dash_iter413 ) ( (  self1117 ) ) );
}

static  struct StrConcatIter_261   into_dash_iter411 (    struct StrConcat_406  dref1106 ) {
    return ( (struct StrConcatIter_261) { .f_left = ( (  chars412 ) ( ( dref1106 .field0 ) ) ) , .f_right = ( (  chars417 ) ( ( dref1106 .field1 ) ) ) } );
}

static  struct StrConcatIter_261   chars410 (    struct StrConcat_406  self1117 ) {
    return ( (  into_dash_iter411 ) ( (  self1117 ) ) );
}

static  struct StrConcatIter_260   into_dash_iter409 (    struct StrConcat_405  dref1106 ) {
    return ( (struct StrConcatIter_260) { .f_left = ( (  chars410 ) ( ( dref1106 .field0 ) ) ) , .f_right = ( (  chars416 ) ( ( dref1106 .field1 ) ) ) } );
}

static  size_t   reduce404 (    struct StrConcat_405  iterable821 ,    size_t  base823 ,    size_t (*  fun825 )(    char  ,    size_t  ) ) {
    size_t  x826 = (  base823 );
    struct StrConcatIter_260  it827 = ( (  into_dash_iter409 ) ( (  iterable821 ) ) );
    while ( ( true ) ) {
        struct Maybe_237  dref828 = ( (  next273 ) ( ( & (  it827 ) ) ) );
        if ( dref828.tag == Maybe_237_None_t ) {
            return (  x826 );
        }
        else if ( dref828.tag == Maybe_237_Just_t ) {
            x826 = ( (  fun825 ) ( ( dref828 .stuff .Maybe_237_Just_s .field0 ) ,  (  x826 ) ) );
        }
    }
    size_t  temp418;
    return (  temp418 );
}

static  size_t   lam420 (    char  dref833 ,    size_t  x835 ) {
    return (  op_dash_add57 ( (  x835 ) , (  from_dash_integral8 ( 1 ) ) ) );
}

static  size_t   count419 (    struct TakeWhile_292  it832 ) {
    return ( (  reduce400 ) ( (  it832 ) ,  (  from_dash_integral8 ( 0 ) ) ,  (  lam420 ) ) );
}

static  size_t   lam422 (    char  dref833 ,    size_t  x835 ) {
    return (  op_dash_add57 ( (  x835 ) , (  from_dash_integral8 ( 1 ) ) ) );
}

static  size_t   count421 (    struct StrConcat_405  it832 ) {
    return ( (  reduce404 ) ( (  it832 ) ,  (  from_dash_integral8 ( 0 ) ) ,  (  lam422 ) ) );
}

struct Maybe_424 {
    enum {
        Maybe_424_None_t,
        Maybe_424_Just_t,
    } tag;
    union {
        struct {
            struct DynStr_100  field0;
        } Maybe_424_Just_s;
    } stuff;
};

static struct Maybe_424 Maybe_424_Just (  struct DynStr_100  field0 ) {
    return ( struct Maybe_424 ) { .tag = Maybe_424_Just_t, .stuff = { .Maybe_424_Just_s = { .field0 = field0 } } };
};

struct LineIter_425 {
    struct DynStr_100  f_og;
    size_t  f_last;
};

struct StrConcat_430 {
    struct StrConcat_363  field0;
    size_t  field1;
};

static struct StrConcat_430 StrConcat_430_StrConcat (  struct StrConcat_363  field0 ,  size_t  field1 ) {
    return ( struct StrConcat_430 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_429 {
    struct StrConcat_430  field0;
    char  field1;
};

static struct StrConcat_429 StrConcat_429_StrConcat (  struct StrConcat_430  field0 ,  char  field1 ) {
    return ( struct StrConcat_429 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_434 {
    const char*  field0;
    struct StrConcat_429  field1;
};

static struct StrConcat_434 StrConcat_434_StrConcat (  const char*  field0 ,  struct StrConcat_429  field1 ) {
    return ( struct StrConcat_434 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_433 {
    struct StrConcat_434  field0;
    char  field1;
};

static struct StrConcat_433 StrConcat_433_StrConcat (  struct StrConcat_434  field0 ,  char  field1 ) {
    return ( struct StrConcat_433 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str437 (    struct StrConcat_430  self1111 ) {
    struct StrConcat_430  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str372 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str374 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str436 (    struct StrConcat_429  self1111 ) {
    struct StrConcat_429  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str437 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str435 (    struct StrConcat_434  self1111 ) {
    struct StrConcat_434  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str436 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str432 (    struct StrConcat_433  self1111 ) {
    struct StrConcat_433  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str435 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic431 (    struct StrConcat_429  errmsg1288 ) {
    ( (  print_dash_str432 ) ( ( ( StrConcat_433_StrConcat ) ( ( ( StrConcat_434_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1288 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  char   or_dash_fail428 (    struct Maybe_237  x1301 ,    struct StrConcat_429  errmsg1303 ) {
    struct Maybe_237  dref1304 = (  x1301 );
    if ( dref1304.tag == Maybe_237_None_t ) {
        ( (  panic431 ) ( (  errmsg1303 ) ) );
        return ( (  undefined97 ) ( ) );
    }
    else if ( dref1304.tag == Maybe_237_Just_t ) {
        return ( dref1304 .stuff .Maybe_237_Just_s .field0 );
    }
}

static  struct Maybe_237   try_dash_get438 (    struct Slice_101  slice1376 ,    size_t  i1378 ) {
    if ( ( (  cmp40 ( (  i1378 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1378 ) , ( (  slice1376 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    char *  elem_dash_ptr1379 = ( (  offset_dash_ptr123 ) ( ( (  slice1376 ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  i1378 ) ) ) ) );
    return ( ( Maybe_237_Just ) ( ( * (  elem_dash_ptr1379 ) ) ) );
}

static  char   get427 (    struct Slice_101  slice1382 ,    size_t  i1384 ) {
    return ( (  or_dash_fail428 ) ( ( (  try_dash_get438 ) ( (  slice1382 ) ,  (  i1384 ) ) ) ,  ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1384 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1382 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  char   nullchar439 (  ) {
    return ( (  zeroed187 ) ( ) );
}

static  char   newline440 (  ) {
    return ( (  from_dash_charlike1 ) ( ( "\n" ) ) );
}

static  size_t   min443 (    size_t  l974 ,    size_t  r976 ) {
    if ( (  cmp40 ( (  l974 ) , (  r976 ) ) == 0 ) ) {
        return (  l974 );
    } else {
        return (  r976 );
    }
}

static  struct Slice_101   subslice442 (    struct Slice_101  slice1395 ,    size_t  from1397 ,    size_t  to1399 ) {
    char *  begin_dash_ptr1400 = ( (  offset_dash_ptr123 ) ( ( (  slice1395 ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  from1397 ) ) ) ) );
    if ( ( (  cmp40 ( (  from1397 ) , (  to1399 ) ) != 0 ) || (  cmp40 ( (  from1397 ) , ( (  slice1395 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Slice_101) { .f_ptr = (  begin_dash_ptr1400 ) , .f_count = (  from_dash_integral8 ( 0 ) ) } );
    }
    size_t  count1401 = (  op_dash_sub58 ( ( (  min443 ) ( (  to1399 ) ,  ( (  slice1395 ) .f_count ) ) ) , (  from1397 ) ) );
    return ( (struct Slice_101) { .f_ptr = (  begin_dash_ptr1400 ) , .f_count = (  count1401 ) } );
}

static  struct DynStr_100   substr441 (    struct DynStr_100  s1538 ,    size_t  from1540 ,    size_t  to1542 ) {
    return ( (struct DynStr_100) { .f_contents = ( (  subslice442 ) ( ( (  s1538 ) .f_contents ) ,  (  from1540 ) ,  (  to1542 ) ) ) } );
}

static  struct Maybe_424   next426 (    struct LineIter_425 *  self1660 ) {
    if ( ( (  cmp40 ( ( ( * (  self1660 ) ) .f_last ) , ( ( ( ( * (  self1660 ) ) .f_og ) .f_contents ) .f_count ) ) != 0 ) || (  eq15 ( ( (  get427 ) ( ( ( ( * (  self1660 ) ) .f_og ) .f_contents ) ,  ( ( * (  self1660 ) ) .f_last ) ) ) , ( (  nullchar439 ) ( ) ) ) ) ) ) {
        return ( (struct Maybe_424) { .tag = Maybe_424_None_t } );
    }
    size_t  i1661 = ( ( * (  self1660 ) ) .f_last );
    while ( ( (  cmp40 ( (  i1661 ) , ( ( ( ( * (  self1660 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) && ( !  eq15 ( ( (  get427 ) ( ( ( ( * (  self1660 ) ) .f_og ) .f_contents ) ,  (  i1661 ) ) ) , ( (  newline440 ) ( ) ) ) ) ) ) {
        i1661 = (  op_dash_add57 ( (  i1661 ) , (  from_dash_integral8 ( 1 ) ) ) );
    }
    struct DynStr_100  line1662 = ( (  substr441 ) ( ( ( * (  self1660 ) ) .f_og ) ,  ( ( * (  self1660 ) ) .f_last ) ,  (  i1661 ) ) );
    if ( (  cmp40 ( (  i1661 ) , ( ( ( ( * (  self1660 ) ) .f_og ) .f_contents ) .f_count ) ) == 0 ) ) {
        i1661 = (  op_dash_add57 ( (  i1661 ) , (  from_dash_integral8 ( 1 ) ) ) );
    }
    (*  self1660 ) .f_last = (  i1661 );
    return ( ( Maybe_424_Just ) ( (  line1662 ) ) );
}

static  struct LineIter_425   into_dash_iter445 (    struct LineIter_425  self1657 ) {
    return (  self1657 );
}

static  struct Maybe_424   head423 (    struct LineIter_425  it870 ) {
    struct LineIter_425  temp444 = ( (  into_dash_iter445 ) ( (  it870 ) ) );
    return ( (  next426 ) ( ( &temp444 ) ) );
}

static  struct Maybe_237   head446 (    struct SliceIter_231  it870 ) {
    struct SliceIter_231  temp447 = ( (  into_dash_iter394 ) ( (  it870 ) ) );
    return ( (  next271 ) ( ( &temp447 ) ) );
}

static  struct Maybe_237   head448 (    struct ConstStrIter_240  it870 ) {
    struct ConstStrIter_240  temp449 = ( (  into_dash_iter290 ) ( (  it870 ) ) );
    return ( (  next243 ) ( ( &temp449 ) ) );
}

static  struct Maybe_237   head450 (    struct TakeWhile_292  it870 ) {
    struct TakeWhile_292  temp451 = ( (  into_dash_iter291 ) ( (  it870 ) ) );
    return ( (  next293 ) ( ( &temp451 ) ) );
}

static  bool   null452 (    struct TakeWhile_292  it873 ) {
    struct Maybe_237  dref874 = ( (  head450 ) ( (  it873 ) ) );
    if ( dref874.tag == Maybe_237_None_t ) {
        return ( true );
    }
    else if ( true ) {
        return ( false );
    }
}

static  struct Maybe_237   lam340 (   struct env340 env ,    int32_t  dref911 ) {
    return ( (  next294 ) ( ( env.it908 ) ) );
}

static  enum Unit_113   drop_prime_453 (    struct Scanner_230 *  it908 ,    size_t  n910 ) {
    struct env340 envinst340 = {
        .it908 =  it908 ,
    };
    ( (  for_dash_each339 ) ( ( (  to246 ) ( (  from_dash_integral3 ( 1 ) ) ,  ( (  size_dash_i32223 ) ( (  n910 ) ) ) ) ) ,  ( (struct funenv340){ .fun = lam340, .env = envinst340 } ) ) );
    return ( Unit_113_Unit );
}

static  uint32_t   u32_dash_or454 (    uint32_t  l951 ,    uint32_t  r953 ) {
    return ( (  l951 ) | (  r953 ) );
}

static  uint32_t   u32_dash_ors455 (    struct SmolArray_64  vals956 ) {
    return ( (  reduce354 ) ( (  vals956 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  u32_dash_or454 ) ) );
}

static  uint32_t   u32_dash_ors456 (    struct SmolArray_61  vals956 ) {
    return ( (  reduce378 ) ( (  vals956 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  u32_dash_or454 ) ) );
}

static  uint32_t   u32_dash_ors457 (    struct SmolArray_67  vals956 ) {
    return ( (  reduce385 ) ( (  vals956 ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  u32_dash_or454 ) ) );
}

static  uint32_t   u32_dash_and458 (    uint32_t  l959 ,    uint32_t  r961 ) {
    return ( (  l959 ) & (  r961 ) );
}

static  uint32_t   u32_dash_neg459 (    uint32_t  l964 ) {
    return ( ~ (  l964 ) );
}

static  int64_t   mod460 (    int64_t  l967 ,    int64_t  d969 ) {
    int64_t  r970 = (  op_dash_div46 ( (  l967 ) , (  d969 ) ) );
    int64_t  m971 = (  op_dash_sub44 ( (  l967 ) , (  op_dash_mul45 ( (  r970 ) , (  d969 ) ) ) ) );
    if ( (  cmp38 ( (  m971 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        return (  op_dash_add43 ( (  d969 ) , (  m971 ) ) );
    } else {
        return (  m971 );
    }
}

static  int32_t   min461 (    int32_t  l974 ,    int32_t  r976 ) {
    if ( (  cmp41 ( (  l974 ) , (  r976 ) ) == 0 ) ) {
        return (  l974 );
    } else {
        return (  r976 );
    }
}

static  uint8_t   max462 (    uint8_t  l979 ,    uint8_t  r981 ) {
    if ( (  cmp42 ( (  l979 ) , (  r981 ) ) == 2 ) ) {
        return (  l979 );
    } else {
        return (  r981 );
    }
}

static  struct ConstStrIter_240   chars463 (    const char*  self1023 ) {
    return ( (  into_dash_iter245 ) ( (  self1023 ) ) );
}

static  int32_t   count_dash_digits464 (    int64_t  self1044 ) {
    if ( (  eq9 ( (  self1044 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
        return (  from_dash_integral3 ( 1 ) );
    }
    int32_t  digits1045 = (  from_dash_integral3 ( 0 ) );
    while ( (  cmp38 ( (  self1044 ) , (  from_dash_integral2 ( 0 ) ) ) == 2 ) ) {
        self1044 = (  op_dash_div46 ( (  self1044 ) , (  from_dash_integral2 ( 10 ) ) ) );
        digits1045 = (  op_dash_add48 ( (  digits1045 ) , (  from_dash_integral3 ( 1 ) ) ) );
    }
    return (  digits1045 );
}

static  int32_t   count_dash_digits465 (    int32_t  self1044 ) {
    if ( (  eq10 ( (  self1044 ) , (  from_dash_integral3 ( 0 ) ) ) ) ) {
        return (  from_dash_integral3 ( 1 ) );
    }
    int32_t  digits1045 = (  from_dash_integral3 ( 0 ) );
    while ( (  cmp41 ( (  self1044 ) , (  from_dash_integral3 ( 0 ) ) ) == 2 ) ) {
        self1044 = (  op_dash_div51 ( (  self1044 ) , (  from_dash_integral3 ( 10 ) ) ) );
        digits1045 = (  op_dash_add48 ( (  digits1045 ) , (  from_dash_integral3 ( 1 ) ) ) );
    }
    return (  digits1045 );
}

static  enum Unit_113   print_dash_str466 (    uint32_t  self1054 ) {
    ( ( printf ) ( ( "%u" ) ,  (  self1054 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str467 (    uint8_t  self1060 ) {
    ( ( printf ) ( ( "%d" ) ,  ( (  u8_dash_i32228 ) ( (  self1060 ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str468 (    int64_t  self1066 ) {
    ( ( printf ) ( ( "%ld" ) ,  (  self1066 ) ) );
    return ( Unit_113_Unit );
}

static  struct IntStrIter_318   chars469 (    int64_t  self1069 ) {
    return ( (struct IntStrIter_318) { .f_int = (  self1069 ) , .f_len = ( (  count_dash_digits464 ) ( (  self1069 ) ) ) } );
}

struct StrConcat_471 {
    int64_t  field0;
    char  field1;
};

static struct StrConcat_471 StrConcat_471_StrConcat (  int64_t  field0 ,  char  field1 ) {
    return ( struct StrConcat_471 ) { .field0 = field0 ,  .field1 = field1 };
};

static  struct StrConcatIter_317   into_dash_iter470 (    struct StrConcat_471  dref1106 ) {
    return ( (struct StrConcatIter_317) { .f_left = ( (  chars469 ) ( ( dref1106 .field0 ) ) ) , .f_right = ( (  chars417 ) ( ( dref1106 .field1 ) ) ) } );
}

struct StrConcat_474 {
    const char*  field0;
    const char*  field1;
};

static struct StrConcat_474 StrConcat_474_StrConcat (  const char*  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_474 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_473 {
    struct StrConcat_474  field0;
    char  field1;
};

static struct StrConcat_473 StrConcat_473_StrConcat (  struct StrConcat_474  field0 ,  char  field1 ) {
    return ( struct StrConcat_473 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str475 (    struct StrConcat_474  self1111 ) {
    struct StrConcat_474  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str369 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str472 (    struct StrConcat_473  self1111 ) {
    struct StrConcat_473  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str475 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_478 {
    const char*  field0;
    struct StrConcat_474  field1;
};

static struct StrConcat_478 StrConcat_478_StrConcat (  const char*  field0 ,  struct StrConcat_474  field1 ) {
    return ( struct StrConcat_478 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_477 {
    struct StrConcat_478  field0;
    char  field1;
};

static struct StrConcat_477 StrConcat_477_StrConcat (  struct StrConcat_478  field0 ,  char  field1 ) {
    return ( struct StrConcat_477 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str479 (    struct StrConcat_478  self1111 ) {
    struct StrConcat_478  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str475 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str476 (    struct StrConcat_477  self1111 ) {
    struct StrConcat_477  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str479 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_482 {
    char  field0;
    char  field1;
};

static struct StrConcat_482 StrConcat_482_StrConcat (  char  field0 ,  char  field1 ) {
    return ( struct StrConcat_482 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_481 {
    struct StrConcat_482  field0;
    const char*  field1;
};

static struct StrConcat_481 StrConcat_481_StrConcat (  struct StrConcat_482  field0 ,  const char*  field1 ) {
    return ( struct StrConcat_481 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str483 (    struct StrConcat_482  self1111 ) {
    struct StrConcat_482  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str376 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str480 (    struct StrConcat_481  self1111 ) {
    struct StrConcat_481  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str483 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str369 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_486 {
    const char*  field0;
    struct StrConcat_481  field1;
};

static struct StrConcat_486 StrConcat_486_StrConcat (  const char*  field0 ,  struct StrConcat_481  field1 ) {
    return ( struct StrConcat_486 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_485 {
    struct StrConcat_486  field0;
    char  field1;
};

static struct StrConcat_485 StrConcat_485_StrConcat (  struct StrConcat_486  field0 ,  char  field1 ) {
    return ( struct StrConcat_485 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str487 (    struct StrConcat_486  self1111 ) {
    struct StrConcat_486  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str480 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str484 (    struct StrConcat_485  self1111 ) {
    struct StrConcat_485  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str487 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_494 {
    const char*  field0;
    uint8_t  field1;
};

static struct StrConcat_494 StrConcat_494_StrConcat (  const char*  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_494 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_493 {
    struct StrConcat_494  field0;
    char  field1;
};

static struct StrConcat_493 StrConcat_493_StrConcat (  struct StrConcat_494  field0 ,  char  field1 ) {
    return ( struct StrConcat_493 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_492 {
    struct StrConcat_493  field0;
    uint8_t  field1;
};

static struct StrConcat_492 StrConcat_492_StrConcat (  struct StrConcat_493  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_492 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_491 {
    struct StrConcat_492  field0;
    char  field1;
};

static struct StrConcat_491 StrConcat_491_StrConcat (  struct StrConcat_492  field0 ,  char  field1 ) {
    return ( struct StrConcat_491 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_490 {
    struct StrConcat_491  field0;
    uint8_t  field1;
};

static struct StrConcat_490 StrConcat_490_StrConcat (  struct StrConcat_491  field0 ,  uint8_t  field1 ) {
    return ( struct StrConcat_490 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_489 {
    struct StrConcat_490  field0;
    char  field1;
};

static struct StrConcat_489 StrConcat_489_StrConcat (  struct StrConcat_490  field0 ,  char  field1 ) {
    return ( struct StrConcat_489 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str499 (    struct StrConcat_494  self1111 ) {
    struct StrConcat_494  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str467 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str498 (    struct StrConcat_493  self1111 ) {
    struct StrConcat_493  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str499 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str497 (    struct StrConcat_492  self1111 ) {
    struct StrConcat_492  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str498 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str467 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str496 (    struct StrConcat_491  self1111 ) {
    struct StrConcat_491  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str497 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str495 (    struct StrConcat_490  self1111 ) {
    struct StrConcat_490  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str496 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str467 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str488 (    struct StrConcat_489  self1111 ) {
    struct StrConcat_489  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str495 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

struct StrConcat_504 {
    const char*  field0;
    uint32_t  field1;
};

static struct StrConcat_504 StrConcat_504_StrConcat (  const char*  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_504 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_503 {
    struct StrConcat_504  field0;
    char  field1;
};

static struct StrConcat_503 StrConcat_503_StrConcat (  struct StrConcat_504  field0 ,  char  field1 ) {
    return ( struct StrConcat_503 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_502 {
    struct StrConcat_503  field0;
    uint32_t  field1;
};

static struct StrConcat_502 StrConcat_502_StrConcat (  struct StrConcat_503  field0 ,  uint32_t  field1 ) {
    return ( struct StrConcat_502 ) { .field0 = field0 ,  .field1 = field1 };
};

struct StrConcat_501 {
    struct StrConcat_502  field0;
    char  field1;
};

static struct StrConcat_501 StrConcat_501_StrConcat (  struct StrConcat_502  field0 ,  char  field1 ) {
    return ( struct StrConcat_501 ) { .field0 = field0 ,  .field1 = field1 };
};

static  enum Unit_113   print_dash_str507 (    struct StrConcat_504  self1111 ) {
    struct StrConcat_504  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str369 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str466 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str506 (    struct StrConcat_503  self1111 ) {
    struct StrConcat_503  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str507 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str505 (    struct StrConcat_502  self1111 ) {
    struct StrConcat_502  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str506 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str466 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str500 (    struct StrConcat_501  self1111 ) {
    struct StrConcat_501  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str505 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   print_dash_str508 (    struct StrConcat_471  self1111 ) {
    struct StrConcat_471  dref1112 = (  self1111 );
    if ( true ) {
        ( (  print_dash_str468 ) ( ( dref1112 .field0 ) ) );
        ( (  print_dash_str376 ) ( ( dref1112 .field1 ) ) );
    }
    return ( Unit_113_Unit );
}

static  struct StrConcatIter_317   chars509 (    struct StrConcat_471  self1117 ) {
    return ( (  into_dash_iter470 ) ( (  self1117 ) ) );
}

static  struct StrConcatIter_260   chars510 (    struct StrConcat_405  self1117 ) {
    return ( (  into_dash_iter409 ) ( (  self1117 ) ) );
}

static  struct PadZeroes_264   pad_dash_zeroes511 (    int32_t  x1205 ,    uint8_t  num_dash_zeroes1207 ,    bool  trim_dash_larger1209 ) {
    return ( (struct PadZeroes_264) { .f_x = (  x1205 ) , .f_len = ( ( ! (  trim_dash_larger1209 ) ) ? (  num_dash_zeroes1207 ) : ( (  max462 ) ( (  num_dash_zeroes1207 ) ,  ( (  i32_dash_u8216 ) ( ( (  count_dash_digits465 ) ( (  x1205 ) ) ) ) ) ) ) ) } );
}

static  struct TakeWhile_292   chars512 (    struct TakeWhile_292  self1227 ) {
    return (  self1227 );
}

static  int32_t   char_dash_i32513 (    char  c1254 ) {
    return ( (  cast_dash_on_dash_zeroed201 ) ( (  c1254 ) ) );
}

static  uint8_t   char_dash_u8514 (    char  c1257 ) {
    return ( (  cast157 ) ( (  c1257 ) ) );
}

static  char   i32_dash_char515 (    int32_t  i1260 ) {
    return ( (  cast158 ) ( (  i1260 ) ) );
}

static  bool   eq516 (    const char*  l1273 ,    const char*  r1275 ) {
    return (  eq10 ( ( ( strcmp ) ( (  l1273 ) ,  (  r1275 ) ) ) , (  from_dash_integral3 ( 0 ) ) ) );
}

static  enum Ordering_39   cmp517 (    char  l1278 ,    char  r1280 ) {
    return ( (  cmp41 ) ( ( (  char_dash_i32513 ) ( (  l1278 ) ) ) ,  ( (  char_dash_i32513 ) ( (  r1280 ) ) ) ) );
}

static  bool   unreachable518 (  ) {
    ( (  print_dash_str369 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( (  undefined105 ) ( ) );
}

static  enum Unit_113   unreachable519 (  ) {
    ( (  print_dash_str369 ) ( ( "unreachable\n" ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( (  undefined112 ) ( ) );
}

static  enum Unit_113   panic520 (    const char*  errmsg1288 ) {
    ( (  print_dash_str472 ) ( ( ( StrConcat_473_StrConcat ) ( ( ( StrConcat_474_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1288 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic521 (    struct StrConcat_474  errmsg1288 ) {
    ( (  print_dash_str476 ) ( ( ( StrConcat_477_StrConcat ) ( ( ( StrConcat_478_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1288 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   panic522 (    struct StrConcat_481  errmsg1288 ) {
    ( (  print_dash_str484 ) ( ( ( StrConcat_485_StrConcat ) ( ( ( StrConcat_486_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1288 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  enum MouseButton_108   panic_prime_523 (    const char*  errmsg1291 ) {
    ( (  print_dash_str472 ) ( ( ( StrConcat_473_StrConcat ) ( ( ( StrConcat_474_StrConcat ) ( ( "PANIC: " ) ,  (  errmsg1291 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    ( ( exit ) ( (  from_dash_integral3 ( 1 ) ) ) );
    return ( (  undefined107 ) ( ) );
}

struct Maybe_525 {
    enum {
        Maybe_525_None_t,
        Maybe_525_Just_t,
    } tag;
    union {
        struct {
            struct Cell_17  field0;
        } Maybe_525_Just_s;
    } stuff;
};

static struct Maybe_525 Maybe_525_Just (  struct Cell_17  field0 ) {
    return ( struct Maybe_525 ) { .tag = Maybe_525_Just_t, .stuff = { .Maybe_525_Just_s = { .field0 = field0 } } };
};

static  struct Cell_17   or_dash_fail524 (    struct Maybe_525  x1301 ,    struct StrConcat_429  errmsg1303 ) {
    struct Maybe_525  dref1304 = (  x1301 );
    if ( dref1304.tag == Maybe_525_None_t ) {
        ( (  panic431 ) ( (  errmsg1303 ) ) );
        return ( (  undefined95 ) ( ) );
    }
    else if ( dref1304.tag == Maybe_525_Just_t ) {
        return ( dref1304 .stuff .Maybe_525_Just_s .field0 );
    }
}

static  struct DynStr_100   or_dash_fail526 (    struct Maybe_424  x1301 ,    const char*  errmsg1303 ) {
    struct Maybe_424  dref1304 = (  x1301 );
    if ( dref1304.tag == Maybe_424_None_t ) {
        ( (  panic520 ) ( (  errmsg1303 ) ) );
        return ( (  undefined99 ) ( ) );
    }
    else if ( dref1304.tag == Maybe_424_Just_t ) {
        return ( dref1304 .stuff .Maybe_424_Just_s .field0 );
    }
}

static  int64_t   or_dash_fail527 (    struct Maybe_393  x1301 ,    const char*  errmsg1303 ) {
    struct Maybe_393  dref1304 = (  x1301 );
    if ( dref1304.tag == Maybe_393_None_t ) {
        ( (  panic520 ) ( (  errmsg1303 ) ) );
        return ( (  undefined103 ) ( ) );
    }
    else if ( dref1304.tag == Maybe_393_Just_t ) {
        return ( dref1304 .stuff .Maybe_393_Just_s .field0 );
    }
}

struct Maybe_529 {
    enum {
        Maybe_529_None_t,
        Maybe_529_Just_t,
    } tag;
    union {
        struct {
            uint8_t  field0;
        } Maybe_529_Just_s;
    } stuff;
};

static struct Maybe_529 Maybe_529_Just (  uint8_t  field0 ) {
    return ( struct Maybe_529 ) { .tag = Maybe_529_Just_t, .stuff = { .Maybe_529_Just_s = { .field0 = field0 } } };
};

static  uint8_t   or_dash_fail528 (    struct Maybe_529  x1301 ,    struct StrConcat_481  errmsg1303 ) {
    struct Maybe_529  dref1304 = (  x1301 );
    if ( dref1304.tag == Maybe_529_None_t ) {
        ( (  panic522 ) ( (  errmsg1303 ) ) );
        return ( (  undefined110 ) ( ) );
    }
    else if ( dref1304.tag == Maybe_529_Just_t ) {
        return ( dref1304 .stuff .Maybe_529_Just_s .field0 );
    }
}

struct Tuple2_531 {
    uint32_t  field0;
    uint32_t  field1;
};

static struct Tuple2_531 Tuple2_531_Tuple2 (  uint32_t  field0 ,  uint32_t  field1 ) {
    return ( struct Tuple2_531 ) { .field0 = field0 ,  .field1 = field1 };
};

static  uint32_t   fst530 (    struct Tuple2_531  dref1331 ) {
    return ( dref1331 .field0 );
}

static  uint32_t   snd532 (    struct Tuple2_531  dref1334 ) {
    return ( dref1334 .field1 );
}

static  struct Slice_101   empty533 (  ) {
    return ( (struct Slice_101) { .f_ptr = ( (  null_dash_ptr209 ) ( ) ) , .f_count = (  from_dash_integral8 ( 0 ) ) } );
}

static  struct Cell_17 *   get_dash_ptr534 (    struct Slice_309  slice1370 ,    size_t  i1372 ) {
    if ( ( (  cmp40 ( (  i1372 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1372 ) , ( (  slice1370 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic431 ) ( ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1372 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1370 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    struct Cell_17 *  elem_dash_ptr1373 = ( (  offset_dash_ptr119 ) ( ( (  slice1370 ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  i1372 ) ) ) ) );
    return (  elem_dash_ptr1373 );
}

static  char *   get_dash_ptr535 (    struct Slice_101  slice1370 ,    size_t  i1372 ) {
    if ( ( (  cmp40 ( (  i1372 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1372 ) , ( (  slice1370 ) .f_count ) ) != 0 ) ) ) {
        ( (  panic431 ) ( ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1372 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1370 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  elem_dash_ptr1373 = ( (  offset_dash_ptr123 ) ( ( (  slice1370 ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  i1372 ) ) ) ) );
    return (  elem_dash_ptr1373 );
}

static  struct Maybe_525   try_dash_get536 (    struct Slice_309  slice1376 ,    size_t  i1378 ) {
    if ( ( (  cmp40 ( (  i1378 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1378 ) , ( (  slice1376 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_525) { .tag = Maybe_525_None_t } );
    }
    struct Cell_17 *  elem_dash_ptr1379 = ( (  offset_dash_ptr119 ) ( ( (  slice1376 ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  i1378 ) ) ) ) );
    return ( ( Maybe_525_Just ) ( ( * (  elem_dash_ptr1379 ) ) ) );
}

struct Slice_538 {
    const char* *  f_ptr;
    size_t  f_count;
};

static  struct Maybe_214   try_dash_get537 (    struct Slice_538  slice1376 ,    size_t  i1378 ) {
    if ( ( (  cmp40 ( (  i1378 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1378 ) , ( (  slice1376 ) .f_count ) ) != 0 ) ) ) {
        return ( (struct Maybe_214) { .tag = Maybe_214_None_t } );
    }
    const char* *  elem_dash_ptr1379 = ( (  offset_dash_ptr121 ) ( ( (  slice1376 ) .f_ptr ) ,  ( (  size_dash_i64215 ) ( (  i1378 ) ) ) ) );
    return ( ( Maybe_214_Just ) ( ( * (  elem_dash_ptr1379 ) ) ) );
}

static  struct Cell_17   get539 (    struct Slice_309  slice1382 ,    size_t  i1384 ) {
    return ( (  or_dash_fail524 ) ( ( (  try_dash_get536 ) ( (  slice1382 ) ,  (  i1384 ) ) ) ,  ( ( StrConcat_429_StrConcat ) ( ( ( StrConcat_430_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to slice at index " ) ,  (  i1384 ) ) ) ,  ( ". (max: " ) ) ) ,  ( (  slice1382 ) .f_count ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
}

static  enum Unit_113   set540 (    struct Slice_309  slice1387 ,    size_t  i1389 ,    struct Cell_17  x1391 ) {
    struct Cell_17 *  ep1392 = ( (  get_dash_ptr534 ) ( (  slice1387 ) ,  (  i1389 ) ) );
    (*  ep1392 ) = (  x1391 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set541 (    struct Slice_101  slice1387 ,    size_t  i1389 ,    char  x1391 ) {
    char *  ep1392 = ( (  get_dash_ptr535 ) ( (  slice1387 ) ,  (  i1389 ) ) );
    (*  ep1392 ) = (  x1391 );
    return ( Unit_113_Unit );
}

static  struct Cell_17   elem_dash_get542 (    struct Slice_309  self1459 ,    size_t  idx1461 ) {
    return ( (  get539 ) ( (  self1459 ) ,  (  idx1461 ) ) );
}

static  char   elem_dash_get543 (    struct Slice_101  self1459 ,    size_t  idx1461 ) {
    return ( (  get427 ) ( (  self1459 ) ,  (  idx1461 ) ) );
}

static  enum Unit_113   lam308 (   struct env308 env ,    int32_t  i1490 ) {
    return ( (  set540 ) ( ( env.s1486 ) ,  ( (  i32_dash_size219 ) ( (  i1490 ) ) ) ,  ( ( env.fun1488 ) ( (  elem_dash_get542 ( ( env.s1486 ) , ( (  i32_dash_size219 ) ( (  i1490 ) ) ) ) ) ) ) ) );
}

static  enum Unit_113   map544 (    struct Slice_309  s1486 ,    struct Cell_17 (*  fun1488 )(    struct Cell_17  ) ) {
    struct env308 envinst308 = {
        .fun1488 =  fun1488 ,
        .s1486 =  s1486 ,
    };
    ( (  for_dash_each307 ) ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i32223 ) ( (  op_dash_sub58 ( ( (  s1486 ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv308){ .fun = lam308, .env = envinst308 } ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   lam313 (   struct env313 env ,    int32_t  i1490 ) {
    return ( (  set540 ) ( ( env.s1486 ) ,  ( (  i32_dash_size219 ) ( (  i1490 ) ) ) ,  ( ( env.fun1488 ) ( (  elem_dash_get542 ( ( env.s1486 ) , ( (  i32_dash_size219 ) ( (  i1490 ) ) ) ) ) ) ) ) );
}

static  enum Unit_113   map545 (    struct Slice_309  s1486 ,    struct Cell_17 (*  fun1488 )(    struct Cell_17  ) ) {
    struct env313 envinst313 = {
        .fun1488 =  fun1488 ,
        .s1486 =  s1486 ,
    };
    ( (  for_dash_each312 ) ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i32223 ) ( (  op_dash_sub58 ( ( (  s1486 ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv313){ .fun = lam313, .env = envinst313 } ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   lam344 (   struct env344 env ,    int32_t  i1490 ) {
    return ( (  set540 ) ( ( env.s1486 ) ,  ( (  i32_dash_size219 ) ( (  i1490 ) ) ) ,  ( ( env.fun1488 ) ( (  elem_dash_get542 ( ( env.s1486 ) , ( (  i32_dash_size219 ) ( (  i1490 ) ) ) ) ) ) ) ) );
}

static  enum Unit_113   map546 (    struct Slice_309  s1486 ,    struct Cell_17 (*  fun1488 )(    struct Cell_17  ) ) {
    struct env344 envinst344 = {
        .fun1488 =  fun1488 ,
        .s1486 =  s1486 ,
    };
    ( (  for_dash_each343 ) ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  ( (  size_dash_i32223 ) ( (  op_dash_sub58 ( ( (  s1486 ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) ) ) ,  ( (struct funenv344){ .fun = lam344, .env = envinst344 } ) ) );
    return ( Unit_113_Unit );
}

static  enum CAllocator_322   idc547 (  ) {
    return ( CAllocator_322_CAllocator );
}

static  struct Slice_309   allocate548 (    enum CAllocator_322  dref1517 ,    size_t  count1519 ) {
    if (!(  dref1517 == CAllocator_322_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1520 = ( ( ( (  get_dash_typesize125 ) ( ) ) ) .f_size );
    struct Cell_17 *  ptr1521 = ( (  cast_dash_ptr165 ) ( ( ( malloc ) ( (  op_dash_mul59 ( (  size1520 ) , (  count1519 ) ) ) ) ) ) );
    return ( (struct Slice_309) { .f_ptr = (  ptr1521 ) , .f_count = (  count1519 ) } );
}

static  struct Slice_101   allocate549 (    enum CAllocator_322  dref1517 ,    size_t  count1519 ) {
    if (!(  dref1517 == CAllocator_322_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    size_t  size1520 = ( ( ( (  get_dash_typesize128 ) ( ) ) ) .f_size );
    char *  ptr1521 = ( (  cast_dash_ptr167 ) ( ( ( malloc ) ( (  op_dash_mul59 ( (  size1520 ) , (  count1519 ) ) ) ) ) ) );
    return ( (struct Slice_101) { .f_ptr = (  ptr1521 ) , .f_count = (  count1519 ) } );
}

static  enum Unit_113   free550 (    enum CAllocator_322  dref1523 ,    struct Slice_101  slice1525 ) {
    if (!(  dref1523 == CAllocator_322_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr168 ) ( ( (  slice1525 ) .f_ptr ) ) ) ) );
    return ( Unit_113_Unit );
}

struct Slice_552 {
    enum Unit_113 *  f_ptr;
    size_t  f_count;
};

static  enum Unit_113   free551 (    enum CAllocator_322  dref1523 ,    struct Slice_552  slice1525 ) {
    if (!(  dref1523 == CAllocator_322_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr170 ) ( ( (  slice1525 ) .f_ptr ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   free553 (    enum CAllocator_322  dref1523 ,    struct Slice_309  slice1525 ) {
    if (!(  dref1523 == CAllocator_322_CAllocator )) {
        printf("%s\n", "pattern not matched to enter function");
        exit ( 1 );
    }
    ( ( free ) ( ( (  cast_dash_ptr176 ) ( ( (  slice1525 ) .f_ptr ) ) ) ) );
    return ( Unit_113_Unit );
}

static  struct SliceIter_231   chars554 (    struct DynStr_100  self1532 ) {
    return ( (  into_dash_iter286 ) ( ( (  self1532 ) .f_contents ) ) );
}

static  uint8_t *   get_dash_ptr555 (    struct Array_93 *  arr1562 ,    size_t  i1565 ) {
    if ( ( (  cmp40 ( (  i1565 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1565 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic360 ) ( ( ( StrConcat_361_StrConcat ) ( ( ( StrConcat_362_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to array at index " ) ,  (  i1565 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    uint8_t *  p1566 = ( ( (  cast147 ) ( (  arr1562 ) ) ) );
    return ( (  offset_dash_ptr117 ) ( (  p1566 ) ,  ( (int64_t ) (  i1565 ) ) ) );
}

static  char *   get_dash_ptr556 (    struct Array_140 *  arr1562 ,    size_t  i1565 ) {
    if ( ( (  cmp40 ( (  i1565 ) , (  from_dash_integral8 ( 0 ) ) ) == 0 ) || (  cmp40 ( (  i1565 ) , ( (size_t ) ( 32 ) ) ) != 0 ) ) ) {
        ( (  panic360 ) ( ( ( StrConcat_361_StrConcat ) ( ( ( StrConcat_362_StrConcat ) ( ( ( StrConcat_363_StrConcat ) ( ( ( StrConcat_364_StrConcat ) ( ( "Access to array at index " ) ,  (  i1565 ) ) ) ,  ( ". (max: " ) ) ) ,  ( 32 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ")" ) ) ) ) ) ) );
    }
    char *  p1566 = ( ( (  cast154 ) ( (  arr1562 ) ) ) );
    return ( (  offset_dash_ptr123 ) ( (  p1566 ) ,  ( (int64_t ) (  i1565 ) ) ) );
}

static  enum Unit_113   set557 (    struct Array_93 *  arr1575 ,    size_t  i1578 ,    uint8_t  e1580 ) {
    uint8_t *  p1581 = ( (  get_dash_ptr555 ) ( (  arr1575 ) ,  (  i1578 ) ) );
    (*  p1581 ) = (  e1580 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set558 (    struct Array_140 *  arr1575 ,    size_t  i1578 ,    char  e1580 ) {
    char *  p1581 = ( (  get_dash_ptr556 ) ( (  arr1575 ) ,  (  i1578 ) ) );
    (*  p1581 ) = (  e1580 );
    return ( Unit_113_Unit );
}

static  struct Slice_101   as_dash_slice559 (    struct Array_140 *  arr1584 ) {
    return ( (struct Slice_101) { .f_ptr = ( (  cast154 ) ( (  arr1584 ) ) ) , .f_count = ( (size_t ) ( 32 ) ) } );
}

static  bool   is_dash_whitespace560 (    char  c1635 ) {
    return ( ( (  eq15 ( (  c1635 ) , ( (  from_dash_charlike1 ) ( ( " " ) ) ) ) ) || (  eq15 ( (  c1635 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) || (  eq15 ( (  c1635 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) );
}

static  struct LineIter_425   lines561 (    struct DynStr_100  s1654 ) {
    return ( (struct LineIter_425) { .f_og = (  s1654 ) , .f_last = (  from_dash_integral8 ( 0 ) ) } );
}

static  bool   is_dash_digit562 (    char  c1683 ) {
    return ( (  cmp41 ( ( (  char_dash_i32513 ) ( (  c1683 ) ) ) , ( (  char_dash_i32513 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) != 0 ) && (  cmp41 ( ( (  char_dash_i32513 ) ( (  c1683 ) ) ) , ( (  char_dash_i32513 ) ( ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) != 2 ) );
}

static  struct Maybe_251   parse_dash_digit563 (    char  c1686 ) {
    if ( ( (  is_dash_digit562 ) ( (  c1686 ) ) ) ) {
        return ( ( Maybe_251_Just ) ( (  op_dash_sub49 ( ( (  char_dash_i32513 ) ( (  c1686 ) ) ) , ( (  char_dash_i32513 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    } else {
        return ( (struct Maybe_251) { .tag = Maybe_251_None_t } );
    }
}

static  struct Maybe_393   sequence_dash_maybe565 (    char  e1692 ,    struct Maybe_393  b1694 ) {
    struct Maybe_393  dref1695 = (  b1694 );
    if ( dref1695.tag == Maybe_393_None_t ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
    else if ( dref1695.tag == Maybe_393_Just_t ) {
        struct Maybe_251  dref1697 = ( (  parse_dash_digit563 ) ( (  e1692 ) ) );
        if ( dref1697.tag == Maybe_251_None_t ) {
            return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
        }
        else if ( dref1697.tag == Maybe_251_Just_t ) {
            return ( ( Maybe_393_Just ) ( (  op_dash_add43 ( (  op_dash_mul45 ( ( dref1695 .stuff .Maybe_393_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i64218 ) ( ( dref1697 .stuff .Maybe_251_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_393   parse_dash_int564 (    struct DynStr_100  s1689 ) {
    struct SliceIter_231  cs1699 = ( (  chars554 ) ( (  s1689 ) ) );
    struct Maybe_237  dref1700 = ( (  head446 ) ( (  cs1699 ) ) );
    if ( dref1700.tag == Maybe_237_Just_t ) {
        return ( (  reduce392 ) ( (  cs1699 ) ,  ( ( Maybe_393_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe565 ) ) );
    }
    else if ( dref1700.tag == Maybe_237_None_t ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
}

static  struct Maybe_393   sequence_dash_maybe567 (    char  e1692 ,    struct Maybe_393  b1694 ) {
    struct Maybe_393  dref1695 = (  b1694 );
    if ( dref1695.tag == Maybe_393_None_t ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
    else if ( dref1695.tag == Maybe_393_Just_t ) {
        struct Maybe_251  dref1697 = ( (  parse_dash_digit563 ) ( (  e1692 ) ) );
        if ( dref1697.tag == Maybe_251_None_t ) {
            return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
        }
        else if ( dref1697.tag == Maybe_251_Just_t ) {
            return ( ( Maybe_393_Just ) ( (  op_dash_add43 ( (  op_dash_mul45 ( ( dref1695 .stuff .Maybe_393_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i64218 ) ( ( dref1697 .stuff .Maybe_251_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_393   parse_dash_int566 (    const char*  s1689 ) {
    struct ConstStrIter_240  cs1699 = ( (  chars463 ) ( (  s1689 ) ) );
    struct Maybe_237  dref1700 = ( (  head448 ) ( (  cs1699 ) ) );
    if ( dref1700.tag == Maybe_237_Just_t ) {
        return ( (  reduce396 ) ( (  cs1699 ) ,  ( ( Maybe_393_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe567 ) ) );
    }
    else if ( dref1700.tag == Maybe_237_None_t ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
}

static  struct Maybe_393   sequence_dash_maybe569 (    char  e1692 ,    struct Maybe_393  b1694 ) {
    struct Maybe_393  dref1695 = (  b1694 );
    if ( dref1695.tag == Maybe_393_None_t ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
    else if ( dref1695.tag == Maybe_393_Just_t ) {
        struct Maybe_251  dref1697 = ( (  parse_dash_digit563 ) ( (  e1692 ) ) );
        if ( dref1697.tag == Maybe_251_None_t ) {
            return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
        }
        else if ( dref1697.tag == Maybe_251_Just_t ) {
            return ( ( Maybe_393_Just ) ( (  op_dash_add43 ( (  op_dash_mul45 ( ( dref1695 .stuff .Maybe_393_Just_s .field0 ) , (  from_dash_integral2 ( 10 ) ) ) ) , ( (  i32_dash_i64218 ) ( ( dref1697 .stuff .Maybe_251_Just_s .field0 ) ) ) ) ) ) );
        }
    }
}

static  struct Maybe_393   parse_dash_int568 (    struct TakeWhile_292  s1689 ) {
    struct TakeWhile_292  cs1699 = ( (  chars512 ) ( (  s1689 ) ) );
    struct Maybe_237  dref1700 = ( (  head450 ) ( (  cs1699 ) ) );
    if ( dref1700.tag == Maybe_237_Just_t ) {
        return ( (  reduce398 ) ( (  cs1699 ) ,  ( ( Maybe_393_Just ) ( (  from_dash_integral2 ( 0 ) ) ) ) ,  (  sequence_dash_maybe569 ) ) );
    }
    else if ( dref1700.tag == Maybe_237_None_t ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
}

static  struct List_321   mk570 (    enum CAllocator_322  al1735 ) {
    struct Slice_101  elements1736 = ( (  empty533 ) ( ) );
    return ( (struct List_321) { .f_al = (  al1735 ) , .f_elements = (  elements1736 ) , .f_count = (  from_dash_integral8 ( 0 ) ) } );
}

static  enum Unit_113   lam336 (   struct env336 env ,    struct Tuple2_270  dref1747 ) {
    return ( (  set541 ) ( ( env.new_dash_slice1746 ) ,  ( (  i32_dash_size219 ) ( ( dref1747 .field1 ) ) ) ,  ( dref1747 .field0 ) ) );
}

static  enum Unit_113   grow_dash_if_dash_full324 (   struct env324 env ,    struct List_321 *  list1745 ) {
    if ( (  eq14 ( ( ( * (  list1745 ) ) .f_count ) , (  from_dash_integral8 ( 0 ) ) ) ) ) {
        (*  list1745 ) .f_elements = ( (  allocate549 ) ( ( ( * (  list1745 ) ) .f_al ) ,  ( env.starting_dash_size1740 ) ) );
    } else {
        if ( (  eq14 ( ( ( * (  list1745 ) ) .f_count ) , ( ( ( * (  list1745 ) ) .f_elements ) .f_count ) ) ) ) {
            struct Slice_101  new_dash_slice1746 = ( (  allocate549 ) ( ( ( * (  list1745 ) ) .f_al ) ,  (  op_dash_mul59 ( ( ( * (  list1745 ) ) .f_count ) , ( env.growth_dash_factor1741 ) ) ) ) );
            struct env336 envinst336 = {
                .new_dash_slice1746 =  new_dash_slice1746 ,
            };
            ( (  for_dash_each335 ) ( ( (  zip285 ) ( ( ( * (  list1745 ) ) .f_elements ) ,  ( (  from252 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv336){ .fun = lam336, .env = envinst336 } ) ) );
            ( (  free550 ) ( ( ( * (  list1745 ) ) .f_al ) ,  ( ( * (  list1745 ) ) .f_elements ) ) );
            (*  list1745 ) .f_elements = (  new_dash_slice1746 );
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   add323 (   struct env323 env ,    struct List_321 *  list1752 ,    char  elem1754 ) {
    struct funenv324  temp571 = ( (struct funenv324){ .fun = grow_dash_if_dash_full324, .env =  env.envinst324  } );
    ( temp571.fun ( temp571.env ,  (  list1752 ) ) );
    ( (  set541 ) ( ( ( * (  list1752 ) ) .f_elements ) ,  ( ( * (  list1752 ) ) .f_count ) ,  (  elem1754 ) ) );
    (*  list1752 ) .f_count = (  op_dash_add57 ( ( ( * (  list1752 ) ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  struct Maybe_529   hex_dash_digit572 (    char  c1846 ) {
    if ( ( (  cmp517 ( (  c1846 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) != 0 ) && (  cmp517 ( (  c1846 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_529_Just ) ( (  op_dash_sub56 ( ( (  char_dash_u8514 ) ( (  c1846 ) ) ) , ( (  char_dash_u8514 ) ( ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) ) ) );
    }
    if ( ( (  cmp517 ( (  c1846 ) , ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) != 0 ) && (  cmp517 ( (  c1846 ) , ( (  from_dash_charlike1 ) ( ( "f" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_529_Just ) ( (  op_dash_add55 ( (  op_dash_sub56 ( ( (  char_dash_u8514 ) ( (  c1846 ) ) ) , ( (  char_dash_u8514 ) ( ( (  from_dash_charlike1 ) ( ( "a" ) ) ) ) ) ) ) , (  from_dash_integral6 ( 10 ) ) ) ) ) );
    }
    if ( ( (  cmp517 ( (  c1846 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) != 0 ) && (  cmp517 ( (  c1846 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) != 2 ) ) ) {
        return ( ( Maybe_529_Just ) ( (  op_dash_add55 ( (  op_dash_sub56 ( ( (  char_dash_u8514 ) ( (  c1846 ) ) ) , ( (  char_dash_u8514 ) ( ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) ) , (  from_dash_integral6 ( 10 ) ) ) ) ) );
    }
    return ( (struct Maybe_529) { .tag = Maybe_529_None_t } );
}

static  uint32_t   lam574 (    char  c1851 ) {
    return ( (  from_dash_integral4 ) ( ( (  u8_dash_i64227 ) ( ( (  or_dash_fail528 ) ( ( (  hex_dash_digit572 ) ( (  c1851 ) ) ) ,  ( ( StrConcat_481_StrConcat ) ( ( ( StrConcat_482_StrConcat ) ( ( (  from_dash_charlike1 ) ( ( "\"" ) ) ) ,  (  c1851 ) ) ) ,  ( "\" is not a hex digit." ) ) ) ) ) ) ) ) );
}

static  uint32_t   lam575 (    uint32_t  elem1853 ,    uint32_t  b1855 ) {
    return (  op_dash_add53 ( (  op_dash_mul54 ( (  b1855 ) , (  from_dash_integral4 ( 16 ) ) ) ) , (  elem1853 ) ) );
}

static  uint32_t   from_dash_hex573 (    const char*  arr1849 ) {
    return ( (  reduce402 ) ( ( (  map244 ) ( (  arr1849 ) ,  (  lam574 ) ) ) ,  (  from_dash_integral4 ( 0 ) ) ,  (  lam575 ) ) );
}

static  struct Maybe_214   get576 (    const char*  s1889 ) {
    return ( (  from_dash_nullable_dash_c_dash_str213 ) ( ( ( getenv ) ( (  s1889 ) ) ) ) );
}

static  enum Unit_113   println577 (    int64_t  s1861 ) {
    ( (  print_dash_str508 ) ( ( ( StrConcat_471_StrConcat ) ( (  s1861 ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   show_dash_cursor578 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[?25h" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   hide_dash_cursor579 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[?25l" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   move_dash_cursor_dash_to580 (    uint32_t  x1866 ,    uint32_t  y1868 ) {
    uint32_t  x1869 = (  op_dash_add53 ( (  x1866 ) , (  from_dash_integral4 ( 1 ) ) ) );
    uint32_t  y1870 = (  op_dash_add53 ( (  y1868 ) , (  from_dash_integral4 ( 1 ) ) ) );
    ( (  print_dash_str500 ) ( ( ( StrConcat_501_StrConcat ) ( ( ( StrConcat_502_StrConcat ) ( ( ( StrConcat_503_StrConcat ) ( ( ( StrConcat_504_StrConcat ) ( ( "\x1b[" ) ,  (  y1870 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  (  x1869 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   reset_dash_cursor_dash_position581 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[H" ) ) );
    return ( Unit_113_Unit );
}

static  struct Tuple2_531   get_dash_dimensions582 (  ) {
    struct Winsize_132  temp583 = ( ( (  zeroed177 ) ( ) ) );
    struct Winsize_132 *  ws1874 = ( &temp583 );
    if ( ( (  eq10 ( ( ( ioctl ) ( ( (  stdout_dash_fileno72 ) ( ) ) ,  ( (  tiocgwinsz88 ) ( ) ) ,  (  ws1874 ) ) ) , (  op_dash_neg52 ( (  from_dash_integral3 ( 1 ) ) ) ) ) ) || (  eq13 ( ( ( * (  ws1874 ) ) .f_ws_dash_col ) , (  from_dash_integral5 ( 0 ) ) ) ) ) ) {
        return ( ( Tuple2_531_Tuple2 ) ( (  from_dash_integral4 ( 80 ) ) ,  (  from_dash_integral4 ( 24 ) ) ) );
    }
    return ( ( Tuple2_531_Tuple2 ) ( ( (  u16_dash_u32224 ) ( ( ( * (  ws1874 ) ) .f_ws_dash_col ) ) ) ,  ( (  u16_dash_u32224 ) ( ( ( * (  ws1874 ) ) .f_ws_dash_row ) ) ) ) );
}

static  enum Unit_113   set_dash_default_dash_fg584 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[39m" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_default_dash_bg585 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[49m" ) ) );
    return ( Unit_113_Unit );
}

static  enum ColorPalette_351   query_dash_palette586 (  ) {
    struct Maybe_214  colorterm1890 = ( (  get576 ) ( ( "COLORTERM" ) ) );
    struct Maybe_214  dref1891 = (  colorterm1890 );
    if ( dref1891.tag == Maybe_214_Just_t ) {
        if ( ( (  eq516 ( ( dref1891 .stuff .Maybe_214_Just_s .field0 ) , ( "truecolor" ) ) ) || (  eq516 ( ( dref1891 .stuff .Maybe_214_Just_s .field0 ) , ( "24bit" ) ) ) ) ) {
            return ( ColorPalette_351_PaletteRGB );
        }
    }
    else if ( dref1891.tag == Maybe_214_None_t ) {
    }
    struct Maybe_214  dref1893 = ( (  get576 ) ( ( "TERM" ) ) );
    if ( dref1893.tag == Maybe_214_Just_t ) {
        if ( (  eq516 ( ( dref1893 .stuff .Maybe_214_Just_s .field0 ) , ( "linux" ) ) ) ) {
            return ( ColorPalette_351_Palette8 );
        }
    }
    else if ( dref1893.tag == Maybe_214_None_t ) {
    }
    return ( ColorPalette_351_Palette16 );
}

static  enum Unit_113   set_dash_fg8587 (    enum Color8_19  color1909 ) {
    enum Color8_19  dref1910 = (  color1909 );
    switch (  dref1910 ) {
        case Color8_19_Black8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color8_19_Red8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color8_19_Green8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color8_19_Yellow8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color8_19_Blue8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color8_19_Magenta8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color8_19_Cyan8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color8_19_White8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[37m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg16588 (    enum Color16_20  color1913 ) {
    enum Color16_20  dref1914 = (  color1913 );
    switch (  dref1914 ) {
        case Color16_20_Black16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[30m" ) ) );
            break;
        }
        case Color16_20_Red16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[31m" ) ) );
            break;
        }
        case Color16_20_Green16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[32m" ) ) );
            break;
        }
        case Color16_20_Yellow16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[33m" ) ) );
            break;
        }
        case Color16_20_Blue16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[34m" ) ) );
            break;
        }
        case Color16_20_Magenta16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[35m" ) ) );
            break;
        }
        case Color16_20_Cyan16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[36m" ) ) );
            break;
        }
        case Color16_20_White16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[37m" ) ) );
            break;
        }
        case Color16_20_BrightBlack16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[90m" ) ) );
            break;
        }
        case Color16_20_BrightRed16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[91m" ) ) );
            break;
        }
        case Color16_20_BrightGreen16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[92m" ) ) );
            break;
        }
        case Color16_20_BrightYellow16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[93m" ) ) );
            break;
        }
        case Color16_20_BrightBlue16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[94m" ) ) );
            break;
        }
        case Color16_20_BrightMagenta16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[95m" ) ) );
            break;
        }
        case Color16_20_BrightCyan16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[96m" ) ) );
            break;
        }
        case Color16_20_BrightWhite16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[97m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg8589 (    enum Color8_19  color1917 ) {
    enum Color8_19  dref1918 = (  color1917 );
    switch (  dref1918 ) {
        case Color8_19_Black8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color8_19_Red8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color8_19_Green8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color8_19_Yellow8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color8_19_Blue8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color8_19_Magenta8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color8_19_Cyan8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color8_19_White8 : {
            ( (  print_dash_str369 ) ( ( "\x1b[47m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg16590 (    enum Color16_20  color1921 ) {
    enum Color16_20  dref1922 = (  color1921 );
    switch (  dref1922 ) {
        case Color16_20_Black16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[40m" ) ) );
            break;
        }
        case Color16_20_Red16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[41m" ) ) );
            break;
        }
        case Color16_20_Green16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[42m" ) ) );
            break;
        }
        case Color16_20_Yellow16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[43m" ) ) );
            break;
        }
        case Color16_20_Blue16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[44m" ) ) );
            break;
        }
        case Color16_20_Magenta16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[45m" ) ) );
            break;
        }
        case Color16_20_Cyan16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[46m" ) ) );
            break;
        }
        case Color16_20_White16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[47m" ) ) );
            break;
        }
        case Color16_20_BrightBlack16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[100m" ) ) );
            break;
        }
        case Color16_20_BrightRed16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[101m" ) ) );
            break;
        }
        case Color16_20_BrightGreen16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[102m" ) ) );
            break;
        }
        case Color16_20_BrightYellow16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[103m" ) ) );
            break;
        }
        case Color16_20_BrightBlue16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[104m" ) ) );
            break;
        }
        case Color16_20_BrightMagenta16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[105m" ) ) );
            break;
        }
        case Color16_20_BrightCyan16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[106m" ) ) );
            break;
        }
        case Color16_20_BrightWhite16 : {
            ( (  print_dash_str369 ) ( ( "\x1b[107m" ) ) );
            break;
        }
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   reset_dash_colors591 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[0m" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   clear_dash_screen592 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[2J" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg256593 (    uint8_t  color1927 ) {
    ( (  print_dash_str498 ) ( ( ( StrConcat_493_StrConcat ) ( ( ( StrConcat_494_StrConcat ) ( ( "\x1b[38;5;" ) ,  (  color1927 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg256594 (    uint8_t  color1930 ) {
    ( (  print_dash_str498 ) ( ( ( StrConcat_493_StrConcat ) ( ( ( StrConcat_494_StrConcat ) ( ( "\x1b[48;5;" ) ,  (  color1930 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg_dash_rgb595 (    struct RGB_21  c1950 ) {
    ( (  print_dash_str488 ) ( ( ( StrConcat_489_StrConcat ) ( ( ( StrConcat_490_StrConcat ) ( ( ( StrConcat_491_StrConcat ) ( ( ( StrConcat_492_StrConcat ) ( ( ( StrConcat_493_StrConcat ) ( ( ( StrConcat_494_StrConcat ) ( ( "\x1b[38;2;" ) ,  ( (  c1950 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1950 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1950 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg_dash_rgb596 (    struct RGB_21  c1953 ) {
    ( (  print_dash_str488 ) ( ( ( StrConcat_489_StrConcat ) ( ( ( StrConcat_490_StrConcat ) ( ( ( StrConcat_491_StrConcat ) ( ( ( StrConcat_492_StrConcat ) ( ( ( StrConcat_493_StrConcat ) ( ( ( StrConcat_494_StrConcat ) ( ( "\x1b[48;2;" ) ,  ( (  c1953 ) .f_r ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1953 ) .f_g ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ";" ) ) ) ) ) ,  ( (  c1953 ) .f_b ) ) ) ,  ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_fg597 (    struct Color_18  c1971 ) {
    struct Color_18  dref1972 = (  c1971 );
    if ( dref1972.tag == Color_18_ColorDefault_t ) {
        ( (  set_dash_default_dash_fg584 ) ( ) );
    }
    else if ( dref1972.tag == Color_18_Color8_t ) {
        ( (  set_dash_fg8587 ) ( ( dref1972 .stuff .Color_18_Color8_s .field0 ) ) );
    }
    else if ( dref1972.tag == Color_18_Color16_t ) {
        ( (  set_dash_fg16588 ) ( ( dref1972 .stuff .Color_18_Color16_s .field0 ) ) );
    }
    else if ( dref1972.tag == Color_18_Color256_t ) {
        ( (  set_dash_fg256593 ) ( ( dref1972 .stuff .Color_18_Color256_s .field0 ) ) );
    }
    else if ( dref1972.tag == Color_18_ColorRGB_t ) {
        ( (  set_dash_fg_dash_rgb595 ) ( ( dref1972 .stuff .Color_18_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_bg598 (    struct Color_18  c1979 ) {
    struct Color_18  dref1980 = (  c1979 );
    if ( dref1980.tag == Color_18_ColorDefault_t ) {
        ( (  set_dash_default_dash_bg585 ) ( ) );
    }
    else if ( dref1980.tag == Color_18_Color8_t ) {
        ( (  set_dash_bg8589 ) ( ( dref1980 .stuff .Color_18_Color8_s .field0 ) ) );
    }
    else if ( dref1980.tag == Color_18_Color16_t ) {
        ( (  set_dash_bg16590 ) ( ( dref1980 .stuff .Color_18_Color16_s .field0 ) ) );
    }
    else if ( dref1980.tag == Color_18_Color256_t ) {
        ( (  set_dash_bg256594 ) ( ( dref1980 .stuff .Color_18_Color256_s .field0 ) ) );
    }
    else if ( dref1980.tag == Color_18_ColorRGB_t ) {
        ( (  set_dash_bg_dash_rgb596 ) ( ( dref1980 .stuff .Color_18_ColorRGB_s .field0 ) ) );
    }
    return ( Unit_113_Unit );
}

struct env599 {
    ;
    ;
    struct env323 envinst323;
    ;
    ;
    ;
    ;
};

static  enum Unit_113   lam319 (   struct env319 env ,    char  c2036 ) {
    struct funenv323  temp600 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    return ( temp600.fun ( temp600.env ,  ( & ( ( * ( env.builder2032 ) ) .f_chars ) ) ,  (  c2036 ) ) );
}

static  enum Unit_113   write599 (   struct env599 env ,    struct StrBuilder_320 *  builder2032 ,    struct StrConcat_471  s2034 ) {
    struct env319 envinst319 = {
        .builder2032 =  builder2032 ,
        .envinst323 = env.envinst323 ,
    };
    ( (  for_dash_each316 ) ( ( (  chars509 ) ( (  s2034 ) ) ) ,  ( (struct funenv319){ .fun = lam319, .env = envinst319 } ) ) );
    return ( Unit_113_Unit );
}

struct env601 {
    struct env323 envinst323;
    ;
    ;
};

static  enum Unit_113   write_dash_char601 (   struct env601 env ,    struct StrBuilder_320 *  builder2044 ,    char  c2046 ) {
    struct funenv323  temp602 = ( (struct funenv323){ .fun = add323, .env =  env.envinst323  } );
    ( temp602.fun ( temp602.env ,  ( & ( ( * (  builder2044 ) ) .f_chars ) ) ,  (  c2046 ) ) );
    return ( Unit_113_Unit );
}

static  struct StrBuilder_320   mk603 (    enum CAllocator_322  al2060 ) {
    return ( (struct StrBuilder_320) { .f_chars = ( (  mk570 ) ( (  al2060 ) ) ) } );
}

static  struct DynStr_100   as_dash_str604 (    struct StrBuilder_320 *  builder2063 ) {
    return ( (struct DynStr_100) { .f_contents = ( (  subslice442 ) ( ( ( ( * (  builder2063 ) ) .f_chars ) .f_elements ) ,  (  from_dash_integral8 ( 0 ) ) ,  ( ( ( * (  builder2063 ) ) .f_chars ) .f_count ) ) ) } );
}

struct funenv599 {
    enum Unit_113  (*fun) (  struct env599  ,    struct StrBuilder_320 *  ,    struct StrConcat_471  );
    struct env599 env;
};

struct funenv601 {
    enum Unit_113  (*fun) (  struct env601  ,    struct StrBuilder_320 *  ,    char  );
    struct env601 env;
};

struct env605 {
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    struct env599 envinst599;
    ;
    struct env601 envinst601;
    ;
};

static  struct DynStr_100   mk_dash_dyn_dash_str605 (   struct env605 env ,    struct StrConcat_471  s2083 ,    enum CAllocator_322  al2085 ) {
    struct StrBuilder_320  temp606 = ( (  mk603 ) ( (  al2085 ) ) );
    struct StrBuilder_320 *  sb2086 = ( &temp606 );
    struct funenv599  temp607 = ( (struct funenv599){ .fun = write599, .env =  env.envinst599  } );
    ( temp607.fun ( temp607.env ,  (  sb2086 ) ,  (  s2083 ) ) );
    struct funenv601  temp608 = ( (struct funenv601){ .fun = write_dash_char601, .env =  env.envinst601  } );
    ( temp608.fun ( temp608.env ,  (  sb2086 ) ,  ( (  nullchar439 ) ( ) ) ) );
    struct DynStr_100  dynstr2087 = ( (  as_dash_str604 ) ( (  sb2086 ) ) );
    return ( (struct DynStr_100) { .f_contents = ( (struct Slice_101) { .f_ptr = ( ( (  dynstr2087 ) .f_contents ) .f_ptr ) , .f_count = (  op_dash_sub58 ( ( ( (  dynstr2087 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) } ) } );
}

struct funenv605 {
    struct DynStr_100  (*fun) (  struct env605  ,    struct StrConcat_471  ,    enum CAllocator_322  );
    struct env605 env;
};

struct env609 {
    ;
    struct env605 envinst605;
    ;
    ;
    ;
    ;
    ;
};

static  const char*   mk_dash_const_dash_str609 (   struct env609 env ,    struct StrConcat_471  s2090 ,    enum CAllocator_322  al2092 ) {
    struct funenv605  temp610 = ( (struct funenv605){ .fun = mk_dash_dyn_dash_str605, .env =  env.envinst605  } );
    return ( ( (  cast152 ) ( ( ( ( temp610.fun ( temp610.env ,  (  s2090 ) ,  (  al2092 ) ) ) .f_contents ) .f_ptr ) ) ) );
}

static  enum Unit_113   free_dash_const_dash_str611 (    const char*  s2095 ,    enum CAllocator_322  al2097 ) {
    ( (  free551 ) ( (  al2097 ) ,  ( (struct Slice_552) { .f_ptr = ( (enum Unit_113 * ) (  s2095 ) ) , .f_count = (  from_dash_integral8 ( 0 ) ) } ) ) );
    return ( Unit_113_Unit );
}

static  struct Scanner_230   mk612 (    struct DynStr_100  s2253 ) {
    return ( (struct Scanner_230) { .f_s = ( (  chars554 ) ( (  s2253 ) ) ) } );
}

static  struct Maybe_393   scan_dash_int613 (    struct Scanner_230 *  sc2256 ) {
    struct TakeWhile_292  digit_dash_chars2257 = ( (  take_dash_while295 ) ( (  sc2256 ) ,  (  is_dash_digit562 ) ) );
    if ( ( (  null452 ) ( (  digit_dash_chars2257 ) ) ) ) {
        return ( (struct Maybe_393) { .tag = Maybe_393_None_t } );
    }
    ( (  drop_prime_453 ) ( (  sc2256 ) ,  ( (  count419 ) ( (  digit_dash_chars2257 ) ) ) ) );
    return ( (  parse_dash_int568 ) ( (  digit_dash_chars2257 ) ) );
}

static  struct timespec   now614 (  ) {
    struct timespec  temp615 = ( (  undefined89 ) ( ) );
    struct timespec *  t2264 = ( &temp615 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic69 ) ( ) ) ,  (  t2264 ) ) );
    return ( * (  t2264 ) );
}

struct Duration_617 {
    int64_t  f_secs;
    int64_t  f_nsecs;
};

static  struct Duration_617   diff616 (    struct timespec  l2279 ,    struct timespec  r2281 ) {
    int64_t  secdiff2282 = (  op_dash_sub44 ( ( (  l2279 ) .tv_sec ) , ( (  r2281 ) .tv_sec ) ) );
    int64_t  nsdiff2283 = (  op_dash_sub44 ( ( (  l2279 ) .tv_nsec ) , ( (  r2281 ) .tv_nsec ) ) );
    int64_t  ns_dash_in_dash_secs2284 = (  from_dash_integral2 ( 1000000000 ) );
    if ( (  cmp38 ( (  nsdiff2283 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        if ( (  cmp38 ( (  secdiff2282 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
            return ( (struct Duration_617) { .f_secs = (  secdiff2282 ) , .f_nsecs = (  op_dash_neg47 ( (  nsdiff2283 ) ) ) } );
        } else {
            if ( (  eq9 ( (  secdiff2282 ) , (  from_dash_integral2 ( 0 ) ) ) ) ) {
                return ( (struct Duration_617) { .f_secs = (  from_dash_integral2 ( 0 ) ) , .f_nsecs = (  nsdiff2283 ) } );
            } else {
                return ( (struct Duration_617) { .f_secs = (  op_dash_sub44 ( (  secdiff2282 ) , (  from_dash_integral2 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_add43 ( (  ns_dash_in_dash_secs2284 ) , (  nsdiff2283 ) ) ) } );
            }
        }
    } else {
        if ( (  cmp38 ( (  secdiff2282 ) , (  from_dash_integral2 ( 0 ) ) ) != 0 ) ) {
            return ( (struct Duration_617) { .f_secs = (  secdiff2282 ) , .f_nsecs = (  nsdiff2283 ) } );
        } else {
            return ( (struct Duration_617) { .f_secs = (  op_dash_sub44 ( (  secdiff2282 ) , (  from_dash_integral2 ( 1 ) ) ) ) , .f_nsecs = (  op_dash_sub44 ( (  ns_dash_in_dash_secs2284 ) , (  nsdiff2283 ) ) ) } );
        }
    }
}

static  struct Termios_92   enable_dash_raw_dash_mode618 (  ) {
    struct Termios_92  temp619 = ( (  undefined91 ) ( ) );
    struct Termios_92 *  orig_dash_termios2302 = ( &temp619 );
    ( ( tcgetattr ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  cast_dash_ptr162 ) ( (  orig_dash_termios2302 ) ) ) ) );
    struct Termios_92  raw2303 = ( * (  orig_dash_termios2302 ) );
    raw2303 .f_c_dash_lflag = ( (  u32_dash_and458 ) ( ( (  raw2303 ) .f_c_dash_lflag ) ,  ( (  u32_dash_neg459 ) ( ( (  u32_dash_ors456 ) ( ( (  from_dash_listlike60 ) ( ( (struct Array_62) { ._arr = { ( (  echo74 ) ( ) ) , ( (  icanon75 ) ( ) ) , ( (  isig76 ) ( ) ) , ( ( (  iexten77 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2303 .f_c_dash_iflag = ( (  u32_dash_and458 ) ( ( (  raw2303 ) .f_c_dash_iflag ) ,  ( (  u32_dash_neg459 ) ( ( (  u32_dash_ors455 ) ( ( (  from_dash_listlike63 ) ( ( (struct Array_65) { ._arr = { ( (  brkint78 ) ( ) ) , ( (  icrnl79 ) ( ) ) , ( (  inpck80 ) ( ) ) , ( (  istrip81 ) ( ) ) , ( ( (  ixon82 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2303 .f_c_dash_oflag = ( (  u32_dash_and458 ) ( ( (  raw2303 ) .f_c_dash_oflag ) ,  ( (  u32_dash_neg459 ) ( ( (  u32_dash_ors457 ) ( ( (  from_dash_listlike66 ) ( ( (struct Array_68) { ._arr = { ( ( (  opost83 ) ( ) ) ) } } ) ) ) ) ) ) ) ) );
    raw2303 .f_c_dash_cflag = ( (  u32_dash_or454 ) ( ( (  raw2303 ) .f_c_dash_cflag ) ,  ( (  cs884 ) ( ) ) ) );
    ( (  set557 ) ( ( & ( (  raw2303 ) .f_c_dash_cc ) ) ,  ( (  vmin85 ) ( ) ) ,  (  from_dash_integral6 ( 0 ) ) ) );
    ( (  set557 ) ( ( & ( (  raw2303 ) .f_c_dash_cc ) ) ,  ( (  vtime86 ) ( ) ) ,  (  from_dash_integral6 ( 0 ) ) ) );
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  tcsa_dash_flush87 ) ( ) ) ,  ( (  cast_dash_ptr162 ) ( ( & (  raw2303 ) ) ) ) ) );
    return ( * (  orig_dash_termios2302 ) );
}

static  enum Unit_113   disable_dash_raw_dash_mode620 (    struct Termios_92 *  og_dash_termios2306 ) {
    ( ( tcsetattr ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  tcsa_dash_flush87 ) ( ) ) ,  ( (  cast_dash_ptr162 ) ( (  og_dash_termios2306 ) ) ) ) );
    return ( Unit_113_Unit );
}

static  struct Maybe_237   read_dash_byte621 (    int32_t  timeout_dash_ms2310 ) {
    struct Pollfd_173  pfd2311 = ( (struct Pollfd_173) { .f_fd = (  from_dash_integral3 ( 0 ) ) , .f_events = (  from_dash_integral5 ( 1 ) ) , .f_revents = (  from_dash_integral5 ( 0 ) ) } );
    if ( (  cmp41 ( ( ( poll ) ( ( (  cast_dash_ptr172 ) ( ( & (  pfd2311 ) ) ) ) ,  (  from_dash_integral3 ( 1 ) ) ,  (  timeout_dash_ms2310 ) ) ) , (  from_dash_integral3 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    char  c2312 = ( ( (  zeroed187 ) ( ) ) );
    if ( (  cmp41 ( ( ( read ) ( ( (  stdin_dash_fileno73 ) ( ) ) ,  ( (  cast_dash_ptr168 ) ( ( & (  c2312 ) ) ) ) ,  (  from_dash_integral8 ( 1 ) ) ) ) , (  from_dash_integral3 ( 0 ) ) ) != 2 ) ) {
        return ( (struct Maybe_237) { .tag = Maybe_237_None_t } );
    }
    return ( ( Maybe_237_Just ) ( (  c2312 ) ) );
}

static  enum Unit_113   flush_dash_stdout622 (  ) {
    ( ( fflush ) ( ( (  null_dash_ptr208 ) ( ) ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   enable_dash_mouse623 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[?1000h\x1b[?1006h" ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   disable_dash_mouse624 (  ) {
    ( (  print_dash_str369 ) ( ( "\x1b[?1000l\x1b[?1006l" ) ) );
    return ( Unit_113_Unit );
}

struct env626 {
    ;
    ;
    ;
    bool *  should_dash_resize2316;
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
};

struct env627 {
    bool *  should_dash_resize2316;
};

struct funenv627 {
    enum Unit_113  (*fun) (  struct env627  ,    int32_t  );
    struct env627 env;
};

struct funenv627  _intr_sigarr[32];

static void _intr_sighandle (    int32_t  __intr__sig628 ) {
    struct funenv627  temp629 = _intr_sigarr [  __intr__sig628 ];
    temp629.fun ( temp629.env ,  __intr__sig628 );
}

static  enum Unit_113  _intr_register_signal (    int32_t  __intr__sig630 ,   struct funenv627  __intr__fun631 ) {
    _intr_sigarr [  __intr__sig630 ] =  __intr__fun631;
    signal(  __intr__sig630 , _intr_sighandle );
    return Unit_113_Unit;
}

static  enum Unit_113   lam627 (   struct env627 env ,    int32_t  dref2323 ) {
    (* env.should_dash_resize2316 ) = ( true );
    return ( Unit_113_Unit );
}

static  struct Tui_350   mk626 (   struct env626 env ) {
    struct Termios_92  og_dash_termios2318 = ( (  enable_dash_raw_dash_mode618 ) ( ) );
    ( (  hide_dash_cursor579 ) ( ) );
    ( (  reset_dash_colors591 ) ( ) );
    ( (  clear_dash_screen592 ) ( ) );
    ( (  enable_dash_mouse623 ) ( ) );
    ( (  flush_dash_stdout622 ) ( ) );
    enum ColorPalette_351  palette2319 = ( (  query_dash_palette586 ) ( ) );
    struct Tuple2_531  dims2320 = ( (  get_dash_dimensions582 ) ( ) );
    uint32_t  fps2321 = (  from_dash_integral4 ( 60 ) );
    struct timespec  last_dash_sync2322 = ( (  now614 ) ( ) );
    struct env627 envinst627 = {
        .should_dash_resize2316 = env.should_dash_resize2316 ,
    };
    ( _intr_register_signal ( (  from_dash_integral3 ( 28 ) ) , ( (struct funenv627){ .fun = lam627, .env = envinst627 } ) ) );
    return ( (struct Tui_350) { .f_width = ( (  fst530 ) ( (  dims2320 ) ) ) , .f_height = ( (  snd532 ) ( (  dims2320 ) ) ) , .f_target_dash_fps = (  fps2321 ) , .f_actual_dash_fps = (  from_dash_integral4 ( 0 ) ) , .f_last_dash_sync = (  last_dash_sync2322 ) , .f_fps_dash_ts = (  last_dash_sync2322 ) , .f_fps_dash_count = (  from_dash_integral4 ( 0 ) ) , .f_orig_dash_termios = (  og_dash_termios2318 ) , .f_palette = (  palette2319 ) } );
}

static  enum Unit_113   sync632 (    struct Tui_350 *  tui2326 ) {
    if ( (  eq11 ( ( ( * (  tui2326 ) ) .f_target_dash_fps ) , (  from_dash_integral4 ( 0 ) ) ) ) ) {
        return ( Unit_113_Unit );
    }
    int64_t  frame_dash_ns2327 = (  op_dash_div46 ( (  from_dash_integral2 ( 1000000000 ) ) , ( (  size_dash_i64215 ) ( ( (  u32_dash_size225 ) ( ( ( * (  tui2326 ) ) .f_target_dash_fps ) ) ) ) ) ) );
    struct timespec  temp633 = ( (  undefined89 ) ( ) );
    struct timespec *  now2328 = ( &temp633 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic69 ) ( ) ) ,  (  now2328 ) ) );
    int64_t  elapsed_dash_ns2329 = (  op_dash_add43 ( (  op_dash_mul45 ( (  op_dash_sub44 ( ( ( * (  now2328 ) ) .tv_sec ) , ( ( ( * (  tui2326 ) ) .f_last_dash_sync ) .tv_sec ) ) ) , (  from_dash_integral2 ( 1000000000 ) ) ) ) , (  op_dash_sub44 ( ( ( * (  now2328 ) ) .tv_nsec ) , ( ( ( * (  tui2326 ) ) .f_last_dash_sync ) .tv_nsec ) ) ) ) );
    int64_t  sleep_dash_ns2330 = (  op_dash_sub44 ( (  frame_dash_ns2327 ) , (  elapsed_dash_ns2329 ) ) );
    if ( (  cmp38 ( (  sleep_dash_ns2330 ) , (  from_dash_integral2 ( 0 ) ) ) == 2 ) ) {
        struct timespec  temp634 = ( (struct timespec) { .tv_sec = (  from_dash_integral2 ( 0 ) ) , .tv_nsec = (  sleep_dash_ns2330 ) } );
        struct timespec *  ts2331 = ( &temp634 );
        ( ( nanosleep ) ( (  ts2331 ) ,  ( (  null_dash_ptr210 ) ( ) ) ) );
    }
    struct timespec  temp635 = ( (  undefined89 ) ( ) );
    struct timespec *  last_dash_sync2332 = ( &temp635 );
    ( ( clock_gettime ) ( ( (  clock_dash_monotonic69 ) ( ) ) ,  (  last_dash_sync2332 ) ) );
    (*  tui2326 ) .f_last_dash_sync = ( * (  last_dash_sync2332 ) );
    (*  tui2326 ) .f_fps_dash_count = (  op_dash_add53 ( ( ( * (  tui2326 ) ) .f_fps_dash_count ) , (  from_dash_integral4 ( 1 ) ) ) );
    int64_t  fps_dash_elapsed_dash_ms2333 = (  op_dash_add43 ( (  op_dash_mul45 ( (  op_dash_sub44 ( ( ( ( * (  tui2326 ) ) .f_last_dash_sync ) .tv_sec ) , ( ( ( * (  tui2326 ) ) .f_fps_dash_ts ) .tv_sec ) ) ) , (  from_dash_integral2 ( 1000 ) ) ) ) , (  op_dash_div46 ( (  op_dash_sub44 ( ( ( ( * (  tui2326 ) ) .f_last_dash_sync ) .tv_nsec ) , ( ( ( * (  tui2326 ) ) .f_fps_dash_ts ) .tv_nsec ) ) ) , (  from_dash_integral2 ( 1000000 ) ) ) ) ) );
    if ( (  cmp38 ( (  fps_dash_elapsed_dash_ms2333 ) , (  from_dash_integral2 ( 1000 ) ) ) != 0 ) ) {
        (*  tui2326 ) .f_actual_dash_fps = ( ( * (  tui2326 ) ) .f_fps_dash_count );
        (*  tui2326 ) .f_fps_dash_count = (  from_dash_integral4 ( 0 ) );
        (*  tui2326 ) .f_fps_dash_ts = ( ( * (  tui2326 ) ) .f_last_dash_sync );
    }
    return ( Unit_113_Unit );
}

static  enum Unit_113   deinit636 (    struct Tui_350 *  tui2336 ) {
    ( (  disable_dash_mouse624 ) ( ) );
    ( (  show_dash_cursor578 ) ( ) );
    ( (  reset_dash_colors591 ) ( ) );
    ( (  clear_dash_screen592 ) ( ) );
    ( (  reset_dash_cursor_dash_position581 ) ( ) );
    ( (  disable_dash_raw_dash_mode620 ) ( ( & ( ( * (  tui2336 ) ) .f_orig_dash_termios ) ) ) );
    ( (  flush_dash_stdout622 ) ( ) );
    return ( Unit_113_Unit );
}

static  enum MouseButton_108   btn_dash_to_dash_mouse_dash_button637 (    int64_t  btn2343 ) {
    return ( {  int32_t  dref2344 = ( (  i64_dash_i32221 ) ( (  btn2343 ) ) ) ;  dref2344 == 0 ? ( MouseButton_108_MouseLeft ) :  dref2344 == 1 ? ( MouseButton_108_MouseMiddle ) :  dref2344 == 2 ? ( MouseButton_108_MouseRight ) :  dref2344 == 64 ? ( MouseButton_108_ScrollUp ) :  dref2344 == 65 ? ( MouseButton_108_ScrollDown ) : ( (  panic_prime_523 ) ( ( "incorrect mouse button" ) ) ) ; } );
}

struct Maybe_639 {
    enum {
        Maybe_639_None_t,
        Maybe_639_Just_t,
    } tag;
    union {
        struct {
            struct Key_303  field0;
        } Maybe_639_Just_s;
    } stuff;
};

static struct Maybe_639 Maybe_639_Just (  struct Key_303  field0 ) {
    return ( struct Maybe_639 ) { .tag = Maybe_639_Just_t, .stuff = { .Maybe_639_Just_s = { .field0 = field0 } } };
};

static  struct Maybe_639   parse_dash_ss3638 (    char  c2347 ) {
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_Up_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_Down_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_Right_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_Left_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_Home_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_End_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "P" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_F1_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "Q" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_F2_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "R" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_F3_t } ) ) );
    }
    if ( (  eq15 ( (  c2347 ) , ( (  from_dash_charlike1 ) ( ( "S" ) ) ) ) ) ) {
        return ( ( Maybe_639_Just ) ( ( (struct Key_303) { .tag = Key_303_F4_t } ) ) );
    }
    return ( (struct Maybe_639) { .tag = Maybe_639_None_t } );
}

static  struct Maybe_301   parse_dash_csi640 (    struct DynStr_100  seq2350 ) {
    if ( (  eq14 ( ( ( (  seq2350 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 0 ) ) ) ) ) {
        return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
    }
    char  last2351 = (  elem_dash_get543 ( ( (  seq2350 ) .f_contents ) , (  op_dash_sub58 ( ( ( (  seq2350 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) );
    if ( ( (  eq15 ( (  elem_dash_get543 ( ( (  seq2350 ) .f_contents ) , (  from_dash_integral8 ( 0 ) ) ) ) , ( (  from_dash_charlike1 ) ( ( "<" ) ) ) ) ) && ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) || (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "m" ) ) ) ) ) ) ) ) {
        struct Scanner_230  temp641 = ( (  mk612 ) ( ( (  substr441 ) ( (  seq2350 ) ,  (  from_dash_integral8 ( 1 ) ) ,  ( ( (  seq2350 ) .f_contents ) .f_count ) ) ) ) );
        struct Scanner_230 *  sc2352 = ( &temp641 );
        struct Maybe_393  dref2353 = ( (  scan_dash_int613 ) ( (  sc2352 ) ) );
        if ( dref2353.tag == Maybe_393_None_t ) {
            return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
        }
        else if ( dref2353.tag == Maybe_393_Just_t ) {
            ( (  next294 ) ( (  sc2352 ) ) );
            struct Maybe_393  dref2355 = ( (  scan_dash_int613 ) ( (  sc2352 ) ) );
            if ( dref2355.tag == Maybe_393_None_t ) {
                return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
            }
            else if ( dref2355.tag == Maybe_393_Just_t ) {
                ( (  next294 ) ( (  sc2352 ) ) );
                struct Maybe_393  dref2357 = ( (  scan_dash_int613 ) ( (  sc2352 ) ) );
                if ( dref2357.tag == Maybe_393_None_t ) {
                    return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
                }
                else if ( dref2357.tag == Maybe_393_Just_t ) {
                    return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Mouse ) ( ( (struct MouseEvent_304) { .f_button = ( (  btn_dash_to_dash_mouse_dash_button637 ) ( ( dref2353 .stuff .Maybe_393_Just_s .field0 ) ) ) , .f_x = (  op_dash_sub49 ( ( (  i64_dash_i32221 ) ( ( dref2355 .stuff .Maybe_393_Just_s .field0 ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) , .f_y = (  op_dash_sub49 ( ( (  i64_dash_i32221 ) ( ( dref2357 .stuff .Maybe_393_Just_s .field0 ) ) ) , (  from_dash_integral3 ( 1 ) ) ) ) , .f_pressed = (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "M" ) ) ) ) ) } ) ) ) ) );
                }
            }
        }
    }
    if ( (  eq14 ( ( ( (  seq2350 ) .f_contents ) .f_count ) , (  from_dash_integral8 ( 1 ) ) ) ) ) {
        if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "A" ) ) ) ) ) ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Up_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "B" ) ) ) ) ) ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Down_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "C" ) ) ) ) ) ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Right_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "D" ) ) ) ) ) ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Left_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "H" ) ) ) ) ) ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Home_t } ) ) ) ) );
        }
        if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "F" ) ) ) ) ) ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_End_t } ) ) ) ) );
        }
        return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
    }
    if ( (  eq15 ( (  last2351 ) , ( (  from_dash_charlike1 ) ( ( "~" ) ) ) ) ) ) {
        struct Scanner_230  temp642 = ( (  mk612 ) ( (  seq2350 ) ) );
        struct Scanner_230 *  sc2359 = ( &temp642 );
        struct Maybe_393  dref2360 = ( (  scan_dash_int613 ) ( (  sc2359 ) ) );
        if ( dref2360.tag == Maybe_393_None_t ) {
            return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
        }
        else if ( dref2360.tag == Maybe_393_Just_t ) {
            return ( {  int32_t  dref2362 = ( (  i64_dash_i32221 ) ( ( dref2360 .stuff .Maybe_393_Just_s .field0 ) ) ) ;  dref2362 == 1 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Home_t } ) ) ) ) ) :  dref2362 == 2 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Insert_t } ) ) ) ) ) :  dref2362 == 3 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Delete_t } ) ) ) ) ) :  dref2362 == 4 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_End_t } ) ) ) ) ) :  dref2362 == 5 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_PageUp_t } ) ) ) ) ) :  dref2362 == 6 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_PageDown_t } ) ) ) ) ) :  dref2362 == 15 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F5_t } ) ) ) ) ) :  dref2362 == 17 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F6_t } ) ) ) ) ) :  dref2362 == 18 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F7_t } ) ) ) ) ) :  dref2362 == 19 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F8_t } ) ) ) ) ) :  dref2362 == 20 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F9_t } ) ) ) ) ) :  dref2362 == 21 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F10_t } ) ) ) ) ) :  dref2362 == 23 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F11_t } ) ) ) ) ) :  dref2362 == 24 ? ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_F12_t } ) ) ) ) ) : ( (struct Maybe_301) { .tag = Maybe_301_None_t } ) ; } );
        }
    }
    return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
}

static  struct Maybe_301   read_dash_key643 (  ) {
    char  temp644 = ( (  undefined97 ) ( ) );
    char *  ch2364 = ( &temp644 );
    struct Maybe_237  dref2365 = ( (  read_dash_byte621 ) ( (  from_dash_integral3 ( 0 ) ) ) );
    if ( dref2365.tag == Maybe_237_None_t ) {
        return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
    }
    else if ( dref2365.tag == Maybe_237_Just_t ) {
        (*  ch2364 ) = ( dref2365 .stuff .Maybe_237_Just_s .field0 );
    }
    if ( (  eq12 ( ( (  char_dash_u8514 ) ( ( * (  ch2364 ) ) ) ) , (  from_dash_integral6 ( 13 ) ) ) ) ) {
        return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Enter_t } ) ) ) ) );
    }
    if ( (  eq12 ( ( (  char_dash_u8514 ) ( ( * (  ch2364 ) ) ) ) , (  from_dash_integral6 ( 127 ) ) ) ) ) {
        return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Backspace_t } ) ) ) ) );
    }
    if ( ( (  cmp42 ( ( (  char_dash_u8514 ) ( ( * (  ch2364 ) ) ) ) , (  from_dash_integral6 ( 27 ) ) ) == 0 ) && ( !  eq12 ( ( (  char_dash_u8514 ) ( ( * (  ch2364 ) ) ) ) , (  from_dash_integral6 ( 9 ) ) ) ) ) ) {
        char  letter2367 = ( (  i32_dash_char515 ) ( ( (  u32_dash_i32226 ) ( ( (  u32_dash_or454 ) ( ( (  i32_dash_u32217 ) ( ( (  char_dash_i32513 ) ( ( * (  ch2364 ) ) ) ) ) ) ,  ( (  from_dash_hex573 ) ( ( "60" ) ) ) ) ) ) ) ) );
        return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( ( Key_303_Ctrl ) ( (  letter2367 ) ) ) ) ) ) );
    }
    if ( ( !  eq12 ( ( (  char_dash_u8514 ) ( ( * (  ch2364 ) ) ) ) , (  from_dash_integral6 ( 27 ) ) ) ) ) {
        if ( (  cmp42 ( ( (  char_dash_u8514 ) ( ( * (  ch2364 ) ) ) ) , (  from_dash_integral6 ( 127 ) ) ) == 2 ) ) {
            return ( (  read_dash_key643 ) ( ) );
        } else {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( ( Key_303_Char ) ( ( * (  ch2364 ) ) ) ) ) ) ) );
        }
    }
    char  temp645 = ( (  undefined97 ) ( ) );
    char *  ch22368 = ( &temp645 );
    struct Maybe_237  dref2369 = ( (  read_dash_byte621 ) ( (  from_dash_integral3 ( 50 ) ) ) );
    if ( dref2369.tag == Maybe_237_None_t ) {
        return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Escape_t } ) ) ) ) );
    }
    else if ( dref2369.tag == Maybe_237_Just_t ) {
        (*  ch22368 ) = ( dref2369 .stuff .Maybe_237_Just_s .field0 );
    }
    if ( (  eq15 ( ( * (  ch22368 ) ) , ( (  from_dash_charlike1 ) ( ( "[" ) ) ) ) ) ) {
        struct Array_140  temp646 = ( ( (  zeroed191 ) ( ) ) );
        struct Array_140 *  seq2371 = ( &temp646 );
        int32_t  slen2372 = (  from_dash_integral3 ( 0 ) );
        while ( (  cmp41 ( (  slen2372 ) , (  from_dash_integral3 ( 31 ) ) ) == 0 ) ) {
            char  temp647 = ( (  undefined97 ) ( ) );
            char *  sc2373 = ( &temp647 );
            struct Maybe_237  dref2374 = ( (  read_dash_byte621 ) ( (  from_dash_integral3 ( 50 ) ) ) );
            if ( dref2374.tag == Maybe_237_None_t ) {
                break;
            }
            else if ( dref2374.tag == Maybe_237_Just_t ) {
                (*  sc2373 ) = ( dref2374 .stuff .Maybe_237_Just_s .field0 );
            }
            ( (  set558 ) ( (  seq2371 ) ,  ( (  i32_dash_size219 ) ( (  slen2372 ) ) ) ,  ( * (  sc2373 ) ) ) );
            slen2372 = (  op_dash_add48 ( (  slen2372 ) , (  from_dash_integral3 ( 1 ) ) ) );
            if ( ( (  cmp42 ( ( (  char_dash_u8514 ) ( ( * (  sc2373 ) ) ) ) , (  from_dash_integral6 ( 64 ) ) ) != 0 ) && (  cmp42 ( ( (  char_dash_u8514 ) ( ( * (  sc2373 ) ) ) ) , (  from_dash_integral6 ( 126 ) ) ) != 2 ) ) ) {
                break;
            }
        }
        return ( (  parse_dash_csi640 ) ( ( (struct DynStr_100) { .f_contents = ( (  subslice442 ) ( ( (  as_dash_slice559 ) ( (  seq2371 ) ) ) ,  (  from_dash_integral8 ( 0 ) ) ,  ( (  i32_dash_size219 ) ( (  slen2372 ) ) ) ) ) } ) ) );
    }
    if ( (  eq15 ( ( * (  ch22368 ) ) , ( (  from_dash_charlike1 ) ( ( "O" ) ) ) ) ) ) {
        char  temp648 = ( (  undefined97 ) ( ) );
        char *  sc2376 = ( &temp648 );
        struct Maybe_237  dref2377 = ( (  read_dash_byte621 ) ( (  from_dash_integral3 ( 50 ) ) ) );
        if ( dref2377.tag == Maybe_237_None_t ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Escape_t } ) ) ) ) );
        }
        else if ( dref2377.tag == Maybe_237_Just_t ) {
            (*  sc2376 ) = ( dref2377 .stuff .Maybe_237_Just_s .field0 );
        }
        struct Maybe_639  dref2379 = ( (  parse_dash_ss3638 ) ( ( * (  sc2376 ) ) ) );
        if ( dref2379.tag == Maybe_639_None_t ) {
            return ( (struct Maybe_301) { .tag = Maybe_301_None_t } );
        }
        else if ( dref2379.tag == Maybe_639_Just_t ) {
            return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( dref2379 .stuff .Maybe_639_Just_s .field0 ) ) ) ) );
        }
    }
    return ( ( Maybe_301_Just ) ( ( ( InputEvent_302_Key ) ( ( (struct Key_303) { .tag = Key_303_Escape_t } ) ) ) ) );
}

struct env649 {
    ;
    bool *  should_dash_resize2316;
    ;
    ;
};

static  bool   update_dash_dimensions649 (   struct env649 env ,    struct Tui_350 *  tui2383 ) {
    if ( ( ! ( * ( env.should_dash_resize2316 ) ) ) ) {
        return ( false );
    }
    (* env.should_dash_resize2316 ) = ( false );
    struct Tuple2_531  dim2384 = ( (  get_dash_dimensions582 ) ( ) );
    uint32_t  w2385 = ( (  fst530 ) ( (  dim2384 ) ) );
    uint32_t  h2386 = ( (  snd532 ) ( (  dim2384 ) ) );
    (*  tui2383 ) .f_width = (  w2385 );
    (*  tui2383 ) .f_height = (  h2386 );
    return ( true );
}

static  struct Cell_17   lam651 (    struct Cell_17  dref2404 ) {
    return ( (struct Cell_17) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  struct Cell_17   lam652 (    struct Cell_17  dref2406 ) {
    return ( (struct Cell_17) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  struct Screen_349   mk_dash_screen650 (    struct Tui_350 *  tui2400 ,    enum CAllocator_322  al2402 ) {
    struct Slice_309  cur2403 = ( (  allocate548 ) ( (  al2402 ) ,  ( (  u32_dash_size225 ) ( (  op_dash_mul54 ( ( ( * (  tui2400 ) ) .f_width ) , ( ( * (  tui2400 ) ) .f_height ) ) ) ) ) ) );
    ( (  map544 ) ( (  cur2403 ) ,  (  lam651 ) ) );
    struct Slice_309  prev2405 = ( (  allocate548 ) ( (  al2402 ) ,  ( (  u32_dash_size225 ) ( (  op_dash_mul54 ( ( ( * (  tui2400 ) ) .f_width ) , ( ( * (  tui2400 ) ) .f_height ) ) ) ) ) ) );
    ( (  map545 ) ( (  prev2405 ) ,  (  lam652 ) ) );
    return ( (struct Screen_349) { .f_current = (  cur2403 ) , .f_previous = (  prev2405 ) , .f_al = (  al2402 ) , .f_tui = (  tui2400 ) , .f_requires_dash_full_dash_redraw = ( false ) , .f_default_dash_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_default_dash_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  enum Unit_113   free_dash_screen653 (    struct Screen_349 *  screen2409 ) {
    enum CAllocator_322  al2410 = ( ( * (  screen2409 ) ) .f_al );
    ( (  free553 ) ( (  al2410 ) ,  ( ( * (  screen2409 ) ) .f_current ) ) );
    ( (  free553 ) ( (  al2410 ) ,  ( ( * (  screen2409 ) ) .f_previous ) ) );
    return ( Unit_113_Unit );
}

static  struct Cell_17   lam655 (    struct Cell_17  dref2414 ) {
    return ( (struct Cell_17) { .f_c = ( (  from_dash_charlike1 ) ( ( " " ) ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) } );
}

static  enum Unit_113   clear_dash_screen654 (    struct Screen_349 *  screen2413 ) {
    ( (  map546 ) ( ( ( * (  screen2413 ) ) .f_current ) ,  (  lam655 ) ) );
    return ( Unit_113_Unit );
}

struct RenderState_657 {
    uint32_t  f_x;
    uint32_t  f_y;
    struct Color_18  f_fg;
    struct Color_18  f_bg;
    uint32_t  f_changes;
};

static  enum Unit_113   emit_dash_cell656 (    struct RenderState_657 *  rs2418 ,    struct Cell_17 *  c2420 ,    uint32_t  x2422 ,    uint32_t  y2424 ) {
    if ( ( ( !  eq11 ( (  x2422 ) , ( ( * (  rs2418 ) ) .f_x ) ) ) || ( !  eq11 ( (  y2424 ) , ( ( * (  rs2418 ) ) .f_y ) ) ) ) ) {
        ( (  move_dash_cursor_dash_to580 ) ( (  x2422 ) ,  (  y2424 ) ) );
        (*  rs2418 ) .f_x = (  x2422 );
        (*  rs2418 ) .f_y = (  y2424 );
    }
    char  char2425 = ( ( * (  c2420 ) ) .f_c );
    struct Color_18  bg2426 = ( ( * (  c2420 ) ) .f_bg );
    if ( ( ( (  eq15 ( (  char2425 ) , ( (  from_dash_charlike1 ) ( ( "\t" ) ) ) ) ) || (  eq15 ( (  char2425 ) , ( (  from_dash_charlike1 ) ( ( "\r" ) ) ) ) ) ) || (  eq15 ( (  char2425 ) , ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ) ) {
        char2425 = ( (  from_dash_charlike1 ) ( ( " " ) ) );
        bg2426 = ( ( Color_18_Color8 ) ( ( Color8_19_Red8 ) ) );
    }
    if ( ( !  eq23 ( ( ( * (  rs2418 ) ) .f_fg ) , ( ( * (  c2420 ) ) .f_fg ) ) ) ) {
        ( (  set_dash_fg597 ) ( ( ( * (  c2420 ) ) .f_fg ) ) );
        (*  rs2418 ) .f_fg = ( ( * (  c2420 ) ) .f_fg );
    }
    if ( ( !  eq23 ( ( ( * (  rs2418 ) ) .f_bg ) , (  bg2426 ) ) ) ) {
        ( (  set_dash_bg598 ) ( (  bg2426 ) ) );
        (*  rs2418 ) .f_bg = (  bg2426 );
    }
    ( (  print_dash_str376 ) ( (  char2425 ) ) );
    (*  rs2418 ) .f_x = (  op_dash_add53 ( ( ( * (  rs2418 ) ) .f_x ) , (  from_dash_integral4 ( 1 ) ) ) );
    return ( Unit_113_Unit );
}

static  uint32_t   render_dash_screen658 (    struct Screen_349 *  screen2429 ) {
    int32_t  w2430 = ( (  u32_dash_i32226 ) ( ( ( * ( ( * (  screen2429 ) ) .f_tui ) ) .f_width ) ) );
    int32_t  h2431 = ( (  u32_dash_i32226 ) ( ( ( * ( ( * (  screen2429 ) ) .f_tui ) ) .f_height ) ) );
    struct RenderState_657  temp659 = ( (struct RenderState_657) { .f_x = (  from_dash_integral4 ( 0 ) ) , .f_y = (  from_dash_integral4 ( 0 ) ) , .f_fg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_bg = ( (struct Color_18) { .tag = Color_18_ColorDefault_t } ) , .f_changes = (  from_dash_integral4 ( 0 ) ) } );
    struct RenderState_657 *  rs2432 = ( &temp659 );
    ( (  move_dash_cursor_dash_to580 ) ( (  from_dash_integral4 ( 0 ) ) ,  (  from_dash_integral4 ( 0 ) ) ) );
    struct RangeIter_249  temp660 =  into_dash_iter248 ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  h2431 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) );
    while (true) {
        struct Maybe_251  __cond661 =  next250 (&temp660);
        if (  __cond661 .tag == 0 ) {
            break;
        }
        int32_t  y2434 =  __cond661 .stuff .Maybe_251_Just_s .field0;
        struct RangeIter_249  temp662 =  into_dash_iter248 ( ( (  to246 ) ( (  from_dash_integral3 ( 0 ) ) ,  (  op_dash_sub49 ( (  w2430 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) ) );
        while (true) {
            struct Maybe_251  __cond663 =  next250 (&temp662);
            if (  __cond663 .tag == 0 ) {
                break;
            }
            int32_t  x2436 =  __cond663 .stuff .Maybe_251_Just_s .field0;
            size_t  i2437 = ( (  i32_dash_size219 ) ( (  op_dash_add48 ( (  op_dash_mul50 ( (  y2434 ) , (  w2430 ) ) ) , (  x2436 ) ) ) ) );
            struct Cell_17 *  cur2438 = ( (  get_dash_ptr534 ) ( ( ( * (  screen2429 ) ) .f_current ) ,  (  i2437 ) ) );
            struct Cell_17 *  prev2439 = ( (  get_dash_ptr534 ) ( ( ( * (  screen2429 ) ) .f_previous ) ,  (  i2437 ) ) );
            if ( ( ( !  eq16 ( (  cur2438 ) , (  prev2439 ) ) ) || ( ( * (  screen2429 ) ) .f_requires_dash_full_dash_redraw ) ) ) {
                (*  rs2432 ) .f_changes = (  op_dash_add53 ( ( ( * (  rs2432 ) ) .f_changes ) , (  from_dash_integral4 ( 1 ) ) ) );
                ( (  emit_dash_cell656 ) ( (  rs2432 ) ,  (  cur2438 ) ,  ( (  i32_dash_u32217 ) ( (  x2436 ) ) ) ,  ( (  i32_dash_u32217 ) ( (  y2434 ) ) ) ) );
                (*  prev2439 ) = ( * (  cur2438 ) );
            }
        }
    }
    (*  screen2429 ) .f_requires_dash_full_dash_redraw = ( false );
    ( (  reset_dash_colors591 ) ( ) );
    ( (  flush_dash_stdout622 ) ( ) );
    return ( ( * (  rs2432 ) ) .f_changes );
}

struct funenv649 {
    bool  (*fun) (  struct env649  ,    struct Tui_350 *  );
    struct env649 env;
};

struct env664 {
    ;
    ;
    ;
    ;
    ;
    struct env649 envinst649;
};

static  bool   resize_dash_screen_dash_if_dash_needed664 (   struct env664 env ,    struct Screen_349 *  screen2442 ) {
    struct Tui_350 *  tui2443 = ( ( * (  screen2442 ) ) .f_tui );
    struct funenv649  temp665 = ( (struct funenv649){ .fun = update_dash_dimensions649, .env =  env.envinst649  } );
    if ( ( ! ( temp665.fun ( temp665.env ,  (  tui2443 ) ) ) ) ) {
        return ( false );
    }
    (*  screen2442 ) .f_requires_dash_full_dash_redraw = ( true );
    uint32_t  w2444 = ( ( * ( ( * (  screen2442 ) ) .f_tui ) ) .f_width );
    uint32_t  h2445 = ( ( * ( ( * (  screen2442 ) ) .f_tui ) ) .f_height );
    size_t  nusz2446 = ( (  u32_dash_size225 ) ( (  op_dash_mul54 ( (  w2444 ) , (  h2445 ) ) ) ) );
    if ( (  cmp40 ( (  nusz2446 ) , ( ( ( * (  screen2442 ) ) .f_current ) .f_count ) ) != 2 ) ) {
        return ( true );
    }
    struct Screen_349  nuscreen2447 = ( (  mk_dash_screen650 ) ( (  tui2443 ) ,  ( ( * (  screen2442 ) ) .f_al ) ) );
    (*  screen2442 ) .f_current = ( (  nuscreen2447 ) .f_current );
    (*  screen2442 ) .f_previous = ( (  nuscreen2447 ) .f_previous );
    return ( true );
}

static  enum Unit_113   set_dash_screen_dash_fg666 (    struct Screen_349 *  screen2450 ,    struct Color_18  c2452 ) {
    (*  screen2450 ) .f_default_dash_fg = (  c2452 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   set_dash_screen_dash_bg667 (    struct Screen_349 *  screen2455 ,    struct Color_18  c2457 ) {
    (*  screen2455 ) .f_default_dash_bg = (  c2457 );
    return ( Unit_113_Unit );
}

static  enum Unit_113   put_dash_char668 (    struct Screen_349 *  screen2488 ,    char  c2490 ,    int32_t  x2492 ,    int32_t  y2494 ) {
    int32_t  w2495 = ( (  u32_dash_i32226 ) ( ( ( * ( ( * (  screen2488 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( ( ( (  cmp41 ( (  x2492 ) , (  w2495 ) ) != 0 ) || (  cmp41 ( (  y2494 ) , ( (  u32_dash_i32226 ) ( ( ( * ( ( * (  screen2488 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) || (  cmp41 ( (  x2492 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) ) || (  cmp41 ( (  y2494 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) ) ) {
        return ( Unit_113_Unit );
    }
    size_t  i2496 = ( (  i32_dash_size219 ) ( (  op_dash_add48 ( (  op_dash_mul50 ( (  y2494 ) , (  w2495 ) ) ) , (  x2492 ) ) ) ) );
    struct Color_18  fg2497 = ( ( * (  screen2488 ) ) .f_default_dash_fg );
    struct Color_18  bg2498 = ( ( * (  screen2488 ) ) .f_default_dash_bg );
    char  c2499 = (  c2490 );
    ( (  set540 ) ( ( ( * (  screen2488 ) ) .f_current ) ,  (  i2496 ) ,  ( (struct Cell_17) { .f_c = (  c2499 ) , .f_fg = (  fg2497 ) , .f_bg = (  bg2498 ) } ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   lam348 (   struct env348 env ,    struct Tuple2_270  dref2513 ) {
    ( (  put_dash_char668 ) ( ( env.screen2502 ) ,  ( dref2513 .field0 ) ,  (  op_dash_add48 ( ( env.x2511 ) , ( dref2513 .field1 ) ) ) ,  ( env.y2508 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   draw_dash_str669 (    struct Screen_349 *  screen2502 ,    struct StrConcat_405  s2504 ,    int32_t  x2506 ,    int32_t  y2508 ) {
    int32_t  w2509 = ( (  u32_dash_i32226 ) ( ( ( * ( ( * (  screen2502 ) ) .f_tui ) ) .f_width ) ) );
    if ( ( (  cmp41 ( (  y2508 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) || (  cmp41 ( (  y2508 ) , ( (  u32_dash_i32226 ) ( ( ( * ( ( * (  screen2502 ) ) .f_tui ) ) .f_height ) ) ) ) != 0 ) ) ) {
        return ( Unit_113_Unit );
    }
    int32_t  i2510 = (  op_dash_add48 ( (  op_dash_mul50 ( (  y2508 ) , (  w2509 ) ) ) , (  x2506 ) ) );
    int32_t  x2511 = ( (  min461 ) ( (  x2506 ) ,  (  w2509 ) ) );
    size_t  max_dash_len2512 = ( (  i32_dash_size219 ) ( (  op_dash_sub49 ( (  w2509 ) , (  x2511 ) ) ) ) );
    struct env348 envinst348 = {
        .y2508 =  y2508 ,
        .screen2502 =  screen2502 ,
        .x2511 =  x2511 ,
    };
    ( (  for_dash_each347 ) ( ( (  zip287 ) ( ( (  chars510 ) ( (  s2504 ) ) ) ,  ( (  from252 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) ,  ( (struct funenv348){ .fun = lam348, .env = envinst348 } ) ) );
    return ( Unit_113_Unit );
}

static  struct Slice_538   get670 (  ) {
    return ( (struct Slice_538) { .f_ptr = ( (  offset_dash_ptr121 ) ( ( _global_argv ) ,  (  from_dash_integral2 ( 1 ) ) ) ) , .f_count = (  op_dash_sub58 ( ( _global_argc ) , (  from_dash_integral8 ( 1 ) ) ) ) } );
}

static  struct Maybe_424   try_dash_read_dash_contents671 (    const char*  filename2569 ,    enum CAllocator_322  al2571 ) {
    FILE *  file2572 = ( ( fopen ) ( (  filename2569 ) ,  ( (  from_dash_charlike0 ) ( ( "r" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null211 ) ( (  file2572 ) ) ) ) {
        return ( (struct Maybe_424) { .tag = Maybe_424_None_t } );
    }
    ( ( fseek ) ( (  file2572 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_end71 ) ( ) ) ) );
    int32_t  file_dash_size2573 = ( ( ftell ) ( (  file2572 ) ) );
    ( ( fseek ) ( (  file2572 ) ,  (  from_dash_integral3 ( 0 ) ) ,  ( (  seek_dash_set70 ) ( ) ) ) );
    struct Slice_101  file_dash_buf2574 = ( ( (  allocate549 ) ( (  al2571 ) ,  (  op_dash_add57 ( ( (  i32_dash_size219 ) ( (  file_dash_size2573 ) ) ) , (  from_dash_integral8 ( 1 ) ) ) ) ) ) );
    ( ( fread ) ( ( (  file_dash_buf2574 ) .f_ptr ) ,  (  from_dash_integral3 ( 1 ) ) ,  (  file_dash_size2573 ) ,  (  file2572 ) ) );
    ( (  set541 ) ( (  file_dash_buf2574 ) ,  ( (  i32_dash_size219 ) ( (  file_dash_size2573 ) ) ) ,  ( (  nullchar439 ) ( ) ) ) );
    ( ( fclose ) ( (  file2572 ) ) );
    struct DynStr_100  str2575 = ( (struct DynStr_100) { .f_contents = (  file_dash_buf2574 ) } );
    return ( ( Maybe_424_Just ) ( (  str2575 ) ) );
}

static  bool   try_dash_write_dash_contents672 (    const char*  filename2583 ,    const char*  contents2585 ) {
    FILE *  file2586 = ( ( fopen ) ( (  filename2583 ) ,  ( (  from_dash_charlike0 ) ( ( "w" ) ) ) ) );
    if ( ( (  is_dash_ptr_dash_null211 ) ( (  file2586 ) ) ) ) {
        return ( false );
    }
    struct ConstStrIter_240  it2587 = ( (  chars463 ) ( (  contents2585 ) ) );
    while ( ( true ) ) {
        struct Maybe_237  dref2588 = ( (  next243 ) ( ( & (  it2587 ) ) ) );
        if ( dref2588.tag == Maybe_237_None_t ) {
            ( ( fclose ) ( (  file2586 ) ) );
            return ( true );
        }
        else if ( dref2588.tag == Maybe_237_Just_t ) {
            int32_t  chars_dash_written2590 = ( ( fprintf ) ( (  file2586 ) ,  ( "%c" ) ,  ( dref2588 .stuff .Maybe_237_Just_s .field0 ) ) );
            if ( (  cmp41 ( (  chars_dash_written2590 ) , (  from_dash_integral3 ( 0 ) ) ) == 0 ) ) {
                return ( false );
            }
        }
    }
    return ( (  unreachable518 ) ( ) );
}

static  enum Unit_113   write_dash_contents673 (    const char*  filename2593 ,    const char*  contents2595 ) {
    if ( ( ! ( (  try_dash_write_dash_contents672 ) ( (  filename2593 ) ,  (  contents2595 ) ) ) ) ) {
        ( (  panic521 ) ( ( ( StrConcat_474_StrConcat ) ( ( "could not write to file " ) ,  (  filename2593 ) ) ) ) );
    }
    return ( Unit_113_Unit );
}

struct ClockTime_675 {
    uint32_t  f_h;
    uint8_t  f_m;
    uint8_t  f_s;
};

static  struct ClockTime_675   clock_dash_time_dash_from_dash_secs674 (    int64_t  secs2531 ) {
    if ( (  cmp38 ( (  secs2531 ) , (  from_dash_integral2 ( 0 ) ) ) == 0 ) ) {
        ( (  panic520 ) ( ( "negative seconds!" ) ) );
    }
    uint8_t  s2532 = ( (  i64_dash_u8220 ) ( ( (  mod460 ) ( (  secs2531 ) ,  (  from_dash_integral2 ( 60 ) ) ) ) ) );
    uint8_t  m2533 = ( (  i64_dash_u8220 ) ( ( (  mod460 ) ( (  op_dash_div46 ( (  secs2531 ) , (  from_dash_integral2 ( 60 ) ) ) ) ,  (  from_dash_integral2 ( 60 ) ) ) ) ) );
    uint32_t  h2534 = ( (  i64_dash_u32222 ) ( (  op_dash_div46 ( (  secs2531 ) , (  op_dash_mul45 ( (  from_dash_integral2 ( 60 ) ) , (  from_dash_integral2 ( 60 ) ) ) ) ) ) ) );
    return ( (struct ClockTime_675) { .f_h = (  h2534 ) , .f_m = (  m2533 ) , .f_s = (  s2532 ) } );
}

static  enum Unit_113   cb676 (    struct Screen_349 *  screen2537 ,    const char*  s2539 ,    int32_t  x2541 ,    int32_t  y2543 ) {
    struct Color_18  og_dash_bg2544 = ( ( * (  screen2537 ) ) .f_default_dash_bg );
    struct Zip_267  temp677 =  into_dash_iter266 ( ( (  zip289 ) ( ( (  chars463 ) ( (  s2539 ) ) ) ,  ( (  from252 ) ( (  x2541 ) ) ) ) ) );
    while (true) {
        struct Maybe_269  __cond678 =  next284 (&temp677);
        if (  __cond678 .tag == 0 ) {
            break;
        }
        struct Tuple2_270  dref2545 =  __cond678 .stuff .Maybe_269_Just_s .field0;
        if ( ( (  is_dash_whitespace560 ) ( ( dref2545 .field0 ) ) ) ) {
            ( (  set_dash_screen_dash_bg667 ) ( (  screen2537 ) ,  (  og_dash_bg2544 ) ) );
            ( (  put_dash_char668 ) ( (  screen2537 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  ( dref2545 .field1 ) ,  (  y2543 ) ) );
        } else {
            ( (  set_dash_screen_dash_bg667 ) ( (  screen2537 ) ,  ( ( * (  screen2537 ) ) .f_default_dash_fg ) ) );
            ( (  put_dash_char668 ) ( (  screen2537 ) ,  ( (  from_dash_charlike1 ) ( ( " " ) ) ) ,  ( dref2545 .field1 ) ,  (  y2543 ) ) );
        }
    }
    ( (  set_dash_screen_dash_bg667 ) ( (  screen2537 ) ,  (  og_dash_bg2544 ) ) );
    return ( Unit_113_Unit );
}

static  enum Unit_113   draw_dash_digit679 (    struct Screen_349 *  screen2550 ,    char  digit2552 ,    int32_t  x2554 ,    int32_t  y2556 ) {
    if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "0" ) ) ) ) ) ) {
        ( (  cb676 ) ( (  screen2550 ) ,  ( " 0000 " ) ,  (  x2554 ) ,  (  y2556 ) ) );
        ( (  cb676 ) ( (  screen2550 ) ,  ( "00  00" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
        ( (  cb676 ) ( (  screen2550 ) ,  ( "00  00" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
        ( (  cb676 ) ( (  screen2550 ) ,  ( "00  00" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
        ( (  cb676 ) ( (  screen2550 ) ,  ( " 0000 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
    } else {
        if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "1" ) ) ) ) ) ) {
            ( (  cb676 ) ( (  screen2550 ) ,  ( "1111  " ) ,  (  x2554 ) ,  (  y2556 ) ) );
            ( (  cb676 ) ( (  screen2550 ) ,  ( "  11  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
            ( (  cb676 ) ( (  screen2550 ) ,  ( "  11  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
            ( (  cb676 ) ( (  screen2550 ) ,  ( "  11  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
            ( (  cb676 ) ( (  screen2550 ) ,  ( "111111" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
        } else {
            if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "2" ) ) ) ) ) ) {
                ( (  cb676 ) ( (  screen2550 ) ,  ( " 2222 " ) ,  (  x2554 ) ,  (  y2556 ) ) );
                ( (  cb676 ) ( (  screen2550 ) ,  ( "22  22" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                ( (  cb676 ) ( (  screen2550 ) ,  ( "   22 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                ( (  cb676 ) ( (  screen2550 ) ,  ( "  22  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                ( (  cb676 ) ( (  screen2550 ) ,  ( "222222" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
            } else {
                if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "3" ) ) ) ) ) ) {
                    ( (  cb676 ) ( (  screen2550 ) ,  ( " 3333 " ) ,  (  x2554 ) ,  (  y2556 ) ) );
                    ( (  cb676 ) ( (  screen2550 ) ,  ( "33  33" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                    ( (  cb676 ) ( (  screen2550 ) ,  ( "   333" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                    ( (  cb676 ) ( (  screen2550 ) ,  ( "33  33" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                    ( (  cb676 ) ( (  screen2550 ) ,  ( " 3333 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                } else {
                    if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "4" ) ) ) ) ) ) {
                        ( (  cb676 ) ( (  screen2550 ) ,  ( "44  44" ) ,  (  x2554 ) ,  (  y2556 ) ) );
                        ( (  cb676 ) ( (  screen2550 ) ,  ( "44  44" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                        ( (  cb676 ) ( (  screen2550 ) ,  ( "444444" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                        ( (  cb676 ) ( (  screen2550 ) ,  ( "    44" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                        ( (  cb676 ) ( (  screen2550 ) ,  ( "    44" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                    } else {
                        if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "5" ) ) ) ) ) ) {
                            ( (  cb676 ) ( (  screen2550 ) ,  ( "555555" ) ,  (  x2554 ) ,  (  y2556 ) ) );
                            ( (  cb676 ) ( (  screen2550 ) ,  ( "55    " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                            ( (  cb676 ) ( (  screen2550 ) ,  ( "55555 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                            ( (  cb676 ) ( (  screen2550 ) ,  ( "    55" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                            ( (  cb676 ) ( (  screen2550 ) ,  ( "55555 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                        } else {
                            if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "6" ) ) ) ) ) ) {
                                ( (  cb676 ) ( (  screen2550 ) ,  ( " 6666 " ) ,  (  x2554 ) ,  (  y2556 ) ) );
                                ( (  cb676 ) ( (  screen2550 ) ,  ( "66    " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                ( (  cb676 ) ( (  screen2550 ) ,  ( "66666 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                ( (  cb676 ) ( (  screen2550 ) ,  ( "66  66" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                ( (  cb676 ) ( (  screen2550 ) ,  ( " 6666 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                            } else {
                                if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "7" ) ) ) ) ) ) {
                                    ( (  cb676 ) ( (  screen2550 ) ,  ( "777777" ) ,  (  x2554 ) ,  (  y2556 ) ) );
                                    ( (  cb676 ) ( (  screen2550 ) ,  ( "   77 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                    ( (  cb676 ) ( (  screen2550 ) ,  ( "  77  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                    ( (  cb676 ) ( (  screen2550 ) ,  ( " 77   " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                    ( (  cb676 ) ( (  screen2550 ) ,  ( "77    " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                } else {
                                    if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "8" ) ) ) ) ) ) {
                                        ( (  cb676 ) ( (  screen2550 ) ,  ( " 8888 " ) ,  (  x2554 ) ,  (  y2556 ) ) );
                                        ( (  cb676 ) ( (  screen2550 ) ,  ( "88  88" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                        ( (  cb676 ) ( (  screen2550 ) ,  ( " 8888 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                        ( (  cb676 ) ( (  screen2550 ) ,  ( "88  88" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                        ( (  cb676 ) ( (  screen2550 ) ,  ( " 8888 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                    } else {
                                        if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( "9" ) ) ) ) ) ) {
                                            ( (  cb676 ) ( (  screen2550 ) ,  ( " 9999 " ) ,  (  x2554 ) ,  (  y2556 ) ) );
                                            ( (  cb676 ) ( (  screen2550 ) ,  ( "99  99" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                            ( (  cb676 ) ( (  screen2550 ) ,  ( " 99999" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                            ( (  cb676 ) ( (  screen2550 ) ,  ( "    99" ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                            ( (  cb676 ) ( (  screen2550 ) ,  ( " 9999 " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                        } else {
                                            if ( (  eq15 ( (  digit2552 ) , ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ) {
                                                ( (  cb676 ) ( (  screen2550 ) ,  ( "      " ) ,  (  x2554 ) ,  (  y2556 ) ) );
                                                ( (  cb676 ) ( (  screen2550 ) ,  ( "  ::  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 1 ) ) ) ) ) );
                                                ( (  cb676 ) ( (  screen2550 ) ,  ( "      " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 2 ) ) ) ) ) );
                                                ( (  cb676 ) ( (  screen2550 ) ,  ( "  ::  " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 3 ) ) ) ) ) );
                                                ( (  cb676 ) ( (  screen2550 ) ,  ( "      " ) ,  (  x2554 ) ,  (  op_dash_add48 ( (  y2556 ) , (  from_dash_integral3 ( 4 ) ) ) ) ) );
                                            } else {
                                                ( (  unreachable519 ) ( ) );
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

struct funenv626 {
    struct Tui_350  (*fun) (  struct env626  );
    struct env626 env;
};

struct funenv609 {
    const char*  (*fun) (  struct env609  ,    struct StrConcat_471  ,    enum CAllocator_322  );
    struct env609 env;
};

struct funenv664 {
    bool  (*fun) (  struct env664  ,    struct Screen_349 *  );
    struct env664 env;
};

int main(int argc, const char **argv) {
	_global_argc = argc; _global_argv = argv;
    size_t  starting_dash_size1740 = ( (  from_dash_integral8 ( 8 ) ) );
    size_t  growth_dash_factor1741 = ( (  from_dash_integral8 ( 2 ) ) );
    size_t  shrink_dash_factor1742 = ( (  from_dash_integral8 ( 8 ) ) );
    struct env324 envinst324 = {
        .growth_dash_factor1741 =  growth_dash_factor1741 ,
        .starting_dash_size1740 =  starting_dash_size1740 ,
    };
    struct env323 envinst323 = {
        .envinst324 = envinst324 ,
    };
    struct env599 envinst599 = {
        .envinst323 = envinst323 ,
    };
    struct env601 envinst601 = {
        .envinst323 = envinst323 ,
    };
    struct env605 envinst605 = {
        .envinst599 = envinst599 ,
        .envinst601 = envinst601 ,
    };
    struct env609 envinst609 = {
        .envinst605 = envinst605 ,
    };
    bool  temp625 = ( false );
    bool *  should_dash_resize2316 = ( &temp625 );
    struct env626 envinst626 = {
        .should_dash_resize2316 =  should_dash_resize2316 ,
    };
    struct env649 envinst649 = {
        .should_dash_resize2316 =  should_dash_resize2316 ,
    };
    struct env664 envinst664 = {
        .envinst649 = envinst649 ,
    };
    struct funenv626  temp681 = ( (struct funenv626){ .fun = mk626, .env =  envinst626  } );
    struct Tui_350  temp680 = ( temp681.fun ( temp681.env ) );
    struct Tui_350 *  tui2557 = ( &temp680 );
    enum CAllocator_322  al2558 = ( (  idc547 ) ( ) );
    struct Screen_349  temp682 = ( (  mk_dash_screen650 ) ( (  tui2557 ) ,  (  al2558 ) ) );
    struct Screen_349 *  screen2559 = ( &temp682 );
    struct Slice_538  args2562 = ( (  get670 ) ( ) );
    struct timespec  start_dash_time2563 = ( (  now614 ) ( ) );
    struct Maybe_214  dref2564 = ( (  try_dash_get537 ) ( (  args2562 ) ,  (  from_dash_integral8 ( 0 ) ) ) );
    if ( dref2564.tag == Maybe_214_Just_t ) {
        if ( (  eq516 ( ( dref2564 .stuff .Maybe_214_Just_s .field0 ) , ( "-p" ) ) ) ) {
            const char*  filename2566 = ( "timer-start" );
            struct Maybe_424  dref2596 = ( (  try_dash_read_dash_contents671 ) ( (  filename2566 ) ,  (  al2558 ) ) );
            if ( dref2596.tag == Maybe_424_Just_t ) {
                int64_t  num2598 = ( (  or_dash_fail527 ) ( ( (  parse_dash_int564 ) ( ( (  or_dash_fail526 ) ( ( (  head423 ) ( ( (  lines561 ) ( ( dref2596 .stuff .Maybe_424_Just_s .field0 ) ) ) ) ) ,  ( "empty timer file" ) ) ) ) ) ,  ( "could not parse first timestamp" ) ) );
                start_dash_time2563 = ( (struct timespec) { .tv_sec = (  num2598 ) , .tv_nsec = (  from_dash_integral2 ( 0 ) ) } );
            }
            else if ( dref2596.tag == Maybe_424_None_t ) {
                struct funenv609  temp683 = ( (struct funenv609){ .fun = mk_dash_const_dash_str609, .env =  envinst609  } );
                const char*  s2599 = ( temp683.fun ( temp683.env ,  ( ( StrConcat_471_StrConcat ) ( ( (  start_dash_time2563 ) .tv_sec ) ,  ( (  from_dash_charlike1 ) ( ( "\n" ) ) ) ) ) ,  (  al2558 ) ) );
                ( (  write_dash_contents673 ) ( (  filename2566 ) ,  (  s2599 ) ) );
                ( (  free_dash_const_dash_str611 ) ( (  s2599 ) ,  (  al2558 ) ) );
            }
        } else {
            int64_t  num2600 = ( (  or_dash_fail527 ) ( ( (  parse_dash_int566 ) ( ( dref2564 .stuff .Maybe_214_Just_s .field0 ) ) ) ,  ( "could not parse first timestamp" ) ) );
            start_dash_time2563 = ( (struct timespec) { .tv_sec = (  num2600 ) , .tv_nsec = (  from_dash_integral2 ( 0 ) ) } );
        }
    }
    else if ( dref2564.tag == Maybe_214_None_t ) {
    }
    struct Duration_617  last_dash_diff2601 = ( (  diff616 ) ( (  start_dash_time2563 ) ,  (  start_dash_time2563 ) ) );
    ( (  set_dash_screen_dash_fg666 ) ( (  screen2559 ) ,  ( ( Color_18_Color8 ) ( ( Color8_19_White8 ) ) ) ) );
    bool  first_dash_time2602 = ( true );
    bool  running2603 = ( true );
    while ( (  running2603 ) ) {
        struct FunIter_300  temp684 =  into_dash_iter299 ( ( (  from_dash_function306 ) ( (  read_dash_key643 ) ) ) );
        while (true) {
            struct Maybe_301  __cond685 =  next305 (&temp684);
            if (  __cond685 .tag == 0 ) {
                break;
            }
            struct InputEvent_302  ev2605 =  __cond685 .stuff .Maybe_301_Just_s .field0;
            struct InputEvent_302  dref2606 = (  ev2605 );
            if ( dref2606.tag == InputEvent_302_Key_t && dref2606 .stuff .InputEvent_302_Key_s .field0.tag == Key_303_Char_t ) {
                if ( (  eq15 ( ( dref2606 .stuff .InputEvent_302_Key_s .field0 .stuff .Key_303_Char_s .field0 ) , ( (  from_dash_charlike1 ) ( ( "q" ) ) ) ) ) ) {
                    running2603 = ( false );
                }
            }
            else if ( true ) {
            }
        }
        struct funenv664  temp686 = ( (struct funenv664){ .fun = resize_dash_screen_dash_if_dash_needed664, .env =  envinst664  } );
        bool  resized2608 = ( temp686.fun ( temp686.env ,  (  screen2559 ) ) );
        struct Duration_617  diff2609 = ( (  diff616 ) ( ( (  now614 ) ( ) ) ,  (  start_dash_time2563 ) ) );
        if ( ( ( (  resized2608 ) || ( !  eq9 ( ( (  diff2609 ) .f_secs ) , ( (  last_dash_diff2601 ) .f_secs ) ) ) ) || (  first_dash_time2602 ) ) ) {
            first_dash_time2602 = ( false );
            last_dash_diff2601 = (  diff2609 );
            ( (  clear_dash_screen654 ) ( (  screen2559 ) ) );
            struct ClockTime_675  ct2610 = ( (  clock_dash_time_dash_from_dash_secs674 ) ( ( (  diff2609 ) .f_secs ) ) );
            struct PadZeroes_264  s2611 = ( (  pad_dash_zeroes511 ) ( ( (  u8_dash_i32228 ) ( ( (  ct2610 ) .f_s ) ) ) ,  (  from_dash_integral6 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_264  m2612 = ( (  pad_dash_zeroes511 ) ( ( (  u8_dash_i32228 ) ( ( (  ct2610 ) .f_m ) ) ) ,  (  from_dash_integral6 ( 2 ) ) ,  ( false ) ) );
            struct PadZeroes_264  h2613 = ( (  pad_dash_zeroes511 ) ( ( (  u32_dash_i32226 ) ( ( (  ct2610 ) .f_h ) ) ) ,  (  from_dash_integral6 ( 2 ) ) ,  ( true ) ) );
            struct StrConcat_405  timer_dash_str2614 = ( ( StrConcat_405_StrConcat ) ( ( ( StrConcat_406_StrConcat ) ( ( ( StrConcat_407_StrConcat ) ( ( ( StrConcat_408_StrConcat ) ( (  h2613 ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  m2612 ) ) ) ,  ( (  from_dash_charlike1 ) ( ( ":" ) ) ) ) ) ,  (  s2611 ) ) );
            size_t  timer_dash_sz2615 = (  op_dash_sub58 ( (  op_dash_mul59 ( ( (  count421 ) ( (  timer_dash_str2614 ) ) ) , (  from_dash_integral8 ( 7 ) ) ) ) , (  from_dash_integral8 ( 1 ) ) ) );
            int32_t  timer_dash_h2616 = (  from_dash_integral3 ( 6 ) );
            int32_t  begin_dash_x2617 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32226 ) ( ( ( * (  tui2557 ) ) .f_width ) ) ) , ( (  size_dash_i32223 ) ( (  timer_dash_sz2615 ) ) ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
            int32_t  begin_dash_y2618 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32226 ) ( ( ( * (  tui2557 ) ) .f_height ) ) ) , (  timer_dash_h2616 ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
            if ( ( (  cmp41 ( (  begin_dash_x2617 ) , (  from_dash_integral3 ( 0 ) ) ) != 0 ) && (  cmp41 ( (  begin_dash_y2618 ) , (  from_dash_integral3 ( 0 ) ) ) != 0 ) ) ) {
                struct Zip_259  temp687 =  into_dash_iter258 ( ( (  zip287 ) ( ( (  chars510 ) ( (  timer_dash_str2614 ) ) ) ,  ( (  from252 ) ( (  from_dash_integral3 ( 0 ) ) ) ) ) ) );
                while (true) {
                    struct Maybe_269  __cond688 =  next272 (&temp687);
                    if (  __cond688 .tag == 0 ) {
                        break;
                    }
                    struct Tuple2_270  dref2619 =  __cond688 .stuff .Maybe_269_Just_s .field0;
                    ( (  draw_dash_digit679 ) ( (  screen2559 ) ,  ( dref2619 .field0 ) ,  (  op_dash_add48 ( (  begin_dash_x2617 ) , (  op_dash_mul50 ( ( dref2619 .field1 ) , (  from_dash_integral3 ( 7 ) ) ) ) ) ) ,  (  begin_dash_y2618 ) ) );
                }
            } else {
                size_t  timer_dash_sz2622 = ( (  count421 ) ( (  timer_dash_str2614 ) ) );
                int32_t  timer_dash_h2623 = (  from_dash_integral3 ( 1 ) );
                int32_t  begin_dash_x2624 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32226 ) ( ( ( * (  tui2557 ) ) .f_width ) ) ) , ( (  size_dash_i32223 ) ( (  timer_dash_sz2622 ) ) ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
                int32_t  begin_dash_y2625 = (  op_dash_div51 ( (  op_dash_sub49 ( ( (  u32_dash_i32226 ) ( ( ( * (  tui2557 ) ) .f_height ) ) ) , (  timer_dash_h2623 ) ) ) , (  from_dash_integral3 ( 2 ) ) ) );
                ( (  draw_dash_str669 ) ( (  screen2559 ) ,  (  timer_dash_str2614 ) ,  (  begin_dash_x2624 ) ,  (  begin_dash_y2625 ) ) );
            }
            ( (  render_dash_screen658 ) ( (  screen2559 ) ) );
        }
        ( (  sync632 ) ( (  tui2557 ) ) );
    }
    ( (  free_dash_screen653 ) ( (  screen2559 ) ) );
    ( (  deinit636 ) ( (  tui2557 ) ) );
    ( (  println577 ) ( ( (  start_dash_time2563 ) .tv_sec ) ) );
}
