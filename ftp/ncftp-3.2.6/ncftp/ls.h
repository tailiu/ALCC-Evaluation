/* ls.h
 *
 * Copyright (c) 1992-2016 by Mike Gleason.
 * All rights reserved.
 * 
 */

#define kLsCacheItemLifetime 900	/* seconds */

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wpadded"
#endif

typedef struct LsCacheItem {
	char *itempath;
	FTPFileInfoList fil;
	time_t expiration;
	int hits;
} LsCacheItem;

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#define kLsCacheSize 32

/* ls.c */
void InitLsCache(void);
void InitLsMonths(void);
void InitLs(void);
void FlushLsCache(void);
int LsCacheLookup(const char *const);
void LsDate(char *, size_t, time_t);
void LsL(FTPFileInfoListPtr, int, int, FILE *);
void Ls1(FTPFileInfoListPtr, int, FILE *);
void Ls(const char *const, int, const char *const, FILE *);
void LLs(const char *const, int, const char *const, FILE *);
