/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#if !defined(_rtpp_stream_fin_h)
#define _rtpp_stream_fin_h
#if !defined(RTPP_AUTOTRAP)
#define RTPP_AUTOTRAP() abort()
#else
extern int _naborts;
#endif
void rtpp_stream_fin(struct rtpp_stream *);
#if defined(RTPP_FINTEST)
void rtpp_stream_fintest(void);
#endif /* RTPP_FINTEST */
#endif /* _rtpp_stream_fin_h */