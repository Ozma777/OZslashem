#ifndef MUSIC_H
#define MUSIC_H

/* song types */
#define	SNG_PEACEFUL_MELODY 0x40
#define	SNG_SCARY_MELODY    0x80
#define	SNG_WAR_MELODY      0xc0
/* peaceful melodies */
#define SNG_PEACE           0x50
#define	SNG_PACIFY          0x51
#define SNG_CALMDOWNALLIES  0x52
#define	SNG_TAME            0x53
#define SNG_SLEEP           0x60
/* scary melodies */
#define	SNG_FEAR            0x90
#define SNG_PARALYSIS       0x91
#define SNG_CONFUSION       0xa0
/* war melodies */
#define	SNG_WARCRY          0xd0
#define	SNG_BERSERKALLIES   0xd1
#define	SNG_POWERATTACK     0xd2
#define	SNG_HASTEALLIES     0xe0

#define SNG_MAX             15

#define SNGIDX_NONE	100	/* 'no-song' index */

#endif /* MUSIC_H */
