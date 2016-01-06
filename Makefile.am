NULL =


bin_PROGRAMS = \
  fribiditex \
  $(NULL)

fribiditex_SOURCES = \
  src/fribiditex-bidi.c \
  src/fribiditex.c \
  src/fribiditex-dict.c \
  src/fribiditex-io.c \
  src/fribiditex-util.c \
  src/fribiditex-ignore.c \
  $(NULL)

AM_CPPFLAGS = \
  $(FRIBIDI_CFLAGS) \
  $(NULL)

LDADD = \
  $(FRIBIDI_LIBS) \
  $(NULL)

EXTRA_DIST = \
  GPLv2.txt \
  $(NULL)
