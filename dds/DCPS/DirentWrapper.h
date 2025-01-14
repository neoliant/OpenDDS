#ifndef OPENDDS_DCPS_DIRENTWRAPPER_H
#define OPENDDS_DCPS_DIRENTWRAPPER_H

#ifdef __GNUC__
#  pragma GCC diagnostic push
#  if defined(__has_warning)
#    if __has_warning("-Wdeprecated-declarations")
#      pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#    endif
#  elif __GNUC__ > 7
#    pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#  endif
#endif
#include <ace/Dirent.h>
#ifdef __GNUC__
#  pragma GCC diagnostic pop
#endif

#endif
