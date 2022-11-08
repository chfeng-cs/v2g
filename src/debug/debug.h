
#ifndef DEBUG_H
#define DEBUG_H

#define DEBUG
#ifdef DEBUG
    #define PFX "[debug_log]"
    #define DEBUG_LOG(format, ...)   printf(PFX "[%s:%d]: " format, __func__, __LINE__, ##__VA_ARGS__)
#else
    #define DEBUG_LOG(...) 
#endif

    #define CHUANHENG
    #if defined(DEBUG) && defined(CHUANHENG)
        #define CH_DEBUG(format, ...)   DEBUG_LOG(format, ##__VA_ARGS__)
    #else
        #define CH_DEBUG(...) 
    #endif

#endif